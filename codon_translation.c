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



    puts("-----------------------解析結果------------------------------");

    for(i = 1; i <= 5; i++){
        if(strcmp(codon[i], "UUU") == 0 || strcmp(codon[i], "UUC") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : フェニルアラニン (Phe)\n");
        } 
        else if(strcmp(codon[i], "UUA") == 0 || strcmp(codon[i], "UUG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : ロイシン (Leu)\n");
        }
        else if(strcmp(codon[i], "CUU") == 0 || strcmp(codon[i], "CUC") == 0 || strcmp(codon[i], "CUA") == 0 || strcmp(codon[i], "CUG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : ロイシン (Leu)\n");
        }
        else if(strcmp(codon[i], "AUU") == 0 || strcmp(codon[i], "AUC") == 0 || strcmp(codon[i], "AUA") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : イソロイシン (Ile)\n");
        }
        else if(strcmp(codon[i], "AUG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : 開始コドン [メチオニン (Met)]\n");
        }
        else if(strcmp(codon[i], "GUU") == 0 || strcmp(codon[i], "GUC") == 0 || strcmp(codon[i], "GUA") == 0 || strcmp(codon[i], "GUG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : バリン (Val)\n");
        }
        else if(strcmp(codon[i], "UCU") == 0 || strcmp(codon[i], "UCC") == 0 || strcmp(codon[i], "UCA") == 0 || strcmp(codon[i], "UCG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : セリン (Ser)\n");
        }
        else if(strcmp(codon[i], "CCU") == 0 || strcmp(codon[i], "CCC") == 0 || strcmp(codon[i], "CCA") == 0 || strcmp(codon[i], "CCG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : プロリン (Pro)\n");
        }
        else if(strcmp(codon[i], "ACU") == 0 || strcmp(codon[i], "ACC") == 0 || strcmp(codon[i], "ACA") == 0 || strcmp(codon[i], "ACG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : トレオニン (Thr)\n");
        }
        else if(strcmp(codon[i], "GCU") == 0 || strcmp(codon[i], "GCC") == 0 || strcmp(codon[i], "GCA") == 0 || strcmp(codon[i], "GCG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : アラニン (Ala)\n");
        }
        else if(strcmp(codon[i], "UAU") == 0 || strcmp(codon[i], "UAC") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : チロシン (Tyr)\n");
        }
        else if(strcmp(codon[i], "UAA") == 0 || strcmp(codon[i], "UAG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : 終始コドン\n");
        }
        else if(strcmp(codon[i], "CAU") == 0 || strcmp(codon[i], "CAC") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : ヒスチジン (His)\n");
        }
        else if(strcmp(codon[i], "CAA") == 0 || strcmp(codon[i], "CAG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : グルタミン (Gln)\n");
        }
        else if(strcmp(codon[i], "AUU") == 0 || strcmp(codon[i], "AAC") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : アスパラギン (Asn)\n");
        }
        else if(strcmp(codon[i], "AAA") == 0 || strcmp(codon[i], "AAG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : リシン (Lys)\n");
        }
        else if(strcmp(codon[i], "GAU") == 0 || strcmp(codon[i], "GAC") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : アスパラギン酸 (Asp)\n");
        }
        else if(strcmp(codon[i], "GAA") == 0 || strcmp(codon[i], "GAG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : グルタミン酸 (Glu)\n");
        }
        else if(strcmp(codon[i], "UGU") == 0 || strcmp(codon[i], "UGC") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : システイン (Cys)\n");
        }
        else if(strcmp(codon[i], "UGA") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : 終始コドン\n");
        }
        else if(strcmp(codon[i], "UGG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : トリプトファン (Trp)\n");
        }
        else if(strcmp(codon[i], "CGU") == 0 || strcmp(codon[i], "CGC") == 0 || strcmp(codon[i], "CGA") == 0 || strcmp(codon[i], "CGG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : アルギニン( Arg)\n");
        }
        else if(strcmp(codon[i], "AGU") == 0 || strcmp(codon[i], "AGC") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : セリン (Ser)\n");
        }
        else if(strcmp(codon[i], "AGA") == 0 || strcmp(codon[i], "AGG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : アルギニン (Arg)\n");
        }
        else if(strcmp(codon[i], "GGU") == 0 || strcmp(codon[i], "GGC") == 0 || strcmp(codon[i], "GGA") == 0 || strcmp(codon[i], "GGG") == 0){
            printf("%d番目のコドン > ", i);
            printf("%s", codon[i]);
            printf(" : グリシン (Gly)\n");
        }
        

    }

    return 0;
}

