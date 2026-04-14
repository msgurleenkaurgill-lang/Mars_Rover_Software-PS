#include <stdio.h>

int state = 0;

int ID;
int High;
int Low;

void parse_byte(int byte){
    
    switch(state){
        
        case 0:
          if (byte == 170){
              state = 1;
          }
          break;
        
        case 1:
         ID = byte;
         state = 2;
         break;
         
        case 2:
         High = byte;
         state = 3;
         break;
         
        case 3:
         Low = byte;
         state = 4;
         break;
         
        case 4:{
            int check = ID ^ High ^ Low;
            
            if (byte == check) {
                int speed = High * 256 + Low;
                printf("Motor: %d, Speed: %d\n" , ID , speed);
            } else{
                printf("Wrong data, no correct package found\n");
            }
            
            state = 0;
            break;
        }
    }
}

int main(){
    
    int arr[] = {0 , 3, 170 , 45, 23, 7, 61};
    
    for(int i =0; i<7; i++) {
        parse_byte(arr[i]);
    }
    
    return 0;
}