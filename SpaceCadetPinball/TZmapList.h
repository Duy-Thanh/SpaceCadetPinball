#pragma once
#include "objlist_class.h"
class TZmapList :
    public objlist_class
{
public:
	TZmapList(int SizeInt, int growSize):objlist_class(SizeInt,growSize){};
	~TZmapList(){};	
};
