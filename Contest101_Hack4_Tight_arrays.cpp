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

int shortestTightArray(int a, int b, int c){
    //a = first elem; c = last elem; b = element that must be in the array
    int target, i;
    vector<int> vec;
	target = b;
	
	if (a == b == c)
		return 1;
	
	if (target == a)
	{
		vec.push_back(a);
		if (a > c){
			for (i=a+1; i>=c; i--)
				vec.push_back(i);
		}
		else{
			for (i=a+1; i<=c; i++)
				vec.push_back(i);
		}
	}
	else
	{
		if (target < a)	//subtrai de a até chegar nele
		{
			for (i=a; i>=target ; i--)
			{
				vec.push_back(i);
			}
		}	
		else	//target é maior que a;
		{ 	
			for (i=a; i<=target ; i++)
				vec.push_back(i);
	
			if (target == c){
				return vec.size();
			}
			else
			{
				if (target < c)
				{
					for (i = target+1; i<=c; i++)
						vec.push_back(i);
				}
				if (target > c)
				{
					for (i = target+1; i>=c; i--)
						vec.push_back(i);
				}
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

