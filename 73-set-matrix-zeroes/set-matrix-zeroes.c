void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int r1=0,c1=0,i,j;
    for(i=0;i<matrixSize;i++)
    for(j=0;j<*matrixColSize;j++)
    if(matrix[i][j]==0)
    {
        if(i==0) 
        r1=1;
        if(j==0) 
        c1=1;
        matrix[0][j]=0;
        matrix[i][0]=0; 
    }
    

    for(i=1;i<matrixSize;i++)
    for(j=1;j<*matrixColSize;j++)
      if(matrix[0][j]==0||matrix[i][0]==0)
      matrix[i][j]=0;

    if(r1)
    for(i=0;i<*matrixColSize;i++)
    matrix[0][i]=0;

    if(c1)
    for(i=0;i<matrixSize;i++)
    matrix[i][0]=0;

    
}