#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V, E;
    cin >> V >> E;

    int G1[E], G2[E], pos = 0;

    for (int i=0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        G1[pos] = a;
        G2[pos] = b;
        pos++;
    }

    for (int i=0; i < E; i++)
        cout << G1[i] << " ";

    cout << endl;

    for (int i=0; i < E; i++)
        cout << G2[i] << " ";

    return 0;
}
