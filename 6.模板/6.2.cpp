//
//  main.cpp
//  6.2
//
//  Created by 刘孟骁 on 2017/6/1.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//
//  提交在线评测请删除注释行前面的注释符号并将其上一行注释掉。
//  Xcode中定义的array会同系统库函数发生二义性冲突。
//

#include <iostream>
using namespace std;

template <typename data>
class Array{
//class array{
private:
    data a[10];
    int number;
public:
    Array(data *ar,int num){
    //Array(data *ar,int num){
        number=num;
        for (int i=0; i<num; i++){
            a[i]=ar[i];
        }
    }
    void sort();
    void show();
   };

template <typename data>
void Array<data>::show(){
//void array<data>::show(){
    for(int i=0; i<number; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}


template <typename data>
void Array<data>::sort() {
//void array<data>::sort() {
    data temp = 0.0;
    for (int i=0; i<number; i++) {
        for (int j=i+1; j<number; j++){
            if (a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int test1[]={21,23,13,42,58};
    float test2[]={102.3,45.6,763.29};
    Array<int>  a1(test1,5);
    //array<int>  a1(test1,5);
    Array<float>  a2(test2,3);
    //array<float>  a2(test2,3);
    a1.show();
    a1.sort();
    a1.show();
    a2.show();
    a2.sort();
    a2.show();
    return 0;
}
