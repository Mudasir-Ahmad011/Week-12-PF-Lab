#include <iostream>
#include<conio.h>
#include<fstream>
using namespace std;

main() {
    char alpha;
    int count = 0;
    fstream file;
    file.open("Task1file.txt", ios::in);
    while (!file.eof()) {
        file >> alpha;
        count++;
    }
    cout << count;
    file.close();

}