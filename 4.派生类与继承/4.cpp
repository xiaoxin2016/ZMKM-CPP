//
//  main.cpp
//  4
//
//  Created by 刘孟骁 on 2017/5/11.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class building{
protected:
    string name;
    int floors;
    int areas;
};

class house:public building{
protected:
    int bedrooms;
    int bathroom;
public:
    house(string name,int floors,int areas,int bedrooms,int bathroom){
        this->name=name;
        this->floors=floors;
        this->areas=areas;
        this->bedrooms=bedrooms;
        this->bathroom=bathroom;
    }
    void print(){
        cout<<"建筑物名称："<<name<<"，层数："<<floors<<"，总面积："<<areas<<"平方米，卧室数："<<bedrooms<<"，浴室数"<<bathroom<<"。"<<endl;
    }
};

class office:public building{
protected:
    int offices;
    int meetingrooms;
public:
    office(string name,int floors,int areas,int offices,int meetingrooms){
        this->name=name;
        this->floors=floors;
        this->areas=areas;
        this->offices=offices;
        this->meetingrooms=meetingrooms;
    }
    void print(){
        cout<<"建筑物名称："<<name<<"，层数："<<floors<<"，总面积："<<areas<<"平方米，办公室数："<<offices<<"，会议室数"<<meetingrooms<<"。"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    house  myhouse("江山瑞城",3,200,5,2);
    office  myoffice("工科楼E",20,10000,2000,100);
    myhouse.print();
    myoffice.print();
    return 0;}
