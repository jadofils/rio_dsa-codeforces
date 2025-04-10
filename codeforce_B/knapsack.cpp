#include<iostream>
using namespace std;
struct Item{
    double value,weight;
};
bool cmp(Item a, Item b){
    return a.value/a.weight > b.value/b.weight;
}
//fractional knapsack function
double fractionalKnapsack(int W, Item arr[], int n){
    sort(arr, arr+n, cmp);
    double res = 0.0;
    for(int i=0;i<n;i++){
        if(W>arr[i].weight){
            W -= arr[i].weight;
            res += arr[i].value;
        }
        else{
            res += arr[i].value*W/arr[i].weight;
            break;
        }
    }
    return res;
}
int main(){
    int W = 50; // Maximum weight of knapsack
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}}; // Value and weight of items
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum value in Knapsack = " << fractionalKnapsack(W, arr, n) << endl;
    return 0;
}