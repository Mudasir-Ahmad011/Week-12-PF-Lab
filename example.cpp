#include <iostream>
#include<fstream>
using namespace std;

main() {
    string line;
    fstream file;
    int count = 0;
    file.open("example.txt", ios::in);
    while (!file.eof()) {
        getline(file, line);
        count++;
    }
    cout << count;
    file.close();

}