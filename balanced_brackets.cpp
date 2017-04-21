/*Problem: Stacks: Balanced Brackets 
Level: Medium
Link: https://www.hackerrank.com/challenges/ctci-balanced-brackets
Coder: taniadr // https://github.com/taniadr/hackerrank
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool is_balanced(string expression) {
    bool result = true;
    stack<char> pilha;
    pilha.push(expression[0]);
    for (int i=1; i<expression.length(); i++){
    	
    	if (expression[i] == '{' || expression[i] == '(' || expression[i] == '['){
    		pilha.push(expression[i]);
		}
		else{
			if (expression[i] == '}'){
				 if (!pilha.empty() && pilha.top() == '{')
				 {
				 	pilha.pop();
				 }
				 else{
				 	result = false;
				 }
			}
			if (expression[i] == ')'){
				 if (!pilha.empty() && pilha.top() == '(')
				 {
				 	pilha.pop();
				 }
				 else{
				 	result = false;
				 }
			}			
			if (expression[i] == ']'){
				 if (!pilha.empty() && pilha.top() == '[')
				 {
				 	pilha.pop();
				 }
				 else{
				 	result = false;
				 }
			}			
		}
	}
    if (!pilha.empty())
    	result = false;
    	
    return result;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

