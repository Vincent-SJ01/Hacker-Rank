#include <bits/stdc++.h>

using namespace std;


int lonelyList(vector<int> listValue){

    sort(listValue.begin(), listValue.end());

    for(int i=0 ; i<listValue.size() ; i+=2){
        if(listValue[i] != listValue[i+1]){
            return listValue[i];
        }
    }

    return listValue[listValue.size()-1];

}


int main(){

    int n; 
    vector<int> listValue;
    
    cin >> n; 

    for(int i=0 ; i<n ; i++){
        int value; 
        cin >> value; 

        listValue.push_back(value);
    }

    int result = lonelyList(listValue);

    cout << result << endl;



    return 0;
}