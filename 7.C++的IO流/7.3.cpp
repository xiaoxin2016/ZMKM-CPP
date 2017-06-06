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
    ofstream out("text.dat",ios::binary);
    if (!out){
        cout<<"Error!"<<endl;
        exit(-1);
    }
    char str1[]="I am a student.";
    char str2[]="I am a college student.";
    out.write(str1, sizeof(str1));
    out.write(str2, sizeof(str2));
    out.close();
    
    ifstream in("text.dat",ios::binary);
    if (!in){
        cout<<"Error!"<<endl;
        exit(-1);
    }
    in.read(str1, sizeof(str1));
    cout<<str1<<endl;
    in.read(str2, sizeof(str2));
    cout<<str2<<endl;
    in.close();
    
    return 0;
}
