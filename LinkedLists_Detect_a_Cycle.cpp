
Skip to content
This repository

    Pull requests
    Issues
    Gist

    @taniadr

1
0

    0

taniadr/hackerrank
Code
Issues 0
Pull requests 0
Projects 0
Wiki
Pulse
Graphs
Settings
hackerrank/LinkedLists_Detect_a_Cycle.cpp
9a019ed 3 days ago
tania Solved: LinkedLists - detect a cycle (it was something so simple.... …
60 lines (47 sloc) 1.17 KB
/*Problem: Linked Lists: Detect a Cycle 
Level: Easy
Link: https://www.hackerrank.com/challenges/ctci-linked-list-cycle
Coder: taniadr // https://github.com/taniadr/hackerrank
*/

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

typedef unordered_map<string,int> charmap;
typedef unordered_map<string,int>::const_iterator itera;

int has_cycle(Node* head) {
    
    Node *atual;
    Node *futuro;
    
    if (head == NULL)
    	return 0;
    
    atual = head;
    futuro = head;
    
    while (atual->next != NULL){
        
        atual = atual->next;
        futuro = futuro->next->next;
        
        if (futuro == NULL || atual == NULL)
            return 0;
        
        if (atual == futuro)
            return 1;
        
    }    
    return 0;
}

