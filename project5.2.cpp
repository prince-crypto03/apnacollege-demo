#include<iostream>
#include<string>
#include<iomanip> 
using namespace std;
int main()
{

        string enrollment,name,branch,mobile;
        int semester;
        char choice='Y';

    cout<<"*************************************************************"<<endl;
    cout<<"                STUDENT MANGEMENT RECORD                     "<<endl;
    cout<<"*************************************************************"<<endl;
    while(choice=='Y' || choice=='y')
    {

     cout<<"Student Registration"<<endl;

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
    

    cout<<"Register Another Student (Y/N) :"<<endl;
    cin>>choice;
    
    

    cout<<"Enrollment Number :"<<enrollment<<endl;
    cout<<"Student Name :"<<name<<endl;
    cout<<"Branch :"<<branch<<endl;
    cout<<"Semester :"<<semester<<endl;
    cout<<"Mobile Number :"<<mobile<<endl;

    cout<<"Student Registration Completed Successfully"<<endl;
    cout<<"Register Another Student ? (Y/N) :"<<endl;
    cin>>choice;
    cout<<"Return to main menuS :"<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    }
    return 0;
    
}







