//
//  main.cpp
//  3
//
//  Created by 刘孟骁 on 2017/5/11.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Mammal{
private:
    int age;
    int weight;
public:
    Mammal(){
        cout<<"Mammal constructor......"<<endl;
    }
    ~Mammal(){
        cout<<"Mammal destructor......"<<endl;
    }
    void set_age(int age){
        this->age=age;
    }
    void set_weight(int weight){
        this->weight=weight;
    }
    int get_age(){
        return age;
    }
    int get_weight(){
        return weight;
    }
    void speak(){
        cout<<"Mammal sound!"<<endl;
    }
};

class Dog:public Mammal{
private:
    string color;
public:
    Dog(int age,int weight,string color){
        set_age(age);
        set_weight(weight);
        this->color=color;
        cout<<"Dog constructor......"<<endl;
    }
    ~Dog(){
        cout<<"Dog destructor......"<<endl;
    }
    int getAge(){
        return get_age();
    }
    string getColor(){
        return color;
    }
    int getWeight(){
        return get_weight();
    }
    void wagtail(){
        cout<<"Tail wagging......"<<endl;
    }
};

int main(int argc, const char * argv[]) {
    Dog jack(2,20,"grown");
    jack.speak();
    jack.wagtail();
    cout<<"jack is "<<jack.getAge()<<" years old,"<<jack.getWeight()<<" pounds,"<<jack.getColor()<<"."<<endl;
    return 0;
}
