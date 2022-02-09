// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$UnicodeSetIterator2.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_UnicodeSetIterator2.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Iterator.h"
#include "java.util.TreeSet.h"

// .method constructor <init>(Landroid/icu/text/UnicodeSet;)V
android::icu::text::UnicodeSet_S_UnicodeSetIterator2::UnicodeSet_S_UnicodeSetIterator2(std::shared_ptr<android::icu::text::UnicodeSet> source)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "source"    # Landroid/icu/text/UnicodeSet;
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->len = ( android::icu::text::UnicodeSet::-get1(source) + -0x1);
	if ( this->len <= 0 )
		goto label_cond_32;
	this->sourceStrings = source->strings;
	this->sourceList = android::icu::text::UnicodeSet::-get2(source);
	cVar0 = this->item;
	this->item = ( cVar0 + 0x1);
	this->current = this->sourceList[cVar0];
	cVar1 = this->item;
	this->item = ( cVar1 + 0x1);
	this->limit = this->sourceList[cVar1];
label_goto_31:
	return;
	// 131    .line 4255
label_cond_32:
	this->stringIterator = source->strings->iterator();
	this->sourceList = 0x0;
	goto label_goto_31;

}
// .method public hasNext()Z
bool android::icu::text::UnicodeSet_S_UnicodeSetIterator2::hasNext()
{
	
	bool cVar0;
	
	if ( this->sourceList )     
		goto label_cond_b;
	cVar0 = this->stringIterator->hasNext();
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x1;
	goto label_goto_a;

}
// .method public next()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::UnicodeSet_S_UnicodeSetIterator2::next()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	int codepoint;
	int offset;
	int cVar1;
	int cVar2;
	
	if ( this->sourceList )     
		goto label_cond_e;
	cVar0 = this->stringIterator->next();
	cVar0->checkCast("java::lang::String");
	return cVar0;
	// 209    .line 4276
label_cond_e:
	codepoint = this->current;
	this->current = ( codepoint + 0x1);
	//    .local v0, "codepoint":I
	if ( this->current <  this->limit )
		goto label_cond_2a;
	if ( this->item <  this->len )
		goto label_cond_35;
	this->stringIterator = this->sourceStrings->iterator();
	this->sourceList = 0x0;
label_cond_2a:
label_goto_2a:
	if ( codepoint >  0xffff )
		goto label_cond_4e;
	return java::lang::String::valueOf((char)(codepoint));
	// 260    .line 4283
label_cond_35:
	cVar1 = this->item;
	this->item = ( cVar1 + 0x1);
	this->current = this->sourceList[cVar1];
	cVar2 = this->item;
	this->item = ( cVar2 + 0x1);
	this->limit = this->sourceList[cVar2];
	goto label_goto_2a;
	// 289    .line 4293
label_cond_4e:
	if ( this->buffer )     
		goto label_cond_57;
	this->buffer = std::make_shared<std::vector<char[]>>(0x2);
label_cond_57:
	offset = (codepoint - 0x10000);
	//    .local v1, "offset":I
	this->buffer[0x0] = (char)((_ushri(offset,0xa) +  0xd800));
	this->buffer[0x1] = (char)((( offset & 0x3ff) +  0xdc00));
	return java::lang::String::valueOf(this->buffer);

}
// .method public remove()V
void android::icu::text::UnicodeSet_S_UnicodeSetIterator2::remove()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}


