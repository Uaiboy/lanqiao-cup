#include<stdio.h>
#include<string.h>
int main(){
    int i,len;
    char a[256];
    gets(a);//gets(a) ��ʾ����һ���ַ���������a��
    //a��ʾ��ȡһ���ַ�������a��,�ַ������������־Ϊ���з���
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]>='a'&&a[i]<='z'){
            a[i]-=32;
        }
    }
    for(i=0;i<len;i++)
        printf("%c",a[i]);
}
