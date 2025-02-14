# include <stdio.h>
# include <string.h>

// these are global variables so that I dont have to pass the strings as arguments to the compare() function.
char str[10]={""};
char res[10]={""};

void compare(){
    int i,j;

    for (i=0;i<10;i++){
        for (j=0;j<i;j++){
            // printf("comparing %c -- %c\n",str[i],res[j]);
            if (str[i]==res[j]){
                return; // may have done everything in main function, but then "return" is the best way to stop the process when a duplicate is found. Using break will only break out of the 2nd loop, not the whole thing. So used a seperate function to acheive this
            }
        }

        res[i]=str[i];  // if no duplicates are found then append the character to res[] and it will always be the same position as the str[], you may check manually :);
    }

}

int main(){


    printf("->> ");
    gets(str);

    compare();

    puts(res);

    // read about string.h you will know gets puts etc.

}