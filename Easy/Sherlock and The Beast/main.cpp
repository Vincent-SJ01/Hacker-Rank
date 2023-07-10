#include <iostream>


using namespace std;

void decentNumber(int nilai);


int main(){

    int n;
    int temp;
    cin >> n;

    for(int i=0 ; i<n ; i++){
        cin >> temp;
        decentNumber(temp);
        cout << endl;
    }

    return 0;
}



void decentNumber(int nilai){

    int sisa  = 0;
    int bagi3 = 0;
    int bagi5 = 0;


    bagi3 = nilai/3;
    sisa = nilai%3;


    if(sisa == 2){
        if(bagi3 > 0){
            sisa  = 0;
            bagi5 += 1;
            bagi3 -= 1;
        }
    }else if(sisa == 1){
        if(bagi3 > 2){
            sisa = 0;
            bagi3 -= 3;
            bagi5 += 2;
        }
    }


    if(sisa != 0){
        cout << -1;
        return;
    }

    for(int i=0 ; i<bagi3*3 ; i++){
        cout << 5;
    }
    for(int i=0 ; i<bagi5*5 ; i++){
        cout << 3;
    }
}
