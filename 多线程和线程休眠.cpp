#include<bits/stdc++.h>
using namespace std;
//c++多线程

using namespace std::chrono;
//引入 std::chrono 命名空间下的 时间类型和时钟类型，例如：
// 时长类型：std::chrono::seconds、std::chrono::milliseconds 等。
// 时钟类型：std::chrono::system_clock、std::chrono::steady_clock 等。
// 时间点类型：std::chrono::time_point 等。

using namespace std::chrono_literals;
// 作用是引入 C++14 新增的时间单位字面量（如 s、ms、us、ns、min、h），可以用更简洁的方式表示时长，例如：
// 1s 等价于 std::chrono::seconds(1)。
// 500ms 等价于 std::chrono::milliseconds(500)。
// 2min 等价于 std::chrono::minutes(2)。
// 1h 等价于 std::chrono::hours(1)




void hanshu1(int n)
{
    cout<<n<<endl;
}

void hanshu2(int &n)
{
    cout<<n<<endl;
}


atomic<bool> panduan(false);//这个变量会被两个线程同时访问，存在数据竞争，要用atomic<bool>
void hanshu3()
{
    while(panduan==false)
    {
        cout<<"工作中。。。"<<endl;
        this_thread::sleep_for(chrono::milliseconds(500));//让当前进程睡500毫秒
    }
    cout<<"线程安全退出^_^"<<endl;
}



int main()
{
    thread t1(hanshu1,100);//主线程开了一条新线程，让新线程去执行 func(100)
    t1.join();// 注意：每个 std:: thread 对象，在销毁前必须被 join() 或 detach()，否则会造成资源泄漏
    // 注意：主线程可能在子线程打印之前就结束了，所以输出可能看不到，用 Sleep 等它一等
	// t1.detach();
	// Sleep(1); // 等待线程结束

    int hhh=5;
    thread t2(hanshu2,ref(hhh));//hanshu2传的是引用参数，如果想让线程修改外面的变量，需写ref
    t2.join();

    thread t3(hanshu3);
    this_thread::sleep_for(chrono::seconds(2));//睡两秒钟
    panduan=true;
    t3.join();
    // 使用原子标志位控制线程逻辑：不通过强制“杀死线程”，而是让线程自己检测退出信号。这种方式资源安全、可控，是现代C++推荐的线程终止模式。

    
    auto now = system_clock::now();// 获取当前系统时间（以系统时钟为准，包含日期时间）
    auto target_time = now + 2s;// 计算目标时间点：当前时间 + 2 秒（即 2 秒后）
    std::this_thread::sleep_until(target_time);// 休眠到目标时间点
    std::cout << "已到达目标时间点！" << std::endl;// 到达目标时间点后执行



    return 0;
}
