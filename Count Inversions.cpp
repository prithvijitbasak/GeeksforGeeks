//Editorial: https://youtu.be/kQ1mJlwW-c0
class Solution{
    public:
   // typedef long long ll;
 long long int merge (long long  arr[],long long temp[],long long low,long long mid, long long high)
   {
       long long  start=low;
       long long  cnt=0;
       long long j=mid+1,k=low;//imp;
       while(  (low<=mid) &&   (j<=high) )
       {
           if(arr[low]<=arr[j])
             temp[k++]=arr[low++];
           else
           {  cnt+=  mid+1-low;
              temp[k++]=arr[j++];
           }
       }
       while(low<=mid)temp[k++]=arr[low++];
       while(j<=high)temp[k++]=arr[j++];
       
       for(long long p=start;p<=high;p++)arr[p]=temp[p];
     
     return cnt;
   }

long long int mergesort(long long  arr[],long long  temp[],long long  low,long long  high)
  {
      long long  cnt=0,mid;
      if(low<high)
      {
          long long mid=(low+high)/2;
          cnt += mergesort( arr,temp, low, mid);
          cnt += mergesort(arr,temp, mid+1, high);
          cnt += merge ( arr,temp,low, mid, high);
      }
      return cnt;
  }
   
   long long int inversionCount(long long arr[], long long n)
   {
       long long  temp[n];
      return mergesort(arr,temp,0,n-1 );
   }
};
