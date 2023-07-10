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

    int index; int besar;
    for(int i=0 ; i<k ; i++){
        besar = data[i];
        index = i;

        for(int j=data.size()-1; j>i ; j--){
            if(data[j] > besar){
                besar = data[j];
                index = j;
            }
        }

        swap(data[i], data[index]);
    }

    for(int i=0 ; i<n ; i++){
        cout << data[i] << " ";
    }
    cout << endl;


    return 0;
}
