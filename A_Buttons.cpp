#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(c % 2 != 0) {                    // c is odd means katie ki turn
            if(b > a) cout << "Second" <<endl;
            else cout << "First" << endl;
        }  
        else if(c % 2 == 0) {                  // c is even means anna ki turn
                if(a > b) cout << "First" << endl;
                else cout << "Second" <<endl;
        }
    }
    
    return 0;
}



