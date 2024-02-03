    int count = 0;
float NOK(float n1, float n2)
{
    if (count < 10) {
        float div;
        if (n1 == n2)  return n1;
        float d = n1 - n2;
        if (d < 0.0) {
            count += 1;
            d = -d;
            div = NOK(n1, d);
        }
        else {
            count += 1;
            div = NOK(n2, d);
        }
        return div;
    }
    else
    {
        count = 0;
        return 1;
    }
}
int NOK(int n1, int n2)
{
    int div;
    if (n1 == n2)  return n1;
    int d = n1 - n2;
    if (d < 0) {
        d = -d;
        div = NOK(n1, d);
    }
    else
        div = NOK(n2, d);
    return div;
}
long NOK(long n1, long n2)
{
    long div;
    if (n1 == n2)  return n1;
    long d = n1 - n2;
    if (d < 0) {
        d = -d;
        div = NOK(n1, d);
    }
    else
        div = NOK(n2, d);
    return div;
}
double NOK(double n1, double n2)
{
    if (count < 10) {
        double div;
        if (n1 == n2)  return n1;
        double d = n1 - n2;
        if (d < 0.0) {
            d = -d;
            count += 1;
            div = NOK(n1, d);
        }
        else {
            count += 1;
            div = NOK(n2, d);
        }
        return div;
    }
    else
    {
        count = 0;
        return 1;
    }
}