/*
 * @file xgl.c
 * @Author: wangxt<wangxt@tiros.com.cn>
 * @Created on: 2014-6-19
 */
#include "../../../../xgl.h"
#include "../jni_include/jni_system.h"
#include "../jni_include/sys_xgl.h"

xbool_t xgl_makeCurrentContext(xgl_surface_t * surface)
{
	return sys_gl_makeCurrent((sys_xglsurface*) surface);
}

void xgl_swapBuffers(xgl_surface_t * surface)
{
	sys_gl_swapBuffers(
			surface);
}
