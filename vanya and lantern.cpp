
// Codeforces Problem 

#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int n,l;
    cin>>n>>l;
    double arr[n];
    double res;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    res=max(res,arr[0]);
    res=max(res,l-arr[n-1]);
    for(int i=0;i<n-1;i++)
    {
        double dis=arr[i+1]-arr[i];
        dis /= (2.00);
        res=max(res,dis);
    }
    cout.precision(9);
    cout<<fixed<<res<<"\n";
    return 0;
}