#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    bool isCapsLocked = true;

    if (s.length() > 1)
    {
        for (size_t i = 1; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                isCapsLocked = false;
            }
        }
    }

    if (isCapsLocked)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] -= ' ';
        }
        else if (s[0] >= 'A' && s[0] <= 'Z')
        {
            s[0] += ' ';
        }

        for (size_t i = 1; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += ' ';
            }
        }
    }

    cout << s << endl;

    return 0;
}