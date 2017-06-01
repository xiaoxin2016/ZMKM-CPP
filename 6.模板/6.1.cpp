//
//  main.cpp
//  6.1
//
//  Created by 刘孟骁 on 2017/6/1.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename data>
void show(data *array,int number){
    for(int i=0; i<number; i++){
        cout<<array[i]<<' ';
    }
    cout<<endl;
}

template <typename data>
void sort(data *array,int number) {
    data temp = 0.0;
    for (int i=0; i<number; i++) {
        for (int j=i+1; j<number; j++){
            if (array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }

        }
    }
}

int main(int argc, const char * argv[]) {
    int test1[]={21,23,13,42,58};
    float test2[]={102.3,45.6,763.29};
    show(test1,5);
    sort(test1,5);
    show(test1,5);
    show(test2,3);
    sort(test2,3);
    show(test2,3);
    return 0;
}
