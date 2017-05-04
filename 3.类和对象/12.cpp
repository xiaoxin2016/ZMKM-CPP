//
//  main.cpp
//  12
//
//  Created by 刘孟骁 on 2017/5/4.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//


#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
    double x;
    double y;
    Point(double x,double y){
        this->x=x;
        this->y=y;
    }
};

class Line{
private:
    double length;
public:
    Line(Point p1,Point p2){
        length=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    }

    double getLen(){
        return length;
    }
};

int main(int argc, const char * argv[]) {
    Point p1(1,1),p2(4,5);
    Line line1(p1,p2);
    Line line2(line1);
    cout<<"The length of the line1 is:"<<line1.getLen()<<endl;
    cout<<"The length of the line2 is:"<<line2.getLen()<<endl;
    return 0;
}
