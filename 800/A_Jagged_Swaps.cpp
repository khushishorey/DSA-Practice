#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> permutation(n);
        for(int i = 0; i < n; i++) {
            cin >> permutation[i];
        }
        if(permutation[0] == 1) cout << "YES" <<endl;
        else cout << "NO" << endl;
     }
    return 0;
}
