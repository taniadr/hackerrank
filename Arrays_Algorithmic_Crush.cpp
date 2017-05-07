// Problem: Algorithmic Crush
// https://www.hackerrank.com/challenges/ctci-is-binary-search-tree
// Level: Hard
//coder: taniadr
//Complexity:
//				Timeout no WA com uso do long long & iterando de i=1 até i<=M, many timeout
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

bool myfn(long long int i, long long int j) { return i<j; }

int main() {
	
    long long int N, M;
    long long int a, b, k;
	cin>>N>>M;
	
    vector<long long int> v(N+1);
    
    v.assign(N+1, 0);

	for (long long int i=1; i<=M; i++){
		cin>>a>>b>>k;
		
		for (long long int j=a; j<=b; j++){
			v[j] += k;
		}	
	}
	vector<long long int>::iterator it = max_element(v.begin(), v.end(), myfn);
	
	cout<<max(*it, v.back())<<endl;
   
    return 0;
}

