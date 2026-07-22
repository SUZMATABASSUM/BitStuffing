#include <stdio.h>
#include<string.h>

int main() {
int ip[100], op[200];
int i, j = 0, n;
int count = 0;
printf("Enter the length: ");
scanf("%d", &n);
 printf("Enter the bits (0 or 1):\n");
 for (i = 0; i < n; i++) {
 scanf("%d", &ip[i]);
 }
    for (i = 0; i < n; i++) {
op[j++] = ip[i];
if (ip[i] == 1) {
count++;
 if (count == 5) {
op[j++] = 0;  
 count = 0;
 }
 } else {
 count = 0;
 }
 }
 printf("After bit stuffing the frame is:\n");
 for (i = 0; i < j; i++) {
  printf("%d", op[i]);
 }
printf("\n");
 return 0;
}
