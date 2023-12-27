#include <iostream>
#include <string>
#include <stack>
// Sok Sokong 20211005

using namespace std;
int par(string str) {
    int a = str.length();
    stack<char> S;
    char x, y;
    for (int i = 0; i < a; i++) {
        x = str[i];
        if (x == '(' || x == '[' || x == '{') {
            S.push(x);
        } else {
            if (S.empty()) { // Lỗi 1: Kiểm tra xem ngăn xếp có rỗng trước khi lấy phần tử đầu tiên
                return 0;
            }
            if (x == ')') {
                if (S.top() == '(') {
                    S.pop();
                } else {
                    return 0;
                }
            } else if (x == ']') {
                if (S.top() == '[') {
                    S.pop();
                } else {
                    return 0;
                }
            } else if (x == '}') {
                if (S.top() == '{') {
                    S.pop();
                } else {
                    return 0;
                }
            }
        }
    }
    if (!S.empty()) { // Lỗi 2: Kiểm tra xem ngăn xếp có rỗng sau khi kết thúc vòng lặp
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int n;
    string str;

    cin >> n;
    cin.ignore(); // Sửa lỗi 3: Xóa bộ đệm sau khi nhập n
    for (int i = 0; i < n; i++) {
        getline(cin, str); // Sửa lỗi 4: Sử dụng getline để đọc chuỗi có chứa khoảng trắng
        cout << par(str) << endl;
    }

    return 0;
}
