#include <stdio.h>
#include <math.h>
/* Daftar Variable
a = batas bawah
b = batas atas
tol = toleransi
max_iter = jumlah iterasi maksimum */
float a,m,b,F_a,F_m,F_b,tol;
int max_iter;
float f(float x)
{
return tan(x) – x – 0.5;
}
int main()
{
int it;
float epsilon;
printf(“Batas bawah = “); scanf(“%f”,&a);
printf(“Batas atas = “); scanf(“%f”,&b);
printf(“Toleransi = “); scanf(“%f”,&tol);
printf(“Jumlah iterasi maksimum = “); scanf(“%d”,&max_iter);
it = 0;
F_a = f(a);
F_b = f(b);
if(F_a * F_b > 0) printf(” Nilai F(a) x F(b) > 0\n”);
else
{
printf(“It. a m b f(a) f(b)”);
printf(” abs[f(b)-f(a)]/2\n”);
do
{
it = it + 1;
m = (a + b) / 2;
F_m = f(b);
printf(“%3d %8.5f %8.5f %8.5f %8.5f %8.5f %8.2e\n”,
it,a,m,b,F_a,F_b,fabs(F_b-F_a)/2);
epsilon = fabs(m-a);
if(F_a * F_m <= 0) { b = m; F_b = F_m; }
else { a = m; F_a = F_m; }
} while(it <= max_iter && epsilon > tol);
if(it<=max_iter)
{
printf(“Toleransi terpenuhi\n”);
printf(“Hasil akhir = %g\n”,m);
}
else printf(“Toleransi tidak terpenuhi\n”);
}
}
