#include<bits/stdc++.h>
using namespace std;
//struct和class区别是
//struct的默认权限是公共权限 public
//class的默认权限是私有权限 private

class m1
{
    int a;//默认为私有
};

struct m2
{
    int b;//默认为公共
};


int main(){

    m1 aaa;
    aaa.a=100;//此处报错，因为权限为私有

    m2 bbb;
    bbb.b=100;

    return 0;
}