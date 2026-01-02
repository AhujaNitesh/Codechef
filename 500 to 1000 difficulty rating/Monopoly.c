/* Difficulty : 578 */
/*
Problem Statement
There are 4 companies in the markets of Chefland,
A,B,C, and D.
This year, Company A made a profit of P lakh rupees,
Company B made a profit of Q lakh rupees,
Company C made a profit of R lakh rupees,
Company D made a profit of S lakh rupees.
There is said to be a monopoly in the market if the profit made by one company is
strictly greater than the sum of profits made by all other companies.
Determine if there is a monopoly in the market or not.

Input Format
The first line of input will contain a single integer T,
denoting the number of test cases.
The first line and only line of each test case contains four space-separated integers
P, Q, R and S — the profits made by companies A, B, C and D respectively.

Output Format
For each test case, output YES if there is a monopoly in the market. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

Constraints
1≤T≤5000
1≤P,Q,R,S≤100
*/
#include <stdio.h>

int main() {
    int i,n,p,q,r,s,largest,difference;
    int sum = 0;
	// your code goes here
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d\n",&p,&q,&r,&s);
        if(p>q && p>r && p>s)
        {
            largest = p;
        }
        else if(q>r && q>s)
        {
            largest = q;
        }
        else if(r>s)
        {
            largest = r;
        }
        else
        {
            largest = s;
        }
        sum = p+q+r+s;
        difference = sum - largest; /*Gives the sum of the remaining the remaining
        three companies removing the largest one.*/
        /*New thing learnt today!*/
        if(largest>difference)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}