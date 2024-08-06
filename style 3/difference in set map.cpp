Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện trong mảng thứ nhất nhưng không xuất hiện trong mảng thứ 2, liệt kê theo thứ tự từ bé đến lớn.

Đầu vào
• Dòng 1 gồm N và M

• Dòng 2 gồm N số trong mảng A[]

• Dòng 3 gồm M số trong mảng B[]

Giới hạn
• 1<=N,M<=10^5

• -10^9<=A[i],B[i]<=10^9

Đầu ra
In ra đáp án của bài toán

Ví dụ :
Input 01
Copy
6 6
1 9 3 8 0 7
3 1 7 3 7 5
Output 01
Copy
0 8 9

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
			cout<<it<<" ";
		}
	}

}


