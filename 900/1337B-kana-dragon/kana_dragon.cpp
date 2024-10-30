#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int numT;
    cin >> numT;

    int hp[numT], va[numT], ls[numT];
    bool result[numT];

    for (size_t i = 0; i < numT; i++)
    {
        cin >> hp[i] >> va[i] >> ls[i];
    }

    for (size_t i = 0; i < numT; i++)
    {
        if ((hp[i] <= ls[i] * 10))
        {
            cout << "YES" << endl;
        }
        else
        {
            while (va[i] > 0)
            {
                hp[i] = ((hp[i] / 2) + 10);
                va[i]--;
            }

            while (ls[i] > 0)
            {
                hp[i] = hp[i] - 10;
                ls[i]--;
            }

            cout << ((hp[i] <= 0) ? "YES" : "NO") << endl;
        }
    }

    return 0;
}
