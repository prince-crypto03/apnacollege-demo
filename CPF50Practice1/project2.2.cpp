#include <iostream>
#include <string>
using namespace std;
int main()
{
    string enrollment,student,branch,semester,mobile;
    cout<<"**********************************"<<endl;
    cout<<" STDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"**********************************"<<endl;
    cout<<"Software Version: 1.1"<<endl;
    cout<<"Institute: CHARUSAT UNIVERSITY"<<endl;
    cout<<"Academic Year: 2026-27"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Student Registeration"<<endl;
    cout<<"------------------------------------------------------"<<endl;

    cout<<"Enter Enrollment Number :"<<endl;
    cin>> enrollment ;
    cout<<"Enter Student Name:"<<endl;
    cin>>student;
    cout<<"Enter Branch :"<<endl;
    cin>>branch;
    cout<<"Enter Semester :"<<endl;
    cin>>semester;
    cout<<"Enter Mobile Number :"<<endl;
    cin>>mobile;

    cout<<"--------------------------------------------------------"<<endl;
    cout<<"Student Information"<<endl;
    cout<<"--------------------------------------------------------"<<endl;

    cout<<"Enrollment Number :" <<enrollment<<endl;
    cout<<"Student Name :"<<student<<endl;
    cout<<"Branch :"<<branch<<endl;
    cout<<"Semester :"<<semester<<endl;
    cout<<"Mobile Number :"<<mobile<<endl;

    cout<<"--------------------------------------------------------"<<endl;

    return 0;


}