#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s_rev;
    cin >> s;
    for (int i = s.size()-1; i >= 0; i--)
    {
        s_rev = s_rev + s[i];
    }
    if ( s == s_rev)
    {
        cout << "YES";
    } else cout << "NO";
}
