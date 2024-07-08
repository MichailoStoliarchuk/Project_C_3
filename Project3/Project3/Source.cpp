//Завдання 3

#include <iostream>
using namespace std;


int main() {
    int j = 0;
    char str[100];
    char srr[100] = { 0 };

    cout << "Enter a sentence " << endl;

    cin.getline(str, 100);

    char a;

    cout << "Enter the character you want to delete " << endl;
    cin >> a;



    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != a) {
            srr[j] = str[i];
            j++;
        }
    }

    srr[j] = '\0';

    cout << srr << endl;

    return 0;

}