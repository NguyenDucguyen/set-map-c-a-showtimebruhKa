
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	set<long long > se;
	for(int i=0;i<n;i++){
		se.insert(a[i]);
	}
	for(int i=0;i<m;i++){
		se.insert(b[i]);
	}
	for(auto it = se.rbegin(); it != se.rend(); ++it){
    cout << *it << ' ';
}
}
