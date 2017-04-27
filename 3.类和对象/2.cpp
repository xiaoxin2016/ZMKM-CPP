//
//  main.cpp
//  2
//
//  Created by 刘孟骁 on 2017/4/27.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Rectangle{
private:
    int x1,y1;
    int x2,y2;
public:
    Rectangle(int a,int b,int c,int d){
        x1=a;
        y1=b;
        x2=c;
        y2=d;
    }
    int getArea(){
        return abs((x2-x1)*(y2-y1));
    }
};

int main(int argc, const char * argv[]) {
    Rectangle rect(100,80,200,40);
    cout<<"Area: "<<rect.getArea()<<endl;
    return 0;
}
