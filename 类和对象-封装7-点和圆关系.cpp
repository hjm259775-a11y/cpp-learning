#include<bits/stdc++.h>
using namespace std;

class yuan
{
public:
    void gaix(int a)
    {
        yuanxin_x=a;
    }
    int kanx()
    {
        return yuanxin_x;
    }
    void gaiy(int a)
    {
        yuanxin_y=a;
    }
    int kany()
    {
        return yuanxin_y;
    }
    void gair(int aa)
    {
        banjing=aa;
    }



    void panduan(int x,int y)
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


private:
    int yuanxin_x;
    int yuanxin_y;
    int banjing;

};

int main(){
    
    yuan h;
    h.gaix(0);
    h.gaiy(1);
    h.gair(1);

    h.panduan(1,1);
    


    return 0;
}