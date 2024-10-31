#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll num, pos, result;
    cin >> num >> pos;

    if (pos <= ((num / 2) + (num % 2)))
    {
        result = (2 * pos - 1);
    }
    else
    {
        result = (2 * (pos - (num / 2) - (num % 2)));
    }

    cout << result;

    return 0;
}