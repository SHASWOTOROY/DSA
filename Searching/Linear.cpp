#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<i<<endl;
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Not found"<<endl;
    }
}
