#include <iostream>
using namespace std;

int main() {
	int T, size, arr[10];
	cin>>T;
	for (int i=0; i<T; i++)
	{
	    cin>>size;
	    for (int i=0; i<size-1; i++)
	    {
	        cin>>arr[i];
	    }
	    for (int j=1; j<=size; j++ )
	    {

	        if (arr[j-1]!=j){
	        cout<<j; break;}
	    }
	}
	return 0;
}
