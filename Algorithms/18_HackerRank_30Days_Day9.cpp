#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int N){
    if(N > 1){
        return N * factorial(N-1);
    }
    else{
        return 1;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    int result = factorial(N);
    
    cout << result;
    return 0;
}
