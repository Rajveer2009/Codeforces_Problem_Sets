#include <iostream>
using namespace std;

int main()
{
    int M, N;

    cin >> M >> N;

    if (!(1 <= M && M <= N && N <= 100))
    {
        return -1;
    }

    int x = (M * N) / 2;

    cout << x;

    return 0;
}