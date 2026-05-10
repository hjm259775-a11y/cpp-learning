#include<bits/stdc++.h>
using namespace std;
//继承中的对象模型

class fulei
{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class zi1:public fulei
{
public:
    int d;
};

void ceshi1() 
{
    cout<<sizeof(zi1)<<endl;
}


int main()
{
    ceshi1();
    return 0;
}
