#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

bool myfn(int i, int j) { return i<j; }


int main() {
    int N,a, b;
    
    cin>> N;
    stack<int> pilha;
    while (N--)
    {
    	cin>>a;
    	if (a == 1){
			cin>>b;
			if(pilha.empty()) 
				pilha.push(b);
            else {
                pilha.push(max(b,pilha.top())) ; //deixa o maximo sempre no topo
            }
		}
		if (a == 2)
		{
			pilha.pop();
		}
		if (a == 3)
		{
			cout << pilha.top()<<'\n';
			//cout<< *max_element(pilha, pilha+pilha.size());
		}
			
    	
	}
    return 0;
}

