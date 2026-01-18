#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        long long low = k;
        long long upper = k;

        for(int i = 0; low < 1e9; i++) {
            low = 2*low - 1;
            upper = 2*upper + 1;

            if(low <= n && n <= upper) {
                cout << "i + 1" << endl;
            }
        }
        cout << "-1" << endl;
    }
    return 0;
}