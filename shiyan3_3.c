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
//	gets(str);//不能用scanf的原因是
//while (str[i])  //如果输入的东西不为空的话
//	{
//		if (str[i] != ' ') {  //当输入的字符不为最后一个
//			if (str[i] >= '0' && str[i] <= '9') {  //这是判断第一个输入的字符
//				if (str[i + 1] >= '0' && str[i + 1] <= '9') {  //i+1表示这是输入的第二个字符
//					int num = 0;//如果输入的不是单个字符 例如23  那么23应成为一个整体 否则 2 3
//					while (str[i + 1] >= '0' && str[i + 1] <= '9') { 
//						num = num + (str[i] - '0');//str[i] - '0'表示转化为数字的形式
//						num = num * 10;           //这是表示10位数
//						i++;
//					}
//					s.top++;
//					s.data[s.top] = num;  //这就是10位数的赋值
//				}
//				else {
//					s.top++;
//					s.data[s.top] = str[i] - '0';  //否则输入是单个的话，就直接赋值
//				}
//			}
//			else if (str[i] == '*' || str[i] == '/' || str[i] == '+' || str[i] == '-') {
//				x = s.data[s.top--];  //弹出第一个，top指针下移
//				y = s.data[s.top--];  //弹出第二个
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
//		i++;  //i向后移寻找下一个
//	}
//	printf("%d", s.data[s.top]);
//	return 0;
//}