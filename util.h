/****************************************************/
/* File: util.c                                     */
/* Utility function implementation                  */
/* for the C- compiler                              */
/* Victor Silva                                     */
/****************************************************/

typedef enum{
    ELSE, IF, INT, RETURN, VOID, WHILE,
    MAIS, MENOS, VEZES, DIVIDIR,
    MENOR, MENORIGUAL, MAIOR, MAIORIGUAL,
    IGUAL, DIFERENTE,
    ATRIBUIR,
    PVIRG, VIRGULA,
    ESQPARENTESE, DIRPARENTESE,
    ESQCOLCHETE, DIRCOLCHETE,
    ESQCHAVE, DIRCHAVE,
    ENDFILE,
    NUM, ID,
    ERROR
}TypeToken;


char *printToken(TypeToken token)
{ 
    char *string = "";

    switch (token){ 
        case ELSE:
            string = "ELSE";
            break;
        case IF:
            string = "IF";
            break;
        case INT:
            string = "INT";
            break;
        case RETURN:
            string = "RETURN";
            break;
        case VOID:
            string = "VOID";
            break;
        case WHILE:
            string = "WHILE";
            break;
        case MAIS:
            string = "MAIS";
            break; 
        case MENOS:
            string = "MENOS";
            break; 
        case VEZES:
            string = "VEZES";
            break; 
        case DIVIDIR: 
            string = "DIVIDIR";
            break;
        case MENOR:
            string = "MENOR";
            break; 
        case MENORIGUAL: 
            string = "MENORIGUAL";
            break;
        case MAIOR: 
            string = "MAIOR";
            break;
        case MAIORIGUAL: 
            string = "MAIORIGUAL";
            break;
        case IGUAL: 
            string = "IGUAL";
            break;
        case DIFERENTE: 
            string = "DIFERENTE";
            break;
        case ATRIBUIR:  
            string = "ATRIBUIR";
            break;
        case PVIRG:     
            string = "PVIRG";
            break;
        case VIRGULA:   
            string = "VIRGULA";
            break;
        case ESQPARENTESE:     
            string = "ESQPARENTESE";
            break;
        case DIRPARENTESE:     
            string = "DIRPARENTESE";
            break;
        case ESQCOLCHETE:  
            string = "ESQCOLCHETE";
            break;
        case DIRCOLCHETE: 
            string = "DIRCOLCHETE";
            break;
        case ESQCHAVE: 
            string = "ESQCHAVE";
            break;
        case DIRCHAVE:  
            string = "DIRCHAVE";
            break;
        case ENDFILE: 
            string = "ENDFILE";
            break;
        case NUM:
            string = "NUM";
            break;
        case ID:
            string = "ID";
            break;
        case ERROR:
            string = "ERROR";
            break;
        default: 
            string = "TOKEN DESCONHECIDO";
  }
  return string;
}

