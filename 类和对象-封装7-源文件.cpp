#include "myn.h"
//头文件文件名
using namespace std;

class yuan
{
public:
    void Myn::gaix(int a)
    {
        yuanxin_x=a;
    }
    int Myn::kanx()
    {
        return yuanxin_x;
    }
    void Myn::gaiy(int a)
    {
        yuanxin_y=a;
    }
    int Myn::kany()
    {
        return yuanxin_y;
    }
    void Myn::gair(int aa)
    {
        banjing=aa;
    }



    void Myn::panduan(int x,int y)
    {
        if(sqrt((yuanxin_x-x)*(yuanxin_x-x)+(yuanxin_y-y)*(yuanxin_y-y))==banjing)
        {
            cout<<"圆上"<<endl;
        }
        else if(sqrt((yuanxin_x-x)*(yuanxin_x-x)+(yuanxin_y-y)*(yuanxin_y-y))<banjing)
        {
            cout<<"圆内"<<endl;
        }
        else{
            cout<<"圆外"<<endl;
        }
    }
