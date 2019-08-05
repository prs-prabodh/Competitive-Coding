#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<string> a;
	vector<string> b;
	vector<int> c;
	int i,j,m,n,cnt;
	string aa,bb;
	cin>>m>>n;
	for(int i=0;i<m;i++){
	    getline(cin,aa);
	    while (aa.length()==0 ) 
            getline(cin,aa);
	    a.push_back(aa);
	}
	for(int i=0;i<n;i++){
	    getline(cin,bb);
	    while (bb.length()==0 ) 
            getline(cin,bb);
	    b.push_back(bb);
	}
	for(int i=0;i<n;i++){
	    int o,p;
	    cnt=0;
	    o=(int(b[i][0]))-49;
	    p=(int(b[i][2]))-49;
	    
	    for(int j=o;j<=p;j++){
	        if((a[j].front()=='a' || a[j].front()=='e' || a[j].front()=='i' || a[j].front()=='o' || a[j].front()=='u')&&(a[j].back()=='a' || a[j].back()=='e' || a[j].back()=='i' || a[j].back()=='o' || a[j].back()=='u')){
	            cnt++;
	        }
	    }
	   c.push_back(cnt); 
	}
	for(int i=0;i<c.size();i++){
	    cout<<c[i]<<" ";
	}
	return 0;
}
