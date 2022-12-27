/*
-------Problem from CodeChef---------

Problem
Eikooc loves bread. She has NN loaves of bread, all of which expire after exactly MM days. She can eat upto KK loaves of bread in a day. Can she eat all the loaves of bread before they expire?

Input Format
The first line contains a single integer TT - the number of test cases. Then the test cases follow.
Each test case consists of a single line containing three integers NN, MM and KK - the number of loaves of bread Eikooc has, the number of days after which all the breads will expire and the number of loaves of bread Eikooc can eat in a day.
Output Format
For each test case, output Yes if it will be possible for Eikooc to eat all the loaves of bread before they expire. Otherwise output No.

You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).
*/
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    if (t >= 1 && t <= 1000)
    {
        for (int i = 0; i < t; i++)
        {
            int n, m, k;
            scanf("%d %d %d", &n, &m, &k);
            if (n >= 1 && m >= 1 && k >= 1 && n <= 100 && m <= 100 && k <= 100)
            {
                // if(n/k <= m) --> try this and tell why this gives wrong ans!
                if (m * k >= n)
                {
                    printf("yes\n");
                }
                else
                {
                    printf("no\n");
                }
            }
        }
    }
    return 0;
}