//
//  main.cpp
//  6
//
//  Created by 刘孟骁 on 2017/5/16.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class cpeople{
protected:
    string name;
    string sex;
    int age;
};

class cstudent:virtual public cpeople{
protected:
    string number;
    int entrance_time;
    int grade;
public:
    cstudent(string name,string sex,int age,string number,int grade){
        this->name=name;
        this->sex=sex;
        this->age=age;
        this->number=number;
        this->grade=grade;
    }
    void show(){
        cout<<"姓名："<<name<<"，性别："<<sex<<"，年龄："<<age<<"，学号："<<number<<"，成绩："<<grade<<"。"<<endl;
    }
};

class cteacher:virtual public cpeople{
protected:
    string position;
    string department;
    int work_time;
public:
    cteacher(string name,string sex,int age,string position,string department){
        this->name=name;
        this->sex=sex;
        this->age=age;
        this->position=position;
        this->department=department;
    }
    void show(){
        cout<<"姓名："<<name<<"，性别："<<sex<<"，年龄："<<age<<"，职务："<<position<<"，部门："<<department<<"。"<<endl;
    }
    
};

class cgradute:virtual public cstudent{
protected:
    string direction;
    string teacher;
public:
    cgradute(string name,string sex,int age,string direction,string teacher,string number,int entrance_time):cstudent(name,sex,age,number,entrance_time){
        this->name=name;
        this->sex=sex;
        this->age=age;
        this->direction=direction;
        this->teacher=teacher;
    }
    void show(){
        cout<<"姓名："<<name<<"，性别："<<sex<<"，年龄："<<age<<"，学号："<<number<<"，成绩："<<grade<<"，方向："<<direction<<"，导师："<<teacher<<"。"<<endl;
    }

};

class cgraonwork:public cteacher,public cgradute{
public:
    cgraonwork(string name,string sex,int age,string direction,string teacher,string number,int entrance_time,string position,string department):cstudent(name,sex,age,number,entrance_time),cteacher(name,sex,age,position,department),cgradute(name,sex,age,direction,teacher,number,entrance_time){
    }
    void show(){
        cout<<"姓名："<<name<<"，性别："<<sex<<"，年龄："<<age<<"，学号："<<number<<"，成绩："<<grade<<"，方向："<<direction<<"，导师："<<teacher<<"，职务："<<position<<"，部门："<<department<<"。"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    cstudent c("小明","男",20,"20160608",90);
    c.show();
    cteacher t("老王","男",55,"系主任","软件工程");
    t.show();
    cgradute g("小红","女",26,"计算机应用","李导","20120607",98);
    g.show();
    cgraonwork w("小东","男",35,"通信工程","梁导","20100606",100,"副主任","通信工程");
    w.show();
    return 0;
}
