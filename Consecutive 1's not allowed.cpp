//Editorial: https://youtu.be/nqrXHJWMeBc
class Solution {
public:
	#define ll long long
	ll mod=1e9+7;
	ll countStrings(int n) {
	    int oldcnt0=1,oldcnt1=1;
	    for(int i=2;i<=n;i++)
	    {
	        ll newcnt0=(oldcnt0+oldcnt1)%mod;
	        ll newcnt1=(oldcnt0)%mod;
	        oldcnt0=newcnt0;
	        oldcnt1=newcnt1;
	    }
	    return (oldcnt0+oldcnt1)%mod;
	}
};
