//#include<stdio.h>
//#define MAXLEN 100
//typedef struct stack {
//	int top;
//	int data[MAXLEN];
//
//}S;
//int main()
//{
//	S s;
//	s.top = -1;
//int i = 0, x, y, k = 0;
//	char str[MAXLEN];
//	gets(str);//������scanf��ԭ����
//while (str[i])  //�������Ķ�����Ϊ�յĻ�
//	{
//		if (str[i] != ' ') {  //��������ַ���Ϊ���һ��
//			if (str[i] >= '0' && str[i] <= '9') {  //�����жϵ�һ��������ַ�
//				if (str[i + 1] >= '0' && str[i + 1] <= '9') {  //i+1��ʾ��������ĵڶ����ַ�
//					int num = 0;//�������Ĳ��ǵ����ַ� ����23  ��ô23Ӧ��Ϊһ������ ���� 2 3
//					while (str[i + 1] >= '0' && str[i + 1] <= '9') { 
//						num = num + (str[i] - '0');//str[i] - '0'��ʾת��Ϊ���ֵ���ʽ
//						num = num * 10;           //���Ǳ�ʾ10λ��
//						i++;
//					}
//					s.top++;
//					s.data[s.top] = num;  //�����10λ���ĸ�ֵ
//				}
//				else {
//					s.top++;
//					s.data[s.top] = str[i] - '0';  //���������ǵ����Ļ�����ֱ�Ӹ�ֵ
//				}
//			}
//			else if (str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-') {
//				x = s.data[s.top--];  //������һ����topָ������
//				y = s.data[s.top--];  //�����ڶ���
//				switch (str[i]) {
//				case '+':
//					s.top++;
//					s.data[s.top] = x + y;
//					break;
//				case'-':
//					s.top++;
//					s.data[s.top] = y - x;
//					break;
//				case'*':
//					s.top++;
//					s.data[s.top] = y * x;
//					break;
//				case'/':
//					s.top++;
//					s.data[s.top] = y / x;
//					break;
//				}
//			}
//		}
//		i++;  //i�����Ѱ����һ��
//	}
//	printf("%d", s.data[s.top]);
//	return 0;
//}