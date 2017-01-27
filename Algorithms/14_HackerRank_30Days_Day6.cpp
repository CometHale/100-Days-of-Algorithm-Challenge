#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int T;
    string S;
    string even;
    string odd;
    
    cin >> T;
    getline(cin,S); // Get rid of the empty line
    
    for(int i = 0; i < T; i++){
        getline(cin,S);
        even.clear();
        odd.clear();
        for(int j = 0; j < S.length(); j++){
            if( j % 2 == 0){
                even.append(S.substr(j,1));
            }
            else{
                odd.append(S.substr(j,1));
            }
        }
        cout << even << " " << odd << endl;
        
    }
    
    return 0;
}
