//Editorial: https://youtu.be/0nF-BMYy7tc
class Solution {
	public:
	typedef long long ll;
	ll mod=1e9+7;
	int TotalWays(int n)
	{
	    ll oldbd=1,oldsp=1;
	    for(ll i=2;i<=n;i++)
	    {
	        ll newsp=(oldbd+oldsp)%mod;
	        ll newbd=oldsp%mod;
	        oldsp=newsp;
	        oldbd=newbd;
	    }
	    return ((oldbd+oldsp)*(oldsp+oldbd))%mod;
	}
};
