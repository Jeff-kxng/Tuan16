#include <iostream>
#include <vector>
using namespace std;
// Sok Sokong 20211005
char cal(double a) {
    if (a < 4) return 'F';
    if (a < 5.5) return 'D';
    if (a < 7) return 'C';
    if (a < 8.5) return 'B';
    return 'A';
}
int main() {
    int n;
    cin >> n;
    vector<int> count(5, 0); // Sử dụng vector để lưu trữ số lượng sinh viên theo từng điểm
    while (n--) {
        double a;
        cin >> a;
        char grade = cal(a);
        if (grade == 'A') ++count[0];
        else if (grade == 'B') ++count[1];
        else if (grade == 'C') ++count[2];
        else if (grade == 'D') ++count[3];
        else ++count[4];
    }
    cout << count[0] << " " << count[1] << " " << count[2] << " " << count[3] << " " << count[4];

    return 0;
}
