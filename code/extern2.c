void print()
{
    extern int x;//taking refernce of gobal variable in different file
    printf("%d\n",x);
    x=x+10;
}
//output