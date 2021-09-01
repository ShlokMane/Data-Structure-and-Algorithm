//https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1


#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void swap(int arr[],int a,int b)
    {
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
    void sort012(int arr[], int n)
    {
        int low=-1;
        int high=n;
        for(int i=0;i<high;i++)
        {
            if(arr[i]==0)
            {
                low++;
                swap(arr,low,i);
            }
            else if(arr[i]==2)
            {
                high--;
                swap(arr,high,i);
                i--;
            }
        }
        // coode here 
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends