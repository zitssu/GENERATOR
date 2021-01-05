#include <iostream>
#include <string>
using namespace std;

int main() {
    string characters = "abcde";

    int length = 5;
    string word = "";
    for (int i = word.length(); i <= length; i++) {
        for (int l = 0; l < characters.length(); l++) {
            word += characters[l];
            cout << word << "\n";
        }
    }
    return 0;
}
