#include<bits/stdc++.h>
using namespace std;
//空指针调用成员函数
class myn
{
public:
    void hanshu1()
    {
        cout<<"myn"<<endl;
    }
    void nianling()
    {
        if(this==NULL)
        {
            return;
        }
        cout<<this->age<<endl;
    }


    int age;
};

//解决名称冲突
void ceshi1()
{
    myn *p=NULL;
    p->hanshu1();
    p->nianling();
}


int main()
{
    ceshi1();
    return 0;
}