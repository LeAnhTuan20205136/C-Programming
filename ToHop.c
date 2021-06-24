#include <stdio.h>

int C(int n, int k);

int main()
{
    FILE *f1, *f2;
    int n, k;

    f1 = fopen("TOHOP.INP", "r");
    f2 = fopen("TOHOP.OUT", "w");

    while (fscanf(f1, "%d %d\n", &n, &k) != EOF)
    {
        int kqua = C(n, k);
        fprintf(f2, "%d\n", kqua);
    }

    fclose(f1);
    fclose(f2);
}

int C(int n, int k)
{
    if (k == 1)
        return n;
    else if (n == k)
        return 1;
    else
        return C(n - 1, k - 1) + C(n - 1, k);
}