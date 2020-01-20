
#include <iostream>
using namespace std;
int main()
{
    int num, count=0;
    cin>>num;
    for (int i=1; i<=num;i++)
    {
        if (num%i==0)
            count++;
    }
    if (num==1)
        cout<<endl<<"The no is Prime";
    else if (count==2)
        cout<<endl<<"The no is Prime";
    else
        cout<<endl<<"The no is not Prime";
    return 0;
}

