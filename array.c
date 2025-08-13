#include <stdio.h>
#include <conio.h>
int main() {
    int n, i, a=0,b= 0,t[10];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the time taken by students (in hours):\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &t[i]);
        int t_m = t[i] * 60;
        if(t_m <= 180) {
            a++;
        } else if(t_m > 500) {
            b++;
        }
    }
    printf("Number of students who completed within 180 minutes: %d\n", a);
    printf("Number of students who took more than 500 minutes: %d\n", b);
}
