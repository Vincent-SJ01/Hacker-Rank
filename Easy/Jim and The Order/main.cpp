#include <bits/stdc++.h> 

using namespace std;

vector<int> jimOrders(vector<vector<int>> orders) {

    vector<pair<int, int>> orderPairs;

    for(int i=0; i<orders.size(); i++){
        orderPairs.push_back(make_pair(orders[i][0] + orders[i][1], i));    
    }

    sort(orderPairs.begin(), orderPairs.end());

    vector<int> result; 

    for(auto data : orderPairs){
        result.push_back(data.second+1);
    }

    return result;
}

int main(){

    int n; 
    int orderTime, prepTime;
    vector<vector<int>> orderList;
    

    cin >> n; 

    for(int i=0 ; i<n ; i++){
        
        cin >> orderTime >> prepTime;
    
        orderList.push_back({orderTime, prepTime}); 
    }

    vector<int> result = jimOrders(orderList);

    for(auto data : result){
        cout << data << " ";
    }

    cout << endl;

    // for(auto data : orderList){
    //     cout << data.customerNumber << " : " << data.orderNumber << " : " << data.prepTime << endl;
    // }


    return 0;
}


