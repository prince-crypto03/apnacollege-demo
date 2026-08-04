#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int marks,totalsubjects;
    float totalmarks,averagemarks,percentage;
    string result,grade,remark,subjectName;

    cout<<"*************************************************************"<<endl;
    cout<<"                STUDENT MANGEMENT RECORD                     "<<endl;
    cout<<"*************************************************************"<<endl;

     cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Academic Summary"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;

    cout<<"Enter number of Subjects :"<<endl;
    cin>>totalsubjects;
    for(int i=1;i<=totalsubjects;i++)
    {


        cout<<"Enter marks "<<i <<":"<<endl;
        cin>>marks;
        totalmarks += marks;
    }
    
        averagemarks= totalmarks/totalsubjects;
        percentage= (totalmarks/(totalsubjects*100))*100;
    


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

         return 0;
        }

    