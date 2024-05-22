#include <iostream>
#include <vector>

using namespace std;

void generate(const vector<char>& chars, string current, int length) {
    if (current.length() == length) {
        cout << current << endl;
        return;
    }
    for (char c : chars) {
        generateStrings(chars, current + c, length);
    }
}

int main() {
    vector<char> chars = {'a', 'b', 'c', 'd'};
    generateStrings(chars, "", 3);
    return 0;
}

