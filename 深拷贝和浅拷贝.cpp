#include<bits/stdc++.h>
using namespace std;
//浅拷贝：简单的复制拷贝操作(编译器提供的拷贝构造函数)
//深拷贝：在堆区重新申请空间，进行拷贝操作


//浅拷贝会让堆区的内存重复释放
//如p1已经将height释放干净（堆区释放干净）但是p释放时依旧会执行释放代码
class myn
{
public:
    myn()
    {
        cout<<"默认构造"<<endl;
    }

    myn(int a,int h)
    {
        age=a;
        height=new int(h);
        cout<<"有参构造"<<endl;
    }

    //自己实现的拷贝构造函数，解决浅拷贝带来的问题
    myn(const myn& qqq)
    {
        cout<<"深拷贝"<<endl;
        age=qqq.age;
        //height =qqq.height;//编译器默认执行，浅拷贝
        height=new int(*qqq.height);//深拷贝，重新在堆区划一块内存

    }


    ~myn()
    {
        //作用是将堆区开辟的数据做释放操作
        if(height!=NULL)
        {
            delete height;
            height=NULL;
        }

        cout<<"默认析构"<<endl;
    }
    int age;
    int *height;
};
void ceshi1()
{
    myn q(10,100);
    cout<<q.age<<" "<<*q.height<<endl;

    myn q1(q);
    cout<<q1.age<<" "<<*q1.height<<endl;
}

int main(){
    ceshi1();

    return 0;
}