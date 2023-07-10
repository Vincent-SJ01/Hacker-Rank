#include <iostream>
#include <vector>


using namespace std;

void swap(int &a, int &b){
    int temp;

    temp = a;
    a = b;
    b = temp;
}



int main(){

    int n; int k;
    int temp;
    vector<int> data;

    cin >> n >> k;

    for(int i=0 ; i<n ; i++){
        cin >> temp;
        data.push_back(temp);
    }
    
    int indexI = 0;
    int sizeData = data.size();

    while(k > 0){
        
        if(indexI >= sizeData-1) break;

        if(data[indexI] == sizeData-indexI){
            indexI++;
            continue;
        }

        for(int j=indexI+1; j<sizeData ; j++){
            if(data[j] == sizeData-indexI){
                swap(data[j], data[indexI]);
                break;
            }
        }

        k--;
        indexI++;
    }

    for(int i=0 ; i<n ; i++){
        cout << data[i] << " ";
    }
    cout << endl;


    return 0;
}