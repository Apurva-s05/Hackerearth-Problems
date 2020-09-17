/*
Consider an n-element array, a, where each index i in the array contains a reference to an array of  integers Ki (where the value of Ki varies from array to array). See the Explanation section below for a diagram.

Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j denotes an index in the array located at a[i] . For each query, find and print the value of element j in the array at location a[i] on a new line.


Input Format

The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  (the number of queries).
Each line  of the  subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the -element array located at .
Each of the  subsequent lines contains two space-separated integers describing the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.

sample input:
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

sample output:
5
9
*/


/*solution*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, q;
    cin >> n >> q;

    int *ptr[n];

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        ptr[i] = new int[a];
        for(int j=0; j<a; j++){
            cin>>ptr[i][j];
        }          
    }

    for(int i=0; i<q; i++){
        int r, c;
        cin >> r;
        cin >> c;
        cout << ptr[r][c]<<endl;
    }
    
    return 0;
}
