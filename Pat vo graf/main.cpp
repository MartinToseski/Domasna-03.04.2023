#include <bits/stdc++.h>

using namespace std;

vector<int> G[1001];
stack<int> path;
bool vis[1001];
int A, B;
bool found = false;

void DFS(int x)
{
    vis[x] = true;

    if (x == B)
    {
        path.push(x);
        found = true;
        return ;
    }

    for (auto next : G[x])
    {
        if (!vis[next])
            DFS(next);
    }

    path.push(x);
}

int main()
{
    int V, E;
    cin >> V >> E >> A >> B;

    memset(vis, 0, sizeof(vis));

    for (int i=0; i < E; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    DFS(A);

    if (!found)
    {
        cout << "nema pat pomegju " << A << " i " << B;
        return 0;
    }

    while(!path.empty())
    {
        cout << path.top() << " ";
        path.pop();
    }

    return 0;
}
