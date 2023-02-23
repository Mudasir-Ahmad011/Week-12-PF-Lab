#include <iostream>
#include<fstream>
using namespace std;
string usernames[100];
string passwords[100];
int count = 0;
void addUser(string username, string password);
bool signIn(string username, string password);
void viewUsers();
void storeToFile(string username, string password);
bool isValidusername(string username);
int  Loginmenu();
void loadDataFromFile();
main() {
    loadDataFromFile();
    string username, password;
    system("cls");
    int option = 2;
    while (option != 0) {
        option = Loginmenu();
        if (option == 1) {
            cout << "Enter your name: ";
            cin >> username;
            cout << "Enter new password: ";
            cin >> password;
            if (isValidusername(username) == true) {
                addUser(username, password);
                storeToFile(username, password);
            }
            else {
                cout << "Username already exists" << endl;
            }


        }
        else if (option == 2) {
            cout << "Enter your name: ";
            cin >> username;
            cout << "Enter new password: ";
            cin >> password;
            if (signIn(username, password) == true) {
                cout << "You are Logged in" << endl;
            }
        }
        else if (option == 3) {
            viewUsers();
        }
        else if (option == 0) {
            continue;
        }
        else {
            cout << "Write correct option" << endl;
        }
    }
}
void addUser(string username, string password) {

    usernames[count] = username;
    passwords[count] = password;
    count++;
}
void storeToFile(string username, string password) {
    fstream signUp_file;
    signUp_file.open("users.txt", ios::app);
    signUp_file << username << endl;
    signUp_file << password << endl;
    signUp_file.close();
}
void viewUsers() {
    cout << "Username" << "\t\t" << "password" << endl;
    for (int index = 0;index < count;index++) {
        cout << usernames[index] << "\t\t" << passwords[index] << endl;
    }
}
bool signIn(string username, string password) {
    bool check;
    for (int i = 0;i < count;i++) {
        if (usernames[i] == username && passwords[i] == password) {
            check = true;
            break;
        }
        else {
            check = false;
        }
    }
    return check;
}
bool isValidusername(string username) {
    bool check = true;
    for (int i = 0;i < count;i++) {
        if (username == usernames[i]) {
            check = false;
            break;
        }
    }
    return check;
}
int  Loginmenu() {
    int option;
    cout << "1.Sign up..." << endl;
    cout << "2.Sign In..." << endl;
    cout << "3.View Users..." << endl;
    cout << "0.Exit..." << endl;
    cout << "Enter your choice: ";
    cin >> option;
    return option;
}
void loadDataFromFile() {
    string username, password;
    fstream file;
    file.open("users.txt", ios::in);
    while (getline(file, username) && getline(file, password)) {
        getline(file, username);
        getline(file, password);
        usernames[count] = username;
        passwords[count] = password;
        count++;
    }
}