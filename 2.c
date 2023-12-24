#include <stdio.h>
#include <string.h>
int main()
{
	char arr[1000];
	char bf,dq,af;
	scanf("%s",&arr[0]);
	int cd=strlen(arr);
	for(int i=0;i<cd;i++){
		if(i>=1&&i<cd-1){
			bf=arr[i-1];
			af=arr[i+1];
		}
		dq=arr[i];	
		
//		if(dq!='-'){
//		 printf("%c",dq);
//		} else
		if(dq=='-'&&(bf>='A'&&bf<='Z')&&(af>bf&&af<='Z')){
			for(char j=bf+1;j<=af;j++){
				printf("%c",j);
			}
			i+=1;
		} else
		if(dq=='-'&&(bf>='a'&&bf<='z')&&(af>bf&&af<='z')){
			for(char j=bf+1;j<=af;j++){
				printf("%c",j);
			}
			i+=1;	
		}	else
		if(dq=='-'&&(bf>='0'&&bf<='9')&&(af>bf&&af<='9')){
			for(char j=bf+1;j<=af;j++){
				printf("%c",j);
			}
			i+=1;		
		}	else 	 printf("%c",dq);
			
	}
	return 0;
}