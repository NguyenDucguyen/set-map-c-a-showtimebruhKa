
Cho mảng A[] gồm N phần tử là ký tự, bạn hãy đếm xem có bao nhiêu ký tự khác nhau trong mảng.

Gợi ý : Để in theo thứ tự từ điển bạn chỉ cần duyệt set, còn in theo thứ tự ngược các bạn có thể dùng iterator ngược hoặc đưa các phần tử trong set ra vector rồi in từ cuối vector về đầu.

Đầu vào
Dòng 1 là N : số lượng phần tử trong mảng

Dòng thứ 2 gồm N ký tự trong mảng

Giới hạn
1<=N<=10^6

Các ký tự là chữ cái hoặc chữ số

Đầu ra
Dòng 1 in ra số lượng ký tự khác nhau trong mảng

Dòng 2 in ra các ký tự khác nhau theo thứ tự từ điển tăng dần

Dòng 3 in ra các ký tự khác nhau theo thứ tự từ điển giảm dần

Ví dụ :
Input 01
Copy
12
2 8 h t t 2 h e h e h t
Output 01
Copy
5
2 8 e h t
t h e 8 2

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin>>n;
    set<char>se;
    for(int i=0;i<n;i++){
    	char x;
    	cin>>x;
    	se.insert(x);
	}
	cout<<se.size()<<endl;
	for(set<char> :: iterator it = se.begin();it!= se.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
		for(set<char> :: reverse_iterator it = se.rbegin();it!= se.rend();it++){
		cout<<*it<<" ";
	}
}
