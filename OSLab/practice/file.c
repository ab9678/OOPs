# include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("kela.txt","w");

    fprintf(fp, "hello");
    fclose(fp);
file:///home/abhigyan/Downloads/Telegram%20Desktop/web_activity.log

    fp = fopen("kela.txt","a");

    fprintf(fp, "hello fucker");
    fclose(fp);
    
    if(ftell(fp) == EOF){
        printf("end");
    }

}