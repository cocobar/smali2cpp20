#ifndef __BASE_ASSERT_H__
#define __BASE_ASSERT_H__

#include "BaseThread.h"


#define BaseAssert(x) \
{ \
	assert(x); \
	if (!(x)) { \
		std::string strError; \
		strError = CBaseThread::getCurrentThreadWorkFile(); \
		throw strError; \
	} \
}\








#endif
