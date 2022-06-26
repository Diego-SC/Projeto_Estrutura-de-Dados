#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    string mat[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(mat[i][j] == "#"){
                mat[i][j] = "-1";
            }
            else if(mat[i][j] == "*"){
                mat[i][j] = "0";
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << mat[i][j] << " ";
        }
         cout << endl;
    }
    
}