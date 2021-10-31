#define LeftChild(i) ( 2 * i + 1) 
void PercDown( ElementType A[], int i, int N){
    int Child;
    ElementType Tmp;
    for( Tmp = A[i]; LeftChild(i) < N; i = Child){
        Child = LeftChild;
        if( Child != N - 1 && A[Child + 1] > A[Child])
            Child++;
        if( Tmp < A[Child])
            A[i] = A[Child];
        else
            break;
    }
    A[i] = Tmp;

}

void Heapsort( ElementType A[], , int N){
    int i;
    //BuildHeap
    for( i = N / 2; i >= 0; i--)
        PercDown( A, i, N);
    //DeleteMax
    for( i = N - 1; i > 0; i--){
        Swap( &A[ 0], &A[ i]);
        PercDown( A, 0, i);
    }
}
