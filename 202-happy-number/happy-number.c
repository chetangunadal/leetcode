bool isHappy(int n) {
int num=0,sum=0;
    while(n){

        num=n%10;
        sum=sum+num*num;
        n/=10;
        if(n==0 && sum>5)
        {
        n=sum;
sum=0;
        }
    }
    if(sum==1)
    return true;
    else
    return false;
    
}