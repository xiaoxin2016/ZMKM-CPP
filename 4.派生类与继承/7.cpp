//
//  main.cpp
//  7
//
//  Created by 刘孟骁 on 2017/5/16.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Time{
protected:
    int hour;
    int minute;
    int second;
public:
    Time(int hour,int minute,int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    void display(){
        cout<<"出生时间："<<hour<<"时"<<minute<<"分"<<second<<"秒"<<endl;
    }
};

class Date{
protected:
    int year;
    int month;
    int day;
public:
    Date(int year,int month,int day){
        this->year=year;
        this->month=month;
        this->day=day;
    }
    void display(){
        cout<<"出生年月："<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
    }
};

class Birthtime:public Time,public Date{
protected:
    string name;
public:
    Brithtime(int year,int month,int day,int hour,int minute,int second,string name):Time(hour,minute,second),Date(year,month,day){
        this->name=name;
    }
    void display(){
        Time time(hour,minute,second);
        Date date(year,month,day);
        cout<<"姓名："<<name<<endl;
        date.display();
        time.display();
    }
};

int main(int argc, const char * argv[]) {
    Birthtime boy(2000,12,21,10,15,25,"皮皮");
    boy.display();
    return 0;
}
