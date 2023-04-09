#include <stdio.h>

#define ROAD_POINTS 8

int main(){
    
    int road_networks[ROAD_POINTS][ROAD_POINTS] = {
        
     {1, 1, 0, 0, 0, 1, 0, 0},
     {1, 1, 1, 0, 0, 0, 0, 0},
     {0, 1, 1, 0, 1, 1, 0, 0},
     {0, 0, 0, 1, 1, 0, 0, 0},
     {0, 0, 0, 1, 1, 0, 0, 0},
     {1, 0, 1, 0, 0, 1, 0, 0},
     {1, 0, 0, 1, 0, 0, 1, 0},
     {0, 0, 0, 0, 0, 1, 0, 1}
         
    };
    
    //Displays adjacency matrix
    
    char letters[ROAD_POINTS] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    
    printf("Adjacency matrix:\n"); 
    printf("  a b[c][d]e f g h\n");
    for (int i = 0; i < ROAD_POINTS; i++) {
        if (i == 2 || i == 3){
            printf("[%c] ", letters[i]);
        }else{
            printf("%c ", letters[i]);
        }
        for (int j = 0; j < ROAD_POINTS; j++) {
            printf("%d ", road_networks[i][j]);
        }
        printf("\n");
    }
}
