void Quicksort( ElementType A[], int N){
    Qsort( A, 0, N - 1);
}
ElementType Median3( ElementType A[], int Left, int Right){
    int Center = ( Left + Right) / 2;

    if( A[Left] > A[Center])
        Swap( &A[Left], &A[Center])
    if( A[Left] > A[Right])
        Swap( &A[Left], &A[Right])
    if( A[Center] > A[Right])
        Swap( &A[Center], &A[Right])
    //三个位置呈现递增

    Swap( &A[Center], &A[Right - 1]);
    return A[Center];
}

#define Cutoff 3
void Qsort( ElementType A[], int Left, int Right){
    int i, j;
    ElementType Pivot;

    if( Left + Cutoff <= Right){
        Pivot = Median3( A, Left, Right);
        i = Left; j = Right - 1;
        for(;;){
            while( A[++i] < Pivot){}
            while( A[--j] > Pivot){}
            if( i < j)
                Swap( &A[i], &A[j]);
            else 
                break;
        }
        //跳出for循环时，i 与 j 交错
        Swap( &A[i], &A[Right - 1])
        Qsort( A, Left, i - 1);
    }
    else
        InsertionSort( A + Left，Right - Left + 1)
}
