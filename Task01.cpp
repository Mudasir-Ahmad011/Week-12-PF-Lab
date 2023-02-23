#include <iostream>
#include<fstream>
using namespace std;

main() {
    fstream datafile;
    string text = "This is simple text";
    datafile.open("Task1file.txt", ios::out);
    datafile << text;
    cout << text;
    datafile.close();
}