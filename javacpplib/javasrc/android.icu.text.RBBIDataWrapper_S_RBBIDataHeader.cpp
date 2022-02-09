// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIDataWrapper$RBBIDataHeader.smali
#include "java2ctype.h"
#include "android.icu.text.RBBIDataWrapper_S_RBBIDataHeader.h"

// .method public constructor <init>()V
android::icu::text::RBBIDataWrapper_S_RBBIDataHeader::RBBIDataWrapper_S_RBBIDataHeader()
{
	
	// 063    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fMagic = 0x0;
	this->fFormatVersion = std::make_shared<std::vector<unsigned char[]>>(0x4);
	return;

}


