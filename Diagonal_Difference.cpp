//Problem: Diagonal Difference
//Link: https://www.hackerrank.com/challenges/diagonal-difference
//Level: Easy
//coder: taniadr

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int md=0;
    int sd=0;
    for (int i=0; i<n; i++){
        for (int j=n-1; j>=0; j--){
            if (i == j)
              md += a[i][j];
            if (j == n-1-i)
              sd += a[i][j];
        }
    }
    cout<<abs(md-sd)<<"\n";
    return 0;
}

