/*���չ涨���ڸ��ٹ�·����ʹ�Ļ��������������������ٵ�10%��200Ԫ���������50%����Ҫ������ʻ֤�����д������ݳ��ٺ������Զ��б�Ըû������Ĵ���

�����ʽ��

������һ���и���2�����������ֱ��Ӧ���ٺ����٣�����Կո�ָ���

�����ʽ��

��һ����������������������������ʻ���������OK������Ӧ������������Exceed x%. Ticket 200������Ӧ������ʻ֤���������Exceed x%. License Revoked��������x�ǳ��ٵİٷֱȣ���ȷ��������

��������1��
65 60
�������1��
OK
��������2��
110 100
�������2��
Exceed 10%. Ticket 200
��������3��
200 120
�������3��
Exceed 67%. License Revoked
*/
#include <stdio.h>

int main(){
	int speed,limit,exceed;
	scanf("%d%d",&speed,&limit);
	exceed = (((double)speed-limit)/limit*100+0.5);
	
	if(exceed<10)
		printf("OK");
	else if(exceed >= 10 && exceed <50)
		printf("Exceed %d%%. Ticket 200",exceed);
	else
		printf("Exceed %d%%. License Revoked",exceed);
	
	return 0;
}
