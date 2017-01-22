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
    int first_sum = 0;
    int second_sum = 0;
    int row_count = 0;
    int result = 0;
    
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
          if(a_i == a_j){
            first_sum += a[a_i][a_j];
          }
       }
    }
   
    for(int i = n-1; i >= 0; i--){
        second_sum += a[i][row_count];
        row_count += 1;
    }

    result = abs(first_sum - second_sum);
    cout << result;
    return 0;
}