#include<bits/stdc++.h>
using namespace std;
//交换算法
template<class T>
void jiaohuan(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}


//排序算法
template<class T>
void paixu(T arr[],int longg)
{
    for(int i=0;i<longg ;i++)
    {
        int max=i;
        for(int j=i+1;j<longg;j++)
        {
            if(arr[max]<arr[j])
            {
                max=j;
            }
        }
        if(max!=i)
        {
            jiaohuan(arr[max],arr[i]);
        }
    }
}

//打印
template<class T>
void dayin(T arr[],int longg)
{
    for(int i=0;i<longg ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void ceshi1()
{
    char cshuzu[]="decab";
    int changdu=sizeof(cshuzu)/sizeof(char);
    paixu(cshuzu,changdu);
    dayin(cshuzu,changdu);
}

void ceshi2()
{
    int ishuzu[]={4,6,3,12,6,3,5,7};
    int changdu=sizeof(ishuzu)/sizeof(int);
    paixu(ishuzu,changdu);
    dayin(ishuzu,changdu);
}



int main()
{
    ceshi1();
    ceshi2();
    return 0;
}