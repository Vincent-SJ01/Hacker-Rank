#include <bits/stdc++.h>

using namespace std;


bool gameOfStones(int n){

    bool condition1 = n%7 == 0;
    bool condition2 = n%7 == 1;

    return condition1 || condition2;
}

int main() {

    int n; 
    int value;
    cin >> n; 


    for(int i=0 ; i<n ; i++){
        cin >> value;
        cout << ((gameOfStones(value))? "Second" : "First") << endl;
    }

    return 0;
}