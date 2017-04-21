/*Problem: Recursion - Fibonacci Numbers
Level: Easy
Link: https://www.hackerrank.com/challenges/ctci-fibonacci-numbers
Coder: taniadr // https://github.com/taniadr/hackerrank
*/

#include <iostream>

using namespace std;

int fibonacci(int n) {
    //condições de parada primeiro - regras da recursão
	if (n == 0)
    	return 0;
    if (n == 1)
    	return 1;
    
    return fibonacci(n-1)+fibonacci(n-2);

}
int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
