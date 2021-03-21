#include <bits/stdc++.h>
using namespace std;

int score(int N, string S){
    int score = 0;
    for(int i=0; i<N/2; i++){
        if(S[i] != S[N-i-1]){
            score++;
        }
    }
    return score;
}

int main(void){
    int T;
    cin >> T;
    for(int testcase = 0; testcase < T; testcase++){
        int N, K;
        string S;
        cin >> N;
        cin >> K;
        cin >> S;
        
        int current_score = score(N, S);
        if(K == current_score){
            cout << "Case #" << testcase+1 << ": " << 0 <<endl;
        }
        else{
            int answer = abs(K - current_score);
            cout << "Case #" << testcase+1 << ": " << answer <<endl;
        }

        
    }
    return 0;
}