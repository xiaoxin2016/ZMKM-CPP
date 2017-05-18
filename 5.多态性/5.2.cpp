//
//  main.cpp
//  5.2
//
//  Created by 刘孟骁 on 2017/5/18.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class complex{
private:
    double real;
    double imag;
public:
    complex(double real=0,double imag=0){
        this->real=real;
        this->imag=imag;
    }
    void print(){
        cout<<real;
        if(imag!=0){
            if(imag>0){
                cout<<'+';
            }
            cout<<imag<<'i'<<endl;
        }
    }
    complex operator+(complex comp);
    complex operator-(complex comp);
    complex operator*(complex comp);
    complex operator/(complex comp);
};

complex complex::operator+(complex comp){
    complex temp;
    temp.real=real+comp.real;
    temp.imag=imag+comp.imag;
    return temp;
}
complex complex::operator-(complex comp){
    complex temp;
    temp.real=real-comp.real;
    temp.imag=imag-comp.imag;
    return temp;
}
complex complex::operator*(complex comp){
    complex temp;
    temp.real=real*comp.real-imag*comp.imag;
    temp.imag=imag*comp.real+real*comp.imag;
    return temp;
}
complex complex::operator/(complex comp){
    complex temp;
    double denominator;
    denominator=1/(comp.real*comp.real+comp.imag*comp.imag);
    temp.real=denominator*(real*comp.real+imag*comp.imag);
    temp.imag=denominator*(imag*comp.real-real*comp.imag);
    return temp;
}

int main(int argc, const char * argv[]) {
    complex A1(3.5,6.4),A2(5.2,8.3),A3,A4,A5,A6;
    A3=A1.operator+(A2);
    A4=A1.operator-(A2);
    A5=A1.operator*(A2);
    A6=A1.operator/(A2);
    A1.print();
    A2.print();
    A3.print();
    A4.print();
    A5.print();
    A6.print();
    return 0;
}
