int reverse(int x){
int f=1;
long X=x;
long num=0;
if(X<0)
X=-X,f=-1;
while(X){
num=num*10+X%10;
X/=10;
if(num>INT_MAX)
return 0;
}
return num*f;
}