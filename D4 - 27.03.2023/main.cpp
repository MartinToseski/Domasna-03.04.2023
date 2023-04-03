#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    map<string, string> m;
    string ime, lozinka, kraj = "";

    for (int i=0; i < N; i++)
    {
        cin >> ime >> lozinka;
        m.insert({ime, lozinka});
    }

    while(true)
    {
        cin >> ime;
        if (ime == "KRAJ")
            break;

        cin >> lozinka;

        if (m[ime] == lozinka)
        {
            cout << "Najaven" << endl;
            break;
        }

        cout << "Nenajavaen" << endl;
    }

    return 0;
}
