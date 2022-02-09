#ifndef __dalvik_system_DexFile_S_DFEnum__
#define __dalvik_system_DexFile_S_DFEnum__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DexFile$DFEnum.smali
#include "java2ctype.h"
#include "dalvik.system.DexFile.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"

namespace dalvik::system{
class DexFile_S_DFEnum : public java::util::Enumeration<java::lang::String> {
protected:
private:
	int mIndex;
	std::shared_ptr<std::vector<java::lang::String>> mNameList;
public:
	DexFile_S_DFEnum(std::shared_ptr<dalvik::system::DexFile> df);
	bool virtual hasMoreElements();
	std::shared_ptr<java::lang::String> virtual nextElement();
public:
	virtual ~DexFile_S_DFEnum(){
	}

}; // class DexFile_S_DFEnum
}; // namespace dalvik::system

#endif //__dalvik_system_DexFile_S_DFEnum__

