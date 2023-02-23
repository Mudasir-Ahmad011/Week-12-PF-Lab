#include <iostream>
#include<fstream>
using namespace std;
char character[100];
char repeatcharacter[100];
main() {
    fstream file;
    int count = 0;
    int countit = 0;
    bool check = true;
    int repeatCharacter = 0;

    file.open("Task1file.txt", ios::in);
    while (!file.eof()) {
        file >> character[count];

        if (count > 0) {
            for (int i = 0;i < count;i++) {
                if (character[count] == character[i]) {
                    repeatcharacter[countit] = character[count];
                    check = true;
                    if (countit > 0) {
                        for (int j = 0;j < countit;j++) {
                            if (repeatcharacter[countit] == repeatcharacter[j]) {
                                check = false;
                            }
                        }
                    }
                    if (check == true) {
                        repeatCharacter++;
                    }
                    countit++;
                }
            }
        }
        count++;
    }
    file.close();
    cout << "The number of character which is repeated is: " << repeatCharacter;

}