/*Problem: Recursion - Fibonacci Numbers
Level: Easy
Link: https://www.hackerrank.com/challenges/ctci-fibonacci-numbers
Coder: taniadr // https://github.com/taniadr/hackerrank
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;

int fibonacci(int n, vector<int> &fib) {
    
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    
    if (fib[n] == 0)
        fib[n] = fibonacci(n-1, fib) +fibonacci(n-2, fib);
    
    return fib[n];

}
int main() {
	clock_t t1,t2;
    
    
	    int n;
	    cin >> n;
	    vector<int> fibs;
	    fibs.assign(2*n, 0);  
	    t1=clock();
	    cout << fibonacci(n, fibs)<<endl;
	
	t2=clock();
    float diff ((float)t2-(float)t1);
   // cout<<diff<<endl;
    
    float seconds = diff / CLOCKS_PER_SEC;
	cout<<seconds<<endl;
	
	system ("pause");
    return 0;
}

