#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int loop_count;
    cin >> loop_count;
    while(loop_count > 0)
    {
        int n;
        int sum = 0;
        cin >> n;
        while(n>0)
        {
            int last_digit = n%10;
            sum += last_digit;
            n = n/ 10;
        }
        cout << sum <<endl;
        loop_count--;
    }



}
