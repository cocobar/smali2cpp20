// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer$CharsAppendable.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_CharsAppendable.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"

// .method public constructor <init>([CII)V
android::icu::text::Normalizer_S_CharsAppendable::Normalizer_S_CharsAppendable(std::shared_ptr<char[]> dest,int destStart,int destLimit)
{
	
	//    .param p1, "dest"    # [C
	//    .param p2, "destStart"    # I
	//    .param p3, "destLimit"    # I
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->chars = dest;
	this->offset = destStart;
	this->start = destStart;
	this->limit = destLimit;
	return;

}
// .method public append(C)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::Normalizer_S_CharsAppendable::append(char c)
{
	
	//    .param p1, "c"    # C
	if ( this->offset >= this->limit )
		goto label_cond_c;
	this->chars[this->offset] = c;
label_cond_c:
	this->offset = ( this->offset + 0x1);
	return this;

}
// .method public append(Ljava/lang/CharSequence;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::Normalizer_S_CharsAppendable::append(std::shared_ptr<java::lang::CharSequence> s)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	return this->append(s, 0x0, s->length());

}
// .method public append(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::text::Normalizer_S_CharsAppendable::append(std::shared_ptr<java::lang::CharSequence> s,int sStart,int sLimit)
{
	
	int len;
	int sStart;
	int cVar0;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "sStart"    # I
	//    .param p3, "sLimit"    # I
	len = (sLimit - sStart);
	//    .local v0, "len":I
	if ( len >  (this->limit -  this->offset) )
		goto label_cond_1d;
label_goto_9:
	sStart = sStart;
	//    .end local p2    # "sStart":I
	//    .local v1, "sStart":I
	if ( sStart >= sLimit )
		goto label_cond_23;
	cVar0 = this->offset;
	this->offset = ( cVar0 + 0x1);
	//    .end local v1    # "sStart":I
	//    .restart local p2    # "sStart":I
	this->chars[cVar0] = s->charAt(sStart);
	goto label_goto_9;
	// 157    .line 2596
label_cond_1d:
	this->offset = (this->offset +  len);
label_goto_22:
	return this;
	// 169    .end local p2    # "sStart":I
	// 170    .restart local v1    # "sStart":I
label_cond_23:
	sStart;
	//    .end local v1    # "sStart":I
	//    .restart local p2    # "sStart":I
	goto label_goto_22;

}
// .method public length()I
int android::icu::text::Normalizer_S_CharsAppendable::length()
{
	
	int len;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	len = (this->offset - this->start);
	//    .local v0, "len":I
	if ( this->offset >  this->limit )
		goto label_cond_d;
	return len;
	// 201    .line 2573
label_cond_d:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>(java::lang::Integer::toString(len));
	// throw
	throw cVar0;

}


