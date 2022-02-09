// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Trie2_S_1.h"
#include "android.icu.impl.Trie2_S_CharSequenceIterator.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_S_Trie2Iterator.h"
#include "android.icu.impl.Trie2_S_UTrie2Header.h"
#include "android.icu.impl.Trie2_S_ValueMapper.h"
#include "android.icu.impl.Trie2_S_ValueWidth.h"
#include "android.icu.impl.Trie2.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.Trie2_32.h"
#include "java.io.DataOutputStream.h"
#include "java.io.InputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.nio.ByteOrder.h"
#include "java.util.Iterator.h"

static android::icu::impl::Trie2::_android_icu_impl_Trie2_S_ValueWidthSwitchesValues = nullptr;
static android::icu::impl::Trie2::UNEWTRIE2_INDEX_1_LENGTH = 0x220;
static android::icu::impl::Trie2::UNEWTRIE2_INDEX_GAP_LENGTH = 0x240;
static android::icu::impl::Trie2::UNEWTRIE2_INDEX_GAP_OFFSET = 0x820;
static android::icu::impl::Trie2::UNEWTRIE2_MAX_DATA_LENGTH = 0x110480;
static android::icu::impl::Trie2::UNEWTRIE2_MAX_INDEX_2_LENGTH = 0x8aa0;
static android::icu::impl::Trie2::UTRIE2_BAD_UTF8_DATA_OFFSET = 0x80;
static android::icu::impl::Trie2::UTRIE2_CP_PER_INDEX_1_ENTRY = 0x800;
static android::icu::impl::Trie2::UTRIE2_DATA_BLOCK_LENGTH = 0x20;
static android::icu::impl::Trie2::UTRIE2_DATA_GRANULARITY = 0x4;
static android::icu::impl::Trie2::UTRIE2_DATA_MASK = 0x1f;
static android::icu::impl::Trie2::UTRIE2_DATA_START_OFFSET = 0xc0;
static android::icu::impl::Trie2::UTRIE2_INDEX_1_OFFSET = 0x840;
static android::icu::impl::Trie2::UTRIE2_INDEX_2_BLOCK_LENGTH = 0x40;
static android::icu::impl::Trie2::UTRIE2_INDEX_2_BMP_LENGTH = 0x820;
static android::icu::impl::Trie2::UTRIE2_INDEX_2_MASK = 0x3f;
static android::icu::impl::Trie2::UTRIE2_INDEX_2_OFFSET = 0x0;
static android::icu::impl::Trie2::UTRIE2_INDEX_SHIFT = 0x2;
static android::icu::impl::Trie2::UTRIE2_LSCP_INDEX_2_LENGTH = 0x20;
static android::icu::impl::Trie2::UTRIE2_LSCP_INDEX_2_OFFSET = 0x800;
static android::icu::impl::Trie2::UTRIE2_MAX_INDEX_1_LENGTH = 0x200;
static android::icu::impl::Trie2::UTRIE2_OMITTED_BMP_INDEX_1_LENGTH = 0x20;
static android::icu::impl::Trie2::UTRIE2_OPTIONS_VALUE_BITS_MASK = 0xf;
static android::icu::impl::Trie2::UTRIE2_SHIFT_1 = 0xb;
static android::icu::impl::Trie2::UTRIE2_SHIFT_1_2 = 0x6;
static android::icu::impl::Trie2::UTRIE2_SHIFT_2 = 0x5;
static android::icu::impl::Trie2::UTRIE2_UTF8_2B_INDEX_2_LENGTH = 0x20;
static android::icu::impl::Trie2::UTRIE2_UTF8_2B_INDEX_2_OFFSET = 0x820;
static android::icu::impl::Trie2::defaultValueMapper;
// .method private static synthetic -getandroid-icu-impl-Trie2$ValueWidthSwitchesValues()[I
int android::icu::impl::Trie2::_getandroid_icu_impl_Trie2_S_ValueWidthSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::Trie2::_android_icu_impl_Trie2_S_ValueWidthSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::Trie2::_android_icu_impl_Trie2_S_ValueWidthSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::Trie2_S_ValueWidth::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::Trie2_S_ValueWidth::BITS_16->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_25
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::impl::Trie2_S_ValueWidth::BITS_32->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_23
label_goto_20:
	android::icu::impl::Trie2::_android_icu_impl_Trie2_S_ValueWidthSwitchesValues = cVar0;
	return cVar0;
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_25:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static synthetic -wrap0(II)I
int android::icu::impl::Trie2::_wrap0(int h,int b)
{
	
	//    .param p0, "h"    # I
	//    .param p1, "b"    # I
	return android::icu::impl::Trie2::hashByte(h, b);

}
// .method static synthetic -wrap1(II)I
int android::icu::impl::Trie2::_wrap1(int h,int i)
{
	
	//    .param p0, "h"    # I
	//    .param p1, "i"    # I
	return android::icu::impl::Trie2::hashInt(h, i);

}
// .method static synthetic -wrap2(II)I
int android::icu::impl::Trie2::_wrap2(int h,int c)
{
	
	//    .param p0, "h"    # I
	//    .param p1, "c"    # I
	return android::icu::impl::Trie2::hashUChar32(h, c);

}
// .method static synthetic -wrap3()I
int android::icu::impl::Trie2::_wrap3()
{
	
	return android::icu::impl::Trie2::initHash({const[class].FS-Param});

}
// .method static constructor <clinit>()V
void android::icu::impl::Trie2::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::Trie2_S_1> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::Trie2_S_1>();
	android::icu::impl::Trie2::defaultValueMapper = cVar0;
	return;

}
// .method public constructor <init>()V
android::icu::impl::Trie2::Trie2()
{
	
	// 255    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static createFromSerialized(Ljava/nio/ByteBuffer;)Landroid/icu/impl/Trie2;
std::shared_ptr<android::icu::impl::Trie2> android::icu::impl::Trie2::createFromSerialized(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	std::shared_ptr<java::nio::ByteOrder> outerByteOrder;
	std::shared_ptr<android::icu::impl::Trie2_S_UTrie2Header> header;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::nio::ByteOrder> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> width;
	std::shared_ptr<android::icu::impl::Trie2_16> This;
	int indexArraySize;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<android::icu::impl::Trie2_32> This;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 264        value = {
	// 265            Ljava/io/IOException;
	// 266        }
	// 267    .end annotation
	outerByteOrder = bytes->order();
	//    .local v4, "outerByteOrder":Ljava/nio/ByteOrder;
	try {
	//label_try_start_4:
	header = std::make_shared<android::icu::impl::Trie2_S_UTrie2Header>();
	//    .local v1, "header":Landroid/icu/impl/Trie2$UTrie2Header;
	header->signature = bytes->getInt();
	// switch
	{
	auto item = ( header->signature );
	if (item == 0x32697254) goto label_sswitch_22;
	if (item == 0x54726932) goto label_sswitch_33;
	}
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Buffer does not contain a serialized UTrie2")));
	// throw
	throw cVar0;
	// 303    :try_end_1d
	// 304    .catchall {:try_start_4 .. :try_end_1d} :catchall_1d
	// 306    .line 187
	// 307    .end local v1    # "header":Landroid/icu/impl/Trie2$UTrie2Header;
label_catchall_1d:
	// move-exception
	
	bytes->order(outerByteOrder);
	// throw
	throw;
	// 317    .line 109
	// 318    .restart local v1    # "header":Landroid/icu/impl/Trie2$UTrie2Header;
label_sswitch_22:
	try {
	//label_try_start_22:
	if ( outerByteOrder != java::nio::ByteOrder::BIG_ENDIAN )
		goto label_cond_67;
	//    .local v3, "isBigEndian":Z
label_goto_27:
	if ( !(isBigEndian) )  
		goto label_cond_69;
	cVar1 = java::nio::ByteOrder::LITTLE_ENDIAN;
label_goto_2b:
	bytes->order(cVar1);
	header->signature = 0x54726932;
	//    .end local v3    # "isBigEndian":Z
label_sswitch_33:
	header->options = bytes->getChar();
	header->indexLength = bytes->getChar();
	header->shiftedDataLength = bytes->getChar();
	header->index2NullOffset = bytes->getChar();
	header->dataNullOffset = bytes->getChar();
	header->shiftedHighStart = bytes->getChar();
	if ( ( header->options & 0xf) <= 0x1 )
		goto label_cond_6c;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UTrie2 serialized format error.")));
	// throw
	throw cVar2;
	// 404    .line 109
label_cond_67:
	//    .restart local v3    # "isBigEndian":Z
	goto label_goto_27;
	// 411    .line 110
label_cond_69:
	cVar1 = java::nio::ByteOrder::BIG_ENDIAN;
	goto label_goto_2b;
	// 417    .line 131
	// 418    .end local v3    # "isBigEndian":Z
label_cond_6c:
	if ( ( header->options & 0xf) )     
		goto label_cond_d2;
	width = android::icu::impl::Trie2_S_ValueWidth::BITS_16;
	//    .local v5, "width":Landroid/icu/impl/Trie2$ValueWidth;
	This = std::make_shared<android::icu::impl::Trie2_16>();
	//    .local v0, "This":Landroid/icu/impl/Trie2;
label_goto_79:
	This->header = header;
	This->indexLength = header->indexLength;
	This->dataLength = ( header->shiftedDataLength << 0x2);
	This->index2NullOffset = header->index2NullOffset;
	This->dataNullOffset = header->dataNullOffset;
	This->highStart = ( header->shiftedHighStart << 0xb);
	This->highValueIndex = ( This->dataLength + -0x4);
	if ( width != android::icu::impl::Trie2_S_ValueWidth::BITS_16 )
		goto label_cond_a4;
	This->highValueIndex = (This->highValueIndex +  This->indexLength);
label_cond_a4:
	indexArraySize = This->indexLength;
	//    .local v2, "indexArraySize":I
	if ( width != android::icu::impl::Trie2_S_ValueWidth::BITS_16 )
		goto label_cond_ad;
label_cond_ad:
	This->index = android::icu::impl::ICUBinary::getChars(bytes, indexArraySize, 0x0);
	if ( width != android::icu::impl::Trie2_S_ValueWidth::BITS_16 )
		goto label_cond_da;
	This->data16 = This->indexLength;
label_goto_bc:
	// switch
	{
	auto item = ( android::icu::impl::Trie2::-getandroid-icu-impl-Trie2$ValueWidthSwitchesValues({const[class].FS-Param})[width->ordinal()] );
	if (item == 1) goto label_pswitch_e4;
	if (item == 2) goto label_pswitch_fd;
	}
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UTrie2 serialized format error.")));
	// throw
	throw cVar4;
	// 548    .line 135
	// 549    .end local v0    # "This":Landroid/icu/impl/Trie2;
	// 550    .end local v2    # "indexArraySize":I
	// 551    .end local v5    # "width":Landroid/icu/impl/Trie2$ValueWidth;
label_cond_d2:
	width = android::icu::impl::Trie2_S_ValueWidth::BITS_32;
	//    .restart local v5    # "width":Landroid/icu/impl/Trie2$ValueWidth;
	This = std::make_shared<android::icu::impl::Trie2_32>();
	//    .restart local v0    # "This":Landroid/icu/impl/Trie2;
	goto label_goto_79;
	// 564    .line 168
	// 565    .restart local v2    # "indexArraySize":I
label_cond_da:
	This->data32 = android::icu::impl::ICUBinary::getInts(bytes, This->dataLength, 0x0);
	goto label_goto_bc;
	// 579    .line 173
label_pswitch_e4:
	This->data32 = 0x0;
	This->initialValue = This->index[This->dataNullOffset];
	This->errorValue = This->index[( This->data16 + 0x80)];
	//label_try_end_f9:
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catchall {:try_start_22 .. :try_end_f9} :catchall_1d
label_goto_f9:
	bytes->order(outerByteOrder);
	return This;
	// 614    .line 178
label_pswitch_fd:
	try {
	//label_try_start_fe:
	This->data16 = 0x0;
	This->initialValue = This->data32[This->dataNullOffset];
	This->errorValue = This->data32[0x80];
	//label_try_end_110:
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catchall {:try_start_fe .. :try_end_110} :catchall_1d
	goto label_goto_f9;
	// 643    .line 103
	// 644    nop
	// 646    :sswitch_data_112
	// 647    .sparse-switch
	// 648        0x32697254 -> :sswitch_22
	// 649        0x54726932 -> :sswitch_33
	// 650    .end sparse-switch
	// 652    .line 171
	// 653    :pswitch_data_11c
	// 654    .packed-switch 0x1
	// 655        :pswitch_e4
	// 656        :pswitch_fd
	// 657    .end packed-switch

}
// .method public static getVersion(Ljava/io/InputStream;Z)I
int android::icu::impl::Trie2::getVersion(std::shared_ptr<java::io::InputStream> is,bool littleEndianOk)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared<std::vector<unsigned char[]>> sig;
	
	//    .param p0, "is"    # Ljava/io/InputStream;
	//    .param p1, "littleEndianOk"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 665        value = {
	// 666            Ljava/io/IOException;
	// 667        }
	// 668    .end annotation
	cVar0 = 0x54;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	if ( is->markSupported() )     
		goto label_cond_15;
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Input stream must support mark().")));
	// throw
	throw cVar5;
	// 697    .line 209
label_cond_15:
	is->mark(0x4);
	sig = std::make_shared<std::vector<unsigned char[]>>(0x4);
	//    .local v1, "sig":[B
	//    .local v0, "read":I
	is->reset();
	if ( is->read(sig) == sig->size() )
		goto label_cond_27;
	return cVar4;
	// 726    .line 218
label_cond_27:
	if ( sig[cVar4] != cVar0 )
		goto label_cond_3e;
	if ( sig[cVar3] != 0x72 )
		goto label_cond_3e;
	if ( sig[cVar2] != 0x69 )
		goto label_cond_3e;
	if ( sig[cVar1] != 0x65 )
		goto label_cond_3e;
	return cVar3;
	// 753    .line 221
label_cond_3e:
	if ( sig[cVar4] != cVar0 )
		goto label_cond_55;
	if ( sig[cVar3] != 0x72 )
		goto label_cond_55;
	if ( sig[cVar2] != 0x69 )
		goto label_cond_55;
	if ( sig[cVar1] != 0x32 )
		goto label_cond_55;
	return cVar2;
	// 780    .line 224
label_cond_55:
	if ( !(littleEndianOk) )  
		goto label_cond_85;
	if ( sig[cVar4] != 0x65 )
		goto label_cond_6e;
	if ( sig[cVar3] != 0x69 )
		goto label_cond_6e;
	if ( sig[cVar2] != 0x72 )
		goto label_cond_6e;
	if ( sig[cVar1] != cVar0 )
		goto label_cond_6e;
	return cVar3;
	// 810    .line 228
label_cond_6e:
	if ( sig[cVar4] != 0x32 )
		goto label_cond_85;
	if ( sig[cVar3] != 0x69 )
		goto label_cond_85;
	if ( sig[cVar2] != 0x72 )
		goto label_cond_85;
	if ( sig[cVar1] != cVar0 )
		goto label_cond_85;
	return cVar2;
	// 837    .line 232
label_cond_85:
	return cVar4;

}
// .method private static hashByte(II)I
int android::icu::impl::Trie2::hashByte(int h,int b)
{
	
	//    .param p0, "h"    # I
	//    .param p1, "b"    # I
	return ((h *  0x1000193) ^  b);

}
// .method private static hashInt(II)I
int android::icu::impl::Trie2::hashInt(int h,int i)
{
	
	//    .param p0, "h"    # I
	//    .param p1, "i"    # I
	return android::icu::impl::Trie2::hashByte(android::icu::impl::Trie2::hashByte(android::icu::impl::Trie2::hashByte(android::icu::impl::Trie2::hashByte(h, ( i & 0xff)), ( _shri(i,0x8) & 0xff)), ( _shri(i,0x10) & 0xff)), ( _shri(i,0x18) & 0xff));

}
// .method private static hashUChar32(II)I
int android::icu::impl::Trie2::hashUChar32(int h,int c)
{
	
	//    .param p0, "h"    # I
	//    .param p1, "c"    # I
	return android::icu::impl::Trie2::hashByte(android::icu::impl::Trie2::hashByte(android::icu::impl::Trie2::hashByte(h, ( c & 0xff)), ( _shri(c,0x8) & 0xff)), _shri(c,0x10));

}
// .method private static initHash()I
int android::icu::impl::Trie2::initHash()
{
	
	return -0x7ee3623b;

}
// .method public charSequenceIterator(Ljava/lang/CharSequence;I)Landroid/icu/impl/Trie2$CharSequenceIterator;
std::shared_ptr<android::icu::impl::Trie2_S_CharSequenceIterator> android::icu::impl::Trie2::charSequenceIterator(std::shared_ptr<java::lang::CharSequence> text,int index)
{
	
	std::shared_ptr<android::icu::impl::Trie2_S_CharSequenceIterator> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "index"    # I
	cVar0 = std::make_shared<android::icu::impl::Trie2_S_CharSequenceIterator>(this, text, index);
	return cVar0;

}
// .method public final equals(Ljava/lang/Object;)Z
bool android::icu::impl::Trie2::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::Trie2> OtherTrie;
	std::shared_ptr<java::util::Iterator> otherIter;
	std::shared_ptr<java::util::Iterator> rangeFromThis_S_iterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> rangeFromThis;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> rangeFromOther;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( other->instanceOf("android::icu::impl::Trie2") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	OtherTrie = other;
	OtherTrie->checkCast("android::icu::impl::Trie2");
	//    .local v0, "OtherTrie":Landroid/icu/impl/Trie2;
	otherIter = OtherTrie->iterator();
	//    .local v1, "otherIter":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
	rangeFromThis_S_iterator = this->iterator();
	//    .local v4, "rangeFromThis$iterator":Ljava/util/Iterator;
label_cond_11:
	if ( !(rangeFromThis_S_iterator->hasNext()) )  
		goto label_cond_31;
	rangeFromThis = rangeFromThis_S_iterator->next();
	rangeFromThis->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v3, "rangeFromThis":Landroid/icu/impl/Trie2$Range;
	if ( otherIter->hasNext() )     
		goto label_cond_24;
	return cVar0;
	// 1021    .line 301
label_cond_24:
	rangeFromOther = otherIter->next();
	rangeFromOther->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v2, "rangeFromOther":Landroid/icu/impl/Trie2$Range;
	if ( rangeFromThis->equals(rangeFromOther) )     
		goto label_cond_11;
	return cVar0;
	// 1040    .line 306
	// 1041    .end local v2    # "rangeFromOther":Landroid/icu/impl/Trie2$Range;
	// 1042    .end local v3    # "rangeFromThis":Landroid/icu/impl/Trie2$Range;
label_cond_31:
	if ( !(otherIter->hasNext()) )  
		goto label_cond_38;
	return cVar0;
	// 1053    .line 310
label_cond_38:
	if ( this->errorValue != OtherTrie->errorValue )
		goto label_cond_44;
	if ( this->initialValue == OtherTrie->initialValue )
		goto label_cond_45;
label_cond_44:
	return cVar0;
	// 1072    .line 315
label_cond_45:
	return 0x1;

}
// .method public hashCode()I
int android::icu::impl::Trie2::hashCode()
{
	
	int hash;
	std::shared_ptr<java::util::Iterator> r_S_iterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> r;
	
	if ( this->fHash )     
		goto label_cond_26;
	hash = android::icu::impl::Trie2::initHash({const[class].FS-Param});
	//    .local v0, "hash":I
	r_S_iterator = this->iterator();
	//    .local v2, "r$iterator":Ljava/util/Iterator;
label_goto_c:
	if ( !(r_S_iterator->hasNext()) )  
		goto label_cond_21;
	r = r_S_iterator->next();
	r->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v1, "r":Landroid/icu/impl/Trie2$Range;
	hash = android::icu::impl::Trie2::hashInt(hash, r->hashCode());
	goto label_goto_c;
	// 1131    .line 326
	// 1132    .end local v1    # "r":Landroid/icu/impl/Trie2$Range;
label_cond_21:
	if ( hash )     
		goto label_cond_24;
	hash = 0x1;
label_cond_24:
	this->fHash = hash;
	//    .end local v0    # "hash":I
	//    .end local v2    # "r$iterator":Ljava/util/Iterator;
label_cond_26:
	return this->fHash;

}
// .method public iterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<android::icu::impl::Trie2_S_Range>> android::icu::impl::Trie2::iterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1155        value = {
	// 1156            "()",
	// 1157            "Ljava/util/Iterator",
	// 1158            "<",
	// 1159            "Landroid/icu/impl/Trie2$Range;",
	// 1160            ">;"
	// 1161        }
	// 1162    .end annotation
	return this->iterator(android::icu::impl::Trie2::defaultValueMapper);

}
// .method public iterator(Landroid/icu/impl/Trie2$ValueMapper;)Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<android::icu::impl::Trie2_S_Range>> android::icu::impl::Trie2::iterator(std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> mapper)
{
	
	std::shared_ptr<android::icu::impl::Trie2_S_Trie2Iterator> cVar0;
	
	//    .param p1, "mapper"    # Landroid/icu/impl/Trie2$ValueMapper;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1179        value = {
	// 1180            "(",
	// 1181            "Landroid/icu/impl/Trie2$ValueMapper;",
	// 1182            ")",
	// 1183            "Ljava/util/Iterator",
	// 1184            "<",
	// 1185            "Landroid/icu/impl/Trie2$Range;",
	// 1186            ">;"
	// 1187        }
	// 1188    .end annotation
	cVar0 = std::make_shared<android::icu::impl::Trie2_S_Trie2Iterator>(this, mapper);
	return cVar0;

}
// .method public iteratorForLeadSurrogate(C)Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<android::icu::impl::Trie2_S_Range>> android::icu::impl::Trie2::iteratorForLeadSurrogate(char lead)
{
	
	std::shared_ptr<android::icu::impl::Trie2_S_Trie2Iterator> cVar0;
	
	//    .param p1, "lead"    # C
	//    .annotation system Ldalvik/annotation/Signature;
	// 1203        value = {
	// 1204            "(C)",
	// 1205            "Ljava/util/Iterator",
	// 1206            "<",
	// 1207            "Landroid/icu/impl/Trie2$Range;",
	// 1208            ">;"
	// 1209        }
	// 1210    .end annotation
	cVar0 = std::make_shared<android::icu::impl::Trie2_S_Trie2Iterator>(this, lead, android::icu::impl::Trie2::defaultValueMapper);
	return cVar0;

}
// .method public iteratorForLeadSurrogate(CLandroid/icu/impl/Trie2$ValueMapper;)Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<android::icu::impl::Trie2_S_Range>> android::icu::impl::Trie2::iteratorForLeadSurrogate(char lead,std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> mapper)
{
	
	std::shared_ptr<android::icu::impl::Trie2_S_Trie2Iterator> cVar0;
	
	//    .param p1, "lead"    # C
	//    .param p2, "mapper"    # Landroid/icu/impl/Trie2$ValueMapper;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1228        value = {
	// 1229            "(C",
	// 1230            "Landroid/icu/impl/Trie2$ValueMapper;",
	// 1231            ")",
	// 1232            "Ljava/util/Iterator",
	// 1233            "<",
	// 1234            "Landroid/icu/impl/Trie2$Range;",
	// 1235            ">;"
	// 1236        }
	// 1237    .end annotation
	cVar0 = std::make_shared<android::icu::impl::Trie2_S_Trie2Iterator>(this, lead, mapper);
	return cVar0;

}
// .method rangeEnd(III)I
int android::icu::impl::Trie2::rangeEnd(int start,int limitp,int val)
{
	
	int c;
	
	//    .param p1, "start"    # I
	//    .param p2, "limitp"    # I
	//    .param p3, "val"    # I
	//    .local v1, "limit":I
	c = ( start + 0x1);
	//    .local v0, "c":I
label_goto_8:
	if ( c >= java::lang::Math::min(this->highStart, limitp) )
		goto label_cond_10;
	if ( this->get(c) == val )
		goto label_cond_18;
label_cond_10:
	if ( c <  this->highStart )
		goto label_cond_15;
	c = limitp;
label_cond_15:
	return ( c + -0x1);
	// 1292    .line 1015
label_cond_18:
	c = ( c + 0x1);
	goto label_goto_8;

}
// .method protected serializeHeader(Ljava/io/DataOutputStream;)I
int android::icu::impl::Trie2::serializeHeader(std::shared_ptr<java::io::DataOutputStream> dos)
{
	
	int i;
	
	//    .param p1, "dos"    # Ljava/io/DataOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1303        value = {
	// 1304            Ljava/io/IOException;
	// 1305        }
	// 1306    .end annotation
	0x0;
	//    .local v0, "bytesWritten":I
	dos->writeInt(this->header->signature);
	dos->writeShort(this->header->options);
	dos->writeShort(this->header->indexLength);
	dos->writeShort(this->header->shiftedDataLength);
	dos->writeShort(this->header->index2NullOffset);
	dos->writeShort(this->header->dataNullOffset);
	dos->writeShort(this->header->shiftedHighStart);
	0x10;
	i = 0x0;
	//    .local v1, "i":I
label_goto_35:
	if ( i >= this->header->indexLength )
		goto label_cond_45;
	dos->writeChar(this->index[i]);
	i = ( i + 0x1);
	goto label_goto_35;
	// 1388    .line 489
label_cond_45:
	return ( this->header->indexLength + 0x10);

}


