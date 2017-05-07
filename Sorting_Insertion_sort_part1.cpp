//Problem: You are given an sorted array, except by its last element. Find the right position 
//for this element and organize the array following the insertion-sort approach

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {

    int var = ar.back();
    int i;
    for (i = ar.size()-2; i>0; i--){
        if (ar[i] > var){
            ar[i+1] = ar[i];
        
        for (auto& x: ar)	//print the elements to show the swap made above
            cout<<x<<' ';
        }
        cout<<endl;
        ar[i] = var;
    }
    for (auto& x: ar)	//print the final sorted array
        cout<<x<<' ';
    
    //cout<<endl;
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}

