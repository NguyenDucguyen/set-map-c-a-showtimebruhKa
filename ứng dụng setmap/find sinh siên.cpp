Ở trường đại học xyz, mỗi sinh viên sẽ có một mã sinh viên riêng. Mã sinh viên là một xâu kí tự không quá 8 kí tự. Bạn được yêu cầu xây dựng chương trình có thể kiểm tra một mã sinh viên nào đó có thuộc về sinh viên nào?

Đầu vào
• Dòng đầu tiên là số lượng sinh viên N.

• 2N dòng tiếp theo là các dòng tiếp theo mô tả thông tin của sinh viên trên 2 dòng, dòng đầu là mã sinh viên, dòng 2 là tên sinh viên.

• Dòng tiếp theo là số truy vấn Q.

• Q dòng tiếp theo, mỗi dòng là một mã sinh viên cần tìm kiếm, nếu mã sinh viên này thuộc về một bạn sinh viên thì in ra tên của sinh viên đó trên 1 dòng, ngược lại in ra "NOT FOUND" trên 1 dòng.

Giới hạn
• 1≤ N ≤ 10^4; 1≤ Q ≤ 1000

• Mã sinh viên là xâu kí tự không quá 8 kí tự

• Tên sinh viên là một xâu có không quá 30 kí tự

Đầu ra
In ra kết quả của từng truy vấn, mỗi truy vấn trên 1 dòng.

Ví dụ :
Input 01
Copy
3
SV001
Hoang Van Nam
SV002
Ngo Gia Long
SV005
Phuong The Ngoc
2
SV005
SV003
Output 01
Copy
Phuong The Ngoc
NOT FOUND


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,string>mp;
    for(int i=0;i<n;i++){
    	string id ,name;
    	cin>>id;
    	cin.ignore();
    	getline(cin, name);
    	mp[id]=name;
	}

	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		string id;
		cin>>id;
		if(mp.find(id)!= mp.end()){
			cout<<mp[id]<<endl;
		}
		else{
			cout<<"NOT FOUND"<<endl;
		}
	}

}
