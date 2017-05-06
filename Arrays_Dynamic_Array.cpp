// Problem: Dynamic Array
// https://www.hackerrank.com/challenges/dynamic-array
// Level: Easy
//coder: taniadr
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
#include <map>
#define XOR_MODE(a, b) (a^b)

using namespace std;

int main() {
    
	long int N, Q, q, x, y, newy, index;
	long int lastAns = 0;
	map<long int, vector<long int>> seqList;
	//vector<vector<long long>> v(seq);
	cin>>N>>Q;	
	
	for (int i=0; i<Q; i++){
		cin>>q;
		cin>>x>>y;
		index = XOR_MODE(x,lastAns)%N;
		if (q == 1){
			seqList[index].push_back(y);// = y;
			
		}
		else{
			int sizeone = seqList[index].size();
			newy = y % sizeone;
			lastAns = seqList[index][newy];
			cout<<lastAns<<endl;
		}	
	}

    return 0;
}

