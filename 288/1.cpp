//corerct this code
//almost done 
// some small mistake in if statement

#include<iostream>
using namespace std;
int main(){
	int n,m,r;
	cin>>n>>m>>r;
	int A[n+1][m+1];
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			A[i][j]=0;
		}
	}
	int k=0;
	int ans;
	int z=0;
	for(int i=1;i<=r;i++){
		int x,y;
		cin>>x>>y;
		A[x][y]=1;
		k++;
		if((A[x][y+1]==1 && A[x+1][y+1]==1 && A[x+1][y]==1 ) || (A[x][y-1]==1 && A[x+1][y-1]==1 && A[x+1][y]) || (A[x-1][y-1]==1 && A[x][y-1]==1 && A[x-1][y]==1) || (A[x-1][y]==1 && A[x][y+1]==1 && A[x-1][y+1]==1)){
			ans=k;
			z=1;
	}
}
if(z==1)
cout<<ans;
else
cout<<"0";
}