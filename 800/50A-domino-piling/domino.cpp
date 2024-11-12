#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;
    int sum = 0;

    cin >> m >> n;

    sum += m * (n / 2);
    if (n % 2 != 0)
    {
        sum += (m / 2);
    }

    cout << sum << endl;

    return 0;
}
