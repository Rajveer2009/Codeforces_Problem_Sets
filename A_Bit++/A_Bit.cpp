#include <iostream>
using namespace std;

int main()
{
    int x = 0;

    int NumberOfOperations;
    cin >> NumberOfOperations;

    for (int i = 0; i <= NumberOfOperations; i++)
    {
        string Operation;
        getline(cin, Operation);

        if (Operation == "++X" || Operation == "X++")
        {
            x++;
        }
        else if (Operation == "--X" || Operation == "X--")
        {
            x--;
        }
    }

    cout << x << endl;
}