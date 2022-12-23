int findSum(int A[], int N)
{
	//code here.
	int maxIndex = 0, minIndex = 0;
	for(int i = 1; i < N; i++){
		if(A[maxIndex] < A[i])
			maxIndex = i;
		else if(A[minIndex] > A[i])
			minIndex = i;
	}
	return A[maxIndex] + A[minIndex];
}