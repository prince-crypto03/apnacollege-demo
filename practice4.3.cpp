#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main ()
{
  int semester,choice;
  float mathmarks,physicsmarks,cpfmarks,totalmarks,averagemarks,percentage;
  string enrollment,name,branch,mobile;
  do  {
  cout<<"1.student details"<<endl;
  cout<<"2.student registration"<<endl;
  cout<<"3.student marks"<<endl;
cout<<"Enter your choice (1-3): "<<endl;
cin>>choice;
cout<<"Enter your choice (1-3): "<<choice<<endl;
switch(choice) {
  case 1:

  cout<<"*************************************************************"<<endl;
  cout<<"                STUDENT MANGEMENT RECORD                     "<<endl;
  cout<<"*************************************************************"<<endl;

 cout<<" student details"<<endl;

  cout<<"emter Enrollment Number :"<<endl;
  cin>>enrollment;
  cout<<"Enter Student Name :"<<endl;
    cin>>name;
    cout<<"Enter Branch :"<<endl;
    cin>>branch;
    cout<<"Enter Semester :"<<endl;
    cin>>semester;
    cout<<"Enter Mobile Number :"<<endl;
    cin>>mobile;
    break;
 case 2:
    cout<<"-------------------Student Registration--------------------------------------------"<<endl;
    cout<<"Enrollment Number :"<<enrollment<<endl;
    cout<<"Student Name :"<<name<<endl;
    cout<<"Branch :"<<branch<<endl;
    cout<<"Semester :"<<semester<<endl;
    cout<<"Mobile Number :"<<mobile<<endl;

    cout<<"Student Registration Completed Successfully"<<endl;
    break;

case 3:
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"Academic Information"<<endl;
    cout<<"------------------------------------------------------------------------------"<<endl;

    cout<<"Enter Student Marks :"<<endl;

    cout<<"Enter Mathematics Marks :"<<endl;
    cin>>mathmarks;
    cout<<"Enter Physics Marks :"<<endl;
    cin>>physicsmarks;
    cout<<"Enter Progeramming Foundation Marks :"<<endl;
    cin>>cpfmarks;

    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Academic result"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;

    totalmarks =mathmarks+physicsmarks+cpfmarks;
    averagemarks= (mathmarks+physicsmarks+cpfmarks)/3;
    percentage= ((mathmarks+physicsmarks+cpfmarks)/300)*100;

    cout<<"Total Marks :"<<totalmarks<<endl;
    cout<<"Average Marks :"<<averagemarks<<endl;
    cout<<"Percentage :"<<percentage<<endl;
break; 
}
}  while(choice !=3);
    return 0;
}



