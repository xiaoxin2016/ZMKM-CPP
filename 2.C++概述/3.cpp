//
//  main.cpp
//  3
//
//  Created by Andy Liu on 2017/4/20.
//  Copyright © 2017年 Andy Liu. All rights reserved.
//

#include <iostream>
#include<iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int *p;
    p=new int[21];
    
    p[1]=1;
    p[2]=1;
    cout<<setw(10)<<p[1]<<setw(10)<<p[2];
    

    for (int i=3; i<=20; i++){
        p[i]=p[i-1]+p[i-2];
        cout<<setw(10)<<p[i];
        if (i%5==0)
            cout<<endl;
    }
    
    return 0;
}
