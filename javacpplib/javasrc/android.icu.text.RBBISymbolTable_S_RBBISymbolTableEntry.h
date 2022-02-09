#ifndef __android_icu_text_RBBISymbolTable_S_RBBISymbolTableEntry__
#define __android_icu_text_RBBISymbolTable_S_RBBISymbolTableEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBISymbolTable$RBBISymbolTableEntry.smali
#include "java2ctype.h"
#include "android.icu.text.RBBINode.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RBBISymbolTable_S_RBBISymbolTableEntry : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> key;
	std::shared_ptr<android::icu::text::RBBINode> val;
	RBBISymbolTable_S_RBBISymbolTableEntry();
public:
	virtual ~RBBISymbolTable_S_RBBISymbolTableEntry(){
	}

}; // class RBBISymbolTable_S_RBBISymbolTableEntry
}; // namespace android::icu::text

#endif //__android_icu_text_RBBISymbolTable_S_RBBISymbolTableEntry__

