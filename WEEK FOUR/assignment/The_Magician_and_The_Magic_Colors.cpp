#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        queue<char> q;
        queue<char> newq;

        int countR = 0, countG = 0, countB = 0;

        for (int i = 0; i < n; i++)
        {
            char color;
            cin >> color;
            q.push(color);

            if (color == 'R')
                countR++;
            else if (color == 'G')
                countG++;
            else if (color == 'B')
                countB++;
        }

        if (countR % 2 == 0 && countG % 2 == 0 && countB % 2 == 0)
        {
            if (countR == 0 || countG == 0 || countB == 0)
            {
                cout << endl;
                continue;
            }
        }

        char w = '\0';

        while (!q.empty())
        {
            char t = q.front();
            q.pop();

            if (!q.empty() && (((t == 'R' && q.front() == 'G') || (t == 'G' && q.front() == 'R'))))
            {
                w = 'Y';
                newq.push(w);

                q.pop();
                continue;
            }
            else if (!q.empty() && (((t == 'R' && q.front() == 'B') || (t == 'B' && q.front() == 'R'))))
            {
                w = 'P';
                newq.push(w);

                q.pop();
                continue;
            }
            else if (!q.empty() && (((t == 'G' && q.front() == 'B') || (t == 'B' && q.front() == 'G'))))
            {
                w = 'C';
                newq.push(w);

                q.pop();
                continue;
            }
            else if (!q.empty() && ((t == 'G' && q.front() == 'G') || (t == 'R' && q.front() == 'R') || (t == 'B' && q.front() == 'B')))
            {
                q.pop();
                continue;
            }
            else
            {
                if (n % 2 != 0)
                {
                    w = t;
                    newq.push(w);
                }
                else
                {
                    q.pop();
                }
            }
        }

        stack<char> ST;

        while (!newq.empty())
        {
            char current = newq.front();
            newq.pop();

            if (!ST.empty() && current == ST.top())
            {
              
                 ST.pop();
            }
            else
            {
                ST.push(current);
            }
        }

        stack<char> newst;
        while (!ST.empty())
        {
            newst.push(ST.top());
            ST.pop();
        }

        while (!newst.empty())
        {
            cout << newst.top();
            newst.pop();
        }

        cout << endl;
    }

    return 0;
}
