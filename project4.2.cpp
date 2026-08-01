#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int semester;
    float mathmarks,physicsmarks,cpfmarks,totalmarks,averagemarks,percentage;
    string enrollment,name,branch,mobile,result,grade,remark;

    cout<<"*************************************************************"<<endl;
    cout<<"                STUDENT MANGEMENT RECORD                     "<<endl;
    cout<<"*************************************************************"<<endl;

    cout<<"Software Version : 1.2"<<endl;


    cout<<"--------------------------------------------------------------"<<endl;
    cout<<"Student Registration"<<endl;
    cout<<"--------------------------------------------------------------"<<endl;
    
    cout<<"Enter Enrollment Number :"<<endl;
    cin>>enrollment;
    cin.ignore();
    cout<<"Enter student Name :"<<endl;
    getline(cin,name);
    cout<<"Enter Branch :"<<endl;
    cin>>branch;
    cout<<"Enter Semester :"<<endl;
    cin>>semester;
    cout<<"Enter Mobile Number :"<<endl;
    cin>>mobile;

    cout<<"------------------------------------------------------------------"<<endl;
    cout<<"Academic Information"<<endl;
    cout<<"------------------------------------------------------------------"<<endl;

    cout<<"Enter Mathematics Marks :"<<endl;
    cin>>mathmarks;
    cout<<"Enter Physics Marks :"<<endl;
    cin>>physicsmarks;
    cout<<"Enter Progeramming Foundation Marks :"<<endl;
    cin>>cpfmarks;

    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Academic Summary"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;

    totalmarks =mathmarks+physicsmarks+cpfmarks;
    averagemarks= (mathmarks+physicsmarks+cpfmarks)/3;
    percentage= ((mathmarks+physicsmarks+cpfmarks)/300)*100;

    cout<<"Total Marks :"<<totalmarks<<endl;
    cout<<"Average Marks :"<<averagemarks<<endl;
    cout<<"Percentage :"<<percentage<<"%"<<endl;
    cout<<fixed<<setprecision(2);

    
        if (percentage>=90) {
            grade="O";
            remark="Outstanding";
            result ="pass";
        }
            else if (percentage>=80){
                grade="A+";
                remark="Exellent";
                result="pass";
            }
            else if (percentage>=70){
                grade="A";
                remark="Very Good";
                result="pass";
            }
            else if(percentage>=60){
                grade="B+";
                remark="Good";
                result="pass";
            }
            else if(percentage>=50){
                grade="B";
                remark="Satisfactory";
                result="pass";
            }
            else if (percentage >=40){
                grade="c";
                remark="Need Improvement";
                result="pass";
            }
            else {
                grade="F";
                remark="Failed";
                result="fail";
            }
    cout<<"-----------------------------------------------------------------------------"<<endl;
    cout<<"Academic Result "<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;

         cout<<"Result :"<<result<<endl;
         cout<<"Grade :"<<grade<<endl;
         cout<<"Performance :"<<remark<<endl;  


    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Student Information"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;

    cout<<"Enrollment Number :"<<enrollment<<endl;
    cout<<"Student Name :"<<name<<endl;
    getline(cin,name);
    cout<<"Branch :"<<branch<<endl;
    cout<<"Semester :"<<semester<<endl;
    cout<<"Mobile Number :"<<mobile<<endl;


}