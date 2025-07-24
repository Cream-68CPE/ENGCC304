#include <stdio.h>

int main() {
    
    char  ID[11] ;
    float workHrs ;
    float salary ;
    float total ;
    
    printf("input ID[max10] ") ;
    scanf("%10s", ID ) ;
    
    printf("input workHrs ") ;
    scanf("%f", &workHrs) ;
    
    printf("input salary[฿] ") ;
    scanf("%f", &salary) ;
    
    total = workHrs * salary ;
    printf("\n") ;
    printf("ID %s ", ID) ;
    printf("total %.2f ฿", total) ;
}
