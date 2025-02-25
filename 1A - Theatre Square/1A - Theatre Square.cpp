#include <iostream>
using namespace std;

int main()
{
    long long n, m, a;

    cin >> n >> m >> a;

    if (!(1 <= n <= 1e9) || !(1 <= m <= 1e9) || !(1 <= a <= 1e9))
    {
        return -1;
    }

    long long x = (n + a - 1) / a;
    long long y = (m + a - 1) / a;
    long long z = x * y;

    cout << z;

    return 0;
}