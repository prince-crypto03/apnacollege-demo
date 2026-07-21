#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displayTitle(ostream &out) {
    out << "********************************************\n";
    out << "  STUDENT RECORD MANAGEMENT SYSTEM\n";
    out << "********************************************\n\n";
}

void displayStudentInfo(ostream &out, const string &enrollment,
                        const string &name, const string &branch,
                        int semester, const string &mobile) {
    out << "------------------------------------------\n";
    out << "Student Information\n";
    out << "------------------------------------------\n";
    out << "Enrollment Number : " << enrollment << "\n";
    out << "Student Name : " << name << "\n";
    out << "Branch : " << branch << "\n";
    out << "Semester : " << semester << "\n";
    out << "Mobile Number : " << mobile << "\n";
    out << "------------------------------------------\n";
}

int main() {
    string enrollment, name, branch, mobile;
    int semester;

    displayTitle(cout);

    cout << "Enter Enrollment Number : ";
    getline(cin, enrollment);

    cout << "Enter Student Name : ";
    getline(cin, name);

    cout << "Enter Branch : ";
    getline(cin, branch);

    cout << "Enter Semester : ";
    cin >> semester;
    cin.ignore();

    cout << "Enter Mobile Number : ";
    getline(cin, mobile);

    cout << "\n";

    // Validation
    if (enrollment.empty()) {
        cout << "Error: Invalid Enrollment Number\n";
        return 1;
    }

    if (name.empty()) {
        cout << "Error Message: Student Name cannot be blank\n";
        return 1;
    }

    if (semester < 1 || semester > 8) {
        cout << "Invalid Semester\n";
        return 1;
    }

    cout << "Record Accepted\n\n";

    displayStudentInfo(cout, enrollment, name, branch, semester, mobile);

    // Save output to file
    ofstream outFile("student_record.txt");
    if (outFile.is_open()) {
        displayTitle(outFile);
        outFile << "Enter Enrollment Number : " << enrollment << "\n";
        outFile << "Enter Student Name : " << name << "\n";
        outFile << "Enter Branch : " << branch << "\n";
        outFile << "Enter Semester : " << semester << "\n";
        outFile << "Enter Mobile Number : " << mobile << "\n\n";
        displayStudentInfo(outFile, enrollment, name, branch, semester, mobile);
        outFile.close();
        cout << "\nStudent record saved to student_record.txt\n";
    } else {
        cout << "Error: Unable to create output file.\n";
        return 1;
    }

    return 0;
}
