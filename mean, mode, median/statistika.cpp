#include <iostream>
using namespace std;
void Modus(int a[], int n)
{
	int b[n], i, j, sum = 0, t, k = 0, c = 1, max = 0, mode;
	 for (i = 0; i < n - 1; i++)
    {
        mode = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j]) {
                mode++;
            }
        }
        if ((mode > max) && (mode != 0)) {
            k = 0;
            max = mode;
            b[k] = a[i];
            k++;
        }
        else if (mode == max) {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i]) 
            c++;
        }
        if (c == n)
            printf("\nThere is no mode");
        else
        {
            printf("\nMode\t= ");
            for (i = 0; i < k; i++)
                printf("%d ",b[i]);
        }
        printf("\n");
}
void Mean(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
  
    cout << "Mean : " << (double)sum / (double)n << endl;
}
void Median(int a[], int n)
{
	int temp = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	if (n % 2 != 0){
        cout << "Median : " << (double)a[n / 2] << endl;
	}else{
    cout << "Median : " << (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0 << endl;
	}
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
