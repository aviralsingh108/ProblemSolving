#include<iostream>
using namespace std;
int main()
{
int T, sum, sum1;
cin>>T;
for (int i=0; i<T; i++)
{
    int n, arr[10];
    cin>>n;
    for (int j=0; j<n; j++)
    {
        cin>>arr[j];
    }
    if (n==1)
    cout<<arr[0];
    else
    {
        for (int k=1; k<n; k++)
        {
            sum=0; sum1=0;
            for (int l=0; l<k; l++)
            {
            sum=sum+arr[l];
            }
            for (int m=k+1; m<n; m++)
            {
            sum1=sum1+arr[m];
            }
            if (sum==sum1)
            {
            cout<<arr[k];
            break;
            }
        }

    }


}

    return 0;
}
