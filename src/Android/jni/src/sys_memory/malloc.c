/*
 * @file malloc.c
 * @Author: wangxt<wangxt@tiros.com.cn>
 * @Created on: 2014-6-19
 */
#include <malloc.h>


void * sys_xmalloc(unsigned int size){
	return malloc(size);
}
