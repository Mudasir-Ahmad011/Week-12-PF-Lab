#include <iostream>
#include<fstream>
using namespace std;

main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    fstream file;
    file.open("Task02.txt", ios::out);
    file << num;
    file.close();
}