//Dijkstra 
//coder: taniar 2014
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
#define INF 1000000

int main(){
	int V;
	cin>>V;
	
	vector< vector< pair<int, int > > > AdjList;
	AdjList.assign(V+1, vector<pair<int,int>>());
	
	vector<int> dist(V+1, INF);
	dist[s] = 0; 
	
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	pq.push(pair<int,int>(0, s));

 	while (!pq.empty()) {
	    pair<int,int> front = pq.top();
		pq.pop();
	    int d = front.first, u = front.second;
	    if (d > dist[u]) 
			continue;
	     for (int j = 0; j < (int)AdjList[u].size(); j++)
		 { 
            pair<int,int> v = AdjList[u][j];
            if (dist[u] + v.second < dist[v.first])
			{
                dist[v.first] = dist[u] + v.second;
                pq.push(pair<int,int>(dist[v.first], v.first)); 
			}      
 		}   
 	}
}
