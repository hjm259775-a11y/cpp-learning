#include<bits/stdc++.h>
using namespace std;

//栈区数据注意事项——————不要返回局部变量的地址

int* a(){
    int a=10;//局部变量,保存在栈区，函数执行完后自动释放
    return &a;//返回局部变量的地址
}
int main(){
    int* q=a();
    cout<<*q<<endl;//第一次能输出正确的是编译器做的保留
    cout<<*q<<endl;//第二次是乱码，因为被删了
    return 0;
}