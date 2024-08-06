Cho mảng A[], B[] gồm N và M phần tử, bạn được yêu cầu kiểm tra xem mỗi phần tử trong mảng A[] có xuất hiện trong mảng B[] hay không ? Nếu có hãy in 28tech, ngược lại in 29tech. Bài này bạn cài đặt lần lượt bằng set & map

Gợi ý : Lưu mảng B[] vào set (map) để tìm kiếm nhanh hơn.

Đầu vào
Dòng đầu tiên là số nguyên N và M.

Dòng thứ 2 gồm N số nguyên A[i]

Dòng thứ 3 gồm M số nguyên B[i]

Giới hạn
1≤ N, M ≤ 10^5

-10^9 ≤ A[i], B[i]≤ 10^9

Đầu ra
In ra kết quả của bài toán

Ví dụ :
Input 01
Copy
3 5
1 2 3
1 2 6 7 8
Output 01
Copy
28tech 28tech 29tech

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	set<long long >se1;
	set<long long> se2;
	for(int i=0;i<n;i++){
        cin>>a[i];
        se1.insert(a[i]);
	}
	for(int i=0;i<m;i++){
        cin>>b[i];
        se2.insert(b[i]);
	}

	for(int i=0;i<n;i++){
        if(se2.find(a[i]) != se2.end()){
           cout << "28tech"<< " ";
        }
        else cout<<"29tech"<<" ";
	}
}
