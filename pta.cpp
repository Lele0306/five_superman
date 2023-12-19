#include <iostream>
#include <stack>
using namespace std;
stack<int> S1;
stack<char> S2;
int main()
{
    int n;
    int m1 = 0, m2;
    char ch = ' ';
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m1;
        S1.push(m1);
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> ch;
        S2.push(ch);
    }
    while (!S1.empty() && !S2.empty())
    {
        m1 = S1.top(); S1.pop();
        m2 = S1.top(); S1.pop();
        ch = S2.top(); S2.pop();
        switch (ch)
        {
        case '+':
            n = m2 + m1; break;
        case '-':
            n = m2 - m1; break;
        case  '*':
            n = m2 * m1; break;
        case '/':
            if (m1 == 0) return 0;
            else n = m2 / m1;
            break;
        }
        S1.push(n);
    }
    cout << S1.top();
    return 0;
}