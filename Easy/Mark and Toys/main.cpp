#include <iostream>
#include <vector>

using namespace std;


void insertionSortLastIndex(vector<int> &data){

    int index = data.size()-1;


    while(index > 0){
        if(data[index] < data[index-1]){
            swap(data[index], data[index-1]);
            index--;
        }else{
            break;
        }
    }
}

void swap(int &a, int &b){
    int temp; 
    temp = a; 
    a = b; 
    b = temp;
}


int main(){

    int n; 
    int money;
    vector<int> priceData;

    cin >> n >> money;


    int temp;
    for(int i=0 ; i<n ; i++){
        cin >> temp; 
        priceData.push_back(temp);
        insertionSortLastIndex(priceData);
    }

    int index = 0;
    while(money > 0){
        if(money > priceData[index]){
            money -= priceData[index]; 
            index++;
        }else{
            break;
        }
    }

    cout << index << endl;



    return 0;
}