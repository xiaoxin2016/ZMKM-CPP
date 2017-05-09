//
//  main.cpp
//  1
//
//  Created by 刘孟骁 on 2017/5/9.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Document{
protected:
    string name;
public:
    Document(string name){
        this->name=name;
    }
    Document(){
    }
};

class Book:public Document{
private:
    int pageCount;
public:
    Book(string name,int number){
        this->name=name;
        pageCount=number;
    }
    void printNameOf(){
        cout<<"Name of book："<<name<<endl;
    }
};

int main(int argc, const char * argv[]) {
    Document a("Document1");
    Book b("Book1",100);
    b.printNameOf();
    return 0;
}
