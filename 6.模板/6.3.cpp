//
//  main.cpp
//  6.3
//
//  Created by 刘孟骁 on 2017/6/1.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

template <typename data>
class Array{
private:
    data a[10];
    int number;
public:
    Array(data *ar,int num){
        number=num;
        for (int i=0; i<num; i++){
            a[i]=ar[i];
        }
    }
    void sort();
    void disp();
    int seek(data n);
};

template <typename data>
void Array<data>::disp(){
    for(int i=0; i<number; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}


template <typename data>
void Array<data>::sort() {
    data temp = 0.0;
    for (int i=0; i<number; i++) {
        for (int j=i+1; j<number; j++){
            if (a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

template <typename data>
int Array<data>::seek(data n){
    for(int i=0; i<number; i++){
        if(a[i]==n)
            return i;
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    int a[]={6,3,8,1,9,4,7,5,2};
    double b[]={2.3,6.1,1.5,8.4,6.7,3.8};
    Array<int>arr1(a,9);
    Array<double>arr2(b,6);
    cout<<" arr1:"<<endl;
    cout<<" 原序列:"; arr1.disp();
    cout<<" 8在arr1中的位置:"<<arr1.seek(8)<<endl;
    arr1.sort();
    cout<<" 排序后:"; arr1.disp();
    cout<<"arr2:"<<endl;
    cout<<" 原序列:"; arr2.disp();
    cout<<" 8.4在arr2中的位置:"<<arr2.seek(8.4)<<endl;
    arr2.sort();
    cout<<" 排序后:"; arr2.disp(); 
    return 0;
}
