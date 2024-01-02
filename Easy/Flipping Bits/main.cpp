#include <bits/stdc++.h>
#include <math.h>

using namespace std;

string convertToBiner(long n){
    
    string result = "";
    do{
        result = ((n % 2 == 0)? "0" : "1") + result;
        n = n / 2;
    }while(n > 0); 

    while(result.length() < 32){
        result = "0" + result;
    }

    return result;
}

unsigned long flippingBits(long n){

    string binerRepresentation = convertToBiner(n);
    unsigned long temp = 1;
    unsigned long result = 0;

    for(int i=binerRepresentation.length()-1 ; i>= 0 ; i--){
        if(binerRepresentation[i] == '0'){
            result += temp;
        }
        temp *= 2;
    }

    return result;
}


int main(){

    long n; 
    long value;
    unsigned long result;

    cin >> n; 

    for(int i=0 ; i<n ; i++){
        cin >> value;
        result = flippingBits(value);
        cout << result << endl;
    }



    return 0;
}