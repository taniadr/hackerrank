#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int V, n;
    cin>>V>>n;
    int ar[n];
    
    for (auto& x: ar)
        cin>>x;
    
    int i=0;
    while(ar[i] != V)
        i++;   
    cout<<i<<endl;
            
    return 0;
}
