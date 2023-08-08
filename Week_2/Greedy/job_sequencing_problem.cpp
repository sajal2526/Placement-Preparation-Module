/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector <pair<int ,int>> jobs;
        for(int i=0;i<n;i++)
        {
            jobs.push_back({arr[i].dead,arr[i].profit});
        }
        sort(jobs.begin(),jobs.end());
        int max_profit=jobs[0].second;
        int count=1;
        int curProfit=jobs[0].second;
        int lastEnd=jobs[0].first;
        for(auto it: jobs)
        {
            if(curProfit==it.second && lastEnd==it.first)
                continue;
            else if(lastEnd==it.first && curProfit<it.second )
            {
                max_profit-=curProfit;
                max_profit+=it.second;
                curProfit=it.second;
            }
            else if(lastEnd<it.first)
            {
                count++;
                max_profit+=it.second;
                lastEnd=it.first;
                curProfit=it.second;
            }
            
        }
        return {count,max_profit};
    } 
};