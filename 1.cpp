#include<bits/stdc++.h>
using namespace std;

//做一个立方体

class lifangti
{
public:
    int kanchang()
    {
        return gao;
    }//查看长

    void gaichang(int a)
    {
        chang=a;
    }//改长



    int kankuan()
    {
        return gao;
    }//查看宽

    void gaikuan(int a)
    {
        kuan=a;
    }//改宽



    int kangao()
    {
        return gao;
    }//查看高

    void gaigao(int a)
    {
        gao=a;
    }//改高




    int biaomianji()
    {
        return chang*kuan*2+kuan*gao*2+chang*gao*2;
    }

    int tiji()
    {
        return chang*kuan*gao;
    }





private:
    int chang;
    int kuan;
    int gao;

    
};


//利用全局函数判断两立方体是否相等
bool shifou2(lifangti &a,lifangti &b)//推荐用&
{
    if(a.kangao()==b.kangao() && a.kankuan()==b.kankuan() && a.kangao()==b.kangao())
    {
        return true;
    }
    return false;
}





int main(){
    lifangti hhh;
    hhh.gaichang(10);
    hhh.gaikuan(10);
    hhh.gaigao(10);

    cout<<"表面积："<<hhh.biaomianji()<<endl;
    cout<<"体积："<<hhh.tiji()<<endl;

    lifangti myn;
    myn.gaichang(10);
    myn.gaikuan(10);
    myn.gaigao(10);


    bool ret=shifou2(hhh,myn);
    if(ret)
    {
        cout<<"一样"<<endl;
    }
    else
    {
        cout<<"不一样"<<endl;
    }





    return 0;
}