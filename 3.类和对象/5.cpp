//
//  main.cpp
//  5
//
//  Created by 刘孟骁 on 2017/4/27.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Tree{
private:
    int ages;
public:
    Tree(int ages){
        this->ages=ages;
    }
    void age(){
        cout<<"这棵树的年龄为"<<ages<<endl;
    }
    void grow(int inc){
        ages+=inc;
    }
};

int main(int argc, const char * argv[]) {
    Tree t(12);
    t.age();
    t.grow(4);
    t.age();
    return 0;
}
