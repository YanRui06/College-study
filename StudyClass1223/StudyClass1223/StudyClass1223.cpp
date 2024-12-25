#include <stdio.h>
#include <string.h>

int main(){
    FILE* fp;
    char ch[81];
    fp = fopen("input.txt","r");
    if (fp == NULL) {
        printf("文件打开失败\n");
    }
    else {
        printf("文件打开\n");
       while(!feof(fp)){
        fgets(ch,81,fp);
        if(!feof(fp)){
            ch[strlen(ch)-1]='\0';
        }
        
       }
       puts(ch);
    }
    /*fprintf(fp, "彭秀江的一辈子\n");
    fprintf(fp, "邝宇翔的两辈子\n");
    fprintf(fp, "雷志高的三辈子\n");*/
    fclose(fp);
    return 0;
}
