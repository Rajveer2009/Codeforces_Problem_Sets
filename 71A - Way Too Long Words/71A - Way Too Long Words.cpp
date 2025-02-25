#include <iostream>
using namespace std;

string shorten(string word, int len)
{
    char first = word[0];
    char last = word[len - 1];

    word = string(1, first) + to_string(len - 2) + string(1, last);

    return word;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string word;
    string words[n];

    for (int i = 0; i <= n - 1; i++)
    {
        getline(cin, word);
        int len = word.length();

        if (len > 10)
        {
            words[i] = shorten(word, len);
        }
        else
        {
            words[i] = word;
        }
    }

    for (int i = 0; i <= n - 1; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}