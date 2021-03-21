#include <bits/stdc++.h>
using namespace std;

int main(void){
    int T;
    cin >> T;
    for(int testcase = 0; testcase < T; testcase++){
        int answer = 0;
        int R, C;
        cin >> R; cin >> C;
        int grid[R][C];
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                cin >> grid[i][j];
            }
        }
        
        
        
        cout << "Case #" << testcase+1 << ": " << answer <<endl;
    }
    return 0;
}