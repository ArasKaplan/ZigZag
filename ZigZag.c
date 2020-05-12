#include <stdio.h>
#include <string.h>

int main(){
	char str[100],zigzag[100][100];
	int numRows;
	printf("Number of Rows");
	scanf("%d",&numRows);
	printf("Sentence");
	scanf("%s",str);
	int i=0;
	int a=0;
	int j;
	int strpos=0;
	int uzunluk;
	int mod;
	uzunluk=strlen(str);
	while(i<uzunluk){
		mod=i%(numRows-1);
		if((mod)==0){
			for(j=0;j<numRows;j++){
				zigzag[j][i]=str[strpos];
				strpos++;
			}
		}
		else{
			zigzag[(numRows-1-mod)][i]=str[strpos];
			strpos++;
		}
		i++;
		if(strpos>=uzunluk){
			break;
		}
	}
	for(i=0;i<numRows;i++){
		printf("\n");
		for(j=0;j<uzunluk;j++){
			printf("%c",zigzag[i][j]);
		}
	}
}
