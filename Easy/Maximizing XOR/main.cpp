#include <bits/stdc++.h>

using namespace std;


int main(){

    int valueA, valueB;

    cin >> valueA >> valueB;

    int maxValue = valueA ^ valueB;

    for(int i=valueA ; i<=valueB-1 ; i++){
        for(int j=i+1 ; j<=valueB ; j++){
            maxValue = max(maxValue, i ^ j);
        }
        
    }

    cout << maxValue << endl;



    return 0;
}