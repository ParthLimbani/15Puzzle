#include<conio.h>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>


int main()
{	
	int a[4][4],b[4][4],temp,f[4][4];
	int i,j,r1,r2,n=0,z,p,q,m=0;
	char d;
	
	
	
	srand(time(NULL));
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]=n;
			f[i][j]=a[i][j];
			n++;
		}
	}
	
	for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
		{	
		  n=a[i][j];
		  r1= rand()%4;
		  r2= rand()%4;
		  a[i][j]=a[r1][r2];
		  a[r1][r2]=n;
    	}
    	   
	}

    printf("\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		    printf("\t | %d |\t",a[i][j]);
		    
		}
		printf("\n\n\t - - - - - - - - - - - - - - - - - - - - -  - - - - - -\n\n ");
	}
	for(z=0;;i++)
	{
		
		for(i=0;i<4;i++)
       	{
		    for(j=0;j<4;j++)
		    {
		        if(a[i][j]==0)
		        {
		        	b[i][j]=a[i][j];
		        	p=i;
		        	q=j;
				}
		    
		    }
	   }
	   
	   printf("NOTE : ENTER WHERE THE ZERO SHOULD MOVE\n");
	   printf("enter where to move(u-up/d-down/l-left/r-right) :");
	   scanf(" %c",&d);
	   system("cls");
	  
	   switch(d)
	   {
	   	case 'u' :  temp=a[p-1][q];
	   	            a[p-1][q]=a[p][q];
	   	            a[p][q]=temp;
	   	            
	   	            printf("\n");
                   	for(i=0;i<4;i++)
	                {
	                  	for(j=0;j<4;j++)
		                {
		                     printf("\t | %d |\t",a[i][j]);
		    
	                   	}
	                	printf("\n\n\t - - - - - - - - - - - - - - - - - - - - -  - - - - - -\n\n ");
                 	}
	   	            break;
	   	            
	   	case 'l' : temp=a[p][q-1];
	   	            a[p][q-1]=a[p][q];
	   	            a[p][q]=temp;
	   	            
	   	            printf("\n");
                   	for(i=0;i<4;i++)
	                {
	                  	for(j=0;j<4;j++)
		                {
		                     printf("\t | %d |\t",a[i][j]);
		    
	                   	}
	                	printf("\n\n\t - - - - - - - - - - - - - - - - - - - - -  - - - - - -\n\n ");
                 	}
		              break; 
		              
		case 'r' : temp=a[p][q+1];
	   	            a[p][q+1]=a[p][q];
	   	            a[p][q]=temp;
	   	            
	   	            printf("\n");
                   	for(i=0;i<4;i++)
	                {
	                  	for(j=0;j<4;j++)
		                {
		                     printf("\t | %d |\t",a[i][j]);
		    
	                   	}
	                	printf("\n\n\t - - - - - - - - - - - - - - - - - - - - -  - - - - - -\n\n ");
                 	}
		              break; 
		              
		case 'd' : temp=a[p+1][q];
	   	            a[p+1][q]=a[p][q];
	   	            a[p][q]=temp;
	   	            
	   	            printf("\n");
                   	for(i=0;i<4;i++)
	                {
	                  	for(j=0;j<4;j++)
		                {
		                     printf("\t | %d |\t",a[i][j]);
		    
	                   	}
	                	printf("\n\n\t - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n ");
                 	}
		              break; 			                
	   }
	   
	for(i=0;i<4;i++)
	{
	    for(j=0;j<4;j++)
		{
			if(f[i][j] == a[i][j])
			{
			    m++;
			}
		
		}
	}	
	if(m == 16)
	{
		printf("\n \nCONGRATULATIONS !! 15 PUZZLE SOLVED !! \n");
		break;
	}
	}
	

}

