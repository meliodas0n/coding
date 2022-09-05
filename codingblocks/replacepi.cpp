#include <iostream>

using namespace std;

void ReplacePi(char *a, int i) {
	if (a[i] == '\0' || a[i + 1] == '\0') {
		return;
	}

	if (a[i] == 'p' and a[i + 1] == 'i') {
		int j = i + 2;
		while (a[j] != '\0') {
			j++;
		}

		while (j >= i + 2) {
			a[j + 2] = a[j];
			j--;
		}

		a[i] = '3';
		a[i + 1] = '.';
		a[i + 2] = '1';
		a[i + 3] = '4';

		ReplacePi(a, i + 4);
	} else {
		ReplacePi(a, i + 1);
	}
}

int main() {
	char a[100] = "axpiaepif";
	cout << "Before replacing pi : " << a << endl;
	ReplacePi(a, 0);
	cout << "After replacing pi : " << a << endl;
}