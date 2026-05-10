#include<bits/stdc++.h>
using namespace std;
//递增运算符重载


class myn
{
    friend ostream& operator<<(ostream& cout,myn p);
public:
    myn()
    {
        a=0;    
    }

    //重载前置++运算符
    myn& operator++()//返回引用是为了一直对一个数据进行递增操作
    {
        a++;
        return *this;
    }

    //重载后置++运算符
    myn operator++(int)//int代表占位参数，用于区分前置和后置递增
    {//不加引用，因为当前函数执行完就释放掉了
        //先记录当前结果
        myn temp=*this;
        //再递增
        a++;
        //返回
        return temp;
    }

private:
    int a;
    int b;

};

//重载<<运算符
ostream& operator<<(ostream& cout,myn p)
{
    cout<<p.a<<endl;
    return cout;
}



void ceshi1() 
{
    myn lezi;
    
    cout<<++lezi<<endl;

    cout<<lezi++<<endl;
    cout<<lezi<<endl;
}



int main()
{
    ceshi1();
    return 0;
}
