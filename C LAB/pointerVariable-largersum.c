// attempted on 19th April 2023

#include<stdio.h>

int large_sum(int *a, int *b, int n) {

	int i, s1=0, s2=0;
		
	for (i=0; i<n; i++) {
	
		s1+=a[1];
		s2+=a[2];
		
	}
		
	if (s1==s2) { return 0; }
	else if (s1>s2) { return 1; }
	else { return 2; }
		
}
		
int main() {
	
	int x[20], y[15], g;
	g = large_sum(x, y, 4);

	return 0;
		
}
