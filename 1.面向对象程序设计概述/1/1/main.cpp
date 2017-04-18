//
//  main.cpp
//  1
//
//  Created by Andy Liu on 2017/4/18.
//  Copyright © 2017年 Andy Liu. All rights reserved.
//

#include <iostream>
using namespace std;

class date
{
    int year,month,day;
public:
    void setdate(int yy,int mm,int dd)
    {year=yy;month=mm;day=dd;}
    void showdate()
    {cout<<year<<'-'<<month<<'-'<<day<<endl;}
};

int main()
{
    date today;
    int yy,mm,dd;
    cin>>yy>>mm>>dd;
    today.setdate(yy,mm,dd);
    today.showdate();
    return 0;
}
