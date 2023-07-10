#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


void generateBigInt(int data[], int faktorial, int len);

int main(){

    int n;
    int data[1000] = {0};

    cin >> n;

    data[0] = n % 10;
    data[1] = n / 10;

    generateBigInt(data, n-1, 4);
    
    return 0;
}



void generateBigInt(int data[], int faktorial, int len){

    int kali;
    int carry = 0;

    if(faktorial != 0){
        for(int i=0 ; i<len ; i++){
            kali = data[i] * faktorial + carry;
            carry = kali/10;
            data[i] = kali % 10;
        }

        // cout << endl;
        // cout << "faktorial : " << faktorial << endl;
        // for(int i=0 ; i<len ; i ++){
        //     cout << data[i] << " ";
        // }
        // cout << endl;

        generateBigInt(data, faktorial-1, len+2);
    }else{
        bool print = false;

        for(int i=len-1 ; i>=0 ; i--){
            if(print){
                cout << data[i];
            }else{
                if(data[i] != 0){
                    cout << data[i];
                    print = true;
                }
            }
        }
    }



}
