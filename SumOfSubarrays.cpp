#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> a;
	int s,sum=0;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	for(int i=0;i<a.size();i++){
	    for(int j=i;j<a.size();j++){
	        s=0;
	        for(int k=i;k<=j;k++){
	            s+=a[k];
	        }
	        sum+=s;
	    }
	}
	cout<<sum;
	return 0;
}
