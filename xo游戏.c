#include<stdio.h>

int main()
{
	const int size=3;
	int board[size][size];
	int i,j;
	int numOfX;
	int numOfO;
	int result=-1;
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
	//检查行
	for(i=0;i<size&&result==-1;i++){
		numOfO=numOfX=0;
		for(j=0;j<size;j++){
			if(board[i][j]==1){
				numOfX++; 
			}
			else{
				numOfO++;
			}
		} 
		if(numOfO==size){
			result=0;
		}
		else if(numOfX==size){
			result=1;
		}
		}		
		printf("%d\n",result);

	//检查列 
	if(result==-1){
		numOfO=numOfX=0; 
		for(j=0;j<size;j++){
			for(i=0;i<size;i++){
				if(board[i][j]==1){
					numOfX++;
				}
				else{
					numOfO++;
				}
			}
		 
			if(numOfO==size){
				result=0;
			}
			else if(numOfX==size){
				result=1;
			}
		}
		printf("%d\n",result);
		} 
	
	//检查对角线
	if(result==-1){
	numOfO=numOfX=0;
	for(i=0;i<size;i++){
		if(board[i][i]==1){
			numOfX++;
		}
		else{
			numOfO++;
		}
		if(numOfO==size){
			result=0;
		}
		else if(numOfX==size){
			result=1;
		}
	}
	printf("%d\n",result);
	} 

	if(result==-1){
	numOfO=numOfX=0; 
		for(i=0;i<size;i++){
			if(board[i][size-i-1]==1){
				numOfX++;
			}
			else{
				numOfO++;
			}
			if(numOfO==size){
				result=0;
			}
			else if(numOfX==size){
				result=1;
			}
		}
		printf("%d\n",result);
	}
	if(result==1){
		printf("1方胜");
	}
	else if(result==0){
		printf("0方胜");
	}
	else if(result==-1){
		printf("平局");
	}
	return 0;
 } 
