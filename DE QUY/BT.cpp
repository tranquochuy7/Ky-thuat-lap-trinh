#include <stdio.h>
#include <conio.h>
// Tính S(n) = 1^2 + 2^2 + 3^2 + … + (n-1)^2 + n^2
int Tinh(int n)

{
    if (n == 1)

        return 1;
    return Tinh(n - 1) + n * n;
}
// S(n) = 1 + 1/2 + 1/3 + … + 1/(n-1) + 1/n
float Tinh(float n)
{

    if (n == 1)
        return 1;
    return Tinh(n - 1) + 1 / n;
}
// Tính S(n) = 1/2 + 1/4 + …. + 1/2n
float Tinh(float n)

{

    if (n == 1)
        return 0.5;
    return Tinh(n - 1) + 1 / (2 * n);
}
// Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2*n+1)
float Tinh(float n)

{

    if (n == 1)
        return 1;
    return Tinh(n - 1) + 1 / (2 * n + 1);
}
// Tính S(n) = 1/(1*2) + 1/(2*3) + 1/( n*(n+1) )
float Tinh(float n)

{
    if (n == 1)
        return 0.5;
    return Tinh(n - 1) + 1 / (n * (n + 1));
}
// Tính S(n) = 1/2 + 2/3 + 3/4 + … + n/(n+1)
float Tinh(float n)

{
    if (n == 1)
        return 0.5;
    return Tinh(n - 1) + n / (n + 1);
}
// Tính S(n) = 1/2 + 3/4 + 5/6 + … + (2n+1)/(2n+2)
float Tinh(float n)

{
    if (n == 1)
        return 0.5;
    return Tinh(n - 1) + (2 * n + 1) / (2 * n + 2);
}
// Tính T(x,n) = x^n
float LuyThua(float x, int n)

{

    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        return LuyThua(x, n + 1) * 1 / x;
    }
    return LuyThua(x, n - 1) * x;
}
// Tính S(n) = 1 + 1.2 + 1.2.3 + …. + 1.2.3…n
long GiaiThua(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return GiaiThua(n - 1) * n;
}
long Tong(int n)

{
    if (n == 1)

    {
        return 1;
    }

    return Tong(n - 1) + GiaiThua(n - 1) * n;
}
// Tính S(x,n) = x + x^2 + x^3 + … + x^n
float LuyThua(float x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return LuyThua(x, n - 1) * x;
}
float Tong(float x, int n)
{

    if (n == 1)
    {
        return x;
    }
    return Tong(x, n - 1) + LuyThua(x, n - 1) * x;
}
// Tính S(x,n) = x^2 + x^4 +…. + x^2n
double bai742(int x, int n)

{

    if (n == 1)

    {
        return pow(x, 2 * n);
    }
    return bai742(x, n - 1) + pow(x, 2 * n);
}
// Tính S(x,n) = x + x^3 + x^5 +….+ x^(2n+1)
double tinh(int x, int n)

{

    if (n == 1)

    {
        return pow(x, n);
    }
    return tinh(x, n - 1) + pow(x, n + 1);
}
// Tính S(n) = 1 + 1/(1+2) + 1/(1+2+3) + … + 1/(1+2+3+.
float Tong(float n)

{

    if (n == 1)

    {

        return (float)1;
    }

    return Tong(n - 1) + n;
}

float TongChia(float n)

{

    if (n == 1)

    {

        return (float)1;
    }

    return TongChia(n - 1) + 1 / (Tong(n - 1) + n);
}
// Tính S(x,n) = x + (x^2)/2! + (x^3)/3! + … + (x^n)/n!
float LuyThua(float x, float n)

{

    if (n == 1)

    {

        return x;
    }

    return LuyThua(x, n - 1) * x;
}

float GiaiThua(float n)

{

    if (n == 1)

    {

        return (float)1;
    }

    return GiaiThua(n - 1) * n;
}

float LTChiaGT(float x, float n)

{

    if (n == 1)

    {

        return x;
    }

    return LTChiaGT(x, n - 1) + ((LuyThua(x, n - 1) * x) / (GiaiThua(n - 1) * n));
}
// Tính S(x,n) = 1 + (x^2)/2! + (x^4)/4! + … + (x^2n)!
float LuyThua(float x, float n)

{

    if (n == 0)

    {

        return (float)1;
    }

    return LuyThua(x, n - 1) * x * x;
}

float GiaiThua(float n)

{

    if (n == 0)

    {

        return (float)1;
    }

    return GiaiThua(n - 1) * n;
}

float LTChiaGT(float x, float n)

{

    if (n == 0)

    {

        return (float)1;
    }

    return LTChiaGT(x, n - 1) + ((LuyThua(x, n - 1) * x * x) / ((GiaiThua(2 * n – 1) * 2 * n)));
}
// Tìm ước số lẻ lớn nhất của số nguyên dương n . Ví dụ : n = 100 ước lẻ lớn nhất của 100 là 25
int UocLeMax(int n)

{

    if (n % 2 == 1)

    {

        return n;
    }

    return UocLeMax(n / 2);
}
// Tính S(n) = sqrt(2 + sqrt (2 + … sqrt ( 2 + sqrt(2) ) ) )
float Function(float n)

{

    if (n == 1)

    {

        return sqrt(2);
    }

    return sqrt(2 + Function(n - 1));
}
// Tính S(n) = sqrt(n + sqrt (n-1 + sqrt(n-2 + …sqrt(2 + sqrt (1) ) ) ) )
long double Function(long double n)

{

    if (n == 1)

    {

        return 1;
    }

    return sqrt(n + Function(n - 1));
}
// Hãy đếm số lượng chữ số của số nguyên dương n
int DemSoLuongChuSo(int n)

{

    if (n == 0)

    {

        return 0;
    }

    return DemSoLuongChuSo(n / 10) + 1;
}
// Hãy tính tổng các chữ số của số nguyên dương n
int TongChuSo(int n)

{

    if (n == 0)

    {

        return 0;
    }

    return TongChuSo(n / 10) + n % 10;
}
// Hãy tính tích các chữ số của số nguyên dương n
int Tich(int n)

{

    if (n == 0)

    {

        return 1;
    }

    return Tich(n / 10) * (n % 10);
}
// Hãy đếm số lượng chữ số lẻ của số nguyên dương n
int DemLe(int n)

{

    if (n == 0)

    {

        return 0;
    }

    if (n % 2 == 1)

    {

        return DemLe(n / 10) + 1;
    }

    return DemLe(n / 10);
}
// Hãy tính tổng các chữ số chẵn của số nguyên dương n
int TongChuSoChan(int n)

{

    if (n == 0)

    {

        return 0;
    }

    if (n % 2 == 0)

    {

        return TongChuSoChan(n / 10) + (n % 10);
    }

    return TongChuSoChan(n / 10);
}
// Hãy tính tích các chữ số lẻ của số nguyên dương n
int TichChuSoLe(int n)

{

    if (n == 0)

    {

        return 1;
    }

    if (n % 2 == 1)

    {

        return TichChuSoLe(n / 10) * (n % 10);
    }

    return TichChuSoLe(n / 10);
}
// Cho số nguyên dương n . Hãy tìm chữ số đầu tiên của n
int ChuSoDauTien(int n)

{

    if (n / 10 == 0)

    {

        return n;
    }

    return ChuSoDauTien(n / 10);
}
// Hãy tìm chữ số đảo ngược của số nguyên dương n
int DemSoLuongChuSo(int n)

{

    if (n == 0)

    {

        return 0;
    }

    return DemSoLuongChuSo(n / 10) + 1;
}

int DoiChuSo(int H, int Dem)

{

    if (Dem > 0)

    {

        return DoiChuSo(H * 10, Dem - 1);
    }

    return H;
}

int ChuSoDaoNguoc(int n)

{

    if (n == 0)

    {

        return 0;
    }

    int Dem = DemSoLuongChuSo(n);

    int H = n % 10;

    int T = DoiChuSo(H, Dem - 1);

    return ChuSoDaoNguoc(n / 10) + T;
}
// Tìm chữ số lớn nhất của số nguyên dương n
int ChuSoLonNhat(int Max, int n) // Max bắt đầu là n%10

{

    if (n % 10 == 0)

    {

        return Max;
    }

    Max = (Max > n % 10) ? Max : n % 10;

    return ChuSoLonNhat(Max, n / 10);
}
// Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay k
int KTToanLe(int n)

{

    if (n % 2 == 0 && n != 0)

    {

        return 0;
    }

    if (n % 2 == 1)

    {

        return KTToanLe(n / 10);
    }

    return 1;
}
// Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay
int KTToanChan(int n)

{

    if (n == 0)

    {

        return 1;
    }

    if (n % 2 == 1)

    {

        return 0;
    }

    if (n % 2 == 0)

    {

        return KTToanChan(n / 10);
    }

    return 1;
}

*Nhị phân đảo chuỗi :

    void
    ChuoiNguoc(char *x, int len)

{

    if (len != 0)

    {

        printf(“% c”, x[len - 1]);

        ChuoiNguoc(x, len - 1);
    }
}

*Đệ qui in số nhị phân :

    void
    SoNhiPhan(int n)

{

    if (n != 0)

    {

        SoNhiPhan(n / 2);

        printf(“% d”, n % 2);
    }
}
