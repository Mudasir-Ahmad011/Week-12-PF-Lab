#include <iostream>
#include<fstream>
using namespace std;

main() {
    int num;
    float number;
    char alpha;
    fstream file;
    file.open("Task04(a).txt", ios::in);
    file >> num;
    file.close();
    cout << num << endl;


    file.open("Task04(b).txt", ios::in);
    file >> number;
    file.close();
    cout << number << endl;

    file.open("Task04(c).txt", ios::in);
    file >> alpha;
    file.close();
    cout << alpha << endl;
}