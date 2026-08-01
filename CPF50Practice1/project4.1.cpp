#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{

       string enrollment,name,branch,mobile;
       int semester;
       float mathmarks,physicsmarks,cpfmarks;
       float totalmarks,averagemarks,percentage;


    cout<<"********************************************************"<<endl;
    cout<<" STUDENT MANAGEMENT SYSTEM"<<endl;
    cout<<"********************************************************"<<endl;
   
    cout<<"Software Version : 1.2"<<endl;

    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Student Registration"<<endl;
    cout<<"-------------------------------------------------------"<<endl;

    cout<<"Enter Enrollment Number :"<<endl;
    cin>> enrollment;
    cin.ignore();
    cout<<"Enter Student Name : "<<endl;
    getline(cin,name);
    cout<<"Enter Branch Name : "<<endl;
    cin>> branch;
    cout<<"Enter Semester :"<<endl;
    cin>> semester;
    cout<<"Enter Mobile Number :"<<endl;
    cin>> mobile;

    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"Academic Information"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;

    cout<<"Enter Mathmetics Marks               :"<<endl;
    cin>>mathmarks;
    cout<<"Enter Physics Marks                  :"<<endl;
    cin>>physicsmarks;
    cout<<"Enter Programming Foundation Marks   :"<<endl;
    cin>>cpfmarks;

    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"   Academic Summary"<<endl;
    cout<<"---------------------------------------------------------------"<<endl;

       totalmarks= mathmarks+physicsmarks+cpfmarks;
       averagemarks= totalmarks/3.0;
       percentage=(totalmarks/300.0)*100;
       cout<< fixed << setprecision(2);


       cout<<"Total marks    :"<<totalmarks<<endl;
       cout<<"Average marks  :"<<averagemarks<<endl;
       cout<<"Percentage     :"<<percentage <<"%"<<endl;

       cout<<"------------------------------------------------------------------"<<endl;
       cout<<"   Academic Summary" <<endl;
       cout<<"------------------------------------------------------------------"<<endl;


    

       if (percentage >=35.0)
       { cout<<"\nResult :pass"<<endl;

        cout<<"\nCongratulation! You have Successfuiil Passed."<<endl;
    }
      else { cout<<"\nResult :FAIL"<<endl;
        cout<<"\nBetter Luck Next Time. You Have Failed."<<endl;
    }
 
       cout<<"-------------------------------------------------------------------"<<endl;
       cout<<"Student Information"<<endl;
       cout<<"-------------------------------------------------------------------"<<endl;
       
       cout<<"Enrollmet Number :"<<enrollment<<endl;
       cout<<"Student Name     :"<<name<<endl;
       cout<<"Branch           :"<<branch<<endl;
       cout<<"Semester         :"<<semester<<endl;
       cout<<"Mobile Number    :"<<mobile<<endl;
       cout<<"---------------------------------------------------------------------------"<<endl;
       
       return 0;

    



}
