#include <stdio.h>

void substring(char str[],char sub[],int len1,int *len2)
{
	*len2=0;
	sub[0]=str[0];
	(*len2)++;
	int i,j,flag=0;
	
	for(i=0;i<len1;i++)
	{
	    flag=0;
		for(j=0;j<(*len2);j++)
		{
			if(str[i]==sub[j])
			{
				flag=1;
				break;
			}
		}
			if(flag==0)
			{
				sub[*len2]=str[i];
				(*len2)++;
        	}

	}
		substr[len2]='\0';
	
}	

int main() 
{
	char str[25],sub[10];
	int len1,len2;
  printf("Enter the length:");
	scanf("%d",&len1);
	printf("Enter the string:");
	scanf("%s",str);
	substring(str,sub,len1,&len2);
	printf("the length of substing %d\n",len2);
	printf("the substring %s",substr);
	return 0;
}
