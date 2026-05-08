#include<bits/stdc++.h>
using namespace std;

class myn
{
public:
    
    myn(int age)
    {
        //this指向的是 被调用的成员函数 所属的对象
        this->age=age;
    }

    myn& mynn(myn &ccb)
    {
        this->age+=ccb.age;
        return *this;
    }

    int age;
};

//解决名称冲突
void ceshi1()
{
    myn leziren(18);
    cout<<leziren.age<<endl;
    
}

//返回对象本身用 *test
void ceshi2()
{
    myn wo(10);
    myn ni(10);
    wo.mynn(ni).mynn(ni).mynn(ni);
    cout<<wo.age<<endl;
}


int main()
{
    ceshi1();
    ceshi2();//连续加
    return 0;
}