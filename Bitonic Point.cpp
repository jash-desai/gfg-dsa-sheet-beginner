class Solution{
public:
	
	int findMaximum(int v[], int n) {
	    for(int i=0; i<n; i++){
	        if(v[i]>v[i+1]){
	            return v[i];
	        }
	    }
	    return v[n-1];
	}
};