#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    map<string,string> contacts;
    int n;
    string name;
    string number;
    string query;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        name.clear();
        number.clear();
        cin >> name >> number;
        contacts[name] = number;
    }
    
    while(cin >> query){
        if(contacts.find(query) != contacts.end()){
            cout << query << "="<< contacts[query] << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}