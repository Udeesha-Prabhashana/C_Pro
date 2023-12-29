#include<stdio.h>
#include<string.h>

int concatInts(int x, int y);

int main(){
	int nums[5], i, j;
	
	for(i=0; i<5; i++){
		printf("Enter integer: ");
		scanf("%d",&nums[i]);
	}
	
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			int isSwap = concatInts(nums[j],nums[j+1]);
			if(isSwap){
				int temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;
			}
		}
	}
	
	for(i=0; i<5; i++){
		printf("%d",nums[i]);
	}

	return 0;
}

int concatInts(int x, int y){
    char str1[5], str2[5], temp[5];

    sprintf(str1,"%d",x);
    sprintf(str2,"%d",y);

	strcpy(temp,str1);
    strcat(str1,str2);
    strcat(str2,temp);
    
    //swap == 1 
    //don't swap == 0
    if(atoi(str1)>atoi(str2)){
    	return 0;
	}
	else{
		return 1;
	}
}
