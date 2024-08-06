
Cho mảng A[] và B[] có N và M phần tử là các số nguyên, hãy tìm các phần tử xuất hiện trong mảng 1 mà không xuất hiện trong mảng 2.

Đầu vào
Dòng đầu tiên là N và M

Dòng thứ 2 là N số của mảng A[]

Dòng thứ 3 là M số của mảng B[]

Giới hạn
1<=N, M<=10^6

-10^9<=A[i], B[i] <= 10^9;

Đầu ra
In ra các số xuất hiện trong mảng 1 mà không xuất hiện trong mảng 2 theo thứ tự từ bé đến lớn, mỗi giá trị thỏa mãn chỉ liệt kê 1 lần.

Ví dụ :
Input 01
Copy
3 4
1 2 3
1 2 4 5
Output 01
Copy
3

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
