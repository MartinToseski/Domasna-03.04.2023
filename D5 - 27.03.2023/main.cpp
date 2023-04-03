#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string rez = "";
    int MAX = 0;

    map<string, int> m;

    for (int i=0; i < s.size(); i++)
    {
        string temp = "";
        for (int j=i; j < s.size(); j++)
        {
            temp += s[j];
            m[temp]++;

            if (m[temp] == MAX && rez.size() < temp.size())
                rez = temp;
            else if (m[temp] > MAX)
            {
                MAX = m[temp];
                rez = temp;
            }
        }
    }

    cout << rez;

    return 0;
}
