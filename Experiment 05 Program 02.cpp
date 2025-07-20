#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        char lower_ch = tolower(ch);

        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u')
        {
            cout << ch << " is a vowel." << endl;
        }
        else
        {
            cout << ch << " is a consonant." << endl;
        }
    }
    else
    {
        cout << "Invalid input. Please enter an alphabet." << endl;
    }

    return 0;
}
