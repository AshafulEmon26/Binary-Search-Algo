/* Binary Search */

#include<bits/stdc++.h>
using namespace std;


int binary_search(int a[],int left,int right,int x)
    {
        int mid;
        while(left<=right)
        {
            mid=(left+right)/2;
            if(a[mid]==x)
            {
                return x;
            }
            if(a[mid]<x)
            {
                return binary_search(a,mid+1,right,x);
            }
            if(a[mid]>x) // or else
            {

                return binary_search(a,left,mid-1,x);
            }
        }
        return -1;
    }
int main()
{
    int n,left,right,x;
    cout<<"Array size: ";
    cin>>n;
    left=0; right = n-1;
    //set<int>bi;
    //set<int>::iterator it;
    int a[n];
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        //bi.insert(a[i]);
    }
    sort(a,a+n);
    cout<<endl<<"Which digit you want search : ";
    cin>>x;
    int y=binary_search(a,left,right,x);
    cout<<"Your digit is : "<<y<<endl;

}
