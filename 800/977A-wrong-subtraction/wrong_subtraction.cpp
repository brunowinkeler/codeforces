#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;

    for (size_t i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }

    cout << n;

    return 0;
}
