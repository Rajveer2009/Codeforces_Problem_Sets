#include <iostream>
using namespace std;

int main()
{
    int l = 3;
    int x = 0;
    int y = 0;
    int b;
    cin >> b;

    int arr[b][l];

    for (int i = 0; i <= b - 1; i++)
    {
        for (int j = 0; j <= l - 1; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                x++;
            }
        }
        if (x >= 2)
        {
            y++;
        }
        x = 0;
    }

    cout << y;

    return 0;
}