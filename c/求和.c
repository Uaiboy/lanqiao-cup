#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  // ���ڴ��������Ĵ���
  int arr[4];
  int i=0;
  int sum=0;
  for(i=1;i<2020;i++){//��1234 ���1��2��3��4 Ȼ��ֵ������
    arr[0]=i/1000%10;
    arr[1]=i/100%10;
    arr[2]=i/10%10;
    arr[3]=i%10;
    //�������������Ƿ����ر��������
    if(arr[0]==2 || arr[0]==1 ) {sum+=i;continue;}
    if((arr[1]==0 && i>1000) || arr[1]==2 || arr[1]==9 || arr[1]==1) {sum+=i;continue;}
    if((arr[2]==0 && i>100) || arr[2]==2 || arr[2]==9 || arr[2]==1) {sum+=i;continue;}
    if((arr[3]==0 && i>10) || arr[3]==2 || arr[3]==9 || arr[3]==1) {sum+=i;continue;}
  }
  printf("%d",sum);
  return 0;
}
