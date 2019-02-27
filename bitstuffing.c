#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,count=0,c,value=0,count1=0,j=0,zetobaddfl[10]={0,1,1,1,1,1,1,0};
   int arr[100];
   clrscr();
   printf("Bit Stuffing:\n\n");
    printf("Enter Frame length:");
    scanf("%d",&n);
    printf("Enter the Bits data:");
    for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
	if(arr[i]==1){
	    count++;
	    if(count==5){
	     for (c = n - 1; c >= (i+1) - 1; c--)
		     arr[c+1] = arr[c];

		    arr[i+1] = value;
		    n=n+1;
		}

	}else{
	    count=0;
	}
    }
     printf("\n");
    printf("Data After Bit Stuffing:");
    for(i=0;i<n;i++){
	printf("%d",arr[i]);
    }
    printf("\n");

     for(i=0;i<8;i++){
     for(j=n-1;j>=(i+1)-1;j--)
	arr[j+1]=arr[j];

       arr[i]=zetobaddfl[i];
       n++;
     }
     for(i=0;i<8;i++){
     arr[n]=zetobaddfl[i];
      n++;
     }
      printf("Transmitted data:");
       for(i=0;i<n;i++){
	printf("%d ",arr[i]);
    }
    printf("\n\n");
   printf("Bit Un-stuffing:\n\n");

      printf("Received data:");
       for(i=0;i<n;i++){
	printf("%d ",arr[i]);
    }
    printf("\nFinal data:");
    count=0;
    for(i=8;i<n-8;i++){
	if(arr[i]==1){
	    count++;
	    if(count==5){
	     for (j=i+1;j<n-2;j++){
		     arr[j] = arr[j+1];
		   }
		    n--;
		    count=0;
		}

	}else{
	    count=0;
	}
    }

    for(i=8;i<n-8;i++){
	printf("%d",arr[i]);
    }
    getch();
    return 0;
}
