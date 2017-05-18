//
//  main.cpp
//  5.1
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
    friend complex operator+(complex comp1,complex comp2);
    friend complex operator-(complex comp1,complex comp2);
    friend complex operator*(complex comp1,complex comp2);
    friend complex operator/(complex comp1,complex comp2);
};

complex operator+(complex comp1,complex comp2){
    complex temp;
    temp.real=comp1.real+comp2.real;
    temp.imag=comp1.imag+comp2.imag;
    return temp;
}
complex operator-(complex comp1,complex comp2){
    complex temp;
    temp.real=comp1.real-comp2.real;
    temp.imag=comp1.imag-comp2.imag;
    return temp;
}
complex operator*(complex comp1,complex comp2){
    complex temp;
    temp.real=comp1.real*comp2.real-comp1.imag*comp2.imag;
    temp.imag=comp1.imag*comp2.real+comp1.real*comp2.imag;
    return temp;
}
complex operator/(complex comp1,complex comp2){
    complex temp;
    double denominator;
    denominator=1/(comp2.real*comp2.real+comp2.imag*comp2.imag);
    temp.real=denominator*(comp1.real*comp2.real+comp1.imag*comp2.imag);
    temp.imag=denominator*(comp1.imag*comp2.real-comp1.real*comp2.imag);
    return temp;
}

int main(int argc, const char * argv[]) {
    complex A1(3.5,6.4),A2(5.2,8.3),A3,A4,A5,A6;
    A3=operator+(A1,A2);
    A4=operator-(A1,A2);
    A5=operator*(A1,A2);
    A6=operator/(A1,A2);
    A1.print();
    A2.print();
    A3.print();
    A4.print();
    A5.print();
    A6.print();
    return 0;
}
