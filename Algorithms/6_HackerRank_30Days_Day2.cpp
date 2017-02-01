#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double mealCost;
    int tipPercent;
    int taxPercent;
    double totalCost = 0;
    
    cin >> mealCost >> tipPercent >> taxPercent;
    
    totalCost =  mealCost + (mealCost * (double(tipPercent)/100)) + (mealCost * (double(taxPercent)/100));
    totalCost = round(totalCost);
    cout << "The total meal cost is " << totalCost << " dollars.";
    
    return 0;
}