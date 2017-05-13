#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    long long int n;
    cin >> n;
    vector<long long int> arr(n);
    for(long long int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    long long int soma = 0;
    for (long long int i=0; i<n; i++)
        soma+= arr[i];
    cout<<soma<<endl;
    return 0;
}

