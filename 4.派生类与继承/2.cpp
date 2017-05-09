//
//  main.cpp
//  2
//
//  Created by 刘孟骁 on 2017/5/9.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Shape{
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
    Rectangle(){
    }
    void getArea(){
        cout<<"The area of the Rectangle is "<<length*width<<endl;
    }
};
class Circle:public Shape{
protected:
    double radius;
public:
    Circle(double radius){
        this->radius=radius;
    }
    void getArea(){
        cout<<"The area of the Circle is "<<3.14*radius*radius<<endl;
    }
};
class Square:public Rectangle{
public:
    Square(double length){
        this->length=length;
    }
    void getArea(){
        cout<<"The area of the Square is "<<length*length<<endl;
    }
};

int main(int argc, const char * argv[]) {
    Circle c(5);
    c.getArea();
    Rectangle r(4,6);
    r.getArea();
    Square s(5);
    s.getArea();
    return 0;
}
