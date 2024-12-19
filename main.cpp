#include <iostream>
#include <cctype>
using namespace std;

int check(const char* str, const char* pattern) {
    int counter = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; pattern[j] != '\0'; j++) {
            if (str[i] == pattern[j]) {
                counter++;
            }
        }
    }
    return counter;
}

int main() {
    
    char str[] = "Series of DarkSouls have 4 parts. DarkSouls 1, DarkSouls 2, DarkSouls 3, Elden Ring";
    const char digits_pattern[] = "0123456789";
    const char letters_pattern[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char alpha_pattern[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;':\",.<>?/`~";
    cout << "digits: " << check(str, digits_pattern) << endl;
    cout << "letters: " << check(str, letters_pattern) << endl;
    cout << "alpha:" << check(str, alpha_pattern) << endl;


    return 0;
}
