#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int>& arr, int n, int target){
    for(int mask=1; mask<(1<<n); mask++){
        int sum=0;
        vector<int> subset;
        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                sum += arr[i];
                subset.push_back(arr[i]);
            }
        }
        if(sum==target){
            cout << "[ ";
            for(int x:subset) cout << x << " ";
            cout << "]\n";
        }
    }
}

int main(){
    int n, target;
    cout << "Enter array size: "; cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << "Enter target sum: "; cin >> target;

    printSubsets(arr,n,target);
    return 0;
}

