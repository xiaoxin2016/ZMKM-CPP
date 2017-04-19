//
//  main.cpp
//  1
//
//  Created by Andy Liu on 2017/4/20.
//  Copyright © 2017年 Andy Liu. All rights reserved.
//

#include <iostream>
using namespace std;

class ChangeMoney {
    int yuan;
    int one,two,five;
    int count;
    
public:
    void Read (){
        cin>>yuan;
    }
    
    void process(){
        count=0;
        for (int i=0; i<=yuan*20; i++) {
            for (int j=0; j<=yuan*50; j++)
                for (int k=0; k<=yuan*100; k++)
                    if (5*i+2*j+k==yuan*100)
                        count++;
        }
    }
    
    void show() {
        cout<<"将"<<yuan<<"元人民币兑换成1、2、5分的硬币，共有"<<count<<"种换法。"<<endl;

    }
};

int main(int argc, const char * argv[]) {
    ChangeMoney Test;
    Test.Read();
    Test.process();
    Test.show();
    return 0;
}
