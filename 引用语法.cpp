#include<bits/stdc++.h>
using namespace std;
//引用，给变量起别名

//引用函数参数
void dada(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
//值传递：拿到的是值的复印件,形参无法修饰实参
//地址传递：拿到的是原变量地址，形参可以修饰实参
//引用传递：直接给原变量起了个别名，形参可以修饰实参，这里就是引用传递

//具体作用可以用引用来简化指针修改实参

int& mm(){
    static int a=10;//静态，放到全局区，不会因为函数执行完被释放
    return a;
}
//用引用做函数返回值

int main(){
    int a=10;
    int& b=a;//即a和b都指向同一个内存
    //引用必须需要初始化，无法int& b;
    //引用在初始化后，不可以发生改变
    cout<<b<<endl;
    b=20;
    cout<<a<<endl;

    cout<<&a<<" "<<&b<<endl;//指向同一块地址，同一个数据




    int aa=10;
    int bb=20;
    dada(aa,bb);
    cout<<"a="<<aa<<endl;
    cout<<"b="<<bb<<endl;


    int& aaaa=mm();
    cout<<aaaa<<endl;

    mm()=1000;//如果函数的返回值是引用，则可以将此函数作为赋值的左值
    cout<<aaaa;

    return 0;
}
//引用的本质，就是个指针常量