
Cho thông tin các trận đấu của giải bóng đá Sunday League, nhiệm vụ của bạn là đối với mỗi đội bóng hãy liệt kê các đối thủ đã từng chạm trán.

Danh sách các đội bóng được liệt kê theo thứ tự từ điển tăng dần và danh sách đối thủ của từng đội bóng cũng được liệt kê tăng dần theo thứ tự từ điển.

Gợi ý : Dùng map<string, vector<string>> mp; mỗi đội bóng sẽ dùng 1 vector để lưu lại danh sách các đối thủ trong các trận bóng, sort danh sách đội bóng trước khi in ra kết quả.

Đầu vào
Dòng 1 là N : số trận bóng diễn ra

N dòng tiếp theo mỗi dòng gồm thông tin của 1 trận đấu theo cú pháp X - Y, trong đó đội X thi đấu với đội Y

Giới hạn
1<=N<=1000
Đầu ra
In ra kết quả của bài toán theo mẫu
Ví dụ :
Input 01
Copy
15
Lyon - Manchester City
Lyon - Chelsea
Arsenal - Liverpool
AC Milan - Barcelona
Real Madrid - Chelsea
Real Madrid - Manchester City
Lyon - Liverpool
Liverpool - Manchester United
Barcelona - HAGL
Liverpool - Lyon
AC Milan - Lyon
AC Milan - Chelsea
Fullham - Barcelona
Fullham - Real Madrid
28Tech FC - Lyon
Output 01
Copy
28Tech FC : Lyon
AC Milan : Barcelona, Chelsea, Lyon
Arsenal : Liverpool
Barcelona : AC Milan, Fullham, HAGL
Chelsea : AC Milan, Lyon, Real Madrid
Fullham : Barcelona, Real Madrid
HAGL : Barcelona
Liverpool : Arsenal, Lyon, Lyon, Manchester United
Lyon : 28Tech FC, AC Milan, Chelsea, Liverpool, Liverpool, Manchester City
Manchester City : Lyon, Real Madrid
Manchester United : Liverpool
Real Madrid : Chelsea, Fullham, Manchester City



#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   map<string,vector<string>> mp;
   cin.ignore();
   for(int i=0;i<n;i++){
        string s1;
        getline (cin,s1);
        string team1 = s1.substr(0, s1.find(" - "));
        string team2 = s1.substr(s1.find(" - ") + 3);
        mp[team1].push_back(team2);
        mp[team2].push_back(team1);
    }


    for (auto [x, y] : mp) {
        sort(y.begin(), y.end());
        cout << x << " : ";
        for (int i = 0; i < (int) y.size() - 1; ++i)
            cout << y[i] << ", ";
        cout << y.back() << "\n";
    }
}
