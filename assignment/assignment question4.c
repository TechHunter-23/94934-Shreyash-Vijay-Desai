
   
   #include<stdio.h>
   int main()
   {
       
   int cnt=0 ;
   int i;
   int n, rem, quo;

    printf("Enter no for binary conv ");
    scanf("%d", &n);

    quo = n;

    printf("Binary = ");

    if (n == 0) {
        printf("0");
    }

    while (quo != 0)
    {
        rem = quo % 2;  
        quo = quo / 2;   

        printf("%d", rem);  
        if(rem==1)
        {
            cnt++;
        }
        
    }

 
      
    printf("The cnt is : %d\n", cnt);

if(cnt%2==0)
{
    printf("it is even parity ");

}
else
{
    printf("it is odd parity");
}


    return 0;
}