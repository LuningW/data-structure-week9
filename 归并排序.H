void MSort( ElementType A[], ElementType TmpArry[], int Left, int Right){
    int Center;
    if( Left < Right){
        Center = (Left + Right) / 2;
        MSort( A, TmpArry, Left, Center);
        MSort( A, TmpArry, Center + 1, Right);
        Merge( A, TmpArry, Left, Center + 1, Right);
    }
}

void Mergesort( ElementType A[], int N){
    ElementType *TmpArry;

    TmpArry = malloc( N * sizeof( ElementType));
    if( TmpArry != NULL){
        MSort( A, TmpArry, 0, N - 1);
        free( TmpArry);
    }
    else
        FatalError(" NO SPACE FOR TMP ARRAY !!");
}

void Merge( ElementType A[], ElementType TmpArry[], int Lpos, int Rpos, int RightEnd){
    int i, LeftEnd, NumElements, TmpPos;

    LeftEnd = Rpos - 1;
    TmpPos = Lpos;
    NumElements = RightEnd - Lpos + 1;

    while( Lpos <= LeftEnd && Rpos < RightEnd)
        if( A[Lpos] <= A[Rpos])
            TmpArry[ TmpPos] = A[Lpos++];
        else
            TmpArry[ TmpPos] = A[Rpos++];

    while( Lpos <= LeftEnd)
         TmpArry[ TmpPos] = A[Lpos++];
    while( Rpos <= RightEnd)
         TmpArry[ TmpPos] = A[Rpos++];

    for( i = 0; i < NumElements; i++, RightEnd--)
        A[RightEnd] = TmpArry[RightEnd];
}
