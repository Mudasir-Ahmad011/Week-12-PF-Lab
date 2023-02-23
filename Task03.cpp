#include <iostream>
#include<fstream>
using namespace std;

main() {
    string name;
    fstream file;
    file.open("Task03.txt", ios::in);
    getline(file, name);
    file.close();
    cout << "The name in file is: " << name;
}