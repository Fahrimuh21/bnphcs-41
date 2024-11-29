#include<bits/stdc++.h>
using namespace std;

int max2(int a, int b){
	if(a>b) return a;
	return b;
}

bool dp(int n, int jia,int yiko,int p){
	for(int i=0; i<n; i++){
		if(jia==p){
			return true;
		}
		else if(yiko==0){
			jia+=max2(1,yiko-jia+1);
		}else{
			jia+=max2(1,yiko-jia+1);
			yiko-=max2(1,yiko-jia+1);
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	int n, x, y, p;
	cin>>n>>x>>y>>p;
	if(dp(n, x, y, p)) cout<<"YA";
	else cout<<"TIDAK";
}
