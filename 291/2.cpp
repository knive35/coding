#include<iostream>
using namespace std;
int main(){
	int n,x0,y0;
	cin>>n>>x0>>y0;
	int A[n],B[n],C[n];
	for(int i=0;i<n;i++){
	cin>>A[i]>>B[i];
	C[i]=0;
}	
int count=0;
	for(int i=0;i<n-1;i++){
		if(C[i]==0){
		int slope1=(x0-A[i]);
		int slope2=(y0-B[i]);
		//float slope=slope1/slope2;
		C[i]=1;
		for(int j=i+1;j<n;j++){
			int slope3=(y0-B[j]);
			int slope4=(x0-A[j]);
			if(slope3*slope1==slope2*slope4 && C[j]==0){
				count++;
				C[j]=1;
			}
		}

	}
	}
	cout<<n-count;
}