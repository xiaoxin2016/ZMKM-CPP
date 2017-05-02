//
//  main.cpp
//  6
//
//  Created by 刘孟骁 on 2017/5/2.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class cylinder{
private:
    double h;
    double r;
    double v;

public:
    void read(){
        cin>>r>>h;
    }
    void volume(){
        v=3.1415926*r*r*h;
        cout<<"volume is:  "<<v<<endl;
    }
};

int main(int argc, const char * argv[]) {
    cylinder c;
    c.read();
    c.volume();
    return 0;
}
