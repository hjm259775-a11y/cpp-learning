#include<bits/stdc++.h>
using namespace std;
//创建全局变量
int aa=10;
int bb=10;

//const修饰的全局变量，即全局常量
const int qa=10;
const int qb=10;

int main(){
    //创建局部变量
    int a=10;
    int b=10;
    cout<<"a的地址"<<&a<<endl;
    cout<<"b的地址"<<&b<<endl;
    cout<<"aa的地址"<<&aa<<endl;
    cout<<"bb的地址"<<&bb<<endl;
    //设置静态变量（和全局变量地址在一块）
    static int ja=10;
    static int jb=10;
    cout<<&ja<<endl;
    cout<<&jb<<endl;

    //常量
    //字符串常量
    cout<<"字符串常量："<<&"myn"<<endl;

    //const修饰的局部变量，即局部常量，局部常量和局部变量地址在一块
    const int qaq=10;
    const int qbq=10;
    cout<<&qaq<<endl;
    cout<<&qbq<<endl;
    return 0;
}
//全局区放着全局变量，const全局常量，静态变量，字符串常量
//const局部常量，局部变量不在全局区