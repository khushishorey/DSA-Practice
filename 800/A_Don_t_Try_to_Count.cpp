#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int count = 0;
        bool flag = false;
        do
        {
            if(x.find(s) != string::npos) {         // if this condition is true then substring is found
            break;
            }
            x.append(x);
            count++;

        } while (x.size() <= 2 * s.size());
        
        if(x.find(s) != string::npos)  cout << count << endl;
        else cout << -1 << endl;

       

    }
    

    return 0;
}
