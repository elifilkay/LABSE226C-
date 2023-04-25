#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

bool is_palindrome(string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string inlist[MAX_SIZE] = {"kek", "pop", "love", "ses"};
    string palindromes[MAX_SIZE];
    int count = 0;
    for (int i = 0; i < MAX_SIZE; i++) {
        if (inlist[i] == "") {
            break;
        }
        if (is_palindrome(inlist[i])) {
            palindromes[count] = inlist[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++) {
        cout << palindromes[i] << " ";
    }
    cout << endl;
    return 0;
}

