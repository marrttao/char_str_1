#include <iostream>
using namespace std;

int main() {
    char str[] = "Series of Darksouls, Sekiro, Blodborne are soulslike games";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '\t';
        }
    }
    cout << str << endl;
    return 0;
}