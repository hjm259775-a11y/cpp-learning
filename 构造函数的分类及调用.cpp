#include<bits/stdc++.h>
using namespace std;
//构造函数的分类及调用
//分类
//无参构造（默认构造）和有参构造

//普通构造和拷贝构造
class myn
{
public:
    myn()
    {
        cout<<"无参构造"<<endl;
    }
    myn(int a)
    {
        age=a;
        cout<<"有参构造"<<endl;
    }

    myn(const myn &a)
    {
        age=a.age;//将传入的人身上所有属性拷贝到我身上
        cout<<"拷贝构造"<<endl;
    }
    ~myn()
    {
        cout<<"析构"<<endl;
    }

    int age;
};

void ceshi1()
{
    //括号法
    myn q;//默认构造函数调用
    // 不要加小括号

    myn q1(10);//会调用有参构造

    myn q2(q1);//拷贝构造函数
    cout<<"q2年龄："<<q2.age<<endl;
    //显示法
    myn pa;
    myn pb=myn(10);//有参构造
    myn pc=myn(pb);//拷贝构造

    //隐式转换法
}

int main(){

    ceshi1();
    return 0;
}