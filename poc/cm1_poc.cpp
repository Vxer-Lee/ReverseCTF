#include <stdio.h>
#include <string.h>

int  main(int argc, const char **argv, const char **envp)
{
    //qmemcpy分析
    char szDest[33]={0}; // [esp-28h] [ebp-34h] BYREF
	memcpy(szDest,".....................................",sizeof(szDest));

    //加密算法分析
    #define byte unsigned char //byte就是无符号字符型
    byte byteArry_02[16] = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
    char v10 = 127;
    for ( int i = 0; i < 32; i ++ )
    {
       szDest[i] =  szDest[i] ^ byteArry_02[i%16];//异或  
                           //i对16取余是因为szDest有32个元素，
                           //而byteArry_02只有16个元素，当i循环到16时候，继续从byteArry_02数组中的第0个元素开始异或
    }
    v10 = v10 ^ 2;//v10 = 127 ^ 2 = }
    
    //将}拼接上
	strncat(szDest,(char*)&v10,1);
    //flag
	printf("-------------------------------------\n");
	printf("%s\n",szDest);
	printf("-------------------------------------\n");

    
}