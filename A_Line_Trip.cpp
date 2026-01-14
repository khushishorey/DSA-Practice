#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> fuel(n);
        for(int i = 0; i < n; i++) {
            cin >> fuel[i];
        }
        int ans = fuel[0];

        for(int i = 1; i < n; i++) {
            ans = max(ans, fuel[i] - fuel[i-1]);
        }

        ans = max(ans, 2 * (x - fuel[n-1]));

        cout << ans <<endl;
    }

    return 0;
}