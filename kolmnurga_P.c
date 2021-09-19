#include <stdio.h>
#include <math.h>

int main(void){
    float ax, ay, bx, by, cx, cy, A, B, C, ümbermõõt;
    printf("Arvutame kolmnurga ümbermõõdu kasutades X-ja Y-koordinaate.\n"); // Anname kasutajale teada mida programm teeb
       
        printf("Sisesta kolmnurga punkt A X-koordinaat: "); // Palume kasutajal sisestada koordinaadid
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
     
    
    
    A = sqrt((bx-ax) * (bx-ax) + (by-ay) * (by-ay)); // Kasutame vektori pikkuse leidmise valemit
    B = sqrt((bx-cx) * (bx-cx) + (by-cy) * (by-cy));
    C = sqrt((ax-cx) * (ax-cx) + (ay-cy) * (ay-cy));
    
    if(A <= 0 || B <= 0 || C <= 0){  // Väikene tsükkel, mis ei lase küljepikkusel olla negatiivne või null
            printf("Küljepikkus ei tohi olla negatiivne või null.\n");
            return 0;
        }
    
    if(A < (B+C) && B < (A+C) && C < (B+A)) // Tsükkel, mis teeb kindlaks, et kolmnurk moodustub
        {
        ümbermõõt = A + B + C;
        
            printf("\nKolmnurga ümbermõõt on: %.4f\n", ümbermõõt);
        
       }
       else
       {
           printf("Pole võimalik kolmnurka luua!!");
       }
   }

