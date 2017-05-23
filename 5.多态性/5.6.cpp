//
//  main.cpp
//  5.6
//
//  Created by 刘孟骁 on 2017/5/23.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(int x=0,int y=0){
        this->x=x;
        this->y=y;
    }
    void print(){
        cout<<"Point("<<x<<','<<y<<")"<<endl;
    }
    friend Point operator+(Point &pt1,Point &pt2);
    friend Point operator+(int x,Point &pt);
    friend Point operator+(Point &pt,int x);

};

Point operator+(Point &pt1,Point &pt2){
    Point temp;
    temp.x=pt1.x+pt2.x;
    temp.y=pt1.y+pt2.y;
    return temp;
}
Point operator+(int inc,Point &pt){
    Point temp;
    temp.x=inc+pt.x;
    temp.y=inc+pt.y;
    return temp;
}
Point operator+(Point &pt,int inc){
    Point temp;
    temp.x=inc+pt.x;
    temp.y=inc+pt.y;
    return temp;
}

int main(int argc, const char * argv[]) {
    Point pt,pt1(4,4),pt2(6,6);
    pt=pt1+pt2;
    pt.print();
    pt=pt+5;
    pt.print();
    pt=10+pt;
    pt.print();
    return 0;
}
