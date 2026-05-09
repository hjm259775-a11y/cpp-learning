#include<bits/stdc++.h>
using namespace std;
//成员函数作为友元

class jianzhuwu;//告诉编译器我会写这个类
class haopengyou
{
public:
    haopengyou();

    jianzhuwu *jian;

    void chengyuan();//想让这个成员函数可以访问私有内容

    void hanshu();//不想让这个普通函数访问私有
};


class jianzhuwu
{
    friend void haopengyou::chengyuan();//告诉这是好朋友下的成员函数

public:

    jianzhuwu();

    string keting;
private:
    string woshi;
};



jianzhuwu::jianzhuwu()
{
    keting = "客厅k";
    woshi = "卧室";
}

haopengyou::haopengyou()
{
    jian = new jianzhuwu;
}

void haopengyou::chengyuan()
{
    cout << jian->keting << endl;
    cout << jian->woshi << endl;
}

void haopengyou::hanshu()
{
    cout << jian->keting << endl;
}




void ceshi1()
{
    haopengyou lezi;
    lezi.chengyuan();
}

int main()
{
    ceshi1();
    return 0;
}
