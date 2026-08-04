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

    cout<<"Enter Number Of Subjects :"<<endl;
    cin>>totalsubjects;
    for(int i=1;i<=totalsubjects;i++)
    {
        cout<<"Enter Marks For Subject"<<i<<":" <<endl;
        cin>>marks;

        totalmarks = totalmarks+marks;
        averagemarks = totalmarks/totalsubjects;
        percentage = (totalmarks/(totalsubjects*100))*100;

    }

        cout<<"Total Marks :"<<totalmarks<<endl;
        cout<<"Average Marks :"<<averagemarks<<endl;
        cout<<"Percentage :"<<percentage<<"%"<<endl;
        cout<<fixed<<setprecision(2);

        if (marks>=90){
            result="pass";
            grade="O";
            remark="Outstanding";

        }
       
          else if(marks>=80){
            result="pass";
            grade="A+";
            remark="Exellent";
          }
          
          else if (marks>=70){
            result="pass";
            grade="A";
            remark="Very Good";
          }
          else if (marks>=60){
            result="pass";
            grade="B+";
            remark="Good";
          }
          else if (marks>=50){
            result="pass";
            grade="B";
            remark="Average";
          }
          else if (marks>=40){
            result="pass";
            grade="C";
            remark="Below Average";
          }
          else {
            result="fail";
            grade="F";
            remark="Fail";
          }

        cout<<"-----------------------------------------------------------------------------"<<endl;
        cout<<"Academic Result "<<endl;
        cout<<"-----------------------------------------------------------------------------"<<endl;

        cout<<"Result :"<<result<<endl;
        cout<<"Grade :"<<grade<<endl;
        cout<<"Performance :"<<remark<<endl;
    

    return 0;

    

}