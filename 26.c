#include <stdio.h>
int a1[10];
int b1[10];
void merging(int low, int mid, int high) {
   int l1, l2, i;

   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
      if(a1[l1] <= a1[l2])
         b1[i] = a1[l1++];
      else
         b1[i] = a1[l2++];
   }
   
   while(l1 <= mid)    
      b1[i++] = a1[l1++];

   while(l2 <= high)   
      b1[i++] = a1[l2++];

   for(i = low; i <= high; i++)
      a1[i] = b1[i];
}

void sort(int low, int high) {
   int mid;
   
   if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merging(low, mid, high);
   } else { 
      return;
   }   
}

int main(void) { 
   int i,n;
scanf("%d\n",&n);
for(i = 0; i <n; i++)
{
      scanf("%d\n",&a1[i]);
}
sort(0, n);
for(i = 0; i <n; i++)
   {
      printf("%d\n",a1[i]);
   }
return 0;
	
}

