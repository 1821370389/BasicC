#ifndef __MY_STRING_H__
#define __MY_STRING_H__

/* 头文件只做函数的声明 */

/* 获取字符串的长度 */
int mystrlen(const char* str);
/* 复制字符串 */
void mystrcpy(char * dest, const char * src);
/* 拼接字符串 */
void mystrcat(char * dest, const char * src);
/* 比较字符串 */
int mystrcmp(const char* str1, const char* str2);
#endif