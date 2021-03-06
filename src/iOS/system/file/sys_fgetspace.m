//
//  fgetspace_core.mm
//  api
//
//  Created by xiehaiduo on 09-12-8.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#include "../include/sys_filedef.h"
#include "../../include/sys_file.h"

#ifdef __cplusplus
extern "C" {
#endif
	
	size_t strlen(const char *);
	
#ifdef __cplusplus
}
#endif
//获取存储器空间 单位MB
unsigned int sys_fgetspace(const char * pszDisk)
{
	uint32_t total = 0;
	char* pPath = fpathchange(pszDisk);
	if (pPath)
	{
		NSFileManager * fileManager = [NSFileManager defaultManager];	
		NSDictionary *dictionary = [fileManager attributesOfFileSystemForPath:[NSString stringWithFormat:@"%s",pPath] 
																		error:nil];
		NSNumber *fileSystemSizeInBytes = [dictionary objectForKey: NSFileSystemSize];
		total = ([fileSystemSizeInBytes unsignedLongLongValue] / 1048576);
		free(pPath);
	}
	return total;
}
