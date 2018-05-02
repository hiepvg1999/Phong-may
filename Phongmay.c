#include <stdio.h>
#define max 40
int trangthai[max],count[max];

void menu();
void dungmay();
void roimay();
void trangthaimay();
void printfpower();
void hoadon();
void minmax();
int main()
{
		int choice;  
		int i;
		for (i=1;i<=max;i++)
		{
			trangthai[i]=0;
			count[i]=0;
		}
    do{
    	menu();
    	
    	scanf("%d",&choice);
    	switch(choice){
    		case 1: {
            dungmay();
    		};
    		break;
    		case 2: {
    		roimay();
    		};
    		break;
            case 3:{
            trangthaimay();

            };
            break;
    		case 4:{
            printfpower();
    		};
    		break;
    		case 5:{
            hoadon();
            minmax();
    		};
    		break;
    		case 6:{
    			printf("\n\nCAM ON .\n");
    		};
    		break;
    		default: printf("Nhap sai roi!.\n");
    	}

    }while(choice!=6);
	return 0;
}
void menu(){
	printf("1.dungmay\n");
	printf("2.roimay\n");
	printf("3.trangthaimay\n");
	printf("4.printfpower\n");
	printf("5.hoadon\n");
	printf("6.thoat\n");
	printf("Your choice: ");
}
void dungmay()
{
	int n;
tt:
do{
	printf("Nhap vao may muon dung :");
	scanf("%d",&n);
}while(n<0||n>max);
if (trangthai[n]==0)
{
	trangthai[n]=1;
    count[n]++;
}
else goto tt;
}
void roimay()
{
	int n;
 tp:
   do {
   	printf("Nhap vao may dang dung: ");
   	scanf("%d",&n);
   }while(n<0||n>max);
   if(trangthai[n]==1)
      trangthai[n]=0;
    else goto tp;
}
void trangthaimay(){
     int i,j;
     j=0;
     for (i=1;i<=max;i++)
     {
     	printf("%-4d",trangthai[i] );
     	j++;
     	if (j==4)
     	{
     		printf("\n");
     		j=0;
     	};
     }
}
void printfpower()
{
	int i,j=0;
	for (i=1;i<=max;i++)
	{
		printf("%-6d",count[i]*400 );
		j++;
		if(j==4)
		{
			printf("\n");
			j=0;
		};
	}
}
void hoadon()
{
	int i;
	double sum;
	for (i=1;i<=max;i++)
	{
     sum+=count[i]*400.0;
	}
	printf("Tong tien: %.2lf VND\n",sum/1000*750.0);
}
void minmax(){
	int maxm,minm,i;
	maxm=count[1];
	minm=count[1];
	for(i=1;i<=max;i++)
        {
        	if(count[i]>=maxm)
        		maxm=count[i];
        	if(count[i]<=minm)
        		minm=count[i];
        } 
    printf("May tinh su dung nhieu nhat \n");
    int j=0;
    for (i=1;i<=max;i++)
    {
    	if(count[i]==maxm)
    	{
    		printf("%-4d",i );
    		j++;
    	};
    	if(j==4)
    	{
    		printf("\n");
    		j=0;
    	};
    }
    printf("\n");
    printf("May tinh su dung it nhat \n");
    for (i=1;i<=max;i++)
    {
    	if(count[i]==minm)
    	{
    		printf("%-4d",i );
    		j++;
    	};
    	if(j==4)
    	{
    		printf("\n");
    		j=0;
    	};
    }
    printf("\n");

}