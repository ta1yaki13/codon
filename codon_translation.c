#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int i, j;
    int width  = 2;
    int height;

    char codon[5][4];

    puts("コドンを解析します。");
    puts("5つのコドンを入力してくだい.");
    for(i = 1; i <= 5; i++){
        printf("%d番目のコドン > ", i);
        scanf("%s", codon[i]);
    }



    for(i = 1; i <= 5; i++){
        printf("%s", codon[i]);
        putchar('\n');
    }

    for(i = 1; i <= 5; i++){
        if(strcmp(codon[i], "UUU") == 0 || strcmp(codon[i], "UUC") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : フェニルアラニン(Phe)\n");
        } 
        else if(strcmp(codon[i], "UUA") == 0 || strcmp(codon[i], "UUG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : ロイシン(Leu)\n");
        }
        else if(strcmp(codon[i], "CUU") == 0 || strcmp(codon[i], "CUC") == 0 || strcmp(codon[i], "CUA") == 0 || strcmp(codon[i], "CUG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : ロイシン(Leu)\n");
        }
        else if(strcmp(codon[i], "AUU") == 0 || strcmp(codon[i], "AUC") == 0 || strcmp(codon[i], "AUA") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : イソロイシン(Ile)\n");
        }
        else if(strcmp(codon[i], "AUG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : 開始コドン [メチオニン(Met)]\n");
        }
        else if(strcmp(codon[i], "GUU") == 0 || strcmp(codon[i], "GUC") == 0 || strcmp(codon[i], "GUA") == 0 || strcmp(codon[i], "GUG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : バリン(Val)\n");
        }
        
    }

    return 0;
}

