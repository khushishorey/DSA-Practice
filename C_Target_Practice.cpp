#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s[10];
    while(t--) {
        vector<string> grid(10);
        for(int i = 0; i < 10; i++) {
            cin >> grid[i];
        }
        int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if((i == 0 || i == 9) && grid[i][j] == 'X') c1++;
                else if((i == 1 || i == 8) && grid[i][j] == 'X') {
                    c1++;
                    c2++;
                }
                else if((i == 2 || i == 7) && grid[i][j] == 'X') {
                    c1++;
                    c2++;
                    c3++;
                }
                else if((i == 3 || i == 6) && grid[i][j] == 'X') {
                    c1++;
                    c2++;
                    c3++;
                    c4++; 
                }
                else if((i == 4 || i == 5) && grid[i][j] == 'X') {
                    c1++;
                    c2++;
                    c3++;
                    c4++;
                    c5++;
                }
            }
        }
        cout << 1*c1 + 2*c2 + 3*c3 + 4*c4 + 5*c5 << endl;
    }

    return 0;
}

