#include <bits/stdc++.h>
#define char_to_n(c) ((int)c - (int)'a')
using namespace std;

bool compare(string a, string b){
    if(a.size() == b.size()){   //se for do mesmo tamanho, interessa o valor em int
        return a<b;
    } else{ 
        return a.size() < b.size(); //se nao for, ordena por comprimento
    }
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);

    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
       
    }
	 sort(unsorted.begin(), unsorted.end(), compare);
	 
    for (auto &x: unsorted)
    	cout<<x<<endl;
    
    return 0;
}
