bool isPowerOfThree(int n) {
    long int i=1;
   if(n<0)
   return false;
   while(n>i)
   {
    i*=3;
   }
  // i=i/3;
   if(n==i)
   return true;
   else
   return false;
}