// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\text\RbnfScannerProviderImpl$RbnfLenientScannerImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.text.RbnfScannerProviderImpl_S_RbnfLenientScannerImpl.h"
#include "android.icu.text.CollationElementIterator.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "java.lang.String.h"

// .method private constructor <init>(Landroid/icu/text/RuleBasedCollator;)V
android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl(std::shared_ptr<android::icu::text::RuleBasedCollator> rbc)
{
	
	//    .param p1, "rbc"    # Landroid/icu/text/RuleBasedCollator;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->collator = rbc;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/RuleBasedCollator;Landroid/icu/impl/text/RbnfScannerProviderImpl$RbnfLenientScannerImpl;)V
android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl(std::shared_ptr<android::icu::text::RuleBasedCollator> rbc,std::shared_ptr<android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl> _this1)
{
	
	//    .param p1, "rbc"    # Landroid/icu/text/RuleBasedCollator;
	//    .param p2, "-this1"    # Landroid/icu/impl/text/RbnfScannerProviderImpl$RbnfLenientScannerImpl;
	android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl::(rbc);
	return;

}
// .method public allIgnorable(Ljava/lang/String;)Z
bool android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl::allIgnorable(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar2;
	int cVar1;
	std::shared_ptr<android::icu::text::CollationElementIterator> iter;
	int o;
	
	//    .param p1, "s"    # Ljava/lang/String;
	cVar2 = 0x0;
	cVar1 = -0x1;
	iter = this->collator->getCollationElementIterator(s);
	//    .local v0, "iter":Landroid/icu/text/CollationElementIterator;
	o = iter->next();
	//    .local v1, "o":I
label_goto_c:
	if ( o == cVar1 )
		goto label_cond_19;
	if ( android::icu::text::CollationElementIterator::primaryOrder(o) )     
		goto label_cond_19;
	o = iter->next();
	goto label_goto_c;
	// 094    .line 141
label_cond_19:
	if ( o != cVar1 )
		goto label_cond_1c;
	cVar2 = 0x1;
label_cond_1c:
	return cVar2;

}
// .method public findText(Ljava/lang/String;Ljava/lang/String;I)[I
int android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl::findText(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> key,int startingAt)
{
	
	int cVar0;
	int p;
	int keyLen;
	std::shared<std::vector<int[]>> cVar1;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "startingAt"    # I
	cVar0 = 0x0;
	p = startingAt;
	//    .local v1, "p":I
	//    .local v0, "keyLen":I
label_goto_3:
	if ( p >= str->length() )
		goto label_cond_21;
	if ( keyLen )     
		goto label_cond_21;
	keyLen = this->prefixLength(str->substring(p), key);
	if ( !(keyLen) )  
		goto label_cond_1e;
	cVar1 = std::make_shared<std::vector<int[]>>(0x2);
	cVar1[cVar0] = p;
	cVar1[0x1] = keyLen;
	return cVar1;
	// 156    .line 160
label_cond_1e:
	p = ( p + 0x1);
	goto label_goto_3;
	// 162    .line 165
label_cond_21:
	?;
	return ?;

}
// .method public findText2(Ljava/lang/String;Ljava/lang/String;I)[I
int android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl::findText2(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> key,int startingAt)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::CollationElementIterator> strIter;
	std::shared_ptr<android::icu::text::CollationElementIterator> keyIter;
	int keyStart;
	int oStr;
	int oKey;
	std::shared<std::vector<int[]>> cVar2;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "startingAt"    # I
	cVar0 = 0x0;
	cVar1 = -0x1;
	strIter = this->collator->getCollationElementIterator(str);
	//    .local v4, "strIter":Landroid/icu/text/CollationElementIterator;
	keyIter = this->collator->getCollationElementIterator(key);
	//    .local v0, "keyIter":Landroid/icu/text/CollationElementIterator;
	keyStart = -0x1;
	//    .local v1, "keyStart":I
	strIter->setOffset(startingAt);
	oStr = strIter->next();
	//    .local v3, "oStr":I
	oKey = keyIter->next();
	//    .local v2, "oKey":I
label_goto_1a:
	if ( oKey == cVar1 )
		goto label_cond_3f;
label_goto_1c:
	if ( oStr == cVar1 )
		goto label_cond_29;
	if ( android::icu::text::CollationElementIterator::primaryOrder(oStr) )     
		goto label_cond_29;
	oStr = strIter->next();
	goto label_goto_1c;
	// 241    .line 189
label_cond_29:
label_goto_29:
	if ( oKey == cVar1 )
		goto label_cond_36;
	if ( android::icu::text::CollationElementIterator::primaryOrder(oKey) )     
		goto label_cond_36;
	oKey = keyIter->next();
	goto label_goto_29;
	// 260    .line 194
label_cond_36:
	if ( oStr != cVar1 )
		goto label_cond_3d;
	?;
	return ?;
	// 271    .line 198
label_cond_3d:
	if ( oKey != cVar1 )
		goto label_cond_4d;
label_cond_3f:
	cVar2 = std::make_shared<std::vector<int[]>>(0x2);
	cVar2[cVar0] = keyStart;
	cVar2[0x1] = (strIter->getOffset() -  keyStart);
	return cVar2;
	// 295    .line 202
label_cond_4d:
	if ( android::icu::text::CollationElementIterator::primaryOrder(oStr) != android::icu::text::CollationElementIterator::primaryOrder(oKey) )
		goto label_cond_64;
	strIter->getOffset();
	oStr = strIter->next();
	oKey = keyIter->next();
	goto label_goto_1a;
	// 326    .line 208
label_cond_64:
	if ( keyStart == cVar1 )
		goto label_cond_6b;
	keyStart = -0x1;
	keyIter->reset();
	goto label_goto_1a;
	// 338    .line 212
label_cond_6b:
	oStr = strIter->next();
	goto label_goto_1a;

}
// .method public prefixLength(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl::prefixLength(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> prefix)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::CollationElementIterator> strIter;
	std::shared_ptr<android::icu::text::CollationElementIterator> prefixIter;
	int oStr;
	int oPrefix;
	int result;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "prefix"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = -0x1;
	strIter = this->collator->getCollationElementIterator(str);
	//    .local v4, "strIter":Landroid/icu/text/CollationElementIterator;
	prefixIter = this->collator->getCollationElementIterator(prefix);
	//    .local v2, "prefixIter":Landroid/icu/text/CollationElementIterator;
	oStr = strIter->next();
	//    .local v1, "oStr":I
	oPrefix = prefixIter->next();
	//    .local v0, "oPrefix":I
label_goto_16:
	if ( oPrefix == cVar1 )
		goto label_cond_34;
label_goto_18:
	if ( android::icu::text::CollationElementIterator::primaryOrder(oStr) )     
		goto label_cond_25;
	if ( oStr == cVar1 )
		goto label_cond_25;
	oStr = strIter->next();
	goto label_goto_18;
	// 406    .line 246
label_cond_25:
label_goto_25:
	if ( android::icu::text::CollationElementIterator::primaryOrder(oPrefix) )     
		goto label_cond_32;
	if ( oPrefix == cVar1 )
		goto label_cond_32;
	oPrefix = prefixIter->next();
	goto label_goto_25;
	// 424    .line 253
label_cond_32:
	if ( oPrefix != cVar1 )
		goto label_cond_3d;
label_cond_34:
	result = strIter->getOffset();
	//    .local v3, "result":I
	if ( oStr == cVar1 )
		goto label_cond_3c;
label_cond_3c:
	return result;
	// 445    .line 259
	// 446    .end local v3    # "result":I
label_cond_3d:
	if ( oStr != cVar1 )
		goto label_cond_40;
	return cVar0;
	// 453    .line 266
label_cond_40:
	if ( android::icu::text::CollationElementIterator::primaryOrder(oStr) == android::icu::text::CollationElementIterator::primaryOrder(oPrefix) )
		goto label_cond_4b;
	return cVar0;
	// 470    .line 275
label_cond_4b:
	oStr = strIter->next();
	oPrefix = prefixIter->next();
	goto label_goto_16;

}


