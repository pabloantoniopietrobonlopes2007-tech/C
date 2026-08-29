#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, n, t;
    double pA, pB, pC, pN;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    t = (a + b + c + n);
    pA = ((a*100.00)/t);
    pB = ((b*100.00)/t);
    pC = ((c*100.00)/t);
    pN = ((n*100.00)/t);
    printf("Candidato A: %.0lf%%\nCandidato B: %.0lf%%\n", pA, pB);
    printf("Candidato C: %.0lf%%\nNulos %.0lf%%\n", pA, pB);

    return 0;
}
