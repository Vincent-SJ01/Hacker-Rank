#include <bits/stdc++.h>
#include <math.h>

using namespace std;

string convertToBiner(long n){
    
    string result = "";
    do{
        result = ((n % 2 == 0)? "0" : "1") + result;
        n = n / 2;
    }while(n > 0); 

    return result;
}

long sumVsXOR(long n){

    string binerRepresentation = convertToBiner(n);
    
    long zeroCounter = 0;
    for(int i=0 ; i<binerRepresentation.length() ; i++){
        if(binerRepresentation[i] == '0') zeroCounter++;
    }

    long result = (n != 0) ? pow(2, zeroCounter) : 1;


    return result;
}


int main(){

    long n; 

    cin >> n; 

    long result = sumVsXOR(n);
    
    // string result = convertToBiner(n);

    cout << result << endl;


    return 0;
}