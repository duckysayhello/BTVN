#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'crosswordPuzzle' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY crossword
 *  2. STRING words
 */

bool canPlaceHorizontally(vector<string>& crossword, const string& word, int row, int col) {
    if (col + word.length() > 10) return false;
    for (int i = 0; i < word.length(); i++) {
        if (crossword[row][col + i] != '-' && crossword[row][col + i] != word[i]) {
            return false;
        }
    }
    return true;
}

bool canPlaceVertically(vector<string>& crossword, const string& word, int row, int col) {
    if (row + word.length() > 10) return false;
    for (int i = 0; i < word.length(); i++) {
        if (crossword[row + i][col] != '-' && crossword[row + i][col] != word[i]) {
            return false;
        }
    }
    return true;
}

void placeHorizontally(vector<string>& crossword, const string& word, int row, int col) {
    for (int i = 0; i < word.length(); i++) {
        crossword[row][col + i] = word[i];
    }
}

void placeVertically(vector<string>& crossword, const string& word, int row, int col) {
    for (int i = 0; i < word.length(); i++) {
        crossword[row + i][col] = word[i];
    }
}

void removeHorizontally(vector<string>& crossword, const string& word, int row, int col) {
    for (int i = 0; i < word.length(); i++) {
        crossword[row][col + i] = '-';
    }
}

void removeVertically(vector<string>& crossword, const string& word, int row, int col) {
    for (int i = 0; i < word.length(); i++) {
        crossword[row + i][col] = '-';
    }
}

bool solveCrossword(vector<string>& crossword, vector<string>& words, int index) {
    if (index == words.size()) return true;

    string word = words[index];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (canPlaceHorizontally(crossword, word, i, j)) {
                placeHorizontally(crossword, word, i, j);
                if (solveCrossword(crossword, words, index + 1)) return true;
                removeHorizontally(crossword, word, i, j);
            }
            if (canPlaceVertically(crossword, word, i, j)) {
                placeVertically(crossword, word, i, j);
                if (solveCrossword(crossword, words, index + 1)) return true;
                removeVertically(crossword, word, i, j);
            }
        }
    }
    return false;
}

vector<string> crosswordPuzzle(vector<string> crossword, string words) {
    vector<string> wordList;
    stringstream ss(words);
    string word;
    while (getline(ss, word, ';')) {
        wordList.push_back(word);
    }

    solveCrossword(crossword, wordList, 0);
    return crossword;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<string> crossword(10);

    for (int i = 0; i < 10; i++) {
        string crossword_item;
        getline(cin, crossword_item);

        crossword[i] = crossword_item;
    }

    string words;
    getline(cin, words);

    vector<string> result = crosswordPuzzle(crossword, words);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
