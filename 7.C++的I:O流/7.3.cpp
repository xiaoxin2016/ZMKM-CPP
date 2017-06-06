//
//  main.cpp
//  7.3
//
//  Created by 刘孟骁 on 2017/6/6.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, const char * argv[])
{
    fstream write;
    write.open("text.dat",ios::out);
    if (!write){
        cout<<"Error!"<<endl;
        exit(-1);
    }
    write<<"I am a student."<<endl;
    write<<"I am a college student."<<endl;
    write.close();
    
    fstream read;
    read.open("text.dat",ios::in);
    if (!read){
        cout<<"Error!"<<endl;
        exit(-1);
    }
    for (int i=0;i<2;i++){
        char str[50];
        read.getline(str,sizeof(str));
        cout<<str<<endl;
    }
    read.close();
    return 0;
}
