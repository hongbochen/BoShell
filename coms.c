#include "coms.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char* getCom(Com* cm)
{
  if(cm->tnum < 1){
    return NULL;
  }else{
    return cm->coms[0];
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
  //char* comss[50];

  char *token = strtok(com, " ");

  int nums = 0;

  // 分配空间
  Com* bc = (Com *)malloc(sizeof(Com));

  while(token != NULL)
  {
    bc->coms[nums] = (char *)malloc(sizeof(char) * 20);
    strcpy(bc->coms[nums], token);

    // go to the next token
    token = strtok(NULL, " ");

    nums++;
  }

  bc->tnum = nums;

  //return comss;
  return bc;
}

/*
 * 处理被解析出来的命令
 * @param cm 解析出来的命令结构
 * @author hongbochen
 * @date 2016-08-26
 */
void dealCom(Com* cm){

  char* fm;
  if((fm = getCom(cm)) != NULL){
    printf("%s\n", fm);
  }

}
