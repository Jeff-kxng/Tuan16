#include <bits/stdc++.h>
using namespace std;
// Sok Sokong 20211005

int main(){
    int n;
    cin >> n;
    bool found = false;
    while(n--){
        int a;
        cin >> a;
        if ((a % 100 == 0) || (a % 4 == 0 && a % 100 != 0)){
            found = true;
            break;
        }
    }
    if (found) cout << "Yes";
    else cout << "No";
}