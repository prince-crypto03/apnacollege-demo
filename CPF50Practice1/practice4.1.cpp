#include<iostream>
#include<iomanip>
using namespace std;
int main () 

{ 
    float math;
    float cpf;
    float avaragemarks;
    float totalmarks;
    float percentage;



cout<<"mathmarks"<<endl;
cin>>math;
cout<<"cpfmarks"<<endl;
cin>>cpf;

cout<<"mathmarks :"<<math<<endl;
cout<<"cpfmarks :"<<cpf<<endl;

totalmarks = cpf+math;
avaragemarks = (math+cpf)/2;
percentage = ((math+cpf)/200)*100;
cout<<fixed<<setprecision(2);


cout<<"****************************************************************************"<<endl;

cout<<"Total marks :"<<totalmarks<<endl;
cout<<"Avaragemarks :"<<avaragemarks<<endl;
cout<<"Percentage :"<<percentage<<"%"<<endl;


cout<<"*******************RESULT*********************************"<<endl;

if (percentage >=35 )
{
cout<<"\nResult  :Pass"<<endl;
cout<<"\nCongratulation YOU Have Passed"<<endl;
}

else

 { 
    cout<<"\nResult :Fail"<<endl;
    cout<<"better luck next time"<<endl;
}


    return 0;



}
