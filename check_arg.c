#include "pcpy.h"

int check_arg(const char * SFile , int arg_num , int pronum)
{
	if((access(SFile,F_OK))!=0){
		perror("Check_Arg Error: 源文件不存在!");
		exit(-1);
	}

	if(arg_num < 3){
		perror("Check_Arg Error: 参数数量异常!");
	    exit(-1);
    }

	if(pronum <= 0 || pronum >= 100){
		perror("Check_Arg Error: 进程数量要大于0,小于100!\n");
		exit(-1);
    }
	return 0;	
}

