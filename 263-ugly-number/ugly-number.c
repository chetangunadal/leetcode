bool isUgly(int n) {
    while(n){
        if(n%5!=0)
        break;
        n/=5;
    }
    while(n){
        if(n%3!=0)
        break;
        n/=3;
    }
    while(n){
        if(n%2!=0)
        break;
        n/=2;
    }
    if(n==1)
    return true;
    else
    return false;
}