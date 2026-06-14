#include<bits/stdc++.h>
using namespace std;
//回调函数
//你写函数 A（定义了“要做什么”）。
// 别人写函数 B（控制“什么时候做”）。
// 你把 A 的函数地址交给 B，B 内部“回头”去调用 A。这就是“回调”

//它的用法就是将函数作为参数进行传递，传到对方函数中，类比变量一样被调用，这！就是回调函数


#include<functional>


//无参无值回调函数
void shuchu()
{
    cout<<"输出"<<endl;
}
void ceshi1(int x,void(*zhege)())//语法：返回值 (*函数指针)(参数列表)
{
    for(int i=0;i<x;i++)
    {
        zhege();
    }
}


int caozuo(int a,int b)
{
    return a+b;
}
void ceshi2(int a,int b,int(*zhege)(int x,int y))
{
    cout<<zhege(a,b)<<endl;
}
//有参有值回调函数


using wugege=string(*)(int,string);//using 别名=返回值类型(*)(参数列表);
string caozuo1(int x,string s)
{
    string hhh="";
    for(int i=0;i<x;i++)
    {
        hhh+=s;
    }
    return hhh;
}
void ceshi3(string s,int x,wugege cb)
{
    string ss=s+cb(x,"myn");
    cout<<ss<<endl;
}
//using为回调函数取别名






int main()
{
    ceshi1(3,shuchu);

    ceshi2(10,2,caozuo);

    ceshi3("你好",2,caozuo1);

    return 0;
}