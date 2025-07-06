#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n];
	int i,j,val=0;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0; i<n; i++) {
	    if(val==0){
	        for(int j=0; j<i+1; j++) {
	            if(arr[i][j]!=0){
	                val=1;
	                break;
	            }
	        
	        }
			if( val==1);
	    i=0;        
			
	    }
	    else if(val==1){
	        for(j=0;(i-j-1)>=n;j++){
	        val=2;
	        break;
	        }
	    }
    }
    if(val==0){
        printf("Right angle");
    }
	else if(val==1){
	    printf("left angle");
	}
	else{
	    printf("no triangle");
	}
		    
			
}		
