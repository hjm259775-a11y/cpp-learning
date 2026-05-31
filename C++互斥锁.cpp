#include<bits/stdc++.h>
#include <thread>
#include <atomic>
#include <chrono>
#include<mutex>
using namespace std;
// C++ 互斥锁的三种常见用法
// std::mutex	                不自动解锁	  最基础的互斥锁，需手动 lock/unlock	    灵活控制锁时机
// std::lock_guard<std::mutex>	自动解锁	  自动加锁、自动释放，作用域结束自动解锁	 简单作用域加锁
// std::unique_lock<std::mutex>	自动解锁	  功能更强（可延迟加锁、可解锁再加锁）	     条件变量、复杂锁逻辑

mutex mtx;//全局互斥锁
//多线程最大的问题是：多个线程可能同时改同一份数据。mutex可以保护这个数据
//mutex 像一把钥匙。一个线程拿到锁后，其他线程必须等。这样同一时间只有一个线程能进入那段代码。

void hanshu1(int n)
{
    mtx.lock();//手动加锁
    cout<<n<<endl;
    mtx.unlock();//手动解锁
}

void hanshu2(int n)
{
    lock_guard<mutex> lock(mtx);
    //std::lock_guard 是 最简单、最轻量、不能折腾的锁。

    // 只能：
    // 构造 → 自动 lock()。
    // 析构 → 自动 unlock()。

    // 不能：
    // 中途 unlock
    // 不能 lock
    // 不能移动
    // 不能延迟加锁

    cout<<n<<endl;
}

void hanshu3(int n)
{
    unique_lock<mutex> lock(mtx);//自动加锁
    // std::unique_lock 是功能全面版的锁，为了处理复杂情况设计的
    // 它允许：
    // 中途 unlock()
    // 中途 lock()
    // 可以使用 try_lock
    // 可以延迟加锁（defer_lock）
    // 可以转移所有权（移动语义）
    // 可以和 condition_variable 协作（这是重点）
    cout<<n<<endl;
    lock.unlock();//手动释放锁
    cout<<"解锁后执行其他操作"<<endl;
    lock.lock();
    cout<<"重新加锁执行"<<endl;

}

int main()
{
    thread t1(hanshu1,1);
    thread t2(hanshu1,2);
    t1.join();
    t2.join();

    thread t3(hanshu2,3);
    thread t4(hanshu2,4);
    t3.join();
    t4.join();
    
    thread t5(hanshu3,5);
    thread t6(hanshu3,6);
    t5.join();
    t6.join();

    return 0;
}
