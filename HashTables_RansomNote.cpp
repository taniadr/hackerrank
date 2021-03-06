/*Problem: Hash Tables: Ransom Note 
Level: Easy
Link: https://www.hackerrank.com/challenges/ctci-ransom-note
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

typedef unordered_map<string,int> charmap;
typedef unordered_map<string,int>::const_iterator itera;

int main(){
    int m;
    int n;
    cin >> m >> n;
    bool flag=true;
	string aux;
	itera it;
	charmap magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> aux;
       it = magazine.find(aux);
       if (it == magazine.end())
	   {
       		magazine[aux] = 1;
	   }
	   else{
	   		magazine[aux] += 1;
	   }
    }
    charmap ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> aux;
       
       if (m<n){
       		flag = false;
       		break;
	   }
	   else{
	   		it = magazine.find(aux);
	   		if (it == magazine.end())	//nao tem a palavra, pode parar
	   		{
	   			flag = false;
				ransom_i = n;
				break;	
			}
			else{
				magazine[aux] -= 1;
				if (magazine[aux] <= 0)			//se acabou as words, exclui a palavra
				{
					magazine.erase(aux);
				}
			}
	   }
       
    }
	if(flag) 
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

