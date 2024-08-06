
Cho một xâu kí tự S chỉ bao gồm các kí tự là chữ cái và dấu cách. Hãy đếm số lượng từ khác nhau trong xâu S và in ra từ có thứ tự từ điển nhỏ nhất, lớn nhất trong xâu S.

Đầu vào
Xâu kí tự S.

Giới hạn
1 ≤ len(S) ≤ 10^6

Đầu ra
Dòng đầu tiên in ra số lượng từ khác nhau trong xâu.

Dòng thứ 2 in ra từ có thứ tự từ điển nhỏ nhất và lớn nhất trong xâu.

Ví dụ :
Input 01
Copy
ngo ngoc an nguyen an ngoc ngoc
Output 01
Copy
4
an nguyen


#include<bits/stdc++.h>
using namespace std;
int main(){
   string c;
   set<string>se;
    while(cin>>c){
    se.insert(c);
   }
   cout<<se.size();
   cout<<endl;
   cout<< *se.begin()<<" "<<*se.rbegin();



}
