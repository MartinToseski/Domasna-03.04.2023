#include <bits/stdc++.h>

using namespace std;

int main()
{
    int V, E;
    cin >> V >> E;

    int mat[V][V];
    memset(mat, 0, sizeof(mat));

    for (int i=0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    for (int i=0; i < V; i++)
    {
        for (int j=0; j < V; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}
