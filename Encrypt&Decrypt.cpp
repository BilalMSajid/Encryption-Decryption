#include <iostream>
using namespace std;
string func(string message, bool encrypt, int torotate)
{
    if (encrypt == true)
    {
        string alphabets;
        for (int i = 0; i < message.length(); i++)
        {
            int value = message[i];
            if (value >= 97 && value <= 122)
            {
                value = value + torotate;
                if (value > 122)
                {
                    value = value - 122;
                    value = value + 97;
                }
            }
            else if (value >= 65 && value <= 90)
            {
                value = value + torotate;
                if (value > 90)
                {
                    value = value - 122;
                    value = value + 65;
                }
            }
            alphabets += value;
        }
        return alphabets;
    }
    else
    {
        string alphabets;
        for (int i = 0; i < message.length(); i++)
        {
            int value = message[i];
            if (value >= 97 && value <= 122)
            {
                value = value - torotate;
                if (value < 97)
                {
                    value = 97 - value;
                    value = 122 - value;
                }
            }
            else if (value >= 65 && value <= 90)
            {
                value = value - torotate;
                if (value < 65)
                {
                    value = 65 - value;
                    value = 90 - value;
                }
            }
            alphabets += value;
        }
        return alphabets;
    }
}

int main()
{
    string message;
    bool encrypt;
    int torotate;
    cout << "enter the message you want to encrypt or decrypt" << endl;
    getline(cin, message);
    cout << "enter whether you want to encrypt or decrypt" << endl;
    cin >> encrypt;
    cout << "enter the rotation value" << endl;
    cin >> torotate;
    
    if (encrypt==true)
    {
    cout<<"encrypted message: "<<func(message,encrypt, torotate)<<endl;
    }
    else 
    {
    cout<<"decrypted message: "<<func(message,encrypt, torotate)<<endl;
    }
}