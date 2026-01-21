#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int mind = INT_MAX;
        bool flag = true;
    
        for(int i = 0; i < n-1; i++) {
            if(arr[i+1] < arr[i]) {
                cout << "0" << endl;
                flag = false;
                break;
            }
            else {
                mind = min(mind, arr[i+1] - arr[i]);
            }
        }
        
        if(flag) cout << mind/2 + 1 << endl;
    }
    return 0;
}
