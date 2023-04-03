#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string s;
    int d;

    priority_queue<int> q;
    int MAX = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> s >> d;

        int h = (s[0]-'0')*10+(s[1]-'0'), m = (s[3]-'0')*10+(s[4]-'0');

        int entry = 60*h+m;
        int leave = entry+d;
//mjauu
        while (!q.empty() && q.top() <= entry)
            q.pop();

        q.push(leave);
        MAX = max(MAX, (int)q.size());
    }

    cout << MAX << endl;

    return 0;
}
