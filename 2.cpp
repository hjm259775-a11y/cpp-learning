#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
using namespace std;

atomic<bool> stopFlag(false);

void worker()
{
    while (!stopFlag)
    {
        cout << "工作中..." << endl;
        this_thread::sleep_for(chrono::milliseconds(200));
    }
    cout << "线程安全退出" << endl;
}

int main()
{
    thread t(worker);
    this_thread::sleep_for(chrono::seconds(2));

    stopFlag = true; // 通知线程退出
    t.join();
}
