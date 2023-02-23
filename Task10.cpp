#include <iostream>
#include<fstream>
using namespace std;
void studentdetails();
int menu();

main() {
    system("cls");
    string check;
    int option = menu();
    while (true) {
        system("cls");
        if (option == 1) {
            studentdetails();
            cout << "Do you want to add more students(yes,no): ";
            cin >> check;
            if (check == "yes") {
                option = 1;
            }
            else {
                system("cls");
                option = menu();
            }
        }
        else if (option == 2) {
            break;
        }
    }
}
int menu() {
    int option;
    cout << "1.Add student details..." << endl;
    cout << "2.Exit" << endl;
    cout << "Choose any option: ";
    cin >> option;
    return option;

}
void studentdetails() {
    fstream infofile;
    string StudentName;
    int StudentAge, MatricMarks, FSCMarks, ECATMarks;
    cout << "Enter student name: ";
    cin >> StudentName;
    cout << "Enter Student age: ";
    cin >> StudentAge;
    cout << "Enter Matric Marks: ";
    cin >> MatricMarks;
    cout << "Enter FSC Marks: ";
    cin >> FSCMarks;
    cout << "Enter ECAT Marks: ";
    cin >> ECATMarks;
    infofile.open("Student.txt", ios::app);
    infofile << StudentName << endl;
    infofile << StudentAge << endl;
    infofile << MatricMarks << endl;
    infofile << FSCMarks << endl;
    infofile << ECATMarks << endl << endl;
    infofile.close();
}

