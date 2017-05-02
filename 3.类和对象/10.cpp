//
//  main.cpp
//  10
//
//  Created by 刘孟骁 on 2017/5/2.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class student{
private:
    int number;
    string name;
    double deg;
    static double grade;
    static int count;
public:
    student(int number,string name,double deg){
        this->number=number;
        this->name=name;
        this->deg=deg;
        this->grade+=deg;
        count++;
    }
    static double get_avg(){
        return grade/count;
    }
    static int get_count(){
        return count;
    }
    void print(){
        cout<<number<<"   "<<name<<"   "<<deg<<endl;
    }
};
double student::grade=0;
int student::count=0;

int main(int argc, const char * argv[]) {
    student s1(201601,"john",85),s2(201602,"mike",90),s3(201603,"june",95);
    s1.print();
    s2.print();
    s3.print();
    cout<<"共有"<<student::get_count()<<"位学生，平均成绩为："<<student::get_avg()<<endl;
    return 0;
}
