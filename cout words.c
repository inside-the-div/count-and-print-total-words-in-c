#include <stdio.h>
int main(){

    int words = 0,index = 0;
    char word[100],words_list[100][100],c = ' ';
    char text[100];
    int i,j,k;
    printf("Input String Is: ");
    gets(text);

    for(i=0; text[i] != '\0'; i++){

        if(text[i] == ' ' ){
            if(c!= ' '){
                words_list[words][index] = '\0';
                words++;
                c = ' ';
                index = 0;
            }
        }
        else{
            c = text[i];
            words_list[words][index] = c;
            index++;
        }
    }
    if(c !=' '){
        words++;
    }
    printf("\nTotal Words: %d\n",words);

    printf("\nList of Words:\n");
    for(i=0; i<words; i++){
        printf("%s\n",words_list[i]);
    }
}
