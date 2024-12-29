#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "LoLll";
    char reverse[sizeof(str)];
    int j = 0;
    for (int i = strlen(str) - 1; i >= 0; i--) {
        reverse[j] = str[i];
        j++;
    }
    reverse[j] = '\0';

    if (strcmp(str, reverse) == 0) {
        cout << "Palindrom";
    }
    else {
        cout << "Not palindrom";
    }
    return 0;
}
