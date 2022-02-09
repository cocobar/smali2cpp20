#ifndef __dalvik_system_TransactionAbortError__
#define __dalvik_system_TransactionAbortError__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\TransactionAbortError.smali
#include "java2ctype.h"
#include "java.lang.InternalError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace dalvik::system{
class TransactionAbortError : public java::lang::InternalError {
protected:
private:
	TransactionAbortError();
	TransactionAbortError(std::shared_ptr<java::lang::String> detailMessage);
	TransactionAbortError(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause);
	TransactionAbortError(std::shared_ptr<java::lang::Throwable> cause);
public:
public:
	virtual ~TransactionAbortError(){
	}

}; // class TransactionAbortError
}; // namespace dalvik::system

#endif //__dalvik_system_TransactionAbortError__

