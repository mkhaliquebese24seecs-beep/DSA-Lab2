#include <iostream>
#include <cstring>   // for strlen
using namespace std;

int main() {
    int size;

    // Step 1: Ask user for maximum size
    cout << "Enter maximum length of the string: ";
    cin >> size;

    // Step 2: Dynamically allocate memory (+1 for null terminator)
    char *str = new char[size + 1];

    // Step 3: Input string (with spaces)
    cin.ignore();  // clear leftover newline from buffer
    cout << "Enter a string: ";
    cin.getline(str, size + 1);

    // Step 4: Reverse the string
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    // Step 5: Output reversed string
    cout << "Reversed string: " << str << endl;

    // Step 6: Free dynamically allocated memory
    delete[] str;

    return 0;
}
