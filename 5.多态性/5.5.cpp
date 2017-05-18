//
//  main.cpp
//  5.5
//
//  Created by 刘孟骁 on 2017/5/18.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
    
    void operator++(){
        x++;
        y++;
    }
    void operator++(int){
        x++;
        y++;
    }
    void operator--(){
        x--;
        y--;
    }
    void operator--(int){
        x--;
        y--;
    }
};
int main(int argc, const char * argv[]) {
    Point p(5,6);
    cout<<"p的值为：("<<p.getx()<<","<<p.gety()<<")"<<endl;
    p++;
    cout<<"p++的值为：("<<p.getx()<<","<<p.gety()<<")"<<endl;
    ++p;
    cout<<"++p的值为：("<<p.getx()<<","<<p.gety()<<")"<<endl;
    p--;
    cout<<"p--的值为：("<<p.getx()<<","<<p.gety()<<")"<<endl;
    --p;
    cout<<"--p的值为：("<<p.getx()<<","<<p.gety()<<")"<<endl;
    return 0;
}
