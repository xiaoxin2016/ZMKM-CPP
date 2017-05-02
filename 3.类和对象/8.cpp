//
//  main.cpp
//  8
//
//  Created by 刘孟骁 on 2017/5/2.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class book{
private:
    int qu;
    int price;
public:
    book(int read){
        qu=read;
        price=qu*10;
    }
    void print(){
        cout<<"qu*price="<<qu*price<<endl;
    }
};
int main(int argc, const char * argv[]) {
    book b[5]={6,7,8,9,10};
    book *p=b+4;
    int flag=5;
    while (flag){
        p->print();
        p--;
        flag--;
    }
    return 0;
}
