#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int g = 0, l = 0;
        int maxg = 0, maxl = 0;
        for(auto &x : s) {
           if(x == '>') {
            g++;
            l = 0;
           }
           else {
            l++;
            g = 0;
           }
            maxg = max(maxg, g);
            maxl = max(maxl, l);
        }
        

        cout << max(maxg,maxl) + 1 <<endl;

        }
    
    return 0;
}

