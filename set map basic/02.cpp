Cho mảng A[] gồm N phần tử số nguyên int, bạn hãy lọc ra các giá trị khác nhau trong mảng và in ra theo thứ tự giảm dần. Bài này bạn cài đặt lần lượt bằng set & map

Đầu vào
Dòng đầu tiên là số nguyên N.

Dòng tiếp theo gồm N số nguyên A[i]

Giới hạn
1≤ N ≤ 10^5

-10^9 ≤ A[i] ≤ 10^9

Đầu ra
Dòng 1 in ra số lượng số nguyên khác nhau trong mảng

Dòng 2 in ra các số nguyên khác nhau theo thứ tự giảm dần

Ví dụ :
Input 01
Copy
9
1 2 1 2 3 1 2 4 1
Output 01
Copy
4
4 3 2 1

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	set<long long> se;
	for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        se.insert(x);
	}
	cout<<se.size()<<endl;
	for(set<long long> :: reverse_iterator it =se.rbegin();it!= se.rend();it++){
        cout<<*it<<" ";
	}


}
