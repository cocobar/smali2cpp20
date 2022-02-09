// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryData.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.BytesDictionaryMatcher.h"
#include "android.icu.text.CharsDictionaryMatcher.h"
#include "android.icu.text.DictionaryData.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"

static android::icu::text::DictionaryData::DATA_FORMAT_ID = 0x44696374;
static android::icu::text::DictionaryData::IX_COUNT = 0x8;
static android::icu::text::DictionaryData::IX_RESERVED1_OFFSET = 0x1;
static android::icu::text::DictionaryData::IX_RESERVED2_OFFSET = 0x2;
static android::icu::text::DictionaryData::IX_RESERVED6 = 0x6;
static android::icu::text::DictionaryData::IX_RESERVED7 = 0x7;
static android::icu::text::DictionaryData::IX_STRING_TRIE_OFFSET = 0x0;
static android::icu::text::DictionaryData::IX_TOTAL_SIZE = 0x3;
static android::icu::text::DictionaryData::IX_TRANSFORM = 0x5;
static android::icu::text::DictionaryData::IX_TRIE_TYPE = 0x4;
static android::icu::text::DictionaryData::TRANSFORM_NONE = 0x0;
static android::icu::text::DictionaryData::TRANSFORM_OFFSET_MASK = 0x1fffff;
static android::icu::text::DictionaryData::TRANSFORM_TYPE_MASK = 0x7f000000;
static android::icu::text::DictionaryData::TRANSFORM_TYPE_OFFSET = 0x1000000;
static android::icu::text::DictionaryData::TRIE_HAS_VALUES = 0x8;
static android::icu::text::DictionaryData::TRIE_TYPE_BYTES = 0x0;
static android::icu::text::DictionaryData::TRIE_TYPE_MASK = 0x7;
static android::icu::text::DictionaryData::TRIE_TYPE_UCHARS = 0x1;
// .method private constructor <init>()V
android::icu::text::DictionaryData::DictionaryData()
{
	
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static loadDictionaryFor(Ljava/lang/String;)Landroid/icu/text/DictionaryMatcher;
std::shared_ptr<android::icu::text::DictionaryMatcher> android::icu::text::DictionaryData::loadDictionaryFor(std::shared_ptr<java::lang::String> dictType)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::nio::ByteBuffer> bytes;
	std::shared<std::vector<int[]>> indexes;
	int i;
	int offset;
	bool cVar2;
	int trieType;
	int totalSize;
	int m;
	std::shared<std::vector<unsigned char[]>> data;
	std::shared_ptr<android::icu::text::BytesDictionaryMatcher> m;
	bool cVar4;
	std::shared_ptr<android::icu::text::CharsDictionaryMatcher> m;
	std::shared_ptr<android::icu::text::DictionaryMatcher> m;
	
	//    .param p0, "dictType"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 059        value = {
	// 060            Ljava/io/IOException;
	// 061        }
	// 062    .end annotation
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/brkitr")));
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v9, "rb":Landroid/icu/impl/ICUResourceBundle;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "dictFileName":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	bytes = android::icu::impl::ICUBinary::getRequiredData(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("brkitr/")))->append(rb->getStringWithFallback(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("dictionaries/")))->append(dictType)->toString()))->toString());
	//    .local v0, "bytes":Ljava/nio/ByteBuffer;
	android::icu::impl::ICUBinary::readHeader(bytes, 0x44696374, 0x0);
	indexes = std::make_shared<std::vector<int[]>>(0x8);
	//    .local v6, "indexes":[I
	i = 0x0;
	//    .local v5, "i":I
label_goto_45:
	if ( i >= 0x8 )
		goto label_cond_52;
	indexes[i] = bytes->getInt();
	i = ( i + 0x1);
	goto label_goto_45;
	// 158    .line 58
label_cond_52:
	offset = indexes[0x0];
	//    .local v8, "offset":I
	if ( offset <  0x20 )
		goto label_cond_81;
	cVar2 = 0x1;
label_goto_5a:
	android::icu::impl::Assert::assrt(cVar2);
	if ( offset <= 0x20 )
		goto label_cond_66;
	//    .local v4, "diff":I
	android::icu::impl::ICUBinary::skipBytes(bytes, ( offset + -0x20));
	//    .end local v4    # "diff":I
label_cond_66:
	trieType = ( indexes[0x4] & 0x7);
	//    .local v12, "trieType":I
	totalSize = (indexes[0x3] - offset);
	//    .local v10, "totalSize":I
	m = 0x0;
	//    .local v7, "m":Landroid/icu/text/DictionaryMatcher;
	if ( trieType )     
		goto label_cond_83;
	//    .local v11, "transform":I
	data = std::make_shared<std::vector<unsigned char[]>>(totalSize);
	//    .local v2, "data":[B
	bytes->get(data);
	//    .end local v7    # "m":Landroid/icu/text/DictionaryMatcher;
	m = std::make_shared<android::icu::text::BytesDictionaryMatcher>(data, indexes[0x5]);
	//    .end local v2    # "data":[B
	//    .end local v11    # "transform":I
label_goto_80:
	return m;
	// 237    .line 59
	// 238    .end local v10    # "totalSize":I
	// 239    .end local v12    # "trieType":I
label_cond_81:
	cVar2 = 0x0;
	goto label_goto_5a;
	// 245    .line 72
	// 246    .restart local v7    # "m":Landroid/icu/text/DictionaryMatcher;
	// 247    .restart local v10    # "totalSize":I
	// 248    .restart local v12    # "trieType":I
label_cond_83:
	if ( trieType != 0x1 )
		goto label_cond_9e;
	if ( ( totalSize % 0x2) )     
		goto label_cond_9c;
	cVar4 = 0x1;
label_goto_8b:
	android::icu::impl::Assert::assrt(cVar4);
	//    .local v1, "data":Ljava/lang/String;
	//    .end local v7    # "m":Landroid/icu/text/DictionaryMatcher;
	m = std::make_shared<android::icu::text::CharsDictionaryMatcher>(android::icu::impl::ICUBinary::getString(bytes, ( totalSize / 0x2), ( totalSize & 0x1)));
	//    .local v7, "m":Landroid/icu/text/DictionaryMatcher;
	goto label_goto_80;
	// 283    .line 73
	// 284    .end local v1    # "data":Ljava/lang/String;
	// 285    .local v7, "m":Landroid/icu/text/DictionaryMatcher;
label_cond_9c:
	cVar4 = 0x0;
	goto label_goto_8b;
	// 291    .line 77
label_cond_9e:
	m = 0x0;
	goto label_goto_80;

}


