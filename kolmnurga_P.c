#include <stdio.h>
#include <math.h>

int main(void){
    float ax, ay, bx, by, cx, cy, A, B, C, ümbermõõt;
    printf("Arvutame kolmnurga ümbermõõdu kasutades X-ja Y-koordinaate.\n");
       
        printf("Sisesta kolmnurga punkt A X-koordinaat: ");
        scanf("%f", &ax);
     
        printf("Sisesta kolmnurga punkt A Y-koordinaat: ");
        scanf("%f", &ay);
     
        printf("Sisesta kolmnurga punkt B X-koordinaat: ");
        scanf("%f", &bx);
     
        printf("Sisesta kolmnurga punkt B Y-koordinaat: ");
        scanf("%f", &by);
     
        printf("Sisesta kolmnurga punkt C X-koordinaat: ");
        scanf("%f", &cx);
     
        printf("Sisesta kolmnurga punkt C Y-koordinaat: ");
        scanf("%f", &cy);
     
    
    
    A = sqrt((bx-ax) * (bx-ax) + (by-ay) * (by-ay));
    B = sqrt((bx-cx) * (bx-cx) + (by-cy) * (by-cy));
    C = sqrt((ax-cx) * (ax-cx) + (ay-cy) * (ay-cy));
    
    if(A <= 0 || B <= 0 || C <= 0){
            printf("Küljepikkus ei tohi olla negatiivne või null.\n");
            return 0;
        }
    
    if(A < (B+C) && B < (A+C) && C < (B+A))
        {
        ümbermõõt = A + B + C;
        
            printf("\nKolmnurga ümbermõõt on: %.4f\n", ümbermõõt);
        
       }
       else
       {
           printf("Pole võimalik kolmnurka luua!!");
       }
   }

