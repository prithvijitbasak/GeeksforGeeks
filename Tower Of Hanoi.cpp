//Editorial: https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/, https://youtu.be/l45md3RYX7c
class Solution{
    public:
    // You need to complete this function
    typedef long long ll;
    ll cnt=0LL;
    // avoid space at the starting of the string in "move disk....."
    ll toh(int n, int src, int dest, int help) {
        //ll cnt=0LL;
        if(n==1)
        {
            cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<"\n";
            return ++cnt;
        }
        toh(n-1,src,help,dest);
        cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<dest<<"\n";
        cnt++;
        toh(n-1,help,dest,src);
        return cnt;
    }

};
