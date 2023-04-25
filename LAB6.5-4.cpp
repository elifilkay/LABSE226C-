#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLowercase(string a) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    return a;
}

string removeSpaces(string b) {
    b.erase(remove(b.begin(), b.end(), ' '), b.end());
    return b;
}

string sortString(string s) {
    sort(s.begin(), s.end());
    return s;
}

bool areAnagrams(string s1, string s2) {
    s1 = sortString(removeSpaces(toLowercase(s1)));
    s2 = sortString(removeSpaces(toLowercase(s2)));

    return s1 == s2;
}

int main() {
    string word = "listen";
    string wordList[] = {"enlists", "google", "inlets", "banana"};
    int n = sizeof(wordList) / sizeof(wordList[0]);

    for (int i = 0; i < n; i++) {
        if (areAnagrams(word, wordList[i])) {
            cout << wordList[i] << " ";
        }
    }

    return 0;
}

