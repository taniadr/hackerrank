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

typedef unordered_map<string,int> stringmap;
typedef unordered_map<char,int> charmap;
typedef unordered_map<char,int>::const_iterator itera;
typedef vector<char>::const_iterator iteraC;
bool isEqualChar(char i, char j) { return i == j; }

int number_needed(string a, string b) {
   
   int i, quant; 
   int somaFinal = 0;
	vector<char> nums;
	vector<int> counts; //para contar quantos chars tem em A, e dps subtrair qtos desses tem em B	
//	char a = 'a';	
	
	for (int i=0; i<26; i++)
	{
		nums.push_back(i + 'a');
		counts.push_back(0);
	}
	
	for (int i=0; i<26; i++)	//adiciona a contagem de incidencias na string 1
	{
		quant = count(a.begin(), a.end(), nums[i]);
		counts[i] = quant;
	}

	for (int i=0; i<26; i++)	//subtrai a contagem de incidencias na string 2
	{
		quant = count(b.begin(), b.end(), nums[i]);
		counts[i] -= quant;
	}
	for (int i=0; i<26; i++)
	{
		somaFinal += abs(counts[i]); //soma todos os valores
	}
   return somaFinal;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	cout << number_needed(a, b) << endl;
    return 0;
}
