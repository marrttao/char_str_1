#include <iostream>
using namespace std;

int ispalindrom(char str[]) {
	char reverse[sizeof(str)];
	int j = 0;
	for (int i = strlen(str) - 1; i >= 0; i--) {
		reverse[j] = str[i];
		j++;
	}
	reverse[j] = '\0';

	if (strcmp(str, reverse) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void tolower_ (char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = tolower(str[i]);
	}
}

int main() {
    int choice;
	cout << "Check with including isupper and islower?" << endl;
	cout << "1 - Yes 2 - No" << endl;
	cin >> choice;
	char str[] = "Lol";
	if (choice == 1) {
		if (ispalindrom(str)) {
			cout << "Palindrome" << endl;
		}
		else {
			cout << "Not palindrome" << endl;
		}
	}
	else {
		tolower_(str);
		if (ispalindrom(str)) {
			cout << "Palindrome" << endl;
		}
		else {
			cout << "Not palindrome" << endl;
		}
	}
    return 0;
}
