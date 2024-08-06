Cho 1 mảng A[] các từ không có dấu cách, bạn hãy đếm xem trong mảng A[] có bao nhiêu từ khác nhau và liệt kê theo thứ tự từ điển tăng dần. Bài này bạn cài đặt lần lượt bằng set & map

Đầu vào
Dòng đầu tiên là số nguyên N.

Dòng tiếp theo gồm N từ A[i]

Giới hạn
1≤ N ≤ 10^5

A[i] là một từ không có dấu cách chứa không quá 20 kí tự

Đầu ra
Dòng 1 in ra số lượng từ khác nhau

Dòng 2 liệt kê các từ theo thứ tự từ điển tăng dần

Ví dụ :
Input 01
Copy
8
28tech 28tech apple apple facebook zalo zalo bitcoin
Output 01
Copy
5
28tech apple bitcoin facebook zalo


#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> a(n);
    set<string> se;
    for(int i=0;i<n;i++){
        cin>>a[i];
        se.insert(a[i]);
    }
    cout<<se.size()<<endl;
    for(auto it : se){
        cout<<it<<" ";
    }
    return 0;
}
