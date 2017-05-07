/*
 一个人可以有多个活期储蓄账户，一个活期储蓄账户包括账号（id）、余额（balance）、年利率（rate）等信息，还包括显示账户信息（show）、存款（deposit）、取款（withdraw）、结算利息（settle）等操作。为此，设计一个类SavingsAccount，将id，balance，rate均作为其数据成员，将show，deposit，withdraw，settle均作为其成员函数。
 
 无论是存款、取款还是结算利息，都需要修改当前的余额并且将余额的变动输出，这些公共操作由私有成员函数record来执行。
 
 实现该类的难点在于利息的计算。由于账户的余额是不断变化的，因此不能通过余额与年利率相乘的办法来计算年利，而是需要将一年当中每天的余额累积起来再除以一年的总天数，得到一个日均余额，再乘以年利率。为了计算余额的按日累计值，SavingsAccount类引入了私有数据成员lastDate，accumulation和私有成员函数accumulate。lastDate用来存储上一次余额变动的日期，accumulation用来存储上次计算利息以后直到最近一次余额变动时余额按日累加的值，accumulate成员函数用来计算截至指定日期的账户余额按日累积值。这样，当余额变动时，需要做的是将变动前的余额与该余额所持续的天数相乘，累加到accumulation中，再修改lastDate。
 
 为简便起见，该类中的所有日期均用一个整数来表示，该整数是一个以日为单位的相对日期，例如如果以开户日为1，那么开户日后的第3天就用4来表示，这样通过将两个日期相减就可以得到两个日期相差的天数，在计算利息时非常方便。
 
 设计并实现该类，并在主函数中实例化对象（建立账户），对账户进行存钱、取钱、计算利息等业务。
 */

//
//  main.cpp
//  BankAccount
//
//  Created by 刘孟骁 on 2017/5/6.
//  Copyright © 2017年 刘孟骁. All rights reserved.
//

#include <iostream>
using namespace std;

class SavingsAccount{
private:
    int id;
    double balance;
    double rate;
    int lastDate;
    double accumulation;
    int current_date;
    double average_balance;
    void accumulate(){
        accumulation+=(current_date-lastDate)*balance;
        lastDate=current_date;
    }
    double record(double change){
        balance+=change;
        cout<<"当前账户余额："<<balance<<endl;
        return balance;
    }
public:
    SavingsAccount(int id,double rate){
        this->id=id;
        this->rate=rate;
        balance=0;
        lastDate=1;
        accumulation=0;
    }
    void set_current_date(int x){        //仅用于初始化
        current_date=x;
    }
    void set_current_date(){
        cout<<"请输入您要前往的存款天数：";
        cin>>current_date;
    }
    void show(){
        cout<<"账号ID："<<id<<endl;
        cout<<"年利率："<<rate<<endl;
        cout<<"账户余额："<<balance<<endl;
    }
    void deposit(){
        double change;
        cout<<"请输入存款金额：";
        cin>>change;
        accumulate();
        record(change);
    }
    void withdraw(){
        double change;
        cout<<"请输入取款金额：";
        cin>>change;
        accumulate();
        record(-change);
    }
    void settle(){
        accumulation+=(current_date-lastDate)*balance;
        average_balance=accumulation/current_date;
        double change;
        change=average_balance*rate*(double(current_date)/365);
        record(change);
        accumulation=0;
    }
};

int main(int argc, const char * argv[]) {
    int operation;
    //初始化
    cout<<"欢迎光临银行，我们需要一些信息来建立您的个人档案。"<<endl;
    int number;
    double rate;
    cout<<"请提供一个ID号：";
    cin>>number;
    cout<<"请提供您的年利率：";
    cin>>rate;
    SavingsAccount account(number,rate);
    account.set_current_date(1);
    
meau:
    cout<<endl<<"欢迎光临银行，请问有什么可以帮到您？"<<endl;
    cout<<"0.时光机"<<endl;
    cout<<"1.查询"<<endl;
    cout<<"2.存款"<<endl;
    cout<<"3.取款"<<endl;
    cout<<"4.结算"<<endl;
    cout<<"我要：";
    cin>>operation;
    switch (operation) {
        case 0:
            account.set_current_date();
        case 1:
            account.show();
            break;
        case 2:
            account.deposit();
            break;
        case 3:
            account.withdraw();
            break;
        case 4:
            account.settle();
            cout<<endl<<"请问您是否离开银行？(Y/Any Key)"<<endl;
            char anwser;
            cin>>anwser;
            if (anwser=='Y'||anwser=='y')
                exit(0);
        default:
            break;
    }
    goto meau;
    return 0;
}
