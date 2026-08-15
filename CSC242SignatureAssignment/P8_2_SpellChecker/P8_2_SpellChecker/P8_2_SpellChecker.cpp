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
    ifstream dictionaryFile("words.txt");
    string word;

    if (!dictionaryFile)
    {
        cout << "Error opening dictionary file." << endl;
        return;
    }

    while (dictionaryFile >> word)
    {
        words.push_back(word);
    }

    dictionaryFile.close();
}

// ----------------------------------------------------
// Author: Jacob Leigers
// Purpose: Checks whether a word is contained in the
// dictionary vector.
// ----------------------------------------------------
bool containsWord(const vector<string>& words, const string& word)
{
    for (int i = 0; i < words.size(); i++)
        {
            if (words[i] == word)
            {
                return true;
            }
        }
    return false;
}

// ----------------------------------------------------
// Author: Siqi Liu
// Purpose: Opens the file being spell checked and
// prints words that are not found in the dictionary.
// ----------------------------------------------------
void checkFile(const vector<string>& words)
{
    string filename;
    string word;

    cout << "Enter the file name:";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile)
    {
        cout << "Cannot open file." << endl;
        return;
    }

    while (inputFile >> word)
    {
        if (!containsWord(words, word))
        {
            cout << word << endl;
        }
       
    }
    inputFile.close();
}