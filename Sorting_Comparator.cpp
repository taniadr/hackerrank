#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

struct Player {
    string name;
    int score;
}; 

bool myopts (Player a, Player b){ 
	   if (a.score != b.score)
        return (a.score > b.score); 
        else return a.name < b.name;
} 

bool compare(Player a, Player b){
	
	if (a.name == b.name)
		return (a.score > b.score);
	else
		return (a.name < b.name );
	
}


vector<Player> comparator(vector<Player> players) {
    
    int tam = players.size();
    vector<Player> s1(tam);
	map<string, int> rank;

	sort(players.begin(), players.end(), compare);	 
    sort(players.begin(), players.end(), myopts); 	
	
	for (auto& x: players )
		cout<< x.name <<" "<< x.score<<endl;
   	
	return s1=players;
}

int main() {
    
    int n;
    cin >> n;
    vector< Player > players;
    
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    
    vector<Player > answer = comparator(players);

    return 0;
}

