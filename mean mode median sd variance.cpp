#include <iostream>
#include <cmath>
using namespace std;

class Stats {
public:
    void run() {
        int n;
        cout << "Enter n: ";
        cin >> n;
        double a[100];
        for (int i=0;i<n;i++) cin >> a[i];

        double sum=0;
        for(int i=0;i<n;i++) sum+=a[i];
        double mean=sum/n;
        cout << "Mean = " << mean << endl;

        // sort
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
                if(a[i]>a[j]) swap(a[i],a[j]);

        double median=(n%2)?a[n/2]:(a[n/2-1]+a[n/2])/2;
        cout << "Median = " << median << endl;

        // mode
        int maxCount=0; double mode=a[0];
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++)
                if(a[i]==a[j]) count++;
            if(count>maxCount){ maxCount=count; mode=a[i]; }
        }
        cout << "Mode = " << mode << endl;

        double var=0;
        for(int i=0;i<n;i++) var += pow(a[i]-mean,2);
        var/=n;
        cout << "Variance = " << var << "\nSD = " << sqrt(var) << endl;
    }
};

int main() {
    Stats s;
    s.run();
}

