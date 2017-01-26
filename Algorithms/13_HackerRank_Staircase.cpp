#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int count = n;
    
    for(int i = 0; i < n; i++){
       count -= 1;
       
       for(int j = 0; j < count; j++){
           cout << " ";
       }
       
       for(int k = 0; k < n - count; k++ ){
           cout << "#";
       }
       cout << endl;
    }
    return 0;
}
