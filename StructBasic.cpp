#include<bits/stdc++.h>
using namespace std;

//struct student(member 1,member 2......);
struct student
{
    int id;
    float result;
};
struct book{

      string author;
      string name;
      int price;
};

int main()
{
    struct book b1;
    b1.author = "sadat";
    b1.name = "jibon bedona";
    b1.price = 150;
    cout << b1.author << " " << b1.name << " " << b1.price << endl;
    /*struct student s1,s2;
    s1.id = 101;
    s1.result = 4.00;
    cin >> s2.id >> s2.result ;
    cout << s2.id << " " << s2.result << endl;;
    cout << s1.id << " " << s1.result;*/

}
