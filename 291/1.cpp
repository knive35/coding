#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		//cout<<int(s[i])<<endl;
		if(i==0 && s[i]=='9')
			continue;
		int x=('9'-int(s[i]));
		//cout<<x<<endl;
		if(x<=4)
			s[i]=x+'0';
	}
	for(int i=0;i<s.size();i++){
		cout<<s[i];
	}	
}
