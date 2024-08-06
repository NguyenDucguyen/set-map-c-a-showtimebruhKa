
Cho mảng A[] gồm N số nguyên, bạn hãy đếm xem mỗi số trong mảng a xuất hiện bao nhiêu lần. Sau đó liệt kê các giá trị này theo thứ tự giá trị tăng dần kèm tần suất của nó.

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
-1 -1 0 0 -1 2
Output 01
Copy
-1 3
0 2
2 1


#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(int i =0 ;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
