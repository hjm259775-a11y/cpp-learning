#include<bits/stdc++.h>
using namespace std;

class myn
{

    friend void haopengyou(myn *le);//haopengyou就可以访问到myn里的私有成员了
public:
    myn()
    {
        gonggong="keting";
        siyou="woshi";
    }




    string gonggong;
private:
    string siyou;

};

//全局函数
void haopengyou(myn *le)
{
    cout<<le->gonggong<<endl;

    cout<<le->siyou<<endl;//这行就能运行了
}

void ceshi1()
{
    myn hhh;
    haopengyou(&hhh);
}
int main()
{
    ceshi1();
    return 0;
}