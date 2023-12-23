#include <bits/stdc++.h>
using namespace std;

bool sortMax(int a, int b){
    return a > b;
}

bool sortMin(int a, int b){
    return a < b;
}

int main(){

    int q; 
    int n;
    int k; 
    int value; 
    bool acc = true;
    vector<int> valueA; 
    vector<int> valueB;

    cin >> q; 

    for(int i=0 ; i<q ; i++){
        valueA.clear();
        valueB.clear();

        cin >> n >> k;

        for(int j=0 ; j<n ; j++){
            cin >> value; 
            valueA.push_back(value);
        }

        for(int j=0 ; j<n ; j++){
            cin >> value; 
            valueB.push_back(value);
        }

        sort(valueA.begin(), valueA.end(), sortMin);
        sort(valueB.begin(), valueB.end(), sortMax);

        for(int j=0 ; j<n ; j++){
            if(valueA[j] + valueB[j] < k){
                acc = false; 
                break;
            }
        }

        if(acc){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
            acc = true;
        }
    }



    return 0; 
}