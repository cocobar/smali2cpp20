// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CharacterIteration.smali
#include "java2ctype.h"
#include "android.icu.impl.CharacterIteration.h"
#include "android.icu.text.UTF16.h"
#include "java.text.CharacterIterator.h"

static android::icu::impl::CharacterIteration::DONE32 = 0x7fffffff;
// .method private constructor <init>()V
android::icu::impl::CharacterIteration::CharacterIteration()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static current32(Ljava/text/CharacterIterator;)I
int android::icu::impl::CharacterIteration::current32(std::shared_ptr<java::text::CharacterIterator> ci)
{
	
	int cVar0;
	char lead;
	int retVal;
	int trail;
	
	//    .param p0, "ci"    # Ljava/text/CharacterIterator;
	cVar0 = 0xd800;
	lead = ci->current();
	//    .local v0, "lead":C
	retVal = lead;
	//    .local v1, "retVal":I
	if ( retVal >= cVar0 )
		goto label_cond_b;
	return retVal;
	// 044    .line 114
label_cond_b:
	if ( !(android::icu::text::UTF16::isLeadSurrogate(lead)) )  
		goto label_cond_2e;
	trail = ci->next();
	//    .local v2, "trail":I
	ci->previous();
	if ( !(android::icu::text::UTF16::isTrailSurrogate((char)(trail))) )  
		goto label_cond_2d;
	retVal = ((( (lead - cVar0) << 0xa) +  (trail - 0xdc00)) + 0x10000);
	//    .end local v2    # "trail":I
label_cond_2d:
label_goto_2d:
	return retVal;
	// 095    .line 123
label_cond_2e:
	if ( lead != 0xffff )
		goto label_cond_2d;
	if ( ci->getIndex() <  ci->getEndIndex() )
		goto label_cond_2d;
	retVal = 0x7fffffff;
	goto label_goto_2d;

}
// .method public static next32(Ljava/text/CharacterIterator;)I
int android::icu::impl::CharacterIteration::next32(std::shared_ptr<java::text::CharacterIterator> ci)
{
	
	int cVar0;
	int c;
	
	//    .param p0, "ci"    # Ljava/text/CharacterIterator;
	cVar0 = 0xd800;
	c = ci->current();
	//    .local v0, "c":I
	if ( c <  cVar0 )
		goto label_cond_1f;
	if ( c >  0xdbff )
		goto label_cond_1f;
	c = ci->next();
	if ( c <  0xdc00 )
		goto label_cond_1c;
	if ( c <= 0xdfff )
		goto label_cond_1f;
label_cond_1c:
	ci->previous();
label_cond_1f:
	c = ci->next();
	if ( c <  cVar0 )
		goto label_cond_29;
	c = android::icu::impl::CharacterIteration::nextTrail32(ci, c);
label_cond_29:
	if ( c <  0x10000 )
		goto label_cond_35;
	if ( c == 0x7fffffff )
		goto label_cond_35;
	ci->previous();
label_cond_35:
	return c;

}
// .method public static nextTrail32(Ljava/text/CharacterIterator;I)I
int android::icu::impl::CharacterIteration::nextTrail32(std::shared_ptr<java::text::CharacterIterator> ci,int lead)
{
	
	char cTrail;
	
	//    .param p0, "ci"    # Ljava/text/CharacterIterator;
	//    .param p1, "lead"    # I
	if ( lead != 0xffff )
		goto label_cond_13;
	if ( ci->getIndex() <  ci->getEndIndex() )
		goto label_cond_13;
	return 0x7fffffff;
	// 214    .line 75
label_cond_13:
	//    .local v1, "retVal":I
	if ( lead >  0xdbff )
		goto label_cond_34;
	cTrail = ci->next();
	//    .local v0, "cTrail":C
	if ( !(android::icu::text::UTF16::isTrailSurrogate(cTrail)) )  
		goto label_cond_35;
	//    .end local v0    # "cTrail":C
label_cond_34:
label_goto_34:
	return lead;
	// 264    .line 83
	// 265    .restart local v0    # "cTrail":C
label_cond_35:
	ci->previous();
	goto label_goto_34;

}
// .method public static previous32(Ljava/text/CharacterIterator;)I
int android::icu::impl::CharacterIteration::previous32(std::shared_ptr<java::text::CharacterIterator> ci)
{
	
	char trail;
	char lead;
	
	//    .param p0, "ci"    # Ljava/text/CharacterIterator;
	if ( ci->getIndex() >  ci->getBeginIndex() )
		goto label_cond_e;
	return 0x7fffffff;
	// 293    .line 93
label_cond_e:
	trail = ci->previous();
	//    .local v2, "trail":C
	//    .local v1, "retVal":I
	if ( !(android::icu::text::UTF16::isTrailSurrogate(trail)) )  
		goto label_cond_3e;
	if ( ci->getIndex() <= ci->getBeginIndex() )
		goto label_cond_3e;
	lead = ci->previous();
	//    .local v0, "lead":C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(lead)) )  
		goto label_cond_3f;
	//    .end local v0    # "lead":C
label_cond_3e:
label_goto_3e:
	return trail;
	// 361    .line 102
	// 362    .restart local v0    # "lead":C
label_cond_3f:
	ci->next();
	goto label_goto_3e;

}


