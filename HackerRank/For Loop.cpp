//https://www.hackerrank.com/challenges/c-tutorial-for-loop/submissions/code/302230443
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b;
    cin >> a;
    cin >> b;

    while(a<=b)
    {
        if (a <= 9)
        {
            if(a==1)
            {
                cout << "one" <<endl;
            }
            if(a==2)
            {
                cout << "two" <<endl;
            }
            if(a==3)
            {
                cout << "three" <<endl;
            }
            if(a==4)
            {
                cout << "four" <<endl;
            }
            if(a==5)
            {
                cout << "five" <<endl;
            }
            if(a==6)
            {
                cout << "six" <<endl;
            }
            if(a==7)
            {
                cout << "seven" <<endl;
            }
            if(a==8)
            {
                cout << "eight" <<endl;
            }
            if(a==9)
            {
                cout << "nine" <<endl;
            }
        } else if (a%2 ==0)
        {
            cout << "even" <<endl;
        } else
        {
            cout << "odd" <<endl;
        }
        a++;
    }
}
