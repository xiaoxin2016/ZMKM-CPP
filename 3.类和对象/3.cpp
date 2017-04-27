//
//  main.cpp
//  3
//
//  Created by 刘孟骁 on 2017/4/27.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Rectangle{
public:
    int length;
    int width;
    void read(){
        cin>>length>>width;
    }
    int getArea(){
        return abs(length*width);
    }
};

int main(int argc, const char * argv[]) {
    Rectangle rect;
    rect.read();
    cout<<"长为"<<rect.length<<"宽为"<<rect.width<<"的矩形面积为："<<rect.getArea()<<endl;
    return 0;
}
