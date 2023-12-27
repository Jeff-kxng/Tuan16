#include <iostream>
using namespace std;
// Sok Sokong 20211005
int n, M, m[100], v[100];
int x[100], best, sumV, sumM, all[100]; // Sửa từ "All" thành "all"

void init(){
    for (int i = n; i >= 1; --i){
        all[i] = all[i+1] + v[i];
    }
}
void print() {
    cout << best;
}

void process(int i){
    if (sumV + all[i] <= best || sumM > M) return; // Sửa từ "return 0" thành "return"
    if (i > n){
        best = sumV; // Sửa từ "return 0" thành ";"
        return; // Thêm dấu chấm phẩy
    }
    process(i+1);
    sumM += m[i];
    sumV += v[i];
    process(i+1);
    sumM -= m[i];
    sumV -= v[i];
}

int main() {
    cin >> n >> M;
    for (int i = 1; i <= n; ++i)
        cin >> m[i] >> v[i];
    init();
    process(1);
    print();
    return 0;
}
