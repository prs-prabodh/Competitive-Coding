#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> a;
	int s=0;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	int l=1,r=a.size();
	for(int i=0;i<a.size();i++){
	    s+=a[i]*l*r;
	    l++;
	    r--;
	}
	cout<<s;
	return 0;
}
