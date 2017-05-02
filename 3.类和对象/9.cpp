//
//  main.cpp
//  9
//
//  Created by 刘孟骁 on 2017/5/2.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Stock{
private:
    char stockcode[10];
    int quan;
    double price;
public:
    Stock(char na[],int q=1000,double p=8.98){
        strcpy(this->stockcode,na);
        this->quan=q;
        this->price=p;
    }
    void print(){
        cout<<stockcode<<endl;
        cout<<quan<<endl;
        cout<<price<<endl;
    }
};

int main(int argc, const char * argv[]) {
    Stock ob1("600001",3000,5.67);
    //Xcode Waring: ISO C++11 does not allow conversion form string literal to 'char *'
    ob1.print();
    Stock ob2("600002");
    //Xcode Waring: ISO C++11 does not allow conversion form string literal to 'char *'
    ob2.print();
    return 0;
}
