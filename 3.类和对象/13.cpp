//
//  main.cpp
//  13
//
//  Created by 刘孟骁 on 2017/5/4.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Boat;
class Car{
public:
    int weight;
    Car(int weight){
        this->weight=weight;
    }
    friend int getTotalWeight(Car,Boat);
};

class Boat{
public:
    int weight;
    Boat(int weight){
        this->weight=weight;
    }
    friend int getTotalWeight(Car,Boat);
};

int getTotalWeight(Car c,Boat b){
    return c.weight+b.weight;
}

int main(int argc, const char * argv[]) {
    Car c(4);
    Boat b(5);
    cout<<getTotalWeight(c,b)<<endl;
    return 0;
}
