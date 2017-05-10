/*Problem: Recursion - Fibonacci Numbers
Level: Easy
Link: https://www.hackerrank.com/challenges/ctci-fibonacci-numbers
Coder: taniadr // https://github.com/taniadr/hackerrank
*/
#include <iostream>
#include <time.h>
using namespace std;

int fibonacci(int n) {
    //condi��es de parada primeiro - regras da recurs�o
	if (n == 0)
    	return 0;
    if (n == 1)
    	return 1;
    
    return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
    clock_t t1,t2;
    t1=clock();
    //code goes here
     int n;
    cin >> n;
    cout << fibonacci(n)<<endl;
    
    t2=clock();
    float diff ((float)t2-(float)t1);
    cout<<diff<<endl;
    
	system ("pause");
    return 0;
    
}
