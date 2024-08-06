Cho mảng A[] gồm N số nguyên, bạn hãy đếm xem mỗi số trong mảng A xuất hiện bao nhiêu lần. Sau đó liệt kê các giá trị này theo thứ tự xuất hiện trong mảng kèm tần suất của nó. Lưu ý mỗi giá trị chỉ liệt kê 1 lần.

Đầu vào
Dòng đầu tiên là số nguyên N.

Dòng tiếp theo gồm N số nguyên A[i]

Giới hạn
1≤ N ≤ 10^5

-10^9 ≤ A[i] ≤ 10^9

Đầu ra
In ra các giá trị trong mảng kèm theo tần suất xuất hiện

Ví dụ :
Input 01
Copy
6
3 1 3 1 2 -2
Output 01
Copy
3 2
1 2
2 1
-2 1

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   map<int,int>mp;
   for(int i=0;i<n;i++){
     cin>>a[i];
     mp[a[i]]++;

   }
   for(int i=0;i<n;i++){
    if(mp[a[i]]>0){
        cout<<a[i]<<" "<<mp[a[i]]<<endl;
        mp[a[i]] = 0;
    }
   }
