// Problem:
// Link: https://www.hackerrank.com/challenges/ctci-bubble-sort
// Level: Medium
// Coder: taniadr
// Runtime Complexity: O(n^2)


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

int totalTroca;

void bubble (vector<int> lista, int n){
    vector<int> totalTroca;
    int f=0;
    
    for (int i = 0; i < n; i++) {
        int numberOfSwaps = 0;

        for (int j = 0; j < n - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                swap(lista[j], lista[j + 1]);
                numberOfSwaps++;
                totalTroca.push_back(1); 
            }                  
        }
        if (numberOfSwaps == 0) {	//it means array already sorted
            break;
        }
    }
    f = totalTroca.size();

    cout<<"Array is sorted in "<<f<<" swaps.\n";
    cout<<"First Element: "<<lista[0]<<endl;
    cout<<"Last Element: "<<lista[n-1]<<endl;
    
	//for (auto& x: lista) 		cout<<x<<" ";
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    bubble(a, n);
	return 0;
}

