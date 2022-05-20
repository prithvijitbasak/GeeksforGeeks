//Editorial: https://youtu.be/b7AYbpM5YrE
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string> ans;
		    int n=s.size();
		    for(int num=0;num<=(1<<n)-1;num++)
		    {
		        string temp="";
		        for(int bits=0;bits<=n-1;bits++)
		        {
		            if(num&(1<<bits))
		              temp+=s[bits];
		        }
		        if(temp!="")
		            ans.push_back(temp);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};
