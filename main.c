#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>

#include "coms.h"

/* Use this to judge whether the program is running or not */
int isRun = 1;

/*
 * @author hongbochen
 * @date 2016-08-24
 * @des This is a simple shell.
 *
 */
int main(int argc,char *argv[])
{
    /* The prompt of start */
    char prompt[200];
    /* The command the user input */
    char* line;

    // The variable of this prog
    int i = 0;

    /* Run the app in loop */
    while(isRun){
      getcwd(prompt,sizeof(prompt));
      strcat(prompt,"$ ");

      if(!(line = readline(prompt)))
        break;

      /*
      if(strcmp(line, "exit") == 0){
        isRun = 0;
      }else if(strcmp(line, "echo") == 0){
        printf("%s\n", line);
      }
      */

      // get the split command the user input
      Com* cms = subCom(line);
      dealCom(cms);
    }
}
