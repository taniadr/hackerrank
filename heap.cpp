/* Heap implementation 
	Using Cormen 3rd-ed P.151 pdf version*/
// Problem: ;
// Link: 
// Level: 
// coder: taniadr
// Complexity: 
 
 /*if (intVector.size() < 2) {
        throw invalid_argument("Getting the product of numbers at"
            " other indices requires at least 2 numbers");
    }*/
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
#include <regex>
#include <new>
using namespace std;
#define ALPHABET_SIZE (26)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')// Converts key current character into index
bool myf (int i, int j) { return i<j ; }

int parent(int i){ return floor(i/2); }
int left(int i){ return 2*i; }
int right(int i){ return (2*i+1); }

/*Returns the min elem which is the 1st*/
int peek(vector<int> heap){
	if (heap.empty()) 
        throw invalid_argument("Empty");
    
    return heap[0];
}
/*Extracts the min element*/
int pool(vector<int> heap){
	if (heap.empty()) 
        throw invalid_argument("Empty");
    
    int item = heap[0];
    vector<int>::iterator index_last_item = heap.end()-1;
    heap[0] = *index_last_item;	//coloca o último adicionado na raiz
    heap.erase(index_last_item);
    heapifyDown(heap);
    return item;
	
}

void add(vector<int> heap, int item){
	heap.push_back(item);
	heapifyUp(heap);
}

void heapifyUp(vector<int> heap){


}

void heapifyDown(vector<int> heap){


}
int main() {


	return 0;
}
