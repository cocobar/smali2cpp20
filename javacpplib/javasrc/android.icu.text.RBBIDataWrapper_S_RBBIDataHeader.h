#ifndef __android_icu_text_RBBIDataWrapper_S_RBBIDataHeader__
#define __android_icu_text_RBBIDataWrapper_S_RBBIDataHeader__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIDataWrapper$RBBIDataHeader.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class RBBIDataWrapper_S_RBBIDataHeader : public java::lang::Object {
protected:
private:
public:
	int fCatCount;
	int fFTable;
	int fFTableLen;
	std::shared_ptr<unsigned char[]> fFormatVersion;
	int fLength;
	int fMagic;
	int fRTable;
	int fRTableLen;
	int fRuleSource;
	int fRuleSourceLen;
	int fSFTable;
	int fSFTableLen;
	int fSRTable;
	int fSRTableLen;
	int fStatusTable;
	int fStatusTableLen;
	int fTrie;
	int fTrieLen;
	int fVersion;
	RBBIDataWrapper_S_RBBIDataHeader();
public:
	virtual ~RBBIDataWrapper_S_RBBIDataHeader(){
	}

}; // class RBBIDataWrapper_S_RBBIDataHeader
}; // namespace android::icu::text

#endif //__android_icu_text_RBBIDataWrapper_S_RBBIDataHeader__

