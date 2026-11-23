int maxArea(int* height, int heightSize) {
    
    int i=0,j=heightSize-1,m,max=0,k;

    while(i<j){

        if(height[i]<height[j]){
            m=height[i];
            k=j-i;
            i++;
        }
        else{
            m=height[j];
            k=j-i;
            j--;
        }
        if((k*m)>max)
        max=k*m;
    }
    return max;
}