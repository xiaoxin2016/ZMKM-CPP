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
    string stockcode;
    int quan;
    double price;
public:
    Stock(string na,int q=1000,double p=8.98){
        stockcode=na;
        quan=q;
        price=p;
    }
    void print(){
        cout<<stockcode<<endl;
        cout<<quan<<endl;
        cout<<price<<endl;
    }
};

int main(int argc, const char * argv[]) {
    Stock ob1("600001",3000,5.67);
    ob1.print();
    Stock ob2("600002");
    ob2.print();
    return 0;
}
