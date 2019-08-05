#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s,ss,sss="";
	int a,b,i,j;
	getline(cin,s);
	getline(cin,ss);
	
    a=s.length();
    b=ss.length();
    
    for(i=0,j=0;i<a && j<b;i++,j++){
        sss+=s.substr(i,1);
        sss+=ss.substr(j,1);
    }
    if(i<a){
        while(i<a){
            sss+=s.substr(i,1);
            i++;
        }
    }
    if(j<b){
        while(j<b){
            sss+=ss.substr(j,1);
            j++;
        }
    }
    cout<<sss;
	return 0;
}
