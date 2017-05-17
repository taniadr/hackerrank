//Problem: https://www.hackerrank.com/challenges/ctci-lonely-integer
//Level: Easy

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

int lonelyInt(vector<int> t){

	int resp=0;
	for (int i=0; i<t.size(); i++){
		resp ^= t[i];
	}
    return resp;
	
}

int main(){
    int n;
    cin >> n;
   
   	vector<int> table(n);
   	table.assign(n, 0);
   	int temp;
   	if (n == 1){
   		cin>>temp;
   		cout<<temp<<endl;
   		
	   }
   	else{
   	
	   for (int i=0; i<n; i++){
   			cin>>table[i];
   			
	   	}
   		cout<<lonelyInt(table)<<endl;	
	}
   		
   	
   	
    return 0;
}

