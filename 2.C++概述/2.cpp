//
//  main.cpp
//  2
//
//  Created by Andy Liu on 2017/4/20.
//  Copyright © 2017年 Andy Liu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int sroot(int n){
    return sqrt(double(n));
}

long int sroot(long int n){
    return sqrt(double(n));
}

double sroot(double n){
    return sqrt(double(n));
}

int main(int argc, const char * argv[]) {
    int a;
    long int b;
    double c;
    
    cin>>a>>b>>c;
    cout<<sroot(a)<<','<<sroot(b)<<','<<sroot(c)<<endl;
    
    return 0;
}
