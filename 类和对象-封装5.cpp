#include<bits/stdc++.h>
using namespace std;
//成员属性设置为是私有

class renlei
{
public:
    void gaiming(string m)
    {
        name=m;
    }

    string kanming()
    {
        return name;
    }

    
    int kanage()
    {
        if(age<0 || age>150)
        {
            cout<<age<<"岁不是人"<<endl;
            return 0;
        }
        return age;
    }

    void gaimima(int a)
    {
        a=mima;
    };

private:
    string name;//可读可写
    
    int age=160;//只读

    int mima;//只写
};

int main(){

    renlei wo;
    wo.gaiming("xgz");//改名
    cout<<wo.kanming()<<endl;//查看名字

    cout<<wo.kanage()<<endl;//只能看年龄

    wo.gaimima(10);//只能改，不能查看

    return 0;
}