#include<bits/stdc++.h>
using namespace std;
//new的基本语法

int* hhh(){
    //new让
    int* aa= new int(10);//new返回的是这个数据类型的指针
    return aa;
}

void myn(){
    int *qq=hhh();
    cout<<*qq<<endl;
    cout<<*qq<<endl;
    //堆区的数据由程序员管理释放，不会自动释放

    delete qq;
    cout<<*qq<<endl;//乱码
    //delete可以删除
}

void test(){
    int* m=new int[10];//在堆区创建10整形数据的数组

    for(int i=0;i<10;i++){
        m[i]=i;
    }
    for(int i=0;i<10;i++){
        cout<<m[i]<<endl;
    }

    delete[] m;//告知此为数组
    //释放堆区数组

    for(int i=0;i<10;i++){
        cout<<m[i]<<endl;
    }
}


int main(){
    myn();

    test();
    return 0;
}