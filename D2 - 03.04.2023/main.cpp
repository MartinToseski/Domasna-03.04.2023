#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string ime;
    bool karta, pasos, dozvola;

    queue<pair<string, vector<bool> > > q1, q2, q3;

    for (int i=0; i < N; i++)
    {
        cin >> ime >> karta >> pasos >> dozvola;
        if (karta)
        {
            q1.push({ime, {karta, pasos, dozvola}});
            continue;
        }

        if (pasos)
        {
            q2.push({ime, {karta, pasos, dozvola}});
            continue;
        }

        if (dozvola)
            q3.push({ime, {karta, pasos, dozvola}});
    }

    while(!q1.empty())
    {
        auto next = q1.front();
        q1.pop();

        if (next.second[1])
        {
            q2.push(next);
            continue;
        }

        if (next.second[2])
        {
            q3.push(next);
            continue;
        }

        cout << next.first << endl;
    }

    while(!q2.empty())
    {
        auto next = q2.front();
        q2.pop();

        if (next.second[2])
        {
            q3.push(next);
            continue;
        }

        cout << next.first << endl;
    }

    while(!q3.empty())
    {
        auto next = q3.front();
        q3.pop();
        cout << next.first << endl;
    }

    return 0;
}
