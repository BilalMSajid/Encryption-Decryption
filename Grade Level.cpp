#include <iostream>
using namespace std;

int index(int letter, int lines, int word)
{

    float L = (float (letter) / (float (word)))*100;
    //cout<<"L is "<<L<<endl;
    float S = (float (lines) / float (word))*100;
    //cout<<"S is "<<S<<endl;
    double index = 0.0588 * L - 0.296 * S - 15.8;

    index = index + 0.5;
    return index;
}
int main()

{
    string sentence;
    int word = 0;
    int lines = 0;
    int letter = 0;
    getline(cin, sentence);
    cout<<"Your sentence is:"<<endl;
    cout << sentence;
    int count = 0;

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] >= 65 && sentence[i] <= 90 || sentence[i] >= 97 && sentence[i] <= 122)
        {
            letter++;
        }
        else if (sentence[i] == ' ')
        {
            word++;
        }
        else if (sentence[i] == '!' || sentence[i] == '.' || sentence[i] == '?')
            {
                lines++;
            }
    }
    
    word++;

    cout << endl;
    cout << "Number of letters: " << letter << endl;
    cout << "Number of words: " << word << endl;
    cout << "Number of lines: " << lines << endl;
    cout<<"The grade level is: "<<index(letter, lines, word)<<endl;
    return 0;
}