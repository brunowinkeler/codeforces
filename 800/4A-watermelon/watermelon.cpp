#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int weight;
    cin >> weight;
    cout << ((weight % 2 == 0 && weight > 2) ? "YES" : "NO") << endl;

    return 0;
}
