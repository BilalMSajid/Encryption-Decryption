#include <iostream>
#include <string>
using namespace std;
string encryption(string word)
{
    string alphabets;
    for (int i = 0; i < word.length(); i++)
    {
        int value = word[i];
        if (value >= 97 && value <= 122)
        {
            value = value + 13;
            if (value > 122)
            {
                value = value - 123;
                value = value + 97;
            }
        }
        else if (value >= 65 && value <= 90)
        {
            value = value + 13;
            if (value > 90)
            {
                value = value - 123;
                value = value + 65;
            }
        }
        alphabets += value;
    }
    return alphabets;
}
//returns the same value for a and z
int main()
{
    string word;
    int value;
    cout << "Enter any word or sentence" << endl;
    getline(cin, word);
    cout << "The message you entered is: " << word << endl;
    cout<<"encrypted message is:"<<encryption(word)<<endl;

    return 0;
}