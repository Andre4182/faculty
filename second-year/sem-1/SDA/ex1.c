#include "timer.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generare(int *arr,int n)
{

	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		arr[i]=rand()%(n+1);
		printf("%d\n",arr[i]);
	
	}
}

void BubbleSort(int *v, int n)
{
	int s,i,aux;
	do{
		s = 0;                            
		for (i = 1; i < n; i++)
		{      
	
			if (v[i - 1] > v[i])
			{             
				
				aux = v[i - 1];                
				v[i - 1] = v[i];
				v[i] = aux;
				s = 1;                            
			}
		}
	} while (s);                         
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void shakersort(int a[], int n)
{
    int p, i;
    for (p = 1; p <= n / 2; p++)
    {
        for (i = p - 1; i < n - p; i++)
            if (a[i] > a[i+1])
                swap(&a[i], &a[i + 1]);
        for (i = n - p - 1; i >= p; i--)
            if (a[i] < a[i-1])
                swap(&a[i], &a[i - 1]);
    }
}

int  main(int argc,char *argv[])
{
	float timp;
	int array[100001];
	
	FILE* fout=fopen(argv[1],"wt");
	generare(array,100000);
	
	for(int i=100;i<=1000;i+=100)
	{
		// generez array
		
		
		// dupa aplic sort-ul pe array 
		starton();
				
		 BubbleSort(array,i);
		 
		 
		timp=startoff();
	
		


		fprintf(fout,"BubbleSort, %d %f\n",i,timp);
		
		
		starton();
				
		 shakersort(array,i);
		 
		 
		timp=startoff();
	
		


		fprintf(fout,"ShakerSort, %d %f\n",i,timp);
	}
				
	fclose(fout);
}
