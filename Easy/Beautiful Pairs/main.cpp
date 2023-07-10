#include <iostream>
#include <vector>

using namespace std;


int beautifulPairs(int n){

    int temp;
    int banyak = 0;
    int data[1001] = {0};

    for(int i=0 ; i<n ; i++){
        cin >> temp;
        data[temp]++;
    }

    for(int i=0 ; i<n ; i++){
        cin >> temp;
        if(data[temp] > 0){
            banyak++;
            data[temp]--;
        }
    }



    if(banyak == n){
        return banyak-1;
    }else{
        return banyak+1;
    }


}


int main(){

    int n;

    cin >> n;

    int banyak = beautifulPairs(n);

    cout << banyak << endl;



    return 0;
}
