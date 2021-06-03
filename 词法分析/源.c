#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#define _KEY_WORD_END "waiting for your expanding" //����ؼ��ֽ�����־

typedef struct

{
    int typenum;

    char* word;

}WORD;

char input[255]; //���뻻������

char token[255] = ""; //���ʻ�����

int p_input; //���뻻������ָ��

int p_token; //���ʻ�����ָ��

char ch; //��ǰ�������ַ�

char* rwtab[] = { "begin","if","then","while","do","end",_KEY_WORD_END }; //������Ĺؼ�������

WORD* scaner(); //�ʷ�ɨ�躯������ùؼ���



void main()

{
    int over = 1;

    WORD* oneword;

    oneword = (WORD*)malloc(sizeof(WORD));

    printf("������Դ���루��#������:");

    scanf_s("%[^#]s", input,255); //����Դ�����ַ���������������#�����������������

    p_input = 0;

    printf("������Ĵ���:%s\n\n", input);

    while (over < 1000 && over != -1) //��Դ������з�����ֱ��������#

    {

        oneword = scaner(); //���һ���µ���

        printf("���ʷ���:%s\t�ֱ���:%d\n", oneword->word, oneword->typenum); //��ӡ�ֱ���͵��������ֵ

        over = oneword->typenum;

    }

}

char m_getch()

{

    ch = input[p_input];

    p_input = p_input + 1;

    return (ch);

}

void getbc()//ȥ���հ��ַ�

{

    while (ch == ' ' || ch == 10)

    {

        ch = input[p_input];

        p_input = p_input + 1;

    }

}



void concat()//ƴ�ӵ���

{

    token[p_token] = ch;

    p_token = p_token + 1;

    token[p_token] = '\0';//һ�����ʽ���

}



int letter()//�ж��Ƿ���ĸ

{

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')

        return 1;

    else

        return 0;

}



int digit()//�ж��Ƿ�����

{

    if (ch >= '0' && ch <= '9')

        return 1;

    else

        return 0;

}



int reserve()//�����ؼ��ֱ��

{
    int i = 0;

    while (strcmp(rwtab[i], _KEY_WORD_END)) //�����еĵ��ʸ�����ĵ��ʱȽ�

    {

        if (!strcmp(rwtab[i], token))

        {

            return i + 1;

        }

        i = i + 1;

    }

    return 10;

}



void retract()//����һ���ַ�

{

    p_input = p_input - 1;

}
WORD* scaner()//ɨ�赥��

{

    WORD* myword;

    myword = (WORD*)malloc(sizeof(WORD));

    myword->typenum = 10;

    myword->word = "";

    p_token = 0;

    m_getch();

    getbc();

    if (letter())//��ĸ
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
    else if (digit())//����
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

    else //����

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