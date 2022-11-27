//https://www.hackerrank.com/challenges/30-arrays/submissions/code/302875172
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n],a_rev[n];
    for (int i = 0; i <n; i++)
    {
        cin >>a[i];
    }
    for(int i = n-1; i >= 0; i--)
    {
        cout << a[i] <<" ";
    }
}
