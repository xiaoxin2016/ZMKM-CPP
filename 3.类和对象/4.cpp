//
//  main.cpp
//  4
//
//  Created by 刘孟骁 on 2017/4/27.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Circle{
private:
    float r;
public:
    Circle(float r){
        this->r=r;
    }
    float getCircumference(){ //周长
        return 2*3.14*r;
    }
    float getArea(){ //面积
        return 3.14*r*r;
    }
};

int main(int argc, const char * argv[]) {
    float radius;
    cin>>radius;
    Circle c(radius);
    cout<<"半径为"<<radius<<"的圆的周长为："<<c.getCircumference()<<",面积为："<<c.getArea()<<endl;
    return 0;
}
