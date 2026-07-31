#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Variables for Student Details
    string enroll, name, branch, mobile;
    int sem;
    
    // Variables for Marks
    float math, phy, cpf, total, avg, per;
    
    // Control variables
    int choice;
    bool registered = false;
    bool marksEntered = false;

    while (true) {
        cout << "\n------------------------------------------------------------" << endl;
        cout << "                        MAIN MENU                           " << endl;
        cout << "------------------------------------------------------------" << endl;
        cout << "1. Register New Student" << endl;
        cout << "2. Display Student Record" << endl;
        cout << "3. Enter Student Marks" << endl;
        cout << "4. Display Academic Result" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nStudent Registration" << endl;
                cout << "------------------------------------------------------------" << endl;
                cout << "Enrollment Number : "; cin >> enroll;
                cout << "Student Name      : "; cin.ignore(); getline(cin, name);
                cout << "Branch            : "; cin >> branch;
                cout << "Semester          : "; cin >> sem;
                cout << "Mobile Number     : "; cin >> mobile;
                registered = true;
                cout << "\nStudent Registered Successfully." << endl;
                break;

            case 2:
                if (!registered) {
                    cout << "\nError: Please register a student first (Option 1)." << endl;
                } else {
                    cout << "\nStudent Record" << endl;
                    cout << "------------------------------------------------------------" << endl;
                    cout << "Enrollment Number : " << enroll << endl;
                    cout << "Student Name      : " << name << endl;
                    cout << "Branch            : " << branch << endl;
                    cout << "Semester          : " << sem << endl;
                    cout << "Mobile Number     : " << mobile << endl;
                }
                break;

            case 3:
                if (!registered) {
                    cout << "\nError: Please register a student first." << endl;
                } else {
                    cout << "\nEnter Student Marks" << endl;
                    cout << "------------------------------------------------------------" << endl;
                    cout << "Mathematics Marks                : "; cin >> math;
                    cout << "Physics Marks                    : "; cin >> phy;
                    cout << "Computer Programming Foundation  : "; cin >> cpf;
                    
                    total = math + phy + cpf;
                    avg = total / 3.0;
                    per = total / 300.0 * 100.0;
                    marksEntered = true;
                    cout << "\nMarks Entered Successfully." << endl;
                }
                break;

            case 4:
                if (!marksEntered) {
                    cout << "\nError: Please enter student marks first (Option 3)." << endl;
                } else {
                    cout << "\n************************************************************" << endl;
                    cout << "                STUDENT RECORD MANAGEMENT SYSTEM            " << endl;
                    cout << "************************************************************" << endl;
                    cout << "Academic Summary" << endl;
                    cout << "------------------------------------------------------------" << endl;
                    cout << "Total Marks    : " << total << endl;
                    cout << fixed << setprecision(2);
                    cout << "Average Marks  : " << avg << endl;
                    cout << "Percentage     : " << per << "%" << endl;
                    cout << "------------------------------------------------------------" << endl;
                    cout << "Academic Result" << endl;
                    cout << "------------------------------------------------------------" << endl;
                    
                    string result = (per >= 40) ? "PASS" : "FAIL";
                    string grade, remark;

                    if (per >= 90) { grade = "O"; remark = "Outstanding"; }
                    else if (per >= 80) { grade = "A+"; remark = "Excellent"; }
                    else if (per >= 70) { grade = "A"; remark = "Very Good"; }
                    else if (per >= 60) { grade = "B+"; remark = "Good"; }
                    else if (per >= 50) { grade = "B"; remark = "Satisfactory"; }
                    else if (per >= 40) { grade = "C"; remark = "Needs Improvement"; }
                    else { grade = "F"; remark = "Failed"; }

                    cout << "Result         : " << result << endl;
                    cout << "Grade          : " << grade << endl;
                    cout << "Performance    : " << remark << endl;
                    
                    if (result == "PASS") {
                        cout << "\nCongratulations! You have successfully passed." << endl;
                    }
                }
                break;

            case 5:
                cout << "\nThank You..." << endl;
                return 0;

            default:
                cout << "\nInvalid choice, please try again." << endl;
        }
    }
    return 0;
}