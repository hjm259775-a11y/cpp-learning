#include<iostream>
using namespace std;

//设计一个学生类

class student
{
public://公共权限
    //类中的属性和行为，都是成员
    //属性：成员属性，成员变量
    //行为：成员方法，成员函数

    string name;//姓名
    int net;//学号


    void gaiming(string xin)
    {
        name=xin;
    }
    //改名字

    void gaihao(int xinhao)
    {
        net=xinhao;
    }
    //改学号

    void guancha(){
        cout<<"名字："<<name<<endl<<"学号："<<net<<endl;
    }
    //显示姓名和学号
};

int main()
{
    student s1;
    s1.name="马一诺";
    s1.net=124;

    s1.guancha();//显示学生信息

    s1.gaiming("张三");
    s1.gaihao(123);

    s1.guancha();

    return 0;
}