class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(i>0 && a[i]==a[i+1])
                continue;
            else{
                int rem=X-a[i];
                int p1=i+1,p2=n-1;
                while(p1<p2)
                {
                    if((a[p1]+a[p2])>rem)
                        p2--;
                    else if((a[p1]+a[p2])<rem)
                        p1++;
                    else{
                        return true;
                    }
                }
            }
        }
        return false;
        //Your code here
    }

};