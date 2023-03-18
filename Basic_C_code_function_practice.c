#include<stdio.h>
#include<string.h>

void pointerPractice();
void printArray(int [],int);
void revprintArray(int [],int );
void reverseArray(int *,int);
void stringrev(char [],int );
int stringsize(char []);
void stringconcatinate(char [],char [],int);
int stringcompare(char *,char *, int );
char* stringcopy(char *,char *, int );
int  charcountstring(char*,int,char);
char * stringuppercase(char*,int);
char * stringlowercase(char*,int);

char * stringlowercase(char*str,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(str[i]<=97)
        str[i]=str[i]+32;
    }
    return str;
}

char * stringuppercase(char*str,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(str[i]>=97)
        str[i]=str[i]-32;
    }
    return str;
}

int  charcountstring(char *str,int size, char ch)
{
    int i,c;
    for(i=0,c=0;i<size;i++)
    {
        if(str[i]==ch)
         c++;
    }
    return c;
    
}

char* stringcopy(char *str,char *cstr, int size)
{
    int i;
     for(i=0;i<size;i++)
     {
        cstr[i]=str[i];
        
     }
     //puts(cstr);
     return cstr;
}


int stringcompare(char *str,char *str1, int size)
{
    int i,j,k;
    for(i=0;str1[i];i++)
    {
        if (str[i]!=str1[i])
        return 0;
    }
    return 1;
}


void stringconcatinate(char str[],char str1[],int size)
{
    
    int i,j,k;
    for(i=size,j=0;str1[j];i++,j++)
    {
        str[i]=str1[j];
    }
    puts(str);
}

int stringsize(char *str)
{
    int i;
    for(i=0;str[i];i++);
    return i;
    
}

void stringrev(char str[],int size)
{
    int i,j,t;
    for(i=0,j=size-1;j>i;i++,j--)
    {
        t=str[i];
        str[i]=str[j];
        str[j]=t;
    }
    printf("%s",str);
}


void reverseArray(int * arr,int size)
{
    int i,j,t;
    for(i=0,j=size-1;j>i;i++,j--)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    printArray(arr,size);
}

void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");
}

void revprintArray(int arr[],int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    printf("%d ",arr[i]);
}




void pointerPractice()
{
    char str[]="chocolate";
    char *ch;
    ch=str;
    printf("%p\n",ch);
    ch++;
    printf("%s\n",ch);
    ch--;
    printf("%s\n",ch);
    ++ch;
    printf("%s\n",ch);
    --ch;
    printf("%s\n",ch);
}


void main()
{
    int arr[]={2,5,8,98,2,34};
    char str[10]; 
    char cstr[10],ch;
    //gets(str);
    //gets(str1);
    scanf("%s",str);
   // scanf(" %c",&ch);
    int sizeofstring=stringsize(str);
    //int size=sizeof(arr)/sizeof(arr[0]);
    //stringrev(str,sizeofstring);
    //stringconcatinate(str,str1,sizeofstring);
    char *upper=stringuppercase(str,sizeofstring);
    char *lower=stringlowercase(str,sizeofstring);
    printf("%s",lower);
    //printf("%s",upper);
    //char *ch=(stringcopy(str,cstr,sizeofstring));
    
    //printf("%c",ch);
   // int charcount=charcountstring(str,sizeofstring,ch);
    //printf("Given char countin string is: %d",charcount);
    //printf("%s",ch);
    //puts(ch);
    //int compare=stringcompare(str,str1,sizeofstring);
    //if (compare==1)
    //printf("same");
    //else
    //printf("Not same");
    //printArray(arr,size);
    //revprintArray(arr,size);
    //reverseArray(arr,size);
}
