class Solution {
public:
    double average(vector<int>& salary)
    {
        cout << salary.size();
         double sum=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++)
        {
            sum+=salary[i];
        }
        double k=salary.size()-2;
        double avgsalary=sum/k;
        return avgsalary;
    }
};