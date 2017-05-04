//
//  main.cpp
//  11
//
//  Created by 刘孟骁 on 2017/5/4.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class Pool{
private:
	double r;
	double s_in;
	double s_out;
public:
	void read_r(){
		cout<<"Enter the radius of the pool:"<<endl;
		cin>>r;
	}
	void cal_s_out(){
		s_out=2*3.14*(r+3)*35;
		cout<<"Fencing Cost is $"<<s_out<<endl;
	}
	void cal_s_in(){
		s_in=(3.14*(r+3)*(r+3)-3.14*r*r)*20;
		cout<<"Concrete Cost is $"<<s_in<<endl;
	}

};

int main(int argc, const char * argv[]) {
	Pool pool1;
	pool1.read_r();
	pool1.cal_s_out();
	pool1.cal_s_in();
	return 0;
}