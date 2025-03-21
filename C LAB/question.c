#include<stdio.h>

int main() {
    int n=6;
    int k=0;
    int p[20];
    for (int i=n/2; i<=n; i++) {
        for(int j=1; i<=n; j*=2) {
            p[k++] = i+j;
        }
        return k;
    }
    
    for (int a=0; a<20; a++) {
    
    	printf("%d ", p[a]);
    
    }
    return 0;
}
