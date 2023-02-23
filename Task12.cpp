#include <iostream>
#include<fstream>
using namespace std;

main() {
    string name;
    int addmission_number;
    float percentage;
    fstream file;
    fstream newfile;
    file.open("Task12.txt", ios::in);
    while (file >> name && file >> addmission_number && file >> percentage) {
        if (percentage > 60) {
            newfile.open("Task12Updated.txt", ios::app);
            newfile << "Name: " << name << endl;
            newfile << "Addmission Number: " << addmission_number << endl;
            newfile << "Percentage: " << percentage << endl << endl;
            newfile.close();
        }
    }
    file.close();
}