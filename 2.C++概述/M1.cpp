//
//  main.cpp
//  M1
//
//  Created by Andy Liu on 2017/4/20.
//  Copyright © 2017年 Andy Liu. All rights reserved.
//

/* 
 更多练习.1
 问题描述：编写C++风格的程序，用二分法求解f(x)=0的根。
 f(x)=2*x^3-4*x^2+3*x-6
 
*/

#include <iostream>
#include <cmath>
using namespace std;

inline double Function (double x){
    return 2*pow(x,3)-4*pow(x,2)+3*x-6;
}

int main(int argc, const char * argv[]) {
    double left,right;
    cin>>left>>right;
    
    double middle=0.5*(left+right);
    
    while (fabs(left-middle)>1e-6||fabs(right-middle)>1e-6){
        
        middle=0.5*(left+right);
        
        if (Function(left)*Function(middle)<0)
            right=middle;
        else
            left=middle;
    }
    
    cout<<middle<<endl;
    
    return 0;
}
