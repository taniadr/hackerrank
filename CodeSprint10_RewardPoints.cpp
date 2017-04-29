/*Problem: reward points - World CodeSprint10 
Level: Easy
Link: https://www.hackerrank.com/contests/world-codesprint-10/challenges
Coder: taniadr // https://github.com/taniadr/hackerrank
*/
#include <bits/stdc++.h>

using namespace std;

int getPoints(int month1, int month2, int month3){
    int total=0;
    int a = month1, b = month2, c = month3;
    
    if (a >=10) total+=100;
    else total+=10*a;
    
    if (b>=10) total+=100;
    else total += b*10;
    
    if (c>=10) total += 100;
    else total += 10*c;
        
        
    return total;
}

int main() {
    int month1;
    int month2;
    int month3;
    cin >> month1 >> month2 >> month3;
    int pointsEarned = getPoints(month1, month2, month3);
    cout << pointsEarned << endl;
    return 0;
}

