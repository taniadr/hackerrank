//https://www.hackerrank.com/challenges/sparse-arrays
//Level: Medium


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    map<string, int> dic;
    map<string, int>::iterator it;
	int N, Q;
    cin>>N;
    string temp;
    for (int i=0; i<N; i++){
    	cin>>temp;
    	it = dic.find(temp);
		if (it != dic.end())
    		dic[temp]+=1;
    	else
    		dic[temp] = 1;
	}
	cin>>Q;
    for (int j=0; j<Q; j++){
    	cin>>temp;
    	it = dic.find(temp);
		if (it != dic.end())
			cout<< dic[temp] <<endl;
		else
			cout<<"0\n";
	}
    
    return 0;
}

