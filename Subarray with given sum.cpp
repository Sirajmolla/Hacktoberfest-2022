{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int i=0,j=1,f=0;
        long long sum=arr[0];
        
        while(i<n&&j<=n)
        {
            if(sum<s&&j==n)
            {
                return {-1};
            }
            else if((sum<s && j<n) || i==j)
            {
                sum+=arr[j];
                j++;
            }
            else if(sum>s)
            {
                sum-=arr[i];
                i++;
            }
            else
            {
                f=1;
                break;
            }
        }
        
        if(f==1)
        return {i+1,j};
        
        return {-1};
    }
};