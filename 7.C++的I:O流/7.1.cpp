//
//  main.cpp
//  7.1
//
//  Created by 刘孟骁 on 2017/6/6.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class point{
private:
    int x;
    int y;
public:
    friend ostream &operator << (ostream &,point &); //声明重载运算符“<<”
    friend istream &operator >> (istream &,point &); //声明重载运算符“>>”
};

ostream& operator << (ostream &output,point &p){
    output<<"("<<p.x<<","<<p.y<<")"<<endl;
    return output;
}

istream& operator >> (istream& input,point &p){
    input>>p.x>>p.y;
    return input;
}

int main(int argc, const char * argv[]) {
    point p1,p2;
    cin>>p1>>p2;
    cout<<p1<<p2;
    return 0;
}
