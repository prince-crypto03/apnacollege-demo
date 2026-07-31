#include<iostream>
using namespace std;
int main ()
{
    int cpfmarks = 70;
    int mathmarks = 80;


    cout<<"initial cpfmarks:"<<cpfmarks<<endl;

    cout<<"pre increment (++cpfmarks) :" <<++cpfmarks <<endl;
    cpfmarks =70;
    cout<<"pre decrement(--cpfmarks)    :"<<--cpfmarks <<endl;
    cpfmarks =70;
    cout<<"post increment(cpfmarks++)   :"<<cpfmarks++<<endl;
    cout<<"after increment   :"<<cpfmarks++<<endl;
    cpfmarks =70;
    cout<<"post decrement(cpfmarks--)  :"<<cpfmarks--<<endl;
    cout<<"after decrement :"<<cpfmarks--<<endl;

     cout<<"initial mathmarks:"<<mathmarks<<endl;

    cout<<"pre increment (++mathmarks) :" <<++mathmarks <<endl;
    mathmarks =80;
    cout<<"pre decrement(--mathmarks)    :"<<--mathmarks <<endl;
    mathmarks =80;
    cout<<"post increment(mathmarks++)   :"<<mathmarks++<<endl;
    cout<<"after increment   :"<<mathmarks++<<endl;
    mathmarks =80;
    cout<<"post decrement(mathmarks--)  :"<<mathmarks--<<endl;
    cout<<"after decrement :"<<mathmarks--<<endl;
    
    
    cpfmarks =70;
    mathmarks =80;
    
    
    
    int t1  = ++cpfmarks ;
    int t2  = cpfmarks++ ;
    int t3  = --mathmarks ;
    int t4  = ++mathmarks ;
    int t5  = mathmarks--;
     
     int result = t1 + t2 + t3 + t4 - t5;

    cout<<"result    :"<<result<<endl;
    cout<<"cpf final :"<<cpfmarks<<endl;
    cout<<"math final :"<<mathmarks<<endl;
    return 0;




}