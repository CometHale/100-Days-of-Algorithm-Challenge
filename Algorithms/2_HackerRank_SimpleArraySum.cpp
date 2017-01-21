#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sumArray(vector<int> array){
    int sum = 0;
    for(int i = 0; i < array.size(); i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    int sum = sumArray(arr);
    cout << sum;
    return 0;
}
