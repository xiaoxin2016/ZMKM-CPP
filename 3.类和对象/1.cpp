//
//  main.cpp
//  1
//
//  Created by 刘孟骁 on 2017/4/27.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Dog{
private:
    int age;
    int weight;
public:
    Dog(int age,int weight){
        this->age=age;
        this->weight=weight;
    }
    int getAge(){
        return age;
    }
    int getWeight(){
        return weight;
    }
    void setAge(int age){
        this->age=age;
    }
    void setWeight(int weight){
        this->weight=weight;
    }
};

int main(int argc, const char * argv[]) {
    Dog Jack(2,10);
    cout<<"Jack is a Dog who is ";
    cout<<Jack.getAge()<<" years old and "<<Jack.getWeight()<<" pounds weight"<<endl;
    Jack.setAge(7);
    Jack.setWeight(20);
    cout<<"Now Jack is ";
    cout<<Jack.getAge()<<" years old and "<<Jack.getWeight()<<" pounds weight."<<endl;
    return 0;
}
