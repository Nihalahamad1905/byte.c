#include<stdio.h>
#include<string.h>
void main()
{
int ch;
  printf("-------------WELCOME TO BYTE STUFFING VERIFICATION PROGRAM--------------------\n");
do{
  printf("\n1.Verify the bute stuffing\n");
  printf("\n2.Theory\n");
  printf("\n3.Exit \n");
  printf("\nEnter your choice -");
  scanf("%d",&ch);

  switch(ch)
  {

    case 1:
  char frame[50][50],str[50][50],flag[10],esc[10];
  int i,j,k=0,n;

  strcpy(flag,"flag");
  strcpy(esc,"esc");
  strcpy(frame[k++],"flag");

  printf("\nEnter the number of string\n");
  scanf("%d",&n);

  printf("\nEnter the string\n");
  for (int i = 0; i <= n; ++i)
  {
    gets(str[i]);
  }
  printf("\nYou Enteredd\n");
  for (int i = 0; i <= n; ++i)
  {
    puts(str[i]);
  }

  for (int i = 1; i <=n; ++i)
  {
    if (strcmp(str[i],flag)!=0 && strcmp(str[i],esc)!=0)
    {
      strcpy(frame[k++],str[i]);
    }
    else
    {
      strcpy(frame[k++],"esc");
      strcpy(frame[k++],str[i]);
    }
  }
  strcpy(frame[k++],"flag");

printf("-----------------------------------\n");
printf("\nResult\n");
printf("-----------------------------------\n");

for (int i = 0; i < k; ++i)
{
  printf("%s\t",frame[i] );
}
break;

case 2:
printf("\nByte stuffing is Error Detection method\n");
printf("\nThe format of Byte stuffing is as follow -\n");
printf("---------------------------------------------------------------\n");
printf("flag \t Header \t Payload \t Tailer \t flag\n");
printf("---------------------------------------------------------------\n");
printf("\n1.Header contain the address of source and destination\n\n2.Payload contain the actual data to be transmitted\n\n3.Tailer contain the error detection and conrrection infomration\n");
break;

case 3:
printf("THANK YOU\n");
break;

default :
printf("ENter correct choice\n");

}
}while(ch!=3);

}