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

vector<int> array_left_rotation(queue<int> f, int n, int k) {
    
	vector<int> output, auxv;
    
    for (int i = 0; i < k; i++){    	
    	auxv.push_back(f.front());
    	f.pop();    	
	}
	while (!f.empty()){
		output.push_back(f.front());
		f.pop();
	}
	for (int j=0; j< auxv.size(); j++)
		output.push_back(auxv[j]);
		    
	return output;
}

int main(){
    int n, k, aux;
    queue<int> fila;
    
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> aux;
        fila.push(aux);
    }
    vector<int> output = array_left_rotation(fila, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}

