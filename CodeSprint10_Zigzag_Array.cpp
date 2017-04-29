/*Problem: Zigzag Array - World CodeSprint10 
Level: Easy
Link: https://www.hackerrank.com/contests/world-codesprint-10/challenges/zigzag-array
Coder: taniadr // https://github.com/taniadr/hackerrank
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

//void zigZag(int arr[], int n)
int minimumDeletions(vector < int > a){

    int n = a.size();
    vector<int> arr = a;
    int qtSwap = 0;
    bool flag = true;
 
    	if (arr[0] < arr[1])  flag=true;
    	else flag = false;
    		
    for (int i=0; i<n-2; i++)
    {
    
        if (flag)  /* "<" relation expected */
        {
            /* If we have a situation like A > B > C,
               we get A > B < C by swapping B and C */
            if (arr[i] > arr[i+1] && i+1 <=n){
              //  swap(arr[i], arr[i+1]);
             	qtSwap++;   
            }
        }
        else /* ">" relation expected */
        {
            /* If we have a situation like A < B < C,
               we get A < C > B by swapping B and C */
            if (arr[i] < arr[i+1] && i+1 <=n){
               // swap(arr[i], arr[i+1]);
                qtSwap++;
            }
        }
        
        flag = !flag; /* flip flag */
    }
    return qtSwap;
}


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // Return the minimum number of elements to delete to make the array zigzag
    int result = minimumDeletions(a);
    cout << result << endl;
    return 0;
}

