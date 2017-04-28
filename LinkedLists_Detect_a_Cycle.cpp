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
