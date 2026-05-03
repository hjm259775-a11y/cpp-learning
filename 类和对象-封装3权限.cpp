#include<bits/stdc++.h>
using namespace std;

class ren
{
public://公共权限
//类内和类外都能访问
    string name;
protected://保护权限
//类内能访问，类外不允许访问
//儿子可以访问父亲中的保护内容
    string car;


private://私有权限
//类内能访问，类外不允许访问
//儿子不可以访问父亲中的保护内容
    int mima;


public:
    void chakan(){
        name="马一诺";
        car="车车";
        mima=123;
    }
};



int main(){

    ren wo;
    wo.name="myn";
    wo.car="che";//保护权限，类外无法访问
    wo.mima=124;//私有权限，类外无法访问


    return 0;
}