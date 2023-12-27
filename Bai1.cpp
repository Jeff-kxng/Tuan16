#include <stdio.h>
// Sok Sokong 20211005
int x[100], mark[100], n;

void print(){
    for (int i = 1; i <= n; ++i) printf("%d ", x[i]);
    printf("\n"); // Sửa thành printf() để in xuống dòng mới
}

void process(int i) {
    if (i > n){
        print(); // Sửa thành print() để in ra dãy số đã được xếp
        return;
    }
    for (int j = 1; j <= n; ++j)
        if (!mark[j]){
            mark[j] = 1;
            x[i] = j;
            process(i+1);
            mark[j] = 0;
        }
}

int main() {
    n = 5;
    process(1);
    return 0;
}