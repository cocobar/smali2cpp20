// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\DexFile$DFEnum.smali
#include "java2ctype.h"
#include "dalvik.system.DexFile_S_DFEnum.h"
#include "dalvik.system.DexFile.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method constructor <init>(Ldalvik/system/DexFile;)V
dalvik::system::DexFile_S_DFEnum::DexFile_S_DFEnum(std::shared_ptr<dalvik::system::DexFile> df)
{
	
	//    .param p1, "df"    # Ldalvik/system/DexFile;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->mIndex = 0x0;
	this->mNameList = dalvik::system::DexFile::-wrap0(dalvik::system::DexFile::-get0(df));
	return;

}
// .method public hasMoreElements()Z
bool dalvik::system::DexFile_S_DFEnum::hasMoreElements()
{
	
	bool cVar0;
	
	if ( this->mIndex >= this->mNameList->size() )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method public nextElement()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::DexFile_S_DFEnum::nextElement()
{
	
	int cVar0;
	
	cVar0 = this->mIndex;
	this->mIndex = ( cVar0 + 0x1);
	return this->mNameList[cVar0];

}


