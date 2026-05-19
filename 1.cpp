#include<bits/stdc++.h>
using namespace std;
//类模板
template<class NAME,class AGE>
class myn
{
public:
    myn(NAME n,AGE a)
    {
        this->name=n;
        this->age=a;
    }

    void shuchu()
    {
        cout<<this->name<<" "<<this->age<<endl;
    }
    NAME name;
    AGE age;
};

void ceshi1()
{
    myn<string,int> p1("leziren",18);
    p1.shuchu();
}

int main()
{
    ceshi1();
    return 0;
}