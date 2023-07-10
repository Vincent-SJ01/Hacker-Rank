#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b; 
    b = temp;
}

void insertionSort(vector<int> &data){

    int index = data.size()-1;

    while(index > 0){
        if(data[index] > data[index-1]){
            swap(data[index], data[index-1]);
            index--;
        }else{
            break;
        }
    }
}


unsigned int getTotalFlower(vector<int> data, int k){

    int indexK = 1;
    int length = data.size();
    unsigned int total = 0;

    for(int index=0 ; index < length ; index++){
        total += data[index] * ((index/k)+1);
    }
    return total;
}

int main(){

    int n; 
    int k;
    vector<int> data;


    cin >> n >> k; 

    int temp;
    for(int i=0 ; i<n ; i++){
        cin >> temp;
        data.push_back(temp);
        insertionSort(data);
    }

    
    unsigned int total = getTotalFlower(data, k);

    cout << total << endl;




    return 0;
}