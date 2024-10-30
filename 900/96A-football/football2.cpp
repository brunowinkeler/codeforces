#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string word, output = "NO";
    cin >> word;

    if ((word.find("0000000") != string::npos) || (word.find("1111111") != string::npos))
    {
        output = "YES";
    }

    cout << output;
    return 0;
}
