//Coded by Mexson Fernandes 
 #include<stdio.h>
void quicksort(int [],int,int);
int partition(int [],int,int);

void main()
{
	int n,array[20],i;
	printf("\nEnter size of array :- ");//input size
	scanf("%d",&n);
	printf("\nEnter Elements :- ");//read array elements
	for(i=0;i<n;i++)
	{
		printf("\nElement %d is ",i+1);
		scanf("%d",&array[i]);
	}
	printf("\nOriginal array is :- ");//print original array
	for(i=0;i<n;i++)
		printf(" [%d] ",array[i]);
	quicksort(array,0,n-1);
	printf("\nSorted array is :-");//print sorted array
	for(i=0;i<n;i++)
		printf(" [%d] ",array[i]);
	printf("\n");
}

void quicksort(int x[],int p,int q)
{
	int pivot;
	if(p<q)//to end recursion
	{
		pivot = partition(x,p,q);//finding pivot element
		quicksort(x,p,pivot-1);
		quicksort(x,pivot+1,q);
	}
}

int partition(int x[],int p,int q)
{
	int temp,j;
	int i = p-1;
	for(j=p;j<q;j++)
	{
		if(x[j]<x[q])//swap all elements less than pivot to left side
		{
			i+=1;
			temp=x[i];
			x[i]=x[j];
			x[j]=temp;
		}
	}
	if(x[q]<x[i+1])//swap if pivot is less than i+1 wall element
	{
		temp=x[i+1];
		x[i+1]=x[q];
		x[q]=temp;
	}
	return i+1;//return correct position of pivot element
}
