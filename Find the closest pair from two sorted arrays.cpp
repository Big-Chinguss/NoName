                                                                           //Working 
                                                                           
                                                                           
1) Initialize a variable diff as infinite (Diff is used to store the 
   difference between pair and x).  We need to find the minimum diff.
2) Initialize two index variables l and r in the given sorted array.
       (a) Initialize first to the leftmost index in ar1:  l = 0
       (b) Initialize second  the rightmost index in ar2:  r = n-1
3) Loop while  l = 0
       (a) If  abs(ar1[l] + ar2[r] - sum) < diff  then 
           update diff and result 
       (b) If (ar1[l] + ar2[r] <  sum )  then l++
       (c) Else r--    
4) Print the result. 

                                                                             //CODE
                                                                             
                                                                             
int main(){

	int n,m;
  cin>>m>>n;
	int x;cin>>x;  //The value to which we need the pair (a[i]+b[j]) to be closest.
  
  int a[n],b[m];
        for(int i=0;i<m;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        
int l=0,r=n-1;
int diff=INT_MAX;
int resl,resr;
while(l<m&&r>=0){
	if(abs(a[l]+b[r]-x)<diff){
		diff=abs(a[l]+b[r]-x);
		resl=l;
		resr=r;
	}
	if(a[l]+b[r]>x){
		r--;
	}
	else l++;
	}
	cout<<a[resl]<<" "<<b[resr]<<endl;
return 0;
}
