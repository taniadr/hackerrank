// Problem: Tries: No Prefix Set
// Link: https://www.hackerrank.com/challenges/no-prefix-set
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
#define STRSIZE (60)

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
	if (pCur->count > 1)
		cout<<"BAD SET\n"<<key<<endl;
	//return (pCur != NULL && level == tam);	//considera substring assim!
	
	return (pCur != NULL && pCur->isLeaf );	//considera somente string inteira
}
int main(){

  	TrieNode *dic = getNode();
	vector<string> tofind;

	char contact[60];
	
    int n;
    cin >> n;
    
    for(int a0 = 0; a0 < n; a0++){
        cin >> contact;
        
		insertTrie(dic, contact);
    }  
    for(int a0 = 0; a0 < n; a0++){
	if (search(dic, contact))
				int oi; //do nothing
			else
				cout<<"0\n";
		}
    return 0;
}

