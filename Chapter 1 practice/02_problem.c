#include  <stdio.h>

int main() {
    int lenght, breadth ;
    printf("enter lenght\n");
    scanf("%d", &lenght);

    printf("enter breadth\n");
    scanf("%d", &breadth);
    
    printf("the area of this rectangle is %d", lenght * breadth);
    return 0;
}