
#include <stdio.h>

typedef struct {
  int x;
  int y;
} Ponto;

typedef struct {
  Ponto pt1;
  Ponto pt2;
  Ponto pt3;
} Triangulo;

int main() {
    
    Triangulo coisa;
    
    coisa.pt1.x = 1;
    coisa.pt1.y = 0;
    coisa.pt2.x = -1;
    coisa.pt2.y = 0;
    coisa.pt3.x = 0;
    coisa.pt3.y =1;
    
    printf("1 ponto = %d e %d\n",coisa.pt1.x,coisa.pt1.y);
    printf("2 ponto = %d e %d\n",coisa.pt2.x,coisa.pt2.y);
    printf("3 ponto = %d e %d\n",coisa.pt3.x,coisa.pt3.y);
  return 0;
}