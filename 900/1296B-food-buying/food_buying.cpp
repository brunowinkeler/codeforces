#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tests;
    cin >> tests;

    while (tests--)
    {
        int s, initS;
        cin >> s;
        initS = s;

        int addS = s / 10;
        int modS = s % 10;

        while (addS > 0)
        {
            initS += addS;
            int tempS = addS + modS;
            addS = tempS / 10;
            modS = tempS % 10;
        }

        cout << initS << endl;
    }

    return 0;
}