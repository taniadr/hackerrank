/*
 * Complete the function below.
 */
void StairCase(int n) {
    
    char mat[n][n] ={'#'};
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            if (j == (n-1-i) || j >= (n-1-i)) //diagonal secundaria
                cout<<'#';
            else 
                cout<<" ";
            if (j+1 == n && i+1 <n)
                cout<<"\n";
        }
    }
}
