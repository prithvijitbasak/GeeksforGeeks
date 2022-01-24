//Editorial: Very basic problem.
multimap<int,int> multimapInsert(int arr[],int n)
{
    multimap<int,int>mp;
   //Insert arr[i] as key and i as value in the multimap 
    for(int i=0;i<n;i++)
     mp.insert({arr[i],i});
    
    return mp;
    
}


void multimapDisplay(multimap<int,int>mp)
{
    for(auto it:mp)
      cout<<it.first<<" "<<it.second<<"\n";

}


void multimapErase(multimap<int,int>&mp,int x)
{
   //If and else condition to erase x from the multimap
   if(mp.find(x)!=mp.end()){
       
       mp.erase(x);
    cout<<"erased "<<x<<"\n";
    return;
   }
    
    
    cout<<"not found";
    
    
    cout<<endl;
}
