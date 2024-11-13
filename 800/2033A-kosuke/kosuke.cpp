#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int value = 1;
        int player = -1;
        int sum = 0;

        while (abs(sum) < n)
        {
            sum += (player) * ((2 * value) - 1);
            player *= -1;
            value++;
        }

        if (player > 0)
        {
            cout << "Kosuke" << endl;
        }
        else
        {
            cout << "Sakurako" << endl;
        }
    }
    return 0;
}