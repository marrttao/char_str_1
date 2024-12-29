#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void _delete(char*& str, int delete_choice) {
    int len = strlen(str);
    if (delete_choice < 0 || delete_choice >= len) {
        cout << "Invalid index!" << endl;
        return;
    }

    char* temp = new char[len];
    for (int i = 0; i < delete_choice; i++) {
        temp[i] = str[i];
    }
    for (int i = delete_choice; i < len - 1; i++) {
        temp[i] = str[i + 1];
    }
    temp[len - 1] = '\0';

    delete[] str;
    str = temp;
}

int main() {
    char* str = new char[11];
    strcpy(str, "1234 6789");
    cout << str << endl;

    cout << "Enter the index of the character you want to delete: ";
    int delete_choice = 0;
    cin >> delete_choice;

    _delete(str, delete_choice);
    cout << str << endl;

    delete[] str;
    return 0;
}
