#ifndef _COMS_H_
#define _COMS_H_

/**
 * The Struct is for storing the splitting command
 * the user input and the num of the command and its command
 *
 * @params coms The command and its args
 * @params tnum The nums of command and its args
 * @author hongbochen
 * @date 2016-08-26
 *
 */
typedef struct com
{
  char* coms[50];
  int tnum;
} Com;

char* getCom(Com* cm);
Com* subCom(char *com);
void dealCom(Com* cm);

#endif
