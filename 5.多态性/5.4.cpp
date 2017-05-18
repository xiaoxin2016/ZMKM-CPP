//
//  main.cpp
//  5.4
//
//  Created by 刘孟骁 on 2017/5/18.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Array{
private:
    int ar[2][3];
public:
    Array(int a,int b,int c,int d,int e,int f){
        ar[0][0]=a;
        ar[0][1]=b;
        ar[0][2]=c;
        ar[1][0]=d;
        ar[1][1]=e;
        ar[1][2]=f;
    }
    Array(){
        for (int i=0; i<2; i++){
            for (int j=0; j<3; j++){
                ar[i][j]=0;
            }
        }
    }
    void get_array(){
        cout<<"please input 2*3 dimension data:"<<endl;
        for (int i=0; i<2; i++){
            for (int j=0; j<3; j++){
                cin>>ar[i][j];
            }
        }
    }
    void display(){
        for (int i=0; i<2; i++){
            for (int j=0; j<3; j++){
                printf("%5d",ar[i][j]);
            }
            putchar('\n');
        }
    }
    friend Array operator+(Array &X,Array &Y);
    friend Array operator-(Array &X,Array &Y);
};

Array operator+(Array &X,Array &Y){
    Array temp;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            temp.ar[i][j]=X.ar[i][j]+Y.ar[i][j];
        }
    }
    return temp;
}
Array operator-(Array &X,Array &Y){
    Array temp;
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            temp.ar[i][j]=X.ar[i][j]-Y.ar[i][j];
        }
    }
    return temp;
}

int main(int argc, const char * argv[]) {
    Array X(1,2,3,4,5,6);
    Array Y;
    Y.get_array();
    Array Z;
    cout<<"Display object X"<<endl;
    X.display();
    cout<<"Display object Y"<<endl;
    Y.display();
    cout<<"Display object Z=X+Y"<<endl;
    Z=X+Y;
    Z.display();
    cout<<"Display object Z=X-Y"<<endl;
    Z=X-Y;
    Z.display();
    return 0;
}
