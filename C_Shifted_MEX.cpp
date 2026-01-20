#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n; 
        vector<int> arr(n);
        vector<vector<int>> possAns;
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++) {
            vector<int> ele;
            for(int j = 0; j < n; j++) {
                ele.push_back(arr[j] - arr[i]);
            }
            possAns.push_back(ele);
        }

        for(auto &x : possAns) {
            sort(x.begin(), x.end());
        }
        for(int i = 0; i < n; i++) {
            vector<bool> present(n+1,false);
            
                for(int j = 0; j < n; j++) {
                    if(possAns[i][j] >= 0 && possAns[i][j] <= n) {
                       present[possAns[i][j]] = true;
                    }
                }
                int mex = 0;
                while(present[mex]) {
                    mex++;
                }
                ans.push_back(mex);
        }

        sort(ans.begin(), ans.end());
        cout << ans.back() << endl;

    }
    return 0;
}

