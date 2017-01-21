#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> compareTrips(vector<int> Alice, vector<int> Bob){
       
    vector<int>scores {0,0};
    
    for(int i = 0; i < 3; i++){
        if(Alice[i] > Bob[i]){
            scores[0] += 1;
        }
        else if(Alice[i] < Bob[i]){
            scores[1] += 1;
        }
    }
    return(scores);
}

int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    
    vector<int>Alice {a0,a1,a2};
    vector<int>Bob {b0,b1,b2};
    
    vector<int>comp_results = compareTrips(Alice,Bob);
    cout << comp_results[0] << " " << comp_results[1];
    return 0;
}
