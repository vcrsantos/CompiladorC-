/****************************************************/
/* File: cmenos.l                                   */
/* Lex specification for C-                         */
/* Victor Silva                                     */
/****************************************************/

%{
#include "util.h"
#include <stdio.h>

int line = 1;

#define yywrap() 1

%}

digit       [0-9]
number      {digit}+
letter      [a-zA-Z]
identifier  {letter}+
newline     \n
whitespace  [ \t]+

%%

"else"          {return ELSE;}
"if"            {return IF;}
"int"           {return INT;}
"return"        {return RETURN;}
"void"          {return VOID;}
"while"         {return WHILE;}
"+"             {return MAIS;}
"-"             {return MENOS;}
"*"             {return VEZES;}
"/"             {return DIVIDIR;}
"<"             {return MENOR;}
"<="            {return MENORIGUAL;}
">"             {return MAIOR;}
">="            {return MAIORIGUAL;}
"=="            {return IGUAL;}
"!="            {return DIFERENTE;}
"="             {return ATRIBUIR;}
";"             {return PVIRG;}
","             {return VIRGULA;}
"("             {return ESQPARENTESE;}
")"             {return DIRPARENTESE;}
"["             {return ESQCOLCHETE;}
"]"             {return DIRCOLCHETE;}
"{"             {return ESQCHAVE;}
"}"             {return DIRCHAVE;}

{number}        {return NUM;}
{identifier}    {return ID;}
{newline}       {line++;}
{whitespace}    {/* skip whitespace */}

"/*"             { char c, s;
                  do
                  { 
                    s = c;  
                    c = input();
                    if (c == EOF) break;
                    if (c == '\n') line++;
                  } while (c != '/' && s != '*');
                }
.               {return ERROR;}

<<EOF>>         {return ENDFILE;}
%%

int main(int argc, char *argv[]){
  FILE *file;
  TypeToken token;

  if (argc == 2)
  {
    if(file = fopen(argv[1],"r"))  
        yyin = file;
    else  
        perror(argv[0]);
  }
  else  
    yyin = stdin;


  int lineAntiga = line;

while((token = yylex())!=ENDFILE)
  {
    if(line != lineAntiga)
    {
      printf("\n%d %s", line, printToken(token));
      lineAntiga = line;
    }
    else
      printf(" %s", printToken(token));

  } 
  yylex();
  return(0);
}


