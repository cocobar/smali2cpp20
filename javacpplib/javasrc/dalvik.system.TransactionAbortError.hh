#ifndef __dalvik_system_TransactionAbortError__
#define __dalvik_system_TransactionAbortError__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\TransactionAbortError.smali
#include "java2ctype.h"
#include "java.lang.InternalError.hh"

namespace dalvik::system{
class TransactionAbortError : public java::lang::InternalError {
public:
	TransactionAbortError();
	virtual ~TransactionAbortError();

}; // class TransactionAbortError
}; // namespace dalvik::system

#endif //__dalvik_system_TransactionAbortError__

