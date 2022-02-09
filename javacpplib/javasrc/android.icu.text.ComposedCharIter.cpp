// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ComposedCharIter.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.text.ComposedCharIter.h"
#include "java.lang.String.h"

static android::icu::text::ComposedCharIter::DONE = '\uffff';
// .method public constructor <init>()V
android::icu::text::ComposedCharIter::ComposedCharIter()
{
	
	bool cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 032    .end annotation
	cVar0 = 0x0;
	android::icu::text::ComposedCharIter::(cVar0, cVar0);
	return;

}
// .method public constructor <init>(ZI)V
android::icu::text::ComposedCharIter::ComposedCharIter(bool compat,int options)
{
	
	//    .param p1, "compat"    # Z
	//    .param p2, "options"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 049    .end annotation
	// 053    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->curChar = 0x0;
	this->nextChar = -0x1;
	if ( !(compat) )  
		goto label_cond_14;
	this->n2impl = android::icu::impl::Norm2AllModes::getNFKCInstance({const[class].FS-Param})->impl;
label_goto_13:
	return;
	// 081    .line 98
label_cond_14:
	this->n2impl = android::icu::impl::Norm2AllModes::getNFCInstance({const[class].FS-Param})->impl;
	goto label_goto_13;

}
// .method private findNextChar()V
void android::icu::text::ComposedCharIter::findNextChar()
{
	
	int c;
	
	c = ( this->curChar + 0x1);
	//    .local v0, "c":I
	this->decompBuf = 0x0;
label_goto_7:
	if ( c >= 0xffff )
		goto label_cond_1e;
	this->decompBuf = this->n2impl->getDecomposition(c);
	if ( !(this->decompBuf) )  
		goto label_cond_1b;
label_goto_18:
	this->nextChar = c;
	return;
	// 136    .line 162
label_cond_1b:
	c = ( c + 0x1);
	goto label_goto_7;
	// 142    .line 164
label_cond_1e:
	c = -0x1;
	goto label_goto_18;

}
// .method public decomposition()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ComposedCharIter::decomposition()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 155    .end annotation
	if ( !(this->decompBuf) )  
		goto label_cond_7;
	return this->decompBuf;
	// 168    .line 147
label_cond_7:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));

}
// .method public hasNext()Z
bool android::icu::text::ComposedCharIter::hasNext()
{
	
	int cVar0;
	bool cVar1;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 178    .end annotation
	cVar0 = -0x1;
	if ( this->nextChar != cVar0 )
		goto label_cond_8;
	this->findNextChar();
label_cond_8:
	if ( this->nextChar == cVar0 )
		goto label_cond_e;
	cVar1 = 0x1;
label_goto_d:
	return cVar1;
label_cond_e:
	cVar1 = 0x0;
	goto label_goto_d;

}
// .method public next()C
char android::icu::text::ComposedCharIter::next()
{
	
	int cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 211    .end annotation
	cVar0 = -0x1;
	if ( this->nextChar != cVar0 )
		goto label_cond_8;
	this->findNextChar();
label_cond_8:
	this->curChar = this->nextChar;
	this->nextChar = cVar0;
	return (char)(this->curChar);

}


