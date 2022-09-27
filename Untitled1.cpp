#include<bits/stdc++.h>
using namespace std;
int N=1e9+7;
int main(){
	long long bin[61];
	bin[1]=2;
	for(int i=2;i<=60;i++){
		bin[i]=bin[i-1]*2;
		bin[i]%=N;
	}
	long long temp[61]//every k 2^(4k-4) mod N
	for(int i=1;i<=60;i++){
		int cnt=4*i-4;
		
	}
	int n;
	cin>>n;
	cout<<(temp[61]*6)%N;
} 
