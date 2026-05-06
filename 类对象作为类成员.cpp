#include<bits/stdc++.h>
using namespace std;
//类对象作为类成员
class shouji
{
public:
    shouji(string a)
    {
        mingzi=a;
        cout<<"shouji构造"<<endl;
    }

    ~shouji()
    {
        cout<<"shouji析构"<<endl;
    }


    string mingzi;//手机名称
};
class renlei
{
public:
    renlei(string a,shouji b):name(a),phone(b)
    {
        cout<<"ren构造"<<endl;
    }

    ~renlei()
    {
        cout<<"renlei析构"<<endl;
    }


    string name;
    shouji phone;
};
void ceshi1()
{
    renlei p("马一诺",shouji("菠萝"));
    cout<<p.name<<"有"<<p.phone.mingzi<<"手机"<<endl;
}

int main(){
    ceshi1();
    //如果拿其他类作为本类成员，构造时先构造类对象，再构造自身

    return 0;
}