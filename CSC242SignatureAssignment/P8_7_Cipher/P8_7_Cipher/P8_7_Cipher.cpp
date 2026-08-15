#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// Function declarations
string removeDuplicates(const string& keyword);
string createCipherAlphabet(const string& keyword);
char encryptCharacter(char ch, const string& cipher);
char decryptCharacter(char ch, const string& cipher);

int main()
{
    int main()
    {
        string keyword;

        cout << "Enter keyword: ";
        cin >> keyword;

        string cipher = createCipherAlphabet(keyword);

        cout << "Cipher alphabet: " << cipher << endl;

        return 0;
    }
    return 0;
}

// ----------------------------------------------------
// Author: Siqi Liu
// Purpose: Removes duplicate letters from the keyword.
// Example: FEATHER becomes FEATHR.
// ----------------------------------------------------
string removeDuplicates(const string& keyword)
{
    string result;

    for (char letter : keyword)
        {
            char upperletter = toupper (letter);
            if (isalpha(upperLetter) &&
            result.find(upperLetter) == string::npos)
        {
            result += upperLetter;
        }
        }
    return result;
}

// ----------------------------------------------------
// Author: Thunderiel Cardoza
// Purpose: Creates the full 26-letter cipher alphabet
// using the keyword and remaining letters in reverse.
// ----------------------------------------------------
string createCipherAlphabet(const string& keyword)
{
    string cipher = removeDuplicates(keyword);

    for (char letter = 'Z'; letter >= 'A'; letter--)
    {
        if (cipher.find(letter) == string::npos)
        {
            cipher += letter;
        }
    }
    return cipher;
}

// ----------------------------------------------------
// Author: Jacob Leigers
// Purpose: Encrypts one character using the cipher.
// ----------------------------------------------------
char encryptCharacter(char ch, const string& cipher)
{
    if (ch >= 'a' && ch <= 'z')
    { 
        return cipher[ch - 'a'];
    }
    if (ch >= 'A' && <= 'Z')
    {
        return cipher[ch - 'A'];
    }
    return ch;
}

// ----------------------------------------------------
// Author: Thunderiel Cardoza
// Purpose: Decrypts one character using the cipher.
// ----------------------------------------------------
char decryptCharacter(char ch, const string& cipher)
{
    if (isalpha(ch))
    {
        char upperChar = toupper(ch);

        size_t position = cipher.find(upperChar);

        if (position != string::npos)
        {
            char decryptedChar = 'A' + position;

            if (islower(ch))
            {
                decryptedChar = tolower(decryptedChar);
            }

            return decryptedChar;
        }
    }

    return ch;
}
