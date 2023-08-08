//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
 void sums(vector<int> arr,int index,int N,int sum,vector<int>&res){
        if(index==N){
            res.push_back(sum);
            return;
        }
        sums(arr,index+1,N,sum,res);
        sums(arr,index+1,N,sum+arr[index],res);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
         int sum=0;
        int index=0;
        vector<int>res;
        sums(arr,index,N,sum,res);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends