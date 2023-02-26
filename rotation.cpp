int main(){
  int findKRotation(int arr[], int n) {
	    int i=0;
	    int x=arr[i];
	    sort(arr,arr+n);
	    if(arr[0]==x) return 0;
	    else{
	        for(int i=0;i<n;i++){
	            if(arr[i]==x) return n-i;
	        }
	    }
	    
	}
}
