//Week of Code 32 - my first participation
//Problem 2: Fight the monsters
//Level: Easy
//Coder: taniadr
#include <bits/stdc++.h>

using namespace std;

int getMaxMonsters(int n, int hit, int t, vector < int > h){
    sort(h.begin(), h.end());
    int k=0;
    for (int i=0; i<t; i++){
    	h[k] -= hit;
    	if (h[k] <= 0){
    		k++;
		}
	}
	return k;
}

int main() {
    int n;
    int hit;
    int t;
    cin >> n >> hit >> t;
    vector<int> h(n);
    for(int h_i = 0; h_i < n; h_i++){
       cin >> h[h_i];
    }
    
    int result = getMaxMonsters(n, hit, t, h);
    cout << result << endl;
    return 0;
}

