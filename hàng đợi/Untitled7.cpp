#include<bits/stdc++.h>
using namespace std;
bool solve(string s){
	stack<char> st;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(' || s[i]=='['){
			st.push(s[i]);
		}
		else if(!st.empty()){
			if(st.top()=='(' && s[i]==')'){
				st.pop();
			}
			else if(st.top()=='[' && s[i]==']'){
				st.pop();
			}
			else return false;
		}
		else return false;
	}
	while(!st.empty()){
		return false;
	}
	return true;
}
int main(){
	int t; cin>>t;
	while(t--){
		string a; getline(cin>>ws,a);
		string x="";
		for(int i=0;i<a.length();i++){
			if(a[i]=='(' || a[i]==')' || a[i]=='[' || a[i]==']'){
				x+=a[i];
			}
		}
		if(solve(x)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}