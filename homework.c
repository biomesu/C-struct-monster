#include <stdlib.h>
#include <stdio.h>

typedef struct Monster{
    int id;
    int victims;
    char name[50];
    char location[100];
    
} Monster;


Monster* getAttacks(Monster *attacks, int *size){
    int i,n;
    char ch;
    printf("Enter the number of attacks from the monster: ");
    scanf("%d", &n);
    scanf("%c", &ch);

    attacks = (Monster*)malloc(sizeof(Monster)*n);
        for(int i = 0; i < n; i++){
            printf("Monster #%d\n", (i+1));
            printf("------\n", (i+1));

            attacks[i].id = (i+1);
            printf("Enter Monsters name: ");
            fgets(attacks[i].name, 50, stdin);

            printf("Enter Monsters Location: ");
            fgets(attacks[i].location,100, stdin);

            printf("Enter the number of victims: ");
            scanf("%d", &attacks[i].victims);
            printf("-----------------\n");
            scanf("%c", &ch);
            
        
        }
        *size = n;
        
        return attacks;
}

void print(Monster *monster, int n){
    int i;
    printf("\n Monster Details \n");
    
    for(int i = 0; i < n; i++){
        printf("Monster ID: #%d\n", monster[i].id);
        printf("Monster name: #%d\n", monster[i].name);
        printf("Monster attack location: #%d\n", monster[i].location);
        printf("Victim: #%d\n", monster[i].victims);
        printf("\n--------------\n");

    }

}

int main(void){
    Monster *monster = NULL;
    int size;

    monster = getAttacks(monster,&size);

    print(monster, size);

    return 0;
}