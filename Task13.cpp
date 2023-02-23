#include <iostream>
#include<fstream>
using namespace std;

main() {
    fstream file;
    string line;
    int count = 0;
    file.open("story.txt", ios::in);
    while (!file.eof()) {
        getline(file, line);
        if (line[0] != 'T') {
            count++;
        }
    }
    cout << count;
    file.close();

}
