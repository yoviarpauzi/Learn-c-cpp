#include <bits/stdc++.h>
using namespace std;
void Modus(int a[], int n)
{
	int b[n];
	int max = *max_element(a, a + n);
	int t = max + 1;
	int count[t];
	for (int i = 0; i < t; i++)
		count[i] = 0;
	for (int i = 0; i < n; i++)
		count[a[i]]++;
	int mode = 0;
	int k = count[0];
	for (int i = 1; i < t; i++) {
		if (count[i] > k) {
			k = count[i];
			mode = i;
		}
	}
	cout << "Modus : " << mode << endl;
}
double Mean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
  
    cout << "Mean : " << (double)sum / (double)n << endl;
}
double Median(int a[], int n)
{
    sort(a, a + n);
    if (n % 2 != 0)
        cout << "Median : " << (double)a[n / 2] << endl;

    cout << "Median : " << (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0 << endl;
}
int main(){
	int a[] = {80, 91, 61, 72, 97, 88, 81, 70, 74, 
    70, 68, 53, 93, 91, 80, 79, 91, 85, 67, 74};
	int n = sizeof(a) / sizeof(a[0]);
	Modus(a, n);
    Mean(a, n);
    Median(a, n);
	return 0;
}
