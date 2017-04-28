/*Problem: Time Complexity: Primality 
Level: Medium
Link: https://www.hackerrank.com/challenges/ctci-big-o
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
/*
string isPrime(int n)
{
	string nao = "Not prime\n";
	string sim = "Prime\n";
	vector<int> lista;
	
	if (n == 1)
		return nao;
	if (n == 2)
		return sim;
	//Crivo de Eratóstenes
	else{
		//First step
		int lastCheck =  ceil(sqrt(n));
		//second step
		for (int i=2; i<=n; i++)
			lista.push_back(i);
		//third step

		std::vector<int>::iterator it = lista.begin();
		int check = *it;
		int auxi=1;
		while (check <= lastCheck){	
			for (it; it != lista.end(); ++it){
				if (fmod(*it, check) == 0)
					*it = 1;
			}
			it = lista.begin();
			check = lista[auxi];
			auxi++;
		}
		if (lista.back() == n)
			return sim;
	}
	return nao;	
}
*/

bool isPrime (int N)
{
	if (N<2) 
		return false;
	
	for (int x = 2; x*x <=N; x++ ){
		if (N%x == 0)
			return false;
	}	
	return true;
}

int main(){
    int p;
    cin >> p;
    for(int a0 = 0; a0 < p; a0++){
        int n;
        cin >> n;
        
		if (isPrime(n)) 
			cout<<"Prime\n";
		else 
			cout<<"Not prime\n"; 
    }
    return 0;
}

