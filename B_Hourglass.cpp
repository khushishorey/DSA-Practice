#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int s,k,m;
        cin >> s >> k >> m;
        if(s < k) {
            if(s > (m % k)) cout <<  s - (m % k) <<endl;
            else cout << 0 << endl;
        }
        
        else if(s == k) cout << s - (m % k) <<endl;

        else {
            if(k > m) cout << s - m <<endl;
                else if (k == m) cout << k << endl;
                else {
                    if((m / k) % 2 != 0) cout << k - (m % k) << endl;
                    else cout << s - (m % k) << endl;
                }
            
        }
    }
    return 0;
}

