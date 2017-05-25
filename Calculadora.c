#include <stdio.h>
#include <stdlib.h>

soma(int x, int y){
	 return(x+y);
}
subtrai(int x , int y){
	return(x-y);
}
multiplica(int x, int y){
	return(x*y);
}
divide(int x, int y){
	return(x/y);
}

void main(){
	printf("Hello world\n");
	printf("%d\n",soma(2,2));
	printf("%d\n",subtrai(2,2));
	printf("%d\n",multiplica(2,3));
	printf("%d\n",divide(6/2));
}
	
