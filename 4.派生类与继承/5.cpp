//
//  main.cpp
//  5
//
//  Created by 刘孟骁 on 2017/5/11.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Employee{
protected:
    string name;
    int id;
};

class Manager:public Employee{
private:
    double sal;
public:
    Manager(string name,int id,double sal){
        this->name=name;
        this->id=id;
        this->sal=sal;
    }
    void show(){
        cout<<name<<','<<id<<endl;
        cout<<sal<<endl;
    }
};

class HourlyWorker:public Employee{
private:
    double wage;
    int hours;
public:
    HourlyWorker(string name,int id,double wage,int hours){
        this->name=name;
        this->id=id;
        this->wage=wage;
        this->hours=hours;
    }
    void show(){
        cout<<name<<','<<id<<endl;
        cout<<wage<<','<<hours<<endl;
    }
};

int main(int argc, const char * argv[]) {
    Manager mg("Tom",100,6000.0);
    HourlyWorker hw("Mike",1001,20.0,8);
    mg.show();
    hw.show();
    return 0;
}
