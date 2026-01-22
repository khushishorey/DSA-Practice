#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s[10];
    while(t--) {
        int score[10][10] = {
            {1,1,1,1,1,1,1,1,1,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1}
        };

        char grid[10][10];
        for(int i = 0; i < 10; i++) {
            string s;
            cin >> s;
            for(int j = 0; j < 10; j++) {
                grid[i][j] = s[j];
            }
        }

        int totalScore = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                if(grid[i][j] == 'X'){
                    totalScore += score[i][j];
                }
            }
        }
        cout << totalScore <<endl;
    }
        

    return 0;
}

