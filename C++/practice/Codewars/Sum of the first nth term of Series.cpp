std::string seriesSum(int n)
{
    double sum=0,d=-2;
    for (int i = 1; i <= n; ++i) {
        sum+=1/(d+=3);
    }
    char str[1000];
    sprintf(str,"%.2f",sum);
    return str;
}