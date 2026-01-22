#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0; 
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr, brr(n);
        for(int i = 0; i < n; i++) {
            cin >> brr[i];
        }
        arr.push_back(brr[0]);
        for(int i = 1; i < n; i++) {
           if(brr[i] >= brr[i-1]) {
            arr.push_back(brr[i]);
           }
           else {
            arr.push_back(brr[i]);
            arr.push_back(brr[i]);
           }
        }

        cout << arr.size() << endl;
        for(auto x : arr) {
            cout << x << " ";
        }
        cout << endl;
       

    }
    return 0;
}
