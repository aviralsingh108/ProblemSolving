#include<iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    for (int i=0; i<T; i++)
    {
        int N, arr[10];
        cin>>N;
        for (int j=0; j<N; j++)
        {
            cin>>arr[j];
        }
        for (int k=0; k<N; k++ )
        {
            int j=0;
            for ( j=k+1; j<N; j++)
            {
                if (arr[k]>=arr[j])
                continue;
                else
                break;
            }
            if (j>=N)
            cout<<arr[k]<<" ";
        }
        //cout<<arr[N-1];
    }
	return 0;
}
