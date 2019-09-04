#include <bits/stdc++.h>
using namespace std;

vector<string> fun(int n,vector<int> v,int q,vector<int> l,vector<int> r){
	vector<int> b(n+1,0);
	vector<string> s;
	for(int i=0;i<n;i++){
		b[i+1]=b[i]^v[i];
	}
	
	for(int i=0;i<q;i++){
		if((b[r[i]]^b[l[i]-1])==0){
			s.push_back("YES");
		}
		else{
			s.push_back("NO");
		}
	}
	return s;
}

int main() {
	vector<int> v,l,r;
	vector<string> ss;
	int n,q,t,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>a>>b;
		l.push_back(a);
		r.push_back(b);
	}
	ss=fun(n,v,q,l,r);
	for(int i=0;i<ss.size();i++){
		cout<<ss[i]<<"\n";
	}
	
	return 0;
}
