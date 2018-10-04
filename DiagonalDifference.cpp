/*
    Author      - Abheet Gera
    Institution - ASET, New Delhi
*/

#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr,int n) {
    int i,j,s1=0,s2=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                s1+=arr[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)==n-1){
                s2+=arr[i][j];
            }
        }
    }
    int d;
    d=abs(s1-s2);
    return d;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr,n);

    fout << result << "\n";

    fout.close();

    return 0;
}
