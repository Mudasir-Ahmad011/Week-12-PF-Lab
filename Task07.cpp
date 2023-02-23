#include <iostream>
#include<fstream>
using namespace std;

main() {
    string line;
    int count = 0;
    fstream file;
    file.open("example.txt", ios::in);
    while (!file.eof()) {
        getline(file, line);
        count++;
    }
    cout << count;
    file.close();

}