#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter number of values: ";
    cin >> n;
    double arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    // Mean
    double sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    double mean = sum/n;

    // Variance & Std Dev
    double var=0;
    for(int i=0;i<n;i++) var += (arr[i]-mean)*(arr[i]-mean);
    var /= n;
    double stddev = sqrt(var);

    // Median (sort)
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
    double median = (n%2==0)? (arr[n/2-1]+arr[n/2])/2 : arr[n/2];

    // Mode
    double mode = arr[0]; int maxCount=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++) if(arr[j]==arr[i]) count++;
        if(count>maxCount){ maxCount=count; mode=arr[i];}
    }

    cout << "Mean=" << mean << ", Median=" << median << ", Mode=" << mode;
    cout << ", Variance=" << var << ", StdDev=" << stddev << endl;
    return 0;
}

