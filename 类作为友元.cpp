#include<bits/stdc++.h>
using namespace std;

class lei;//提前说下有这个类
class myn
{
public:
    myn();
    void hanshu();//参观函数，访问lei中的属性

    lei *ccb;

};
class lei
{
public:
    lei();


    string keting;

private:
    string woshi;

};

//类外写成员函数
lei::lei()
{
    keting = "客厅;";
    woshi = "卧室;";
}
myn::myn()
{
    ccb=new lei;
}
void myn::hanshu()
{
    cout<<ccb->keting;
}


void ceshi1()
{
    myn lezi;
    lezi.hanshu();
}

int main()
{
    ceshi1();
    return 0;

}