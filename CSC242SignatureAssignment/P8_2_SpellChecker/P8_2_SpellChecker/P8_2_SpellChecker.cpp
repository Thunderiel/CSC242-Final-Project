#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

// Function declarations
void loadDictionary(vector<string>& words);
bool containsWord(const vector<string>& words, const string& word);
void checkFile(const vector<string>& words);

int main()
{
    vector<string> words;

    loadDictionary(words);
    checkFile(words);

    return 0;
}

// ----------------------------------------------------
// Author: Thunderiel Cardoza
// Purpose: Reads the dictionary file and stores each
// word inside the words vector.
// ----------------------------------------------------
void loadDictionary(vector<string>& words)
{

}

// ----------------------------------------------------
// Author: Jacob Leigers
// Purpose: Checks whether a word is contained in the
// dictionary vector.
// ----------------------------------------------------
bool containsWord(const vector<string>& words, const string& word)
{
    return false;
}

// ----------------------------------------------------
// Author: Thunderiel Cardoza
// Purpose: Opens the file being spell checked and
// prints words that are not found in the dictionary.
// ----------------------------------------------------
void checkFile(const vector<string>& words)
{

}