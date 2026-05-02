#include<iostream>
using namespace std;

int* aaa(){
    int* q=new int(10);//用new关键词，可以开辟到堆区
    return q;

}

int main(){
    int* qq=aaa();
    cout<<*qq<<endl;
    //只是把堆区创建的地址给你，而不是数据本身，所以需要用指针
    cout<<*qq<<endl;
    cout<<*qq<<endl;
    return 0;
}