// Problem: Algorithmic Crush
// https://www.hackerrank.com/challenges/ctci-is-binary-search-tree
// Level: Hard
//coder: taniadr
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main() {
	
    int N, M;
    int a, b, k;
	cin>>N>>M;
	
    vector<int> list(N);
    list.assign(N, 0);

	while(N-- > 0){
		for (int i=0; i<M; i++){
			cin>>a>>b>>k;
			for (int m=a; m<b; m++){
				list[m] += k;
			}
		}
	}
	for (auto& x: list)
		cout<<x<<" ";
		
	sort(list.begin(), list.end());
	cout<<list[list.size()-1]<<endl;
    
    return 0;
}







