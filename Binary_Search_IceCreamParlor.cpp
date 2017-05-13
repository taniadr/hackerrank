#include <bits/stdc++.h>
using namespace std;

struct icecream{
	int flavor;
	int cost;
	
};

bool compare(icecream a, icecream b){ return a.cost < b.cost; }

int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {       
        cin >> m >> n;
        vector<icecream> arr;

        for (int k = 0; k < n; k++) {
            int cost;
            cin >> cost;
            icecream temp;
            temp.cost = cost;
            temp.flavor = k+1;
            arr.push_back(temp);
        }

        sort(arr.begin(), arr.end(), compare);
      
        for(int i = 0; i < n-1  ; i++) {
            
           int moneyleft = m - arr[i].cost;
           int savefirst = i;
        	
        	for (int j=i+1; j<n; j++){
        		if (moneyleft - arr[j].cost == 0 ){
        			cout<<min(arr[savefirst].flavor, arr[j].flavor)<<" "<<max(arr[savefirst].flavor, arr[j].flavor)<<endl;
        			
        			j = n; i = n;
                }
				}
           
            }
        }
	}


