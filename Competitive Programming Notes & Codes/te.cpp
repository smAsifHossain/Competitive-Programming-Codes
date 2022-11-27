#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,b1,b2,participants;
    cin >> t;
    cin >> b1;
    cin >> b2;

    while (t--)
    {
        int prob1_counter=0, prob2_counter=0, prob1_cost_type1, prob2_cost_type1, prob1_cost_type2, prob2_cost_type2;
        int prob1, prob2;
        int total_cost_type1, total_cost_type2;

        cin >> participants;

        for (int i = 0; i < participants; i++)
        {
            cin >> prob1;
            if (prob1 == 1)
            {
                prob1_counter++;
            }
            cin >> prob2;
            if (prob2 == 1 )
            {
                prob2_counter++;
            }
        }

        //Type 1
        prob1_cost_type1 = prob1_counter * b1;
        prob2_cost_type1 = prob2_counter * b2;
        total_cost_type1 = prob1_cost_type1 + prob2_cost_type1;
        //Type 2
        prob1_cost_type2 = prob1_counter * b2;
        prob2_cost_type2 = prob2_counter * b1;
        total_cost_type2 = prob1_cost_type2 + prob2_cost_type2;

        if (total_cost_type1 > total_cost_type2)
        {
            cout << total_cost_type2<<endl;
        } else
        {
            cout << total_cost_type1<<endl;
        }
    }
}
