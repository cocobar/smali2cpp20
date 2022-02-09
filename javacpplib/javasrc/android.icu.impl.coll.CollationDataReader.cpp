// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.USerializedSet.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationDataReader_S_IsAcceptable.h"
#include "android.icu.impl.coll.CollationDataReader.h"
#include "android.icu.impl.coll.CollationFastLatin.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.impl.coll.SharedObject_S_Reference.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.nio.ByteBuffer.h"
#include "java.nio.CharBuffer.h"
#include "java.util.Arrays.h"

static android::icu::impl::coll::CollationDataReader::_assertionsDisabled;
static android::icu::impl::coll::CollationDataReader::DATA_FORMAT = 0x55436f6c;
static android::icu::impl::coll::CollationDataReader::IS_ACCEPTABLE;
static android::icu::impl::coll::CollationDataReader::IX_CE32S_OFFSET = 0xb;
static android::icu::impl::coll::CollationDataReader::IX_CES_OFFSET = 0x9;
static android::icu::impl::coll::CollationDataReader::IX_COMPRESSIBLE_BYTES_OFFSET = 0x11;
static android::icu::impl::coll::CollationDataReader::IX_CONTEXTS_OFFSET = 0xd;
static android::icu::impl::coll::CollationDataReader::IX_FAST_LATIN_TABLE_OFFSET = 0xf;
static android::icu::impl::coll::CollationDataReader::IX_INDEXES_LENGTH = 0x0;
static android::icu::impl::coll::CollationDataReader::IX_JAMO_CE32S_START = 0x4;
static android::icu::impl::coll::CollationDataReader::IX_OPTIONS = 0x1;
static android::icu::impl::coll::CollationDataReader::IX_REORDER_CODES_OFFSET = 0x5;
static android::icu::impl::coll::CollationDataReader::IX_REORDER_TABLE_OFFSET = 0x6;
static android::icu::impl::coll::CollationDataReader::IX_RESERVED10_OFFSET = 0xa;
static android::icu::impl::coll::CollationDataReader::IX_RESERVED18_OFFSET = 0x12;
static android::icu::impl::coll::CollationDataReader::IX_RESERVED2 = 0x2;
static android::icu::impl::coll::CollationDataReader::IX_RESERVED3 = 0x3;
static android::icu::impl::coll::CollationDataReader::IX_RESERVED8_OFFSET = 0x8;
static android::icu::impl::coll::CollationDataReader::IX_ROOT_ELEMENTS_OFFSET = 0xc;
static android::icu::impl::coll::CollationDataReader::IX_SCRIPTS_OFFSET = 0x10;
static android::icu::impl::coll::CollationDataReader::IX_TOTAL_SIZE = 0x13;
static android::icu::impl::coll::CollationDataReader::IX_TRIE_OFFSET = 0x7;
static android::icu::impl::coll::CollationDataReader::IX_UNSAFE_BWD_OFFSET = 0xe;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationDataReader::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationDataReader_S_IsAcceptable> cVar0;
	
	android::icu::impl::coll::CollationDataReader::_assertionsDisabled = ( android::icu::impl::coll::CollationDataReader()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<android::icu::impl::coll::CollationDataReader_S_IsAcceptable>(0x0);
	android::icu::impl::coll::CollationDataReader::IS_ACCEPTABLE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::impl::coll::CollationDataReader::CollationDataReader()
{
	
	// 095    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static read(Landroid/icu/impl/coll/CollationTailoring;Ljava/nio/ByteBuffer;Landroid/icu/impl/coll/CollationTailoring;)V
void android::icu::impl::coll::CollationDataReader::read(std::shared_ptr<android::icu::impl::coll::CollationTailoring> base,std::shared_ptr<java::nio::ByteBuffer> inBytes,std::shared_ptr<android::icu::impl::coll::CollationTailoring> tailoring)
{
	
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	int inLength;
	std::shared_ptr<android::icu::util::ICUException> cVar1;
	int indexesLength;
	std::shared_ptr<android::icu::util::ICUException> cVar2;
	auto inIndexes;
	int i;
	std::shared_ptr<android::icu::util::ICUException> cVar3;
	long long cVar4;
	int length;
	std::shared_ptr<android::icu::util::ICUException> cVar5;
	int reorderCodesLength;
	auto reorderCodes;
	int reorderRangesLength;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	std::shared_ptr<android::icu::util::ICUException> cVar7;
	auto reorderTable;
	std::shared_ptr<android::icu::util::ICUException> cVar8;
	int data;
	std::shared_ptr<android::icu::impl::coll::CollationData> data;
	std::shared_ptr<java::lang::Object> cVar9;
	int trieLength;
	std::shared_ptr<android::icu::util::ICUException> cVar10;
	std::shared_ptr<android::icu::util::ICUException> cVar11;
	std::shared_ptr<android::icu::util::ICUException> cVar13;
	int jamoCE32sStart;
	std::shared_ptr<android::icu::util::ICUException> cVar14;
	int rootElementsLength;
	std::shared_ptr<android::icu::util::ICUException> cVar15;
	std::shared_ptr<android::icu::util::ICUException> cVar17;
	std::shared_ptr<android::icu::util::ICUException> cVar18;
	std::shared_ptr<android::icu::util::ICUException> cVar19;
	std::shared_ptr<android::icu::util::ICUException> cVar20;
	std::shared_ptr<android::icu::util::ICUException> cVar21;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar22;
	std::shared_ptr<android::icu::impl::USerializedSet> sset;
	auto range;
	int c;
	int lead;
	int header0;
	int headerLength;
	std::shared_ptr<android::icu::util::ICUException> cVar24;
	std::shared_ptr<android::icu::util::ICUException> cVar25;
	std::shared_ptr<java::nio::CharBuffer> inChars;
	int scriptStartsLength;
	std::shared_ptr<android::icu::util::ICUException> cVar26;
	std::shared_ptr<java::lang::Object> cVar27;
	std::shared_ptr<java::lang::Object> cVar28;
	std::shared_ptr<android::icu::util::ICUException> cVar29;
	std::shared_ptr<android::icu::util::ICUException> cVar30;
	bool cVar31;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> ts;
	int options;
	std::shared<std::vector<char[]>> fastLatinPrimaries;
	int fastLatinOptions;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> settings;
	std::shared_ptr<android::icu::util::ICUException> cVar34;
	std::shared_ptr<android::icu::util::ICUException> cVar33;
	std::shared_ptr<android::icu::util::ICUException> cVar23;
	std::shared_ptr<android::icu::util::ICUException> cVar16;
	std::shared_ptr<android::icu::util::ICUException> cVar12;
	std::shared_ptr<android::icu::impl::coll::CollationData> cVar4;
	
	//    .param p0, "base"    # Landroid/icu/impl/coll/CollationTailoring;
	//    .param p1, "inBytes"    # Ljava/nio/ByteBuffer;
	//    .param p2, "tailoring"    # Landroid/icu/impl/coll/CollationTailoring;
	//    .annotation system Ldalvik/annotation/Throws;
	// 106        value = {
	// 107            Ljava/io/IOException;
	// 108        }
	// 109    .end annotation
	tailoring->version = android::icu::impl::ICUBinary::readHeader(inBytes, 0x55436f6c, android::icu::impl::coll::CollationDataReader::IS_ACCEPTABLE);
	if ( !(base) )  
		goto label_cond_2e;
	if ( base->getUCAVersion() == tailoring->getUCAVersion() )
		goto label_cond_2e;
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Tailoring UCA version differs from base data UCA version")));
	// throw
	throw cVar0;
	// 159    .line 107
label_cond_2e:
	inLength = inBytes->remaining();
	//    .local v19, "inLength":I
	if ( inLength >= 0x8 )
		goto label_cond_43;
	cVar1 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not enough bytes")));
	// throw
	throw cVar1;
	// 184    .line 111
label_cond_43:
	indexesLength = inBytes->getInt();
	//    .local v21, "indexesLength":I
	if ( indexesLength <  0x2 )
		goto label_cond_57;
	if ( inLength >= ( indexesLength * 0x4) )
		goto label_cond_60;
label_cond_57:
	cVar2 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not enough indexes")));
	// throw
	throw cVar2;
	// 218    .line 115
label_cond_60:
	inIndexes = std::make_shared<std::vector<int[]>>(0x14);
	//    .local v18, "inIndexes":[I
	inIndexes[0x0] = indexesLength;
	i = 0x1;
	//    .local v16, "i":I
label_goto_6e:
	if ( i >= indexesLength )
		goto label_cond_88;
	if ( i >= inIndexes->size() )
		goto label_cond_88;
	inIndexes[i] = inBytes->getInt();
	i = ( i + 0x1);
	goto label_goto_6e;
	// 269    .line 120
label_cond_88:
	i = indexesLength;
label_goto_8a:
	if ( i >= inIndexes->size() )
		goto label_cond_9c;
	inIndexes[i] = -0x1;
	i = ( i + 0x1);
	goto label_goto_8a;
	// 296    .line 123
label_cond_9c:
	if ( indexesLength <= inIndexes->size() )
		goto label_cond_b7;
	android::icu::impl::ICUBinary::skipBytes(inBytes, ( (indexesLength - inIndexes->size()) * 0x4));
label_cond_b7:
	if ( indexesLength <= 0x13 )
		goto label_cond_d2;
	//    .local v24, "length":I
label_goto_c3:
	if ( inLength >= length )
		goto label_cond_e2;
	cVar3 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not enough bytes")));
	// throw
	throw cVar3;
	// 360    .line 139
	// 361    .end local v24    # "length":I
label_cond_d2:
	if ( indexesLength <= 0x5 )
		goto label_cond_df;
	//    .restart local v24    # "length":I
	goto label_goto_c3;
	// 379    .line 142
	// 380    .end local v24    # "length":I
label_cond_df:
	//    .restart local v24    # "length":I
	goto label_goto_c3;
	// 387    .line 148
label_cond_e2:
	if ( base )     
		goto label_cond_102;
	cVar4 = 0x0;
label_goto_e5:
	//    .local v20, "index":I
	//    .local v25, "offset":I
	length = (inIndexes[0x6] - inIndexes[0x5]);
	if ( length <  0x4 )
		goto label_cond_15d;
	if ( cVar4 )     
		goto label_cond_107;
	cVar5 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Collation base data must not reorder scripts")));
	// throw
	throw cVar5;
	// 430    .line 148
	// 431    .end local v20    # "index":I
	// 432    .end local v25    # "offset":I
label_cond_102:
	cVar4 = base->data;
	//    .local v6, "baseData":Landroid/icu/impl/coll/CollationData;
	goto label_goto_e5;
	// 441    .line 160
	// 442    .end local v6    # "baseData":Landroid/icu/impl/coll/CollationData;
	// 443    .restart local v20    # "index":I
	// 444    .restart local v25    # "offset":I
label_cond_107:
	reorderCodesLength = ( length / 0x4);
	//    .local v29, "reorderCodesLength":I
	reorderCodes = android::icu::impl::ICUBinary::getInts(inBytes, reorderCodesLength, ( length & 0x3));
	//    .local v28, "reorderCodes":[I
	reorderRangesLength = 0x0;
	//    .local v30, "reorderRangesLength":I
label_goto_117:
	if ( reorderRangesLength >= reorderCodesLength )
		goto label_cond_12c;
	if ( !((reorderCodes[( (reorderCodesLength - reorderRangesLength) + -0x1)] & -0x10000)) )  
		goto label_cond_12c;
	reorderRangesLength = ( reorderRangesLength + 0x1);
	goto label_goto_117;
	// 493    .line 172
label_cond_12c:
	if ( android::icu::impl::coll::CollationDataReader::_assertionsDisabled )     
		goto label_cond_13c;
	if ( reorderRangesLength <  reorderCodesLength )
		goto label_cond_13c;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 511    .line 173
label_cond_13c:
	reorderCodesLength = (reorderCodesLength - reorderRangesLength);
	//    .end local v30    # "reorderRangesLength":I
label_goto_13e:
	0x0;
	//    .local v31, "reorderTable":[B
	length = (inIndexes[0x7] - inIndexes[0x6]);
	if ( length <  0x100 )
		goto label_cond_184;
	if ( reorderCodesLength )     
		goto label_cond_16f;
	cVar7 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Reordering table without reordering codes")));
	// throw
	throw cVar7;
	// 555    .line 175
	// 556    .end local v28    # "reorderCodes":[I
	// 557    .end local v29    # "reorderCodesLength":I
	// 558    .end local v31    # "reorderTable":[B
label_cond_15d:
	std::make_shared<std::vector<int[]>>(0x0);
	//    .restart local v28    # "reorderCodes":[I
	0x0;
	//    .restart local v29    # "reorderCodesLength":I
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	goto label_goto_13e;
	// 582    .line 191
	// 583    .restart local v31    # "reorderTable":[B
label_cond_16f:
	reorderTable = std::make_shared<std::vector<unsigned char[]>>(0x100);
	//    .local v31, "reorderTable":[B
	inBytes->get(reorderTable);
	//    .end local v31    # "reorderTable":[B
label_cond_184:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	if ( !(cVar4) )  
		goto label_cond_1ae;
	if ( !((cVar4->numericPrimary > ((long long)(inIndexes[0x1]) & 0xff000000L))) )  
		goto label_cond_1ae;
	cVar8 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Tailoring numeric primary weight differs from base data")));
	// throw
	throw cVar8;
	// 651    .line 203
label_cond_1ae:
	data = 0x0;
	//    .local v11, "data":Landroid/icu/impl/coll/CollationData;
	length = (inIndexes[0x8] - inIndexes[0x7]);
	if ( length <  0x8 )
		goto label_cond_23a;
	tailoring->ensureOwnedData();
	data = tailoring->ownedData;
	//    .local v11, "data":Landroid/icu/impl/coll/CollationData;
	data->base = cVar4;
	data->numericPrimary = ((long long)(inIndexes[0x1]) & 0xff000000L);
	cVar9 = android::icu::impl::Trie2_32::createFromSerialized(inBytes);
	tailoring->trie = cVar9;
	data->trie = cVar9;
	trieLength = data->trie->getSerializedLength();
	//    .local v40, "trieLength":I
	if ( trieLength <= length )
		goto label_cond_203;
	cVar10 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Not enough bytes for the mappings trie")));
	// throw
	throw cVar10;
	// 750    .line 218
label_cond_203:
	//    .end local v11    # "data":Landroid/icu/impl/coll/CollationData;
	//    .end local v40    # "trieLength":I
label_goto_205:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	android::icu::impl::ICUBinary::skipBytes(inBytes, (inIndexes[0x9] - inIndexes[0x8]));
	length = (inIndexes[0xa] - inIndexes[0x9]);
	if ( length <  0x8 )
		goto label_cond_28a;
	if ( data )     
		goto label_cond_24a;
	cVar11 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Tailored ces without tailored trie")));
	// throw
	throw cVar11;
	// 818    .line 219
	// 819    .local v11, "data":Landroid/icu/impl/coll/CollationData;
label_cond_23a:
	if ( !(cVar4) )  
		goto label_cond_241;
	tailoring->data = cVar4;
	goto label_goto_205;
	// 830    .line 223
label_cond_241:
	cVar12 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing collation data mappings")));
	// throw
	throw cVar12;
	// 840    .line 239
	// 841    .end local v11    # "data":Landroid/icu/impl/coll/CollationData;
label_cond_24a:
	data->ces = android::icu::impl::ICUBinary::getLongs(inBytes, ( length / 0x8), ( length & 0x7));
label_goto_25c:
	android::icu::impl::ICUBinary::skipBytes(inBytes, (inIndexes[0xb] - inIndexes[0xa]));
	length = (inIndexes[0xc] - inIndexes[0xb]);
	if ( length <  0x4 )
		goto label_cond_2bb;
	if ( data )     
		goto label_cond_292;
	cVar13 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Tailored ce32s without tailored trie")));
	// throw
	throw cVar13;
	// 916    .line 241
label_cond_28a:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	goto label_goto_25c;
	// 926    .line 256
label_cond_292:
	data->ce32s = android::icu::impl::ICUBinary::getInts(inBytes, ( length / 0x4), ( length & 0x3));
label_goto_2a4:
	jamoCE32sStart = inIndexes[0x4];
	//    .local v22, "jamoCE32sStart":I
	if ( jamoCE32sStart < 0 ) 
		goto label_cond_307;
	if ( !(data) )  
		goto label_cond_2b2;
	if ( data->ce32s )     
		goto label_cond_2c3;
label_cond_2b2:
	cVar14 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("JamoCE32sStart index into non-existent ce32s[]")));
	// throw
	throw cVar14;
	// 975    .line 258
	// 976    .end local v22    # "jamoCE32sStart":I
label_cond_2bb:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	goto label_goto_2a4;
	// 986    .line 266
	// 987    .restart local v22    # "jamoCE32sStart":I
label_cond_2c3:
	data->jamoCE32s = std::make_shared<std::vector<int[]>>(0x43);
	java::lang::System::arraycopy(data->ce32s, jamoCE32sStart, data->jamoCE32s, 0x0, 0x43);
label_cond_2e8:
label_goto_2e8:
	length = (inIndexes[0xd] - inIndexes[0xc]);
	if ( length <  0x4 )
		goto label_cond_38e;
	rootElementsLength = ( length / 0x4);
	//    .local v32, "rootElementsLength":I
	if ( data )     
		goto label_cond_31d;
	cVar15 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Root elements but no mappings")));
	// throw
	throw cVar15;
	// 1066    .line 268
	// 1067    .end local v32    # "rootElementsLength":I
label_cond_307:
	if ( !(data) )  
		goto label_cond_2e8;
	if ( !(cVar4) )  
		goto label_cond_314;
	data->jamoCE32s = cVar4->jamoCE32s;
	goto label_goto_2e8;
	// 1085    .line 273
label_cond_314:
	cVar16 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing Jamo CE32s for Hangul processing")));
	// throw
	throw cVar16;
	// 1095    .line 284
	// 1096    .restart local v32    # "rootElementsLength":I
label_cond_31d:
	if ( rootElementsLength >  0x4 )
		goto label_cond_32e;
	cVar17 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Root elements array too short")));
	// throw
	throw cVar17;
	// 1115    .line 287
label_cond_32e:
	data->rootElements = std::make_shared<std::vector<long long[]>>(rootElementsLength);
	i = 0x0;
label_goto_33a:
	if ( i >= rootElementsLength )
		goto label_cond_359;
	data->rootElements[i] = ((long long)(inBytes->getInt()) & 0xffffffffL);
	i = ( i + 0x1);
	goto label_goto_33a;
	// 1163    .line 291
label_cond_359:
	//    .local v8, "commonSecTer":J
	if ( !((data->rootElements[0x3] > 0x5000500)) )  
		goto label_cond_371;
	cVar18 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Common sec/ter weights in base data differ from the hardcoded value")));
	// throw
	throw cVar18;
	// 1190    .line 295
label_cond_371:
	//    .local v36, "secTerBoundaries":J
	if ( (_ushrll(data->rootElements[0x4],0x18) > 0x45) >= 0 )
		goto label_cond_38c;
	cVar19 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("[fixed last secondary common byte] is too low")));
	// throw
	throw cVar19;
	// 1221    .line 301
label_cond_38c:
	//    .end local v8    # "commonSecTer":J
	//    .end local v32    # "rootElementsLength":I
	//    .end local v36    # "secTerBoundaries":J
label_cond_38e:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	length = (inIndexes[0xe] - inIndexes[0xd]);
	if ( length <  0x2 )
		goto label_cond_3e1;
	if ( data )     
		goto label_cond_3b2;
	cVar20 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Tailored contexts without tailored trie")));
	// throw
	throw cVar20;
	// 1270    .line 312
label_cond_3b2:
	data->contexts = android::icu::impl::ICUBinary::getString(inBytes, ( length / 0x2), ( length & 0x1));
label_goto_3c4:
	length = (inIndexes[0xf] - inIndexes[0xe]);
	if ( length <  0x2 )
		goto label_cond_512;
	if ( data )     
		goto label_cond_3e9;
	cVar21 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsafe-backward-set but no mappings")));
	// throw
	throw cVar21;
	// 1325    .line 314
label_cond_3e1:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	goto label_goto_3c4;
	// 1335    .line 324
label_cond_3e9:
	if ( cVar4 )     
		goto label_cond_458;
	cVar22 = std::make_shared<android::icu::text::UnicodeSet>(0xdc00, 0xdfff);
	tailoring->unsafeBackwardSet = cVar22;
	data->nfcImpl->addLcccChars(tailoring->unsafeBackwardSet);
label_goto_409:
	sset = std::make_shared<android::icu::impl::USerializedSet>();
	//    .local v38, "sset":Landroid/icu/impl/USerializedSet;
	//    .local v42, "unsafeData":[C
	sset->getSet(android::icu::impl::ICUBinary::getChars(inBytes, ( length / 0x2), ( length & 0x1)), 0x0);
	//    .local v10, "count":I
	range = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v27, "range":[I
	i = 0x0;
label_goto_437:
	if ( i >= sset->countRanges() )
		goto label_cond_467;
	sset->getRange(i, range);
	tailoring->unsafeBackwardSet->add(range[0x0], range[0x1]);
	i = ( i + 0x1);
	goto label_goto_437;
	// 1459    .line 340
	// 1460    .end local v10    # "count":I
	// 1461    .end local v27    # "range":[I
	// 1462    .end local v38    # "sset":Landroid/icu/impl/USerializedSet;
	// 1463    .end local v42    # "unsafeData":[C
label_cond_458:
	tailoring->unsafeBackwardSet = cVar4->unsafeBackwardSet->cloneAsThawed();
	goto label_goto_409;
	// 1481    .line 355
	// 1482    .restart local v10    # "count":I
	// 1483    .restart local v27    # "range":[I
	// 1484    .restart local v38    # "sset":Landroid/icu/impl/USerializedSet;
	// 1485    .restart local v42    # "unsafeData":[C
label_cond_467:
	c = 0x10000;
	//    .local v7, "c":I
	lead = 0xd800;
	//    .local v23, "lead":I
label_goto_46c:
	if ( lead >= 0xdc00 )
		goto label_cond_49b;
	if ( tailoring->unsafeBackwardSet->containsNone(c, ( c + 0x3ff)) )     
		goto label_cond_496;
	tailoring->unsafeBackwardSet->add(lead);
label_cond_496:
	lead = ( lead + 0x1);
	c = ( c + 0x400);
	goto label_goto_46c;
	// 1545    .line 361
label_cond_49b:
	tailoring->unsafeBackwardSet->freeze();
	data->unsafeBackwardSet = tailoring->unsafeBackwardSet;
	//    .end local v7    # "c":I
	//    .end local v10    # "count":I
	//    .end local v23    # "lead":I
	//    .end local v27    # "range":[I
	//    .end local v38    # "sset":Landroid/icu/impl/USerializedSet;
	//    .end local v42    # "unsafeData":[C
label_cond_4ae:
label_goto_4ae:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	length = (inIndexes[0x10] - inIndexes[0xf]);
	if ( !(data) )  
		goto label_cond_563;
	data->fastLatinTable = 0x0;
	data->fastLatinTableHeader = 0x0;
	if ( ( _shri(inIndexes[0x1],0x10) & 0xff) != 0x2 )
		goto label_cond_563;
	if ( length <  0x2 )
		goto label_cond_551;
	header0 = inBytes->getChar();
	//    .local v14, "header0":C
	headerLength = ( header0 & 0xff);
	//    .local v15, "headerLength":I
	data->fastLatinTableHeader = std::make_shared<std::vector<char[]>>(headerLength);
	data->fastLatinTableHeader[0x0] = header0;
	i = 0x1;
label_goto_501:
	if ( i >= headerLength )
		goto label_cond_528;
	data->fastLatinTableHeader[i] = inBytes->getChar();
	i = ( i + 0x1);
	goto label_goto_501;
	// 1693    .line 363
	// 1694    .end local v14    # "header0":C
	// 1695    .end local v15    # "headerLength":I
label_cond_512:
	if ( !(data) )  
		goto label_cond_4ae;
	if ( !(cVar4) )  
		goto label_cond_51f;
	data->unsafeBackwardSet = cVar4->unsafeBackwardSet;
	goto label_goto_4ae;
	// 1713    .line 369
label_cond_51f:
	cVar23 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing unsafe-backward-set")));
	// throw
	throw cVar23;
	// 1723    .line 391
	// 1724    .restart local v14    # "header0":C
	// 1725    .restart local v15    # "headerLength":I
label_cond_528:
	//    .local v39, "tableLength":I
	data->fastLatinTable = android::icu::impl::ICUBinary::getChars(inBytes, (( length / 0x2) - headerLength), ( length & 0x1));
	if ( _shri(header0,0x8) == 0x2 )
		goto label_cond_563;
	cVar24 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Fast-Latin table version differs from version in data header")));
	// throw
	throw cVar24;
	// 1772    .line 397
	// 1773    .end local v14    # "header0":C
	// 1774    .end local v15    # "headerLength":I
	// 1775    .end local v39    # "tableLength":I
label_cond_551:
	if ( !(cVar4) )  
		goto label_cond_563;
	data->fastLatinTable = cVar4->fastLatinTable;
	data->fastLatinTableHeader = cVar4->fastLatinTableHeader;
label_cond_563:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	length = (inIndexes[0x11] - inIndexes[0x10]);
	if ( length <  0x2 )
		goto label_cond_630;
	if ( data )     
		goto label_cond_587;
	cVar25 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Script order data but no mappings")));
	// throw
	throw cVar25;
	// 1839    .line 412
label_cond_587:
	//    .local v34, "scriptsLength":I
	inChars = inBytes->asCharBuffer();
	//    .local v17, "inChars":Ljava/nio/CharBuffer;
	data->numScripts = inChars->get();
	scriptStartsLength = (( length / 0x2) - ( ( data->numScripts + 0x1) + 0x10));
	//    .local v33, "scriptStartsLength":I
	if ( scriptStartsLength >  0x2 )
		goto label_cond_5b0;
	cVar26 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Script order data too short")));
	// throw
	throw cVar26;
	// 1889    .line 420
label_cond_5b0:
	cVar27 = std::make_shared<std::vector<char[]>>(( data->numScripts + 0x10));
	data->scriptsIndex = cVar27;
	inChars->get(cVar27);
	cVar28 = std::make_shared<std::vector<char[]>>(scriptStartsLength);
	data->scriptStarts = cVar28;
	inChars->get(cVar28);
	if ( data->scriptStarts[0x0] )     
		goto label_cond_5f2;
	if ( data->scriptStarts[0x1] == 0x300 )
		goto label_cond_5fb;
label_cond_5f2:
	cVar29 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Script order data not valid")));
	// throw
	throw cVar29;
	// 1968    .line 424
label_cond_5fb:
	if ( data->scriptStarts[( scriptStartsLength + -0x1)] != 0xff00 )
		goto label_cond_5f2;
	//    .end local v17    # "inChars":Ljava/nio/CharBuffer;
	//    .end local v33    # "scriptStartsLength":I
	//    .end local v34    # "scriptsLength":I
label_cond_60c:
label_goto_60c:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	length = (inIndexes[0x12] - inIndexes[0x11]);
	if ( length <  0x100 )
		goto label_cond_701;
	if ( data )     
		goto label_cond_64d;
	cVar30 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Data for compressible primary lead bytes but no mappings")));
	// throw
	throw cVar30;
	// 2034    .line 428
label_cond_630:
	if ( !(data) )  
		goto label_cond_60c;
	if ( !(cVar4) )  
		goto label_cond_60c;
	data->numScripts = cVar4->numScripts;
	data->scriptsIndex = cVar4->scriptsIndex;
	data->scriptStarts = cVar4->scriptStarts;
	goto label_goto_60c;
	// 2070    .line 444
label_cond_64d:
	data->compressibleBytes = std::make_shared<std::vector<bool[]>>(0x100);
	i = 0x0;
label_goto_65b:
	if ( i >= 0x100 )
		goto label_cond_677;
	if ( !(inBytes->get()) )  
		goto label_cond_674;
	cVar31 = 0x1;
label_goto_66f:
	data->compressibleBytes[i] = cVar31;
	i = ( i + 0x1);
	goto label_goto_65b;
	// 2117    .line 446
label_cond_674:
	cVar31 = 0x0;
	goto label_goto_66f;
	// 2123    .line 448
label_cond_677:
label_cond_67d:
label_goto_67d:
	android::icu::impl::ICUBinary::skipBytes(inBytes, length);
	android::icu::impl::ICUBinary::skipBytes(inBytes, (inIndexes[0x13] - inIndexes[0x12]));
	ts = tailoring->settings->readOnly();
	ts->checkCast("android::icu::impl::coll::CollationSettings");
	//    .local v41, "ts":Landroid/icu/impl/coll/CollationSettings;
	options = (inIndexes[0x1] & 0xffff);
	//    .local v26, "options":I
	fastLatinPrimaries = std::make_shared<std::vector<char[]>>(0x180);
	//    .local v13, "fastLatinPrimaries":[C
	fastLatinOptions = android::icu::impl::coll::CollationFastLatin::getOptions(tailoring->data, ts, fastLatinPrimaries);
	//    .local v12, "fastLatinOptions":I
	if ( options != ts->options )
		goto label_cond_718;
	if ( !((ts->variableTop > 0x0)) )  
		goto label_cond_718;
	if ( !(java::util::Arrays::equals(reorderCodes, ts->reorderCodes)) )  
		goto label_cond_718;
	if ( fastLatinOptions != ts->fastLatinOptions )
		goto label_cond_718;
	if ( fastLatinOptions < 0 ) 
		goto label_cond_700;
	if ( !(java::util::Arrays::equals(fastLatinPrimaries, ts->fastLatinPrimaries)) )  
		goto label_cond_718;
label_cond_700:
	return;
	// 2286    .line 449
	// 2287    .end local v12    # "fastLatinOptions":I
	// 2288    .end local v13    # "fastLatinPrimaries":[C
	// 2289    .end local v26    # "options":I
	// 2290    .end local v41    # "ts":Landroid/icu/impl/coll/CollationSettings;
label_cond_701:
	if ( !(data) )  
		goto label_cond_67d;
	if ( !(cVar4) )  
		goto label_cond_70f;
	data->compressibleBytes = cVar4->compressibleBytes;
	goto label_goto_67d;
	// 2308    .line 454
label_cond_70f:
	cVar33 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing data for compressible primary lead bytes")));
	// throw
	throw cVar33;
	// 2318    .line 476
	// 2319    .restart local v12    # "fastLatinOptions":I
	// 2320    .restart local v13    # "fastLatinPrimaries":[C
	// 2321    .restart local v26    # "options":I
	// 2322    .restart local v41    # "ts":Landroid/icu/impl/coll/CollationSettings;
label_cond_718:
	settings = tailoring->settings->copyOnWrite();
	settings->checkCast("android::icu::impl::coll::CollationSettings");
	//    .local v35, "settings":Landroid/icu/impl/coll/CollationSettings;
	settings->options = options;
	settings->variableTop = tailoring->data->getLastPrimaryForGroup(( settings->getMaxVariable() + 0x1000));
	if ( (settings->variableTop > 0x0) )     
		goto label_cond_759;
	cVar34 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The maxVariable could not be mapped to a variableTop")));
	// throw
	throw cVar34;
	// 2395    .line 485
label_cond_759:
	if ( !(reorderCodesLength) )  
		goto label_cond_766;
	settings->aliasReordering(cVar4, reorderCodes, reorderCodesLength, reorderTable);
label_cond_766:
	settings->fastLatinOptions = android::icu::impl::coll::CollationFastLatin::getOptions(tailoring->data, settings, settings->fastLatinPrimaries);
	return;

}


