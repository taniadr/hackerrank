// Problem: QHeap;
// Link: https://www.hackerrank.com/challenges/qheap1
// Level: Easy
// coder: taniadr
// Complexity: timeout using vector & find; keep the minsofar ended that prob

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <math.h>
using namespace std;

bool myf (int i, int j) { return i<j ; }
//Heap indices computing
int parent(int i){ return floor(i/2); }
int left(int i){ return 2*i; }
int right(int i){ return (2*i+1); }

int main() {
    
    long int Q, op, v;
    cin>>Q;
    
    priority_queue<int> heap;
    vector<long int> h;
    vector<long int>::iterator it;
    long int minsofar = -10^10;
    for (int i=0; i<Q; i++){
        cin>>op;
        
        if (op == 3){
            cout<<minsofar<<endl;
        }
        else{
            cin>>v;
            if (h.empty()) minsofar = v;
            
            if (minsofar > v)
            	minsofar = v;
            	
            if (op == 1){
                h.push_back(v);
            }
            else{
                it = find(h.begin(), h.end(), v);
                h.erase(it);
                if (minsofar == v){
                	minsofar = *min_element(h.begin(), h.end());
                	minsofar = min(minsofar, h.back());
            	}
            }
            
        }
    }
    
    return 0;
}

