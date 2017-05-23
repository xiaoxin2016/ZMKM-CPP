//
//  main.cpp
//  5.7
//
//  Created by 刘孟骁 on 2017/5/23.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Mammal{
public:
    Mammal(){
        cout<<"Mammal constructor..."<<endl;
    }
    virtual void speak(){
        //Nothing Here. Just to control format;
    }
    virtual ~Mammal(){
        cout<<"Mammal destructor..."<<endl;
    }
};
class Dog:public Mammal{
public:
    Dog(){
        cout<<"Dog constructor..."<<endl;
    }
    virtual void speak(){
        cout<<"Woof!"<<endl;
    }
    ~Dog(){
        cout<<"Dog destructor..."<<endl;
    }
    
};

int main(int argc, const char * argv[]) {
    Mammal * pDog=new Dog;
    pDog->speak();
    delete pDog;
    return 0;
}
