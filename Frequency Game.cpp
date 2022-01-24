//Editorial: Watch problem discussion.
int LargButMinFreq(int arr[], int n) {
    map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    int mxele=-1;
    int mnfreq=n;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]<=mnfreq)
        {
            mnfreq=mp[arr[i]];
            if(arr[i]>mxele)
              mxele=arr[i];
        }
    }
    return mxele;
}
