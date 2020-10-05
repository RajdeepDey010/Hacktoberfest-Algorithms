//Rajdeep Dey
//Function of Quicksort using divide and conquer approach

partition(A[],first,last,p) // A[] is the array where first is the first index and Last is the end index and p is the position of pivot
{
  // Compare pivot element from its next element till last
  int i;
  int x=A[p]; // pivot element
  for( int j=p+1 to last) // j goes from next index of pivot till the last index of array
  {
    i=p; // i will give the position where pivot should sit
    if(A[j] <= x)
    {
      i=i+1;
      swap(A[i],A[j]); //swap function swaps the two elements in the array
    }
   }
  swap(A[i],A[p]);
}

quicksort(A[],first,last) //Quicksort function algorithm
{
  if(first == last)
    return(A[first]);
  else
  {
    int i=partition(A,first,last,A[0]); //call the partition function
    quicksort(A,first,i-1,A[first]);
    quicksort(A,i+1,last,A[i+1]);
    return(A);
   }
 }
