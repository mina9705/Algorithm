1. Number Theory Exercises:

exo1:
in c:

#include <stdio.h>
bool is_prime(int N)
{ if (N <= 1) return false;
if (N == 2 || N == 3) return true;
if (N % 2 == 0 || N % 3 == 0) return false;
for (int i = 5; i * i <= N; i += 6)
{
if (N % i == 0 || N % (i + 2) == 0) return false;
}
return true;
}

int main() {
int N;
printf("Enter an integer N: ");
scanf("%d", &N);

if (is_prime(N))
{
printf("%d is a prime number.\n", N);
else
printf("%d is not a prime number.\n", N);

return 0;
}

exo2:
in c:

#include <stdio.h>
int gcd(int A, int b)
{
while (B != 0)
{
int temp = B;
B = A % B;
A = temp;
}
return A;
}

int main( )
{
int A, B;
printf("Enter two integers A and B: ");
scanf("%d %d", &A, &B);
printf("The GCD of %d and %d is: %d\n", A, B, gcd(A, B));
return 0;
}

exo3:
in c :

#include <stdio.h>
#include <stdlib.h>
int gcd_subtraction(int A, int B)
{
while (A != B)
{
if (A > B)
A = A - B;
else
B = B - A;
}
return A;
}

// Function to compute LCM using the relationship LCM(A, B) = (A * B) / GCD(A, B)
unsigned long long lcm(int A, int B) {
return (unsigned long long)A * (B / gcd_subtraction(A, B));
}

int main() {
int A, B;
printf("Enter two integers A and B: ");
scanf("%d %d", &A, &B);
printf("The LCM of %d and %d is: %llu\n", A, B, lcm(A, B));

return 0;
}

exo4:
in c:

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void sieve_of_eratosthenes(int N)
{
bool is_prime[N + 1];

for (int i = 0; i <= N; i++)
is_prime[i] = true;
is_prime[0] = false;
is_prime[1] = false;
for (int i = 2; i <= sqrt(N); i++) {
if (is_prime[i]) {

for (int j = i * i; j <= N; j += i)
  is_prime[j] = false;
}
}
printf("Prime numbers up to %d are:\n", N);
for (int i = 2; i <= N; i++) {
if (is_prime[i]) {
printf("%d ", i);
}
}
printf("\n");
}

int main() {
int N;

printf("Enter the value of N: ");
scanf("%d", &N);

if (N < 1 || N > 10^6) {
printf("Please enter a number between 1 and 10^6.\n");
return 1;
}
sieve_of_eratosthenes(N);
return 0;
}

ex05:
in c:

#include <stdio.h>
int euler_totient(int N)
{
int result = N; // Initialize result as N
for (int i = 2; i * i <= N; i++) {
if (N % i == 0) {
while (N % i == 0) {
N /= i;
}
result -= result / i; }
}
if (N > 1) {
result -= result / N;
}

return result;
}

int main() {
int N;

printf("Enter an integer N: ");
scanf("%d", &N);
printf("Euler's Totient function φ(%d) = %d\n", N, euler_totient(N));

return 0;
}

2. Series Exercises :
ex02:
in c:

#include <stdio.h>
#include <math.h>
double sum_of_geometric_series(double a, double r, int N) {
if (r == 1) {
return a * N; // If the common ratio is 1
} else {
return a * (1 - pow(r, N)) / (1 - r); // Using the formula for r != 1
}
}

int main() {
double a, r;
int N;
printf("Enter the first term (a): ");
scanf("%lf", &a);
printf("Enter the common ratio (r): ");
scanf("%lf", &r);
printf("Enter the number of terms (N): ");
scanf("%d", &N);

double result = sum_of_geometric_series(a, r, N);
printf("The sum of the first %d terms of the geometric series is: %.2lf\n", N, result);

return 0;
}

ex04:
in c;

#include <stdio.h>
int sum_of_squares(int N) {
return (N * (N + 1) * (2 * N + 1)) / 6; // Using integer arithmetic
}

int main() {
int N;
printf("Enter a natural number N: ");
scanf("%d", &N);
if (N < 1) {
printf("Please enter a natural number greater than 0.\n");
return 1;
}
int result = sum_of_squares(N);
printf("The sum of the squares of the first %d natural numbers is: %d\n", N, result);

return 0;
}

ex06:
in c:

#include <stdio.h>
double harmonic_sum(int N) { double sum = 0.0; // Initialize sum as
a double to store fractional results

for (int i = 1; i <= N; i++) {
sum += 1.0 / i; }

return sum;
}

int main() {
int N;

printf("Enter a natural number N: ");
scanf("%d", &N);
if (N < 1) {
printf("Please enter a natural number greater than 0.\n");
return 1;
}
double result = harmonic_sum(N);
printf("The sum of the first %d terms of the harmonic series is: %.6lf\n", N, result);

return 0;
}

3. Vector Exercises :
ex01:
in c:

#include <stdio.h>
#include <stdlib.h>
void vector_sum(int A[], int B[], int result[], int n) {
for (int i = 0; i < n; i++) {
result[i] = A[i] + B[i]; // Sum corresponding elements
}
}

int main() {
int n;
printf("Enter the size of the vectors: ");
scanf("%d", &n);
int* A = (int*)malloc(n * sizeof(int));
int* B = (int*)malloc(n * sizeof(int));
int* result = (int*)malloc(n * sizeof(int));
printf("Enter the elements of vector A:\n");
for (int i = 0; i < n; i++) {
printf("A[%d]: ", i);
scanf("%d", &A[i]);
}
printf("Enter the elements of vector B:\n");
for (int i = 0; i < n; i++) {
printf("B[%d]: ", i);
scanf("%d", &B[i]);
}
vector_sum(A, B, result, n);
printf("The sum of the vectors is:\n");
for (int i = 0; i < n; i++) {
printf("result[%d] = %d\n", i, result[i]);
}
free(A);
  free(B);
free(result);

return 0;
}

ex07:
in c :

#include <stdio.h>
#include <stdlib.h>
double dot_product(double A[], double B[], int n) {
double sum = 0.0;
for (int i = 0; i < n; i++) {
sum += A[i] * B[i];
}
return sum;
}
void projection(double A[], double B[], double result[], int n) {
double dotAB = dot_product(A, B, n); // A · B
double dotBB = dot_product(B, B, n); // B · B

for (int i = 0; i < n; i++) {
result[i] = (dotAB / dotBB) * B[i]; // projB(A) = (A · B / B · B) * B
}
}

int main() {
int n;
printf("Enter the size of the vectors: ");
scanf("%d", &n);
double* A = (double*)malloc(n * sizeof(double));
double* B = (double*)malloc(n * sizeof(double));
double* result = (double*)malloc(n * sizeof(double));
  printf("Enter the elements of vector A:\n");
for (int i = 0; i < n; i++) {
printf("A[%d]: ", i);
scanf("%lf", &A[i]);
}
printf("Enter the elements of vector B:\n");
for (int i = 0; i < n; i++) {
printf("B[%d]: ", i);
scanf("%lf", &B[i]);
}
projection(A, B, result, n);

printf("The projection of vector A onto vector B is:\n");
for (int i = 0; i < n; i++) {
printf("result[%d] = %.6lf\n", i, result[i]);
}

free(A);
free(B);
free(result);

return 0;
}
