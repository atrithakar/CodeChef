/*
-----------PROBLEM-----------
You and your friend are playing a game with hoops. There are N hoops (where N is odd) in a row. You jump into hoop 1, and your friend jumps into hoop N. Then you jump into hoop 2, and after that, your friend jumps into hoop N−1, and so on.

The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.

INPUT:
-->The first line contains an integer T, the number of test cases. Then the test cases follow.
-->Each test case contains a single line of input, a single integer N.

OUTPUT:
-->For each testcase, output in a single line the answer to the problem.

CONSTRAINTS:
--> 1<=T<=10^5
--> 1<=N<2*10^5
--> N is odd.

TIME LIMIT = 0.5 SECONDS
*/

#include <iostream>
using namespace std;

int main()
{
    int t, n, f1, f2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        // if(n==1)
        // {
        //     cout<<1<<endl;
        //     continue;
        // }
        // f1=0;
        // f2=n+1;
        // while(f1+1!=f2)
        // {
        //     f1+=1;
        //     if(f1+1!=f2){
        //     f2-=1;
        //     }
        // }
        // if(f1%2)
        // {
        cout << (n / 2) + 1 << endl;
        // cout<<f1<<endl;
        // }
        // else
        // {
        //     cout<<f1<<endl;
        // }
    }
    return 0;
}