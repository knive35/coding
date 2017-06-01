#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int z=0,m=0;
	int x=s.size();
	int last_digit=int(s[x-1])-48;
	if(last_digit%2==0){
	for(int i=0;i<x;i++){
	int last_even;

	int l=int(s[i])-48;
	if(l%2==0){
		last_even=l;
		if(last_even<last_digit && z==0){
		swap(s[x-1],s[i]);
		z=1;
		}
	}	
	}

	}
	else{
		int f=-1;
	for(int i=0;i<x;i++){
	int last_even;

	int l=int(s[i])-48;
	if(l%2==0){
		last_even=l;
		f=i;
		if(last_even<last_digit && z==0){
		swap(s[x-1],s[i]);
		z=1;
		}
	}	
	}
	if(z==0 && f!=-1)
	swap(s[f],s[x-1]);
	else if(z==0 && f==-1){
	cout<<"-1"<<endl;
	m=1;

	}
	
	}
	if(m==0)
	cout<<s;

}