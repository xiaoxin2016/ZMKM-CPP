//
//  main.cpp
//  5.9
//
//  Created by 刘孟骁 on 2017/5/23.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;
const double Pi=3.14;

class Container{
public:
    virtual double surface_area(){
        //Nothing Here. Just to control format;
        return 0;
    }
    virtual double volume(){
        //Nothing Here. Just to control format;
        return 0;
    }
};
class Sphere:public Container{
protected:
    double radius;
public:
    Sphere(double radius=0){
        this->radius=radius;
    }
    virtual double surface_area(){
        return 4*Pi*radius*radius;
    }
    virtual double volume(){
        return 4.0/3*Pi*radius*radius*radius;
    }
};
class Cylinder:public Container{
protected:
    double radius;
    double height;
public:
    Cylinder(double radius,double height){
        this->radius=radius;
        this->height=height;
    }
    virtual double surface_area(){
        return 2*Pi*radius*radius+2*Pi*radius*height;
    }
    virtual double volume(){
        return Pi*radius*radius*height;
    }
};
class Cube:public Container{
protected:
    double length;
public:
    Cube(double length){
        this->length=length;
    }
    virtual double surface_area(){
        return length*length*6;
    }
    virtual double volume(){
        return length*length*length;
    }
    
};
int main(int argc, const char * argv[]) {
    Container *p;
    Sphere s(5);
    Cylinder c(5,6);
    Cube cu(5);
    p=&s;
    cout<<"The Surface area of the Sphere is "<<p->surface_area()<<endl;
    cout<<"The Volume of the Sphere is "<<p->volume()<<endl;
    p=&c;
    cout<<"The Surface area of the Cylinder is "<<p->surface_area()<<endl;
    cout<<"The Volume of the Cylinder is "<<p->volume()<<endl;
    p=&cu;
    cout<<"The Surface area of the Cube is "<<p->surface_area()<<endl;
    cout<<"The Volume of the Cube is "<<p->volume()<<endl;
    return 0;
}
