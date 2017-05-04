//
//  main.cpp
//  14
//
//  Created by 刘孟骁 on 2017/5/4.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class X;
class Y;
class Z;

class X{
private:
    int i;
public:
    X(){
        i=0;
    }
    friend class Y;
    //friend Y 的写法在知码开门上报错，编译失败，故作此修改。
    friend class Z;
    //friend Z 的写法在知码开门上报错，编译失败，故作此修改。
    friend void h(X *);
};

class Y{
public:
    void g(X *x){
        x->i+=1;
        cout<<x->i<<endl;
    }
};

class Z{
public:
    void f(X *x){
        x->i+=5;
        cout<<x->i<<endl;
    }
};

void h(X *x){
    x->i+=10;
    cout<<x->i<<endl;
}

int main(int argc, const char * argv[]) {
    X x;
    Y y;
    Z z;
    y.g(&x);
    z.f(&x);
    h(&x);
    return 0;
}
