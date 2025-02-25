#include <iostream>
using namespace std;

int main()
{
    int n, k, x, y, z = 0;
    cin >> n;
    cin >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[i] = x;
    }

    y = arr[k - 1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= y && arr[i] != 0)
        {
            z++;
        }
    }
    cout << z << endl;

    return 0;
}