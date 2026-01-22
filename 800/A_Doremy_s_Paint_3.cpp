#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin>> v[i];
        }

        map<int,int> freq;

        for(int i = 0; i < n; i++) {
            freq[v[i]]++;               // caclulating frequency of each element in vector
        }

        if(freq.size() >= 3) cout << "NO" << endl;

        else {
            int f1 = freq.begin()->second;
            int f2 = freq.rbegin()->second;

            if(f1 == f2) cout << "YES" <<endl;
            else if(n % 2 != 0 && abs(f1-f2) == 1) cout << "YES" <<endl;
            else cout << "NO" <<endl;

        }

        
    }

    return 0;
}


