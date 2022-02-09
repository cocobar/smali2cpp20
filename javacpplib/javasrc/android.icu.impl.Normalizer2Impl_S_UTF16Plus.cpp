// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Normalizer2Impl$UTF16Plus.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl_S_UTF16Plus.h"
#include "java.lang.CharSequence.h"

// .method public constructor <init>()V
android::icu::impl::Normalizer2Impl_S_UTF16Plus::Normalizer2Impl_S_UTF16Plus()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static equal(Ljava/lang/CharSequence;IILjava/lang/CharSequence;II)Z
bool android::icu::impl::Normalizer2Impl_S_UTF16Plus::equal(std::shared_ptr<java::lang::CharSequence> s1,int start1,int limit1,std::shared_ptr<java::lang::CharSequence> s2,int start2,int limit2)
{
	
	bool cVar0;
	bool cVar1;
	int start2;
	int start1;
	
	//    .param p0, "s1"    # Ljava/lang/CharSequence;
	//    .param p1, "start1"    # I
	//    .param p2, "limit1"    # I
	//    .param p3, "s2"    # Ljava/lang/CharSequence;
	//    .param p4, "start2"    # I
	//    .param p5, "limit2"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( (limit1 - start1) == (limit2 - start2) )
		goto label_cond_9;
	return cVar1;
	// 052    .line 407
label_cond_9:
	if ( s1 != s2 )
		goto label_cond_e;
	if ( start1 != start2 )
		goto label_cond_e;
	return cVar0;
label_cond_e:
	start2 = start2;
	//    .end local p4    # "start2":I
	//    .local v1, "start2":I
	start1 = start1;
	//    .end local p1    # "start1":I
	//    .local v0, "start1":I
label_goto_10:
	if ( start1 >= limit1 )
		goto label_cond_24;
	//    .end local v0    # "start1":I
	//    .restart local p1    # "start1":I
	//    .end local v1    # "start2":I
	//    .restart local p4    # "start2":I
	if ( s1->charAt(start1) == s2->charAt(start2) )
		goto label_cond_21;
	return cVar1;
label_cond_21:
	start2 = ( start2 + 0x1);
	//    .end local p4    # "start2":I
	//    .restart local v1    # "start2":I
	start1 = ( start1 + 0x1);
	//    .end local p1    # "start1":I
	//    .restart local v0    # "start1":I
	goto label_goto_10;
	// 107    .line 415
label_cond_24:
	return cVar0;

}
// .method public static equal(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z
bool android::icu::impl::Normalizer2Impl_S_UTF16Plus::equal(std::shared_ptr<java::lang::CharSequence> s1,std::shared_ptr<java::lang::CharSequence> s2)
{
	
	bool cVar0;
	bool cVar1;
	int length;
	int i;
	
	//    .param p0, "s1"    # Ljava/lang/CharSequence;
	//    .param p1, "s2"    # Ljava/lang/CharSequence;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( s1 != s2 )
		goto label_cond_5;
	return cVar0;
	// 128    .line 380
label_cond_5:
	length = s1->length();
	//    .local v1, "length":I
	if ( length == s2->length() )
		goto label_cond_10;
	return cVar1;
	// 145    .line 384
label_cond_10:
	i = 0x0;
	//    .local v0, "i":I
label_goto_11:
	if ( i >= length )
		goto label_cond_21;
	if ( s1->charAt(i) == s2->charAt(i) )
		goto label_cond_1e;
	return cVar1;
	// 167    .line 384
label_cond_1e:
	i = ( i + 0x1);
	goto label_goto_11;
	// 173    .line 389
label_cond_21:
	return cVar0;

}
// .method public static isSurrogateLead(I)Z
bool android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(int c)
{
	
	bool cVar1;
	
	//    .param p0, "c"    # I
	cVar1 = 0x0;
	if ( ( c & 0x400) )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}


