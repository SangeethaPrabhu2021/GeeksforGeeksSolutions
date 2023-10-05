class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> result;
        bool found = false;
        int st =0;int  end =0; int sum =0;
        for (int i =0 ; i<n ;i++)
        {
            sum += arr[i];
        
        if(sum >= s)
        {
            end = i;
            while(s<sum && st< end){
                 sum -=(arr[st++]);
            }
           
        }
        
        if(sum == s)
        {
            result.push_back(st+1);
            result.push_back(end+1);
            found = true;
            break;
        }
        }
        if(!found)
        {
            result.push_back(-1);
        }
        return result;
    }
};
