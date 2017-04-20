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

#include <set>
/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    bool resp = false;
    set<int> myset;
    set<int>::iterator it;
    vector<int> visited(100);
    
    while (head->next != NULL){
        if (head != NULL){
            it = myset.find(head->data);
            if (it == myset.end())  //nao passou por ela ainda        
                myset.insert(head->data);
            else
                resp = true;
            
            head = head->next;
        }
    }
    
    return resp;
}

