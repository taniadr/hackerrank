// Problem: Tries: Contacts
// Link: https://www.hackerrank.com/challenges/ctci-contacts
// Level: Hard
// Coder: taniadr
// Runtime Complexity: search in O(M) = O(21) worst case
//						timeout with regex AND timeout with find method. (but less timeouts with find)
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
#define MAXV (100000)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')// Converts key current character into index
#define STRSIZE (22)

struct TrieNode {
    
    struct TrieNode *children[ALPHABET_SIZE];
  	int count;
    bool isLeaf;
    
    TrieNode() {
		count = 0;
	}
};

//return a initialized empty trie
struct TrieNode *getNode(void){
	
	struct TrieNode *pNode = NULL;
	pNode = new TrieNode;
	
	if (pNode){
		int i=0;
		
		pNode->isLeaf = false;
	
		for (i=0; i<ALPHABET_SIZE; i++){
			pNode->children[i] = NULL;
		}
	}
	return pNode;
}
// If not present, inserts key into trie
// If the key is prefix of trie node, just marks leaf node -> which is what we want for the problem Contacts!
void insertTrie(struct TrieNode *root, const char *key){
	
	int level;
	int tam = strlen(key);
	int index;
	
	struct TrieNode *pCur = root;
	
	for (level = 0; level < tam; level++){
		
		index = CHAR_TO_INDEX(key[level]);
		if (!pCur->children[index])		//se nao tiver
			pCur->children[index] = getNode();
		
		pCur = pCur->children[index];
		pCur->count++;
	}
	pCur->isLeaf = true;
	
}

bool search(struct TrieNode *root, const char *key){
	
	bool stop = false;
	int level;
	int tam = strlen(key);
	int index, pos_parou;
	struct TrieNode *pCur = root;
	
	for (level=0; level < tam; level++){
		
		index = CHAR_TO_INDEX(key[level]);
		//it is not on the trie
		if (!pCur->children[index]) {	//if doesnt have the char
			return false;
		}
		pCur = pCur->children[index];
	}
	cout<< pCur->count<<"\n";
	return (pCur != NULL && level == tam);	//considera substring assim!
	
	//return (pCur != NULL && pCur->isLeaf);	//considera somente string inteira
}
int main(){

  	TrieNode *dic = getNode();
  	
	vector<string> tofind;

	char op[5];
	char contact[22];
	
    int n;
    cin >> n;
    
	int k=0; //to control matrix tofind
    
    for(int a0 = 0; a0 < n; a0++){
        cin >> op >> contact;
        if (op[0] = 'a' && op[1] == 'd' && op[2] == 'd'){
			insertTrie(dic, contact);
		}
		else{
			if (search(dic, contact))
				int oi; //do nothing
			else
				cout<<"0\n";
		}
    }  
    return 0;
}

