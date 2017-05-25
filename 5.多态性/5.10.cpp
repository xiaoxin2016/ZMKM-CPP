//
//  main.cpp
//  5.10
//
//  Created by 刘孟骁 on 2017/5/25.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class list{
public:
    list *head;
    list *tail;
    list *next;
    int num;
    list(){
        head=tail=next=NULL;
    }
    virtual void store(int inc)=0;
    virtual int retrieve()=0;
    virtual ~list(){
        //Just Remove Warning.
    }
};
class stack:public list{
public:
    void store(int inc){
        list *item;
        item=new stack;
        if(!item){
            cout<<"申请动态空间错误"<<endl;
            exit(1);
        }
        item->num=inc;
        if(head){
            item->next=head;
        }
        head=item;
        if(!tail)
            tail=head;
    }
    int retrieve(){
        int i;
        list *p;
        if (!head){
            cout<<"链表为空"<<endl;
            return 0;
        }
        i=head->num;
        p=head;
        head=head->next;
        delete p;
        return i;
    }
};

int main(int argc, const char * argv[]) {
    list *p;
    stack s_ob;
    p=&s_ob;
    p->store(1);
    p->store(2);
    p->store(3);
    cout<<"stack:";
    cout<<p->retrieve();
    cout<<p->retrieve();
    cout<<p->retrieve();
    cout<<endl;
    return 0;
}
