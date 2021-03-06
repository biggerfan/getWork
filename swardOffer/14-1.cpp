#include <bits/stdc++.h>
using namespace std;

/*
n>1,m>1
f(2)=1,
f(3)={1*2, 1*1*1}=2
f(4)={1*3, 1*1*2,1*1*1*1, 2*2}=4
f(5)={1*4, 1*1*3,1*1*1*2,1*1*1*1*1,2*3}=6
f(6)={1*5, 1*1*4, 1*1*1*3, 1*1*1*1*2, 1*1*1*1*1*1, 1*2*3}=6=1*f(5)
f(7)=2*2*3=12=2*f(5)
f(8)=2*3*3=18=3*f(5)

*/
class Solution
{
public:
    int cuttingRope(int n)
    {
        if (n == 2)
        {
            return 1;
        }
        if (n == 3)
        {
            return 2;
        }

        int num_3 = 0, num_2 = 0;
        num_3 = n / 3;
        if (n % 3 == 1)
        {
            --num_3;
            num_2 += 2;
        }
        else if (n % 3 == 2)
        {
            ++num_2;
        }
        int max = 0;

        max = pow(3, num_3) * pow(2, num_2);
        return max;
    }
};