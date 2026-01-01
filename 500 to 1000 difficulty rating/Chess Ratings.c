/* Difficulty : 651 */
/*
Problem Statement
Alice has recently started playing Chess. Her current rating is X.
She noticed that when she wins a game, her rating increases by 8 points.

Can you help Alice in finding out the minimum number of games she 
needs to win in order to make her rating greater than or equal to Y?

Input Format
The first line of input will contain an integer 
T — the number of test cases. The description of 
T test cases follows.
The first line of each test case contains two integers
X and Y, as described in the problem statement.

Output Format
For each test case, output the minimum number of games that Alice 
needs to win in order to make her rating greater than or equal to Y.

Constraints
1≤T≤10^4

1≤X≤Y≤10^4
*/
#include <stdio.h>

int main() {
    int i,n,x,y,difference; //n stands for number of testcases.
	// your code goes here
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d\n",&x,&y);
        difference = y - x;
        printf("%d\n",(difference + 8 - 1)/8);
        /*Here I did ceiling division - a new concept learnt.
        If we divide 10 by 8 by normal division in int type, we get 1;
        If we divide 10 by 8 in float type, we get 1.25;
        By using ceiling division i.e. not using a/b, but using (a+b-1)/b,
        we get answer as 2, which is correct for problem like this one.
        */
    }
    return 0;
}