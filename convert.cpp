int convert (int x)
{
    x = -x;
    return x;
}
bool ConvertArray(int[] a)
{
    int n = 100000;
    if (a[0]==a[1] || a[0]*a[1]<0)
    convert(a[1]);
    if(a[0]>a[1])
    {
        for (int i = 2 ; i < n; i++)
        {
            if(a[2]>a[1] || convert(a[2])>a[1])
            {
                return false;
                break;
            }
        }
    }
    if(a[0]<a[1])
    {
        for (int i = 2 ; i < n; i++)
        {
            if(a[2]<a[1] || convert(a[2])<a[1])
            {
                return false;
                break;
            }
        }
    }
    return false;
}
