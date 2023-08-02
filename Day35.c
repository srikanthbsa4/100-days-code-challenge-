int reverse(int x){
    int n=x;
    int s=0;
    if(x == -2147483648)
    return 0;
    if(x<0)
    n=-1*n;
    while(n)
    {
        if(s>214748364)
        return 0;
        if(s==214748364 && (n%10)>7)
        return 0;
        s=s*10+ (n%10);
        n/=10;
    }
    if(x<0)
    return -s;
    else
    return s;

}