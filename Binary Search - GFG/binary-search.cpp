//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  int binary(int arr[],int s,int e, int k){
      int mid=s+(e-s)/2;
      if(s<=e){
      if(arr[mid]==k){
          return mid;
      }
      if(arr[mid]<k){
          int ans=binary(arr,mid+1,e,k);
          return ans;
      }
      else{
          int ans=binary(arr,s,mid-1,k);
          return ans;
      }
      }
      return -1;
  }
    int binarysearch(int arr[], int n, int k) {
        int index=binary(arr,0,n-1,k);
        return index;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends