#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string word, output = "NO";
    cin >> word;

    int counter = 0;
    char prev, actual;
    for (size_t i = 0; i < word.size(); i++)
    {
        actual = word[i];
        if (actual == prev)
        {
            counter++;
            if (counter >= 6)
            {
                output = "YES";
                break;
            }
        }
        else
        {
            counter = 0;
        }
        prev = actual;
    }

    cout << output;

    return 0;
}
