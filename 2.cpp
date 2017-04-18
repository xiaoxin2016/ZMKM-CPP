//
//  main.cpp
//  2
//
//  Created by Andy Liu on 2017/4/18.
//  Copyright © 2017年 Andy Liu. All rights reserved.
//

#include <iostream>
using namespace std;

class cal
{
    int a,b;
    char sign;
    
public:
    int read(){
        if(cin>>a>>sign>>b)
            return 1;
        else
            return 0;
    }
    
    int process(){
        switch (sign) {
                
            case '+':
                return a+b;
                break;
            case '-':
                return a-b;
                break;
            case '*':
                return a*b;
                break;
            case '/':
                return a/b;
                break;
                
            default:
                return -1;
                break;
        }
    }
    
    void print(){
        cout<<a<<sign<<b<<'='<<process()<<endl;
    }
    
};

int main(){
    
    int flag=0;
    while (flag==0){
        cal calone;
        if(calone.read()==0){
            flag=1;
            exit(0);
        }
        calone.print();
    }
    return 0;
}






