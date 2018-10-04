/*
      Author      - Abheet Gera
      Institution - ASET, New Delhi
*/

#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    int i,j,k,p;
    p=n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=p;j++){
            cout<<" ";
        }
        for(k=p+1;k<=n;k++){
            cout<<"#";
        }
        cout<<endl;
        p--;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
