#include <stdio.h>
int main(){
    char a[30],b[30],c[30],d[30];
    scanf("%s %s %s",a,b,c);
    if(strcmp(a, "vertebrado") == 0){

        if(strcmp(b, "ave") == 0){

            if(strcmp(c, "carnivoro") == 0){

               printf("aguia\n");
            }
            else if(strcmp(c, "onivoro") == 0){
                printf("pomba\n");
            }

        }
        else if(strcmp(b, "mamifero") == 0){

            if(strcmp(c, "onivoro") == 0){
               printf("homem\n");
            }
            else if(strcmp(c, "hervoro") == 0){
                printf("vaca\n");


        }
    }
    else if(strcmp(a, "invertebrado") == 0){
        if(strcmp(b, "inseto") == 0){
            if(strcmp(c, "hematofago") == 0){
               printf("pulga\n");
            }
            else if(strcmp(c, "herbivoro") == 0){
                printf("lagarta\n");
            }

        }
        else if(strcmp(b, "anelido") == 0){

            if(strcmp(c, "hematofago") == 0){
               printf("sanguessuga\n");
            }
            else if(strcmp(c, "onivoro") == 0){
                printf("minhoca\n");


        }
    }
}
    }
    return 0;
}
