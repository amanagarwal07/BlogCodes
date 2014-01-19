# include<stdio.h>
  
/* Function to find the candidate for Majority */
int findCandidate(int a[], int size)
{
    int major = 0, count = 1;
    int i;
    for(i = 1; i < size; i++)
    {
        if(a[major] == a[i])
            count++;
	else if(count == 0)
        {
            major = i;
            count = 1;
        }

        else
            count--;
    }
    return a[major];
}
  
int main()
{
    int a[] = {2,3,2,3,2,2,4,5,2},n=9;
    int major=findCandidate(a,n);
    int count=0;
    for(int i=0;i<n;i++)
	    if(a[i]==major)
		    count++;
    if(count>= n/2)
	    printf("Majority element is %d\n",major);
    else
	    printf("No majority element\n");
    return 0;
}
