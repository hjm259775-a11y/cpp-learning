#include<bits/stdc++.h>
using namespace std;

//Lambda 表达式
//匿名函数


struct Person
{
    string name;
    int age;
};

int main()
{
    auto hanshu1=[](int a,int b)->int
    {
        return a*b;
    };
    cout<<hanshu1(2,2)<<endl;



    int x=1,y=2;
    auto hanshu2=[x,y](int a,int b)->int
    {
        return x+y+a*b;
    };
    cout<<hanshu2(2,2)<<endl;
    //捕获了外面的x和y

    
    auto hanshu3 = [](int& xx){ xx++; };
    int xx=5;
    hanshu3(xx);
    cout << xx <<endl;
    
    int aa=10,bb=20;
    auto hanshu4=[aa,&bb]()
    {
        cout<<aa<<" "<<bb<<endl;
    };
    aa=50;
    bb=60;
    hanshu4();
    cout<<aa<<" "<<bb<<endl;
    //传引用，内部修改会影响外部，速度快，不拷贝





    // 1. 传指针（和普通指针用法一样）
    auto print_ptr = [](Person* p) {
        std::cout << p->name << " " << p->age << std::endl;
        };
    auto get_age = [](const Person& p) { return p.age; };

    Person p = { "马一诺", 20 };
    print_ptr(&p);
    std::cout << get_age(p) << std::endl;
    //在单个return情况下，可以省略"->类型"




    // []	不捕获任何外部变量	              Lambda 里用不了外面的变量
    // [x]	传值捕获 x	                     拷贝一份 x 到 Lambda 里，内部改的是副本，不影响外面的 x
    // [&x]	传引用捕获 x	                  直接用外面的 x，内部修改会影响外部（速度快，不拷贝）
    // [=]	传值 捕获所有用到的外部变量	       只要 Lambda 里用了某个外部变量，就自动拷贝一份（省心但可能低效）
    // [&]	传引用 捕获所有用到的外部变量	   只要 Lambda 里用了某个外部变量，就直接用原变量（高效，适合修改外部变量）
    // [=, &x]	大部分变量传值，但 x 传引用	   混合模式：默认传值，单独指定 x 传引用
    // [&, x]	大部分变量传引用，但 x 传值	   混合模式：默认传引用，单独指定 x 传值





        int xxx=1;
    auto hanshu5=[xxx]()mutable//加了mutable下面就可以++了
    {
        xxx++;
        cout<<xxx<<endl;
    };
    hanshu5();
    cout<<xxx<<endl;




    vector<int> xgz = {3, 1, 4, 1, 5};
    // 用 Lambda 作为排序的比较函数（按从大到小排）
    std::sort(xgz.begin(), xgz.end(), [](int a, int b) { return a > b; });
    for(int i=0;i<5;i++)
    {
        cout<<xgz[i]<<" ";
    }
    //临时需要一个小函数，不想费劲定义普通函数时

    return 0;
}