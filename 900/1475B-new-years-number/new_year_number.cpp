#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test;
    cin >> test;

    while (test-- > 0)
    {
        int n;
        cin >> n;
        int cnt2021 = n % 2020;
        int cnt2020 = (n - cnt2021) / 2020 - cnt2021;
        if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
