//
//  main.cpp
//  15
//
//  Created by 刘孟骁 on 2017/5/4.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class complex;

class complex{
private:
    double r;
    double i;
public:
    complex(double r,double i){
        this->r=r;
        this->i=i;
    }
    complex(){
    }
    complex add(complex c){
        complex d(r,i);
        d.r+=c.r;
        d.i+=c.i;
        return d;
    }
    complex sub(complex c){
        complex d(r,i);
        d.r-=c.r;
        d.i-=c.i;
        return d;
    }
    complex mul(complex c){
        complex d(r,i);
        complex e(0,0);
        e.r=d.r*c.r-d.i*c.i;
        e.i=d.r*c.i+d.i*c.r;
        return e;
    }
    complex div(complex c){
        complex d(r,i);
        complex e(0,0);
        double p=c.r*c.r+c.i*c.i;
        e.r=(d.r*c.r+d.i*c.i)/p;
        e.i=(d.i*c.r-d.r*c.i)/p;
        return e;
    }
    void print(){
        cout<<r<<'+'<<i<<'i'<<endl;
    }
};
int main(int argc, const char * argv[]) {
    complex c1(2.3,4.6),c2(3.6,2.8),c3,c4,c5,c6;
    c3=c1.add(c2);
    c3.print();
    c4=c1.sub(c2);
    c4.print();
    c5=c1.mul(c2);
    c5.print();
    c6=c1.div(c2);
    c6.print();
    return 0;
    return 0;
}
