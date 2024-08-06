
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    long long a[n], b[m];
    set<long long>se1 ;
    set<long long >se2;
    set<long long>se;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	se1.insert(a[i]);
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		se2.insert(b[i]);
	}
	for(auto it : se1){
		if(se2.find(it)== se2.end()){
			se.insert(it);
		}
	}
	for(auto it: se2){
	    if(se1.find(it)== se1.end()){
	        se.insert(it);
	    }
	}
	for(auto it : se){
	    cout<<it<<" ";
	}

}
