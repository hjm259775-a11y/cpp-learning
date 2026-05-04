#include<bits/stdc++.h>
using namespace std;
//拷贝构造函数调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象
//2、值传递的方式给函数参数传值
//3、值方式返回局部对象
class myn
{
public:
    myn()
    {
        cout<<"构造"<<endl;
    }
    myn(int a)
    {
        age=a;
        cout<<"有参狗仔"<<endl;
    }
    myn(const myn &aaa)
    {
        age=aaa.age;
        cout<<"kaobei"<<endl;
    }

    ~myn()
    {
        cout<<"析构"<<endl;
    }


    int age;
};

//1、使用一个已经创建完毕的对象来初始化一个新对象
void ceshi1()
{
    myn p1(10);
    myn p2(p1);
}

//2、值传递的方式给函数参数传值
void doo(myn q)
{
}
void ceshi2()
{
    myn q;
    doo(q);
}


//3、值方式返回局部对象
myn doo2()
{
    myn nm;
    return nm;
}
void ceshi3()
{
    myn p=doo2();
}



int main(){

    ceshi1();

    cout<<endl;
    
    ceshi2();

    return 0;
}