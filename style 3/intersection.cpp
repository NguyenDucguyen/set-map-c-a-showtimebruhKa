Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm giao của 2 mảng này và in theo thứ tự xuất hiện trong mảng A[]

Đầu vào
• Dòng 1 gồm N và M

• Dòng 2 gồm N số trong mảng A[]

• Dòng 3 gồm M số trong mảng B[]

Giới hạn
• 1<=N,M<=10^5

• -10^9<=A[i],B[i]<=10^9

Đầu ra
In ra tập hợp của 2 mảng theo thứ tự xuất hiện trong mảng A[]

Ví dụ :
Input 01
Copy
9 8
7 5 0 0 1 6 2 7 3
6 4 9 4 2 8 3 5
Output 01
Copy
5 6 2 3

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    unordered_set<int>se1;
    set<int>se2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        se1.insert(a[i]);
    }
    for(int i=0;i<m;i++){
    cin>> b[i];
    se2.insert(b[i]);
   }

    for(int i=0;i<n;i++){
        if(se2.find(a[i])!=se2.end()){
            cout<<a[i]<<" ";
        }
        se2.erase(a[i]);
    }



     return 0;
}
