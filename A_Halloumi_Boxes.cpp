#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int> boxes(n);
        for(int i = 0; i < n; i++) {
            cin >> boxes[i];
        }

        if(is_sorted(boxes.begin(), boxes.end()) || k >= 2) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
    return 0;
}

