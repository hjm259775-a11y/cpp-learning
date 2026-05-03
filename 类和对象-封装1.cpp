#include<bits/stdc++.h>
using namespace std;
const double PI=3.14;
//封装就是在设计类的时候，将属性和行为写在一起

//设计一个类
class yuan
{

    //访问权限
public://此为公共权限

    //属性
    int r;//圆的半径

    //行为
    double zhouchang()
    {
        return 2*r*PI;
    }
};





int main(){

    //通过这个类创建一个具体的圆
    yuan myn;

    //给圆对象的属性进行赋值
    myn.r=10;

    //调用行为求周长
    cout<<myn.zhouchang()<<endl;



    return 0;
}