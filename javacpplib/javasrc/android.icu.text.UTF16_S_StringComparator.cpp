// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UTF16$StringComparator.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.text.Normalizer.h"
#include "android.icu.text.UTF16_S_StringComparator.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"

static android::icu::text::UTF16_S_StringComparator::CODE_POINT_COMPARE_SURROGATE_OFFSET_ = 0x2800;
static android::icu::text::UTF16_S_StringComparator::FOLD_CASE_DEFAULT = 0x0;
static android::icu::text::UTF16_S_StringComparator::FOLD_CASE_EXCLUDE_SPECIAL_I = 0x1;
// .method public constructor <init>()V
android::icu::text::UTF16_S_StringComparator::UTF16_S_StringComparator()
{
	
	bool cVar0;
	
	cVar0 = 0x0;
	android::icu::text::UTF16_S_StringComparator::(cVar0, cVar0, cVar0);
	return;

}
// .method public constructor <init>(ZZI)V
android::icu::text::UTF16_S_StringComparator::UTF16_S_StringComparator(bool codepointcompare,bool ignorecase,int foldcaseoption)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "codepointcompare"    # Z
	//    .param p2, "ignorecase"    # Z
	//    .param p3, "foldcaseoption"    # I
	// 068    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->setCodePointCompare(codepointcompare);
	this->m_ignoreCase_ = ignorecase;
	if ( foldcaseoption < 0 ) 
		goto label_cond_d;
	if ( foldcaseoption <= 0x1 )
		goto label_cond_16;
label_cond_d:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid fold case option")));
	// throw
	throw cVar0;
	// 093    .line 2291
label_cond_16:
	this->m_foldCase_ = foldcaseoption;
	return;

}
// .method private compareCaseInsensitive(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::text::UTF16_S_StringComparator::compareCaseInsensitive(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2)
{
	
	//    .param p1, "s1"    # Ljava/lang/String;
	//    .param p2, "s2"    # Ljava/lang/String;
	return android::icu::text::Normalizer::cmpEquivFold(s1, s2, ((this->m_foldCase_ |  this->m_codePointCompare_) |  0x10000));

}
// .method private compareCaseSensitive(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::text::UTF16_S_StringComparator::compareCaseSensitive(std::shared_ptr<java::lang::String> s1,std::shared_ptr<java::lang::String> s2)
{
	
	int cVar0;
	int cVar1;
	int length1;
	int length2;
	int minlength;
	int c1;
	int index;
	char c1;
	char c2;
	
	//    .param p1, "s1"    # Ljava/lang/String;
	//    .param p2, "s2"    # Ljava/lang/String;
	cVar0 = 0xdbff;
	cVar1 = 0xd800;
	length1 = s1->length();
	//    .local v4, "length1":I
	length2 = s2->length();
	//    .local v5, "length2":I
	minlength = length1;
	//    .local v6, "minlength":I
	0x0;
	//    .local v7, "result":I
	if ( length1 >= length2 )
		goto label_cond_25;
label_cond_13:
label_goto_13:
	c1 = 0x0;
	//    .local v0, "c1":C
	//    .local v1, "c2":C
	index = 0x0;
	//    .end local v0    # "c1":C
	//    .end local v1    # "c2":C
	//    .local v3, "index":I
label_goto_16:
	if ( index >= minlength )
		goto label_cond_22;
	c1 = s1->charAt(index);
	//    .local v0, "c1":C
	c2 = s2->charAt(index);
	//    .local v1, "c2":C
	if ( c1 == c2 )
		goto label_cond_2a;
	//    .end local v0    # "c1":C
	//    .end local v1    # "c2":C
label_cond_22:
	if ( index != minlength )
		goto label_cond_2d;
	return -0x1;
	// 207    .line 2472
	// 208    .end local v3    # "index":I
label_cond_25:
	if ( length1 <= length2 )
		goto label_cond_13;
	0x1;
	minlength = length2;
	goto label_goto_13;
	// 220    .line 2480
	// 221    .restart local v0    # "c1":C
	// 222    .restart local v1    # "c2":C
	// 223    .restart local v3    # "index":I
label_cond_2a:
	index = ( index + 0x1);
	goto label_goto_16;
	// 229    .line 2493
	// 230    .end local v0    # "c1":C
	// 231    .end local v1    # "c2":C
label_cond_2d:
	if ( this->m_codePointCompare_ != 0x8000 )
		goto label_cond_8a;
	//    .local v2, "codepointcompare":Z
label_goto_35:
	if ( c1 <  cVar1 )
		goto label_cond_87;
	if ( c2 <  cVar1 )
		goto label_cond_87;
	if ( !(0x1) )  
		goto label_cond_87;
	if ( c1 >  cVar0 )
		goto label_cond_4d;
	if ( ( index + 0x1) == length1 )
		goto label_cond_4d;
	if ( android::icu::text::UTF16::isTrailSurrogate(s1->charAt(( index + 0x1))) )     
		goto label_cond_61;
label_cond_4d:
	if ( !(android::icu::text::UTF16::isTrailSurrogate(c1)) )  
		goto label_cond_8c;
	if ( !(index) )  
		goto label_cond_8c;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(s1->charAt(( index + -0x1)))) )  
		goto label_cond_8c;
label_cond_61:
label_goto_61:
	if ( c2 >  cVar0 )
		goto label_cond_73;
	if ( ( index + 0x1) == length2 )
		goto label_cond_73;
	if ( android::icu::text::UTF16::isTrailSurrogate(s2->charAt(( index + 0x1))) )     
		goto label_cond_87;
label_cond_73:
	if ( !(android::icu::text::UTF16::isTrailSurrogate(c2)) )  
		goto label_cond_90;
	if ( !(index) )  
		goto label_cond_90;
	if ( !(android::icu::text::UTF16::isLeadSurrogate(s2->charAt(( index + -0x1)))) )  
		goto label_cond_90;
label_cond_87:
label_goto_87:
	return (c1 - 0x0);
	// 343    .line 2493
	// 344    .end local v2    # "codepointcompare":Z
label_cond_8a:
	0x0;
	//    .restart local v2    # "codepointcompare":Z
	goto label_goto_35;
	// 351    .line 2505
label_cond_8c:
	//    .restart local v0    # "c1":C
	goto label_goto_61;
	// 360    .line 2513
	// 361    .end local v0    # "c1":C
label_cond_90:
	//    .restart local v1    # "c2":C
	goto label_goto_87;

}
// .method public compare(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::text::UTF16_S_StringComparator::compare(std::shared_ptr<java::lang::String> a,std::shared_ptr<java::lang::String> b)
{
	
	//    .param p1, "a"    # Ljava/lang/String;
	//    .param p2, "b"    # Ljava/lang/String;
	if ( !(android::icu::impl::Utility::sameObjects(a, b)) )  
		goto label_cond_8;
	return 0x0;
	// 407    .line 2400
label_cond_8:
	if ( a )     
		goto label_cond_c;
	return -0x1;
	// 416    .line 2403
label_cond_c:
	if ( b )     
		goto label_cond_10;
	return 0x1;
	// 425    .line 2407
label_cond_10:
	if ( !(this->m_ignoreCase_) )  
		goto label_cond_19;
	return this->compareCaseInsensitive(a, b);
	// 438    .line 2410
label_cond_19:
	return this->compareCaseSensitive(a, b);

}
// .method public getCodePointCompare()Z
bool android::icu::text::UTF16_S_StringComparator::getCodePointCompare()
{
	
	bool cVar0;
	
	if ( this->m_codePointCompare_ != 0x8000 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method public getIgnoreCase()Z
bool android::icu::text::UTF16_S_StringComparator::getIgnoreCase()
{
	
	return this->m_ignoreCase_;

}
// .method public getIgnoreCaseOption()I
int android::icu::text::UTF16_S_StringComparator::getIgnoreCaseOption()
{
	
	return this->m_foldCase_;

}
// .method public setCodePointCompare(Z)V
void android::icu::text::UTF16_S_StringComparator::setCodePointCompare(bool flag)
{
	
	//    .param p1, "flag"    # Z
	if ( !(flag) )  
		goto label_cond_8;
	this->m_codePointCompare_ = 0x8000;
label_goto_7:
	return;
	// 506    .line 2330
label_cond_8:
	this->m_codePointCompare_ = 0x0;
	goto label_goto_7;

}
// .method public setIgnoreCase(ZI)V
void android::icu::text::UTF16_S_StringComparator::setIgnoreCase(bool ignorecase,int foldcaseoption)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "ignorecase"    # Z
	//    .param p2, "foldcaseoption"    # I
	this->m_ignoreCase_ = ignorecase;
	if ( foldcaseoption < 0 ) 
		goto label_cond_7;
	if ( foldcaseoption <= 0x1 )
		goto label_cond_10;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid fold case option")));
	// throw
	throw cVar0;
	// 541    .line 2350
label_cond_10:
	this->m_foldCase_ = foldcaseoption;
	return;

}


