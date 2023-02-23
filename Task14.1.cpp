#include <iostream>
#include<fstream>
using namespace std;

main() {
    fstream file;
    string line;
    int count = 0;
    file.open("story.txt", ios::in);
    while (!file.eof()) {
        file >> line;
        int length = line.length();
        if (line[length - 1] == '.') {
            length = length - 1;
        }
        if (length < 4) {
            for (int i = 0;i < length;i++) {
                cout << line[i];
            }
            cout << endl;
        }
    }

    file.close();

}
