//Balanced Brackets
//by saikiran9194
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

using namespace std;

bool pushitout (string str)
{
	
	stack<char> p1;
	bool flag;
	char a1;

	if (str.length()%2 != 0){
		cout<<"NO\n";
	}	
		else
		{
			for (int i = 0;  i < str.length(); i++ )
			{
				if(str[i] == '(' || str[i] == '[' || str[i] == '{'){ //if it is an open bracket
					p1.push(str[i]);
				}
				
				//if closing bracket, pop bracket and compare if its a pair
				if (str[i] == ')' || str[i] == ']' || str[i] == '}')
				{
						//if stack becomes empty in between then also its not balanced
					if(p1.empty())
					{
						return false;
					}
					//take the top to compare now if it is the openning of the closing bracket found
					a1 = p1.top();
					
					if (str[i] == ')' && a1 == '('){
						p1.pop();
					}
					if (str[i] == '}' && a1 == '{'){
						p1.pop();
					}
					if (str[i] == ']' && a1 == '['){
						p1.pop();
					}
					
				}
			
		}
			if (str.length() > 0 && p1.empty())
				flag = true;
			else
				flag = false;
		}
		
		return flag;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        if (pushitout(s) == true){
        	cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
        s.clear();
    }
    return 0;
}

