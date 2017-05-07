#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
}; 

vector<Player> comparator(vector<Player> players) {
    
    int tam = players.size();
    vector<Player> s1(tam);
    
	for (int i=0; i<tam; i++){
    	
		s1[i].push_back()->score
    	
	}
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
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}

