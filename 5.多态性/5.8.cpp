//
//  main.cpp
//  5.8
//
//  Created by 刘孟骁 on 2017/5/23.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;
const double Pi=3.14;

class Shape{
public:
    virtual double getArea()=0;
    virtual double getPerim()=0;
    virtual ~Shape(){
        //Nothing Here. Just to remove Warning.
    }
};
class Circle:public Shape{
protected:
    double radius;
public:
    Circle(double radius){
        this->radius=radius;
    }
    virtual double getArea(){
        return Pi*radius*radius;
    }
    virtual double getPerim(){
        return 2*Pi*radius;
    }
};
class Rectangle:public Shape{
protected:
    double length;
    double width;
public:
    Rectangle(double length,double width){
        this->length=length;
        this->width=width;
    }
    virtual double getArea(){
        return length*width;
    }
    virtual double getPerim(){
        return 2*(length+width);
    }
    
};

int main(int argc, const char * argv[]) {
    Shape * sp;
    sp=new Circle(5);
    cout<<"The area of the Circle is "<<sp->getArea()<<endl;
    cout<<"The perimeter of the Circle is "<<sp->getPerim()<<endl;
    delete sp;
    sp=new Rectangle(4,6);
    cout<<"The area of the Rectangle is "<<sp->getArea()<<endl;
    cout<<"The perimeter of the Rectangle is "<<sp->getPerim()<<endl;
    delete sp;
    return 0;
}
