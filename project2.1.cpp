#include <iostream>
#include<string>
using namespace std;
int main() 
  { 

string enrollment, student, branch, mobile ;
int semester;

    
    cout<<"****************************************"<<endl;
    cout<<"  STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"****************************************"<<endl;
    cout<<"enter enrollment number :";
    cin>> enrollment;
    cout<<"enter student name:";
    cin>> student ;
    cout<<"enter branch name:"<<endl;
    cin>>branch;
    cout<<"enter semester:";
    cin>>semester;
    cout<<"enter mobile number:";
    cin>>mobile ;

    cout<<"**********************************************"<<endl;
    cout<<"STUDENT INFORMAITION"<<endl;
    cout<<"**********************************************"<<endl;
    cout<< " enrollment number:"<<enrollment<<endl;
    cout<<" student name:"<<student<<endl;
    cout<<" branch name:"<<branch<<endl;
    cout<<" semester:"<<semester<<endl;
    cout<<" mobile number:"<<mobile<<endl;

    cout<<"********************************************:"<<endl;

    return 0;

}