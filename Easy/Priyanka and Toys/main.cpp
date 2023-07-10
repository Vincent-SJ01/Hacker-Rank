#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int toys(vector<int> data);


int main(){


    vector<int> data;
    int temp;
    int n;
    cin >> n;

    for(int i=0 ; i<n ; i++){
        cin >> temp;
        data.push_back(temp);
    }

    cout << toys(data) << endl;


    return 0;
}



int toys(vector<int> data){

    sort(data.begin(), data.end());

    int kecil = data[0];
    int count = 1;
    for(int i=0 ; i<data.size(); i++){
        if(data[i] > kecil+4){
            kecil = data[i];
            count++;
        }
    }

    return count;
}
