#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#define _KEY_WORD_END "waiting for your expanding" //定义关键字结束标志

typedef struct

{
    int typenum;

    char* word;

}WORD;

char input[255]; //输入换缓冲区

char token[255] = ""; //单词缓冲区

int p_input; //输入换缓冲区指针

int p_token; //单词缓冲区指针

char ch; //当前所读的字符

char* rwtab[] = { "begin","if","then","while","do","end",_KEY_WORD_END }; //可扩充的关键字数组

WORD* scaner(); //词法扫描函数，获得关键字



void main()

{
    int over = 1;

    WORD* oneword;

    oneword = (WORD*)malloc(sizeof(WORD));

    printf("请输入源代码（以#结束）:");

    scanf_s("%[^#]s", input,255); //读入源程序字符串到缓冲区，以#结束，允许多行输入

    p_input = 0;

    printf("你输入的代码:%s\n\n", input);

    while (over < 1000 && over != -1) //对源程序进行分析，直至结束符#

    {

        oneword = scaner(); //获得一个新单词

        printf("单词符号:%s\t种别码:%d\n", oneword->word, oneword->typenum); //打印种别码和单词自身的值

        over = oneword->typenum;

    }

}

char m_getch()

{

    ch = input[p_input];

    p_input = p_input + 1;

    return (ch);

}

void getbc()//去掉空白字符

{

    while (ch == ' ' || ch == 10)

    {

        ch = input[p_input];

        p_input = p_input + 1;

    }

}



void concat()//拼接单词

{

    token[p_token] = ch;

    p_token = p_token + 1;

    token[p_token] = '\0';//一个单词结束

}



int letter()//判断是否字母

{

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')

        return 1;

    else

        return 0;

}



int digit()//判断是否数字

{

    if (ch >= '0' && ch <= '9')

        return 1;

    else

        return 0;

}



int reserve()//检索关键字表格

{
    int i = 0;

    while (strcmp(rwtab[i], _KEY_WORD_END)) //数组中的单词跟输入的单词比较

    {

        if (!strcmp(rwtab[i], token))

        {

            return i + 1;

        }

        i = i + 1;

    }

    return 10;

}



void retract()//回退一个字符

{

    p_input = p_input - 1;

}
WORD* scaner()//扫描单词

{

    WORD* myword;

    myword = (WORD*)malloc(sizeof(WORD));

    myword->typenum = 10;

    myword->word = "";

    p_token = 0;

    m_getch();

    getbc();

    if (letter())//字母
    {
        while (letter() || digit()) {

            concat();

            m_getch();

        }

        retract();

        myword->typenum = reserve();

        myword->word = token;

        return(myword);

    }
    else if (digit())//数字
    {
        while (digit())

        {

            concat();

            m_getch();

        }

        retract();

        myword->typenum = 20;

        myword->word = token;

        return(myword);

    }

    else //其他

    {

        switch (ch)

        {
        case '+':m_getch();
            if (ch == '+') {
                myword->typenum = 33;

                myword->word = "++";

                return(myword);

            }

            retract();

            myword->typenum = 13;

            myword->word = "+";

            return(myword);

            break;

        case '-':

            myword->typenum = 14;

            myword->word = "-";

            return(myword);

            break;

        case '*':

            myword->typenum = 15;

            myword->word = "*";

            return(myword);

            break;

        case '/':

            myword->typenum = 16;

            myword->word = "/";

            return(myword);

            break;

        case ':': m_getch();

            if (ch == '=') {
                myword->typenum = 18;

                myword->word = ">=";

                return(myword);

            }

            retract();

            myword->typenum = 17;

            myword->word = ":";

            return(myword);

            break;

        case '<': m_getch();

            if (ch == '=') {
                myword->typenum = 21;

                myword->word = "<=";

                return(myword);

            }

            else if (ch == '>') {
                myword->typenum = 22;

                myword->word = "<>";

                return(myword);

            }

            retract();

            myword->typenum = 20;

            myword->word = "<";

            return(myword);

            break;

        case '>': m_getch();

            if (ch == '=') {
                myword->typenum = 24;

                myword->word = ">=";

                return(myword);

            }

            retract();

            myword->typenum = 23;

            myword->word = ">";

            return(myword);

            break;

        case '=':

            myword->typenum = 25;

            myword->word = "=";

            return(myword);

            break;

        case ';':

            myword->typenum = 26;

            myword->word = ";";

            return(myword);

            break;

        case '(':

            myword->typenum = 27;

            myword->word = "(";

            return(myword);

            break;

        case ')':

            myword->typenum = 28;

            myword->word = ")";

            return(myword);

            break;

        case '#':

            myword->typenum = 0;

            myword->word = "OVER";

            return(myword);

            break;

        default:

            myword->typenum = -1;

            myword->word = "ERROR";

            return(myword);

        }

    }

}