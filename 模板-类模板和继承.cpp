#include<bits/stdc++.h>
using namespace std;
//类模板和继承
template<class T>
class myn
{
public:
    T age;
};

class er:public myn<int>//告知类型
{

};
void ceshi1()
{
    er s1;
}

int main()
{
    ceshi1();
    
    return 0;
}