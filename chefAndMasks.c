/*
--------Problem from CodeChef-----------
Problem
Chef is shopping for masks. In the shop, he encounters 22 types of masks:

Disposable Masks — cost XX but last only 11 day.
Cloth Masks — cost YY but last 1010 days.
Chef wants to buy masks to last him 100100 days. He will buy the masks which cost him the least. In case there is a tie in terms of cost, Chef will be eco-friendly and choose the cloth masks. Which type of mask will Chef choose?

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing two space-separated integers X, YX,Y.
Output Format
For each test case, if Chef buys the cloth masks print CLOTH, otherwise print DISPOSABLE.

You may print each character of the string in uppercase or lowercase (for example, the strings cloth, clOTh, cLoTH, and CLOTH will all be treated as identical).

Constraints
1 \leq T \leq 50001≤T≤5000
1 \leq X \lt Y \leq 1001≤X<Y≤100
*/
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    if (t >= 1 && t <= 5000)
    {
        for (int i = 0; i < t; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            if (x >= 1 && y > x && y <= 100)
            {
                if (100 * x >= 10 * y)
                {
                    printf("cloth\n");
                }
                else
                {
                    printf("disposable\n");
                }
            }
        }
    }
    return 0;
}