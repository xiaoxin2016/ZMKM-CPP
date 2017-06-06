//
//  main.cpp
//  7.2
//
//  Created by 刘孟骁 on 2017/6/6.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include<iostream> 
#include<fstream>
using namespace std;

int main(int argc, const char * argv[])
{
    ofstream out("score.txt");
    out<<"程序设计C++  90"<<endl;
    out.close();

    ifstream in("score.txt");
    if (!in){
        cout<<"读取文件失败!"<<endl;
        return -1;
    }
    for (int i=0; i<2; i++){
        string str;
        in>>str;
        cout<<str<<endl;
    }
    in.close();
    return 0;
}
