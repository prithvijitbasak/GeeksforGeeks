//Editorial: https://youtu.be/4jY57Ehc14Y
class Solution{   
public:
    int findLastOccurence(string text,string pat){
        //Code Here
        int ans=0;
        int i=0;
        int j=0;
        int n=text.size();
        int m=pat.size();
        // calculating the lps array
        vector<int> lps(m,0);
        int len=0;
        for(int k=1;k<m;)
        {
            if(pat[k]==pat[len])
            {
                len+=1;
                lps[k]=len;
                k+=1;
            }
            else
            {
                if(len!=0)
                    len=lps[len-1];
                else
                    k+=1;
            }
        }
        int f=0;
        while(i<n)
        {
            if(text[i]==pat[j])
            {
                i+=1;
                j+=1;
            }
            else
            {
                if(j!=0)
                    j=lps[j-1];
                else
                    i+=1;
            }
            if(j==m)
            {
                f=1;
                ans=i-j;
                j=lps[j-1];
            }
        }
        return (!f)?-1:ans+1;
    }
};
