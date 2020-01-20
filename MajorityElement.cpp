#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for (int k=0; k<T; k++)
    {
        int arr[10], temp=0, N;
        cin>>N;
        for (int i=0; i<N; i++)
        {
            cin>>arr[i];
        }
        for (int i=0; i<N; i++)
        {   int count=1;
            for (int j=i+1; j<N; j++)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                }
            }
            if (count>(N/2))
            {
                cout<<arr[i];
                temp++;
            }
        }
        if (temp==0)
        cout<<"-1";
    }
    return 0;
}
