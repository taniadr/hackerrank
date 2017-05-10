/*Problem: Recursion - Fibonacci Numbers
Level: Easy
Link: https://www.hackerrank.com/challenges/ctci-fibonacci-numbers
Coder: taniadr // https://github.com/taniadr/hackerrank
*/
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;

int fibonacci(int n, vector<int> &fib) {
    
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    
    if (fib[n] == 0)
        fib[n] = fibonacci(n-1, fib) +fibonacci(n-2, fib);
    
    return fib[n];

}
int fibonacciR(int n) {
    //condições de parada primeiro - regras da recursão
	if (n == 0)
    	return 0;
    if (n == 1)
    	return 1;
    
    return fibonacciR(n-1)+fibonacciR(n-2);

}
int main()
{
    clock_t t1,t2, t3, t4;
    int n;
    vector<int> fibs;
    cin >> n;
    fibs.assign(2*n, 0); 
    
    t1=clock();
    cout << fibonacciR(n)<<endl;
    t2=clock();
    
    float diff ((float)t2-(float)t1);
    float seconds = diff / CLOCKS_PER_SEC;
	cout<<seconds<<endl;
    
    t3=clock();
	cout << fibonacci(n, fibs)<<endl;
	t4=clock();
	
    float diff2 ((float)t4-(float)t3);
    float seconds2 = diff2 / CLOCKS_PER_SEC;
	cout<<seconds2<<endl;
    
	system ("pause");
    return 0;
    
}
