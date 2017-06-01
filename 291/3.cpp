#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,m;
	cin>>n>>m;
	string A[n];
	string B[m];
	for(long long int i=0;i<n;i++){
		cin>>A[i];	
	}
	/*for(long long int j=0;j<m;j++){
		cin>>B[j];
	}*/
	for(long long int i=0;i<m;i++){
		for(long long int j=0;j<n;j++){

		if(B[i].size()==A[j].size()){

		int count=0;
		for(long long int k=0;k<B[i].size();k++){
		if(A[j][k]!=B[i][k])
		count++;
		}
		if(count==1)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
		}
		}
	}
}