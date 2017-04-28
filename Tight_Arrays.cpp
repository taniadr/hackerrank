/*Problem: Tight Arrays
Contest:  101 Hack 48 - problem 1
Level: Easy
Link: https://www.hackerrank.com/contests/101hack48/challenges/tight-arrays
Coder: taniadr // https://github.com/taniadr/hackerrank
*/

#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

//a = first elem; c = last elem; b = element that must be in the array

int shortestTightArray(int a, int b, int c){
  
    int target, i, aux;
    vector<int> vec;
	
	if (a == b && a == c)
		return 1;
	
	if (a == c)	//foi o unico caso que esqueci de considerar
	{
		aux = a;
		if (a < b)
			while (aux <= b)
				vec.push_back(aux++);
		else
			while (aux >= b)
				vec.push_back(aux--);
		
		return (2*vec.size() - 1);
		
	}
	
	if (a <= b)
	{	
		aux = a;
		while (aux <= b)
		{
			vec.push_back(aux);
			aux++;
		}
		if (b == c)
			return vec.size();
			
		if (b > c) //b < c, e aux = b+1!!
		{	
			aux = b-1;
			while (aux >= c){
				vec.push_back(aux);
				aux--;
			}
		}
		else {	
			aux = b+1;
			while(aux <= c){
				vec.push_back(aux);
				aux++;
			}
		}
		return vec.size();
	}
	if (a > b )
	{
		aux = a;
		while (aux >= b)
		{
			vec.push_back(aux--);
		}
		if (b == c)
			return vec.size();
		else{
			if (b < c)
			{
				aux = b+1;
				while (aux <= c)
					vec.push_back(aux++);
			}
			if (b > c){
				aux = b-1;
				while (aux >= c)
					vec.push_back(aux--);
			}
		}
	}
	return vec.size();
}

int main() {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int result = shortestTightArray(a, b, c);
    cout << result << endl;
    return 0;
}

