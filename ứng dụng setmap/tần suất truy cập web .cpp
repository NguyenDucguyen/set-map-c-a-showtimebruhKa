Cho 1 loạt các lượt truy cập website của một sinh viên IT, bạn hãy xác định xem mỗi website được truy cập bao nhiêu lượt.

Đầu vào
Gồm nhiều dòng mỗi dòng là tên địa chỉ của một website đã truy cập

Giới hạn
Có không quá 10^5 lượt truy cập

Đầu ra
In ra tên website cùng lượt truy cập theo thứ tự tên website tăng dần về từ điển

Ví dụ :
Input 01
Copy
28tech.com.vn
28tech.com.vn
28tech.com.vn
facebook.com
facebook.com
youtube.com
28tech.com.vn
oj.28tech.com.vn
oj.28tech.com.vn
Output 01
Copy
28tech.com.vn 4
facebook.com 2
oj.28tech.com.vn 2
youtube.com 1



#include<bits/stdc++.h>
using namespace std;
int main(){
   string c;
   map<string,int>mp;
    while(getline(cin,c)){
    mp[c]++;
   }

   for(auto it : mp){
            cout<<it.first << " "<<it.second<<endl;
    }


}
