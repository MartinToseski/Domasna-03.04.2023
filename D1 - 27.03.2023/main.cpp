#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c = 'c';

    stack<int> num;

    while(c != '=')
    {
        cin >> c;

        if (isdigit(c))
            num.push(c-'0');
        else if (c != '=')
        {
            int temp1 = num.top();
            num.pop();
            int temp2 = num.top();
            num.pop();

            if (c == '+')
                num.push(temp1+temp2);

            if (c == '*')
                num.push(temp1*temp2);
        }
    }

    cout << num.top();

    return 0;
}
