#include <stdio.h>

int main() {
    int N ;
    printf(" input Number ") ;
    scanf("%d", &N ) ;
    
    if (N % 2 == 1 ) {
        
        printf ( "Series: %d\n", N );
        for ( int i = 1; i <= N ; i += 2 ){
            printf( " %d ", i ) ;
        }
    } else {
        
        printf ( "Series: %d\n", N ) ;
        for ( int i = N ; i >= 0 ; i -= 2 ) {
            printf (" %d ", i) ;
        }
    } 
}
