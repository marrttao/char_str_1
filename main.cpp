#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void _delete_symbols(char* str, char symbol) {
    char* temp = new char[100];
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != symbol) {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0'; 
    strcpy(str, temp); 
    delete[] temp;
}

int main() {
    char* str = new char[100];
    strcpy(str, "this is a 2 text for task 2");
	cout << str << endl;
    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;
    _delete_symbols(str, symbol);
    cout << str;
    delete[] str;
    return 0;
}
