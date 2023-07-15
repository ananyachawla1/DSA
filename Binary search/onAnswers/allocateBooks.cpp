#include<bits/stdc++.h>
using namespace std;
int countStudent(vector<int> &arr,int pages)
{
    int n=arr.size();
    int students=1;
    long long pagesStudent=0;
    for(int i=0;i<n;i++)
    {
        if(pagesStudent+arr[i]<=pages)
        {
            pagesStudent+=arr[i];
        }
        else
        {
            students++;
            pagesStudent=arr[i];
        }
    }
    return students;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n)
    return -1;
    int no=arr.size();
    int low=*max_element(arr.begin(),arr.end());
    int high=0;
        for(int i=0;i<no;i++)
     high+=arr[i];
    while(low<=high)
    {
        int mid=(low+high)/2;
        int students=countStudent(arr,mid);
        if(students>m)
        low=mid+1;
        else 
        high=mid-1;
    }
    return low;
}