#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


int main(){
    int n;
    double positive = 0;
    double negative = 0;
    double zero = 0;
    
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        
       if(arr[arr_i] > 0){ // positive case
           positive += 1;
           
       }
       else if(arr[arr_i] < 0){ // negative case
           negative += 1;
       }
       else{ // zero case
           zero += 1;
       }
    }
    
    positive = positive/n;
    negative = negative/n;
    zero = zero/n;
    
    cout << setprecision(6) << fixed << positive << "\n" << negative << "\n" << zero;
    
    
    return 0;
}