#include <iostream>
using namespace std;
string decryption(string word)
{
    string alphabets;
    for (int i = 0; i < word.length(); i++)
    {
        int value = word[i];
        if (value >= 97 && value <= 122)
        {
            value = value - 13;
            if (value < 97 )
            {
                value = 96 - value;
                value = 122 - value;
            }
        }
        else if (value >= 65 && value <= 90)
        {
            value = value - 13;
            if (value < 65)
            {
                value = 64 -  value;
                value = 90 - value;
            }
        }
        alphabets += value;
    }
    return alphabets;
}

//it returns the same decryption for a and z
int main()
{
    string word;
    int value;
    cout << "Enter any word" << endl;
    getline(cin, word);
    cout << "The message you entered is: " << word << endl;
    cout<<"decrypted message is: "<<decryption(word)<<endl;

    return 0;
}