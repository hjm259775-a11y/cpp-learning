#include<bits/stdc++.h>
using namespace std;

//c++多线程

void hanshu1(int n)
{
    cout<<n<<endl;
}

void hanshu2(int &n)
{
    cout<<n<<endl;
}


int cnt = 0;

int main()
{
    thread t1(hanshu1,100);//主线程开了一条新线程，让新线程去执行 func(100)
    t1.join();// 注意：每个 std:: thread 对象，在销毁前必须被 join() 或 detach()，否则会造成资源泄漏
    // 注意：主线程可能在子线程打印之前就结束了，所以输出可能看不到，用 Sleep 等它一等
	// t1.detach();
	// Sleep(1); // 等待线程结束

    int hhh=5;
    thread t2(hanshu2,ref(hhh));

    
    t2.join();
    cout<<"myn"<<endl;
    return 0;
}
