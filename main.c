#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>

#include "coms.h"

Com* subCom(char *com);

/* Use this to judge whether the program is running or not */
int isRun = 1;

/* store the command and its args */
//char* comss[];

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

      printf("%s\n", cms->coms[0]);

    }
}


/**
 * 解析用户输入的命令
 * @param com 用户输入的命令字符串
 * @author hongbochen
 * @date 2016-08-24
 * @note In this version, We just split the string using blank
 */
Com* subCom(char *com){
  char* comss[50];

  char *token = strtok(com, " ");

  int nums = 0;

  Com* bc;

  while(token != NULL)
  {
    //print the split string
    //printf("%s\n", token);
    comss[nums] = (char *)malloc(sizeof(char) * 20);
    strcpy(comss[nums], token);

    // go to the next token
    token = strtok(NULL, " ");

    nums++;
  }

  //return comss;
  bc->coms = comss;
  bc->tnum = nums;

  return bc;
}

void dealCom(){

}
