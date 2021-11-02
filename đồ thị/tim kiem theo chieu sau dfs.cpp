#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[1001];
int a[1001]={0};
void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}
void dfs(int u){
	cout<<u<<" ";
	a[u]=1;
	for(auto x:v[u]){
		if(a[x]==0){
			dfs(x);
		}
	}
}
int main(){
	nhap();
	dfs(1);
}
