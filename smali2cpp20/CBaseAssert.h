#ifndef __BASE_ASSERT_H__
#define __BASE_ASSERT_H__

#include "CBaseThread.h"


#define CBaseAssert(x) \
{ \
	assert(x); \
	if (!(x)) { \
		std::string strError; \
		strError = CBaseThread::getCurrentThreadWorkFile(); \
		throw strError; \
	} \
}\








#endif
