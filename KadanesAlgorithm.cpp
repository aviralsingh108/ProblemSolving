#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n, temp, arr[10], narr[10], sum=0;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for (int i=0; i<n; i++)
        {
            sum=sum+arr[i];
            narr[i]=sum;
        }
        temp=narr[0];
        for (int i=0; i<n; i++)
        {
            if (temp<narr[i])
            {
                temp=narr[i];
            }
        }
        cout<<temp;
    }
    return 0;
}
