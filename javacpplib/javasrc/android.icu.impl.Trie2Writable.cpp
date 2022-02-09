// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2Writable.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_S_UTrie2Header.h"
#include "android.icu.impl.Trie2_S_ValueWidth.h"
#include "android.icu.impl.Trie2.h"
#include "android.icu.impl.Trie2Writable.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.Trie2_32.h"
#include "java.io.PrintStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Character.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Integer.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Iterator.h"

static android::icu::impl::Trie2Writable::_android_icu_impl_Trie2_S_ValueWidthSwitchesValues = nullptr;
static android::icu::impl::Trie2Writable::_assertionsDisabled;
static android::icu::impl::Trie2Writable::UNEWTRIE2_DATA_0800_OFFSET = 0x880;
static android::icu::impl::Trie2Writable::UNEWTRIE2_DATA_NULL_OFFSET = 0xc0;
static android::icu::impl::Trie2Writable::UNEWTRIE2_DATA_START_OFFSET = 0x100;
static android::icu::impl::Trie2Writable::UNEWTRIE2_INDEX_2_NULL_OFFSET = 0xa60;
static android::icu::impl::Trie2Writable::UNEWTRIE2_INDEX_2_START_OFFSET = 0xaa0;
static android::icu::impl::Trie2Writable::UNEWTRIE2_INITIAL_DATA_LENGTH = 0x4000;
static android::icu::impl::Trie2Writable::UNEWTRIE2_MEDIUM_DATA_LENGTH = 0x20000;
static android::icu::impl::Trie2Writable::UTRIE2_MAX_DATA_LENGTH = 0x3fffc;
static android::icu::impl::Trie2Writable::UTRIE2_MAX_INDEX_LENGTH = 0xffff;
// .method private static synthetic -getandroid-icu-impl-Trie2$ValueWidthSwitchesValues()[I
int android::icu::impl::Trie2Writable::_getandroid_icu_impl_Trie2_S_ValueWidthSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::Trie2Writable::_android_icu_impl_Trie2_S_ValueWidthSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::Trie2Writable::_android_icu_impl_Trie2_S_ValueWidthSwitchesValues;
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
	android::icu::impl::Trie2Writable::_android_icu_impl_Trie2_S_ValueWidthSwitchesValues = cVar0;
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
// .method static constructor <clinit>()V
void android::icu::impl::Trie2Writable::static_cinit()
{
	
	android::icu::impl::Trie2Writable::_assertionsDisabled = ( android::icu::impl::Trie2Writable()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(II)V
android::icu::impl::Trie2Writable::Trie2Writable(int initialValueP,int errorValueP)
{
	
	//    .param p1, "initialValueP"    # I
	//    .param p2, "errorValueP"    # I
	// 141    invoke-direct {p0}, Landroid/icu/impl/Trie2;-><init>()V
	this->index1 = std::make_shared<std::vector<int[]>>(0x220);
	this->index2 = std::make_shared<std::vector<int[]>>(0x8aa0);
	this->map = std::make_shared<std::vector<int[]>>(0x8824);
	this->UTRIE2_DEBUG = 0x0;
	this->init(initialValueP, errorValueP);
	return;

}
// .method public constructor <init>(Landroid/icu/impl/Trie2;)V
android::icu::impl::Trie2Writable::Trie2Writable(std::shared_ptr<android::icu::impl::Trie2> source)
{
	
	std::shared_ptr<java::util::Iterator> r_S_iterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> r;
	
	//    .param p1, "source"    # Landroid/icu/impl/Trie2;
	// 182    invoke-direct {p0}, Landroid/icu/impl/Trie2;-><init>()V
	this->index1 = std::make_shared<std::vector<int[]>>(0x220);
	this->index2 = std::make_shared<std::vector<int[]>>(0x8aa0);
	this->map = std::make_shared<std::vector<int[]>>(0x8824);
	this->UTRIE2_DEBUG = 0x0;
	this->init(source->initialValue, source->errorValue);
	r_S_iterator = source->iterator();
	//    .local v1, "r$iterator":Ljava/util/Iterator;
label_goto_25:
	if ( !(r_S_iterator->hasNext()) )  
		goto label_cond_36;
	r = r_S_iterator->next();
	r->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v0, "r":Landroid/icu/impl/Trie2$Range;
	this->setRange(r, 0x1);
	goto label_goto_25;
	// 244    .line 153
	// 245    .end local v0    # "r":Landroid/icu/impl/Trie2$Range;
label_cond_36:
	return;

}
// .method private allocDataBlock(I)I
int android::icu::impl::Trie2Writable::allocDataBlock(int copyBlock)
{
	
	int cVar0;
	int newBlock;
	int newTop;
	int capacity;
	std::shared<std::vector<int[]>> newData;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	
	//    .param p1, "copyBlock"    # I
	cVar0 = 0x0;
	if ( !(this->firstFreeBlock) )  
		goto label_cond_20;
	newBlock = this->firstFreeBlock;
	//    .local v1, "newBlock":I
	this->firstFreeBlock = (0 - this->map[_shri(newBlock,0x5)]);
label_goto_10:
	java::lang::System::arraycopy(this->data, copyBlock, this->data, newBlock, 0x20);
	this->map[_shri(newBlock,0x5)] = cVar0;
	return newBlock;
	// 297    .line 213
	// 298    .end local v1    # "newBlock":I
label_cond_20:
	newBlock = this->dataLength;
	//    .restart local v1    # "newBlock":I
	newTop = ( newBlock + 0x20);
	//    .local v3, "newTop":I
	if ( newTop <= this->dataCapacity )
		goto label_cond_3d;
	if ( this->dataCapacity >= 0x20000 )
		goto label_cond_40;
	capacity = 0x20000;
	//    .local v0, "capacity":I
label_goto_30:
	newData = std::make_shared<std::vector<int[]>>(capacity);
	//    .local v2, "newData":[I
	java::lang::System::arraycopy(this->data, cVar0, newData, cVar0, this->dataLength);
	this->data = newData;
	this->dataCapacity = capacity;
	//    .end local v0    # "capacity":I
	//    .end local v2    # "newData":[I
label_cond_3d:
	this->dataLength = newTop;
	goto label_goto_10;
	// 349    .line 222
label_cond_40:
	if ( this->dataCapacity >= 0x110480 )
		goto label_cond_4b;
	capacity = 0x110480;
	//    .restart local v0    # "capacity":I
	goto label_goto_30;
	// 363    .line 230
	// 364    .end local v0    # "capacity":I
label_cond_4b:
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal error in Trie2 creation.")));
	// throw
	throw cVar1;

}
// .method private allocIndex2Block()I
int android::icu::impl::Trie2Writable::allocIndex2Block()
{
	
	int newBlock;
	int newTop;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	newBlock = this->index2Length;
	//    .local v0, "newBlock":I
	newTop = ( newBlock + 0x40);
	//    .local v1, "newTop":I
	if ( newTop <= this->index2->size() )
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal error in Trie2 creation.")));
	// throw
	throw cVar0;
	// 403    .line 183
label_cond_12:
	this->index2Length = newTop;
	java::lang::System::arraycopy(this->index2, this->index2NullOffset, this->index2, newBlock, 0x40);
	return newBlock;

}
// .method private compactData()V
void android::icu::impl::Trie2Writable::compactData()
{
	
	int newStart;
	int start;
	int i;
	int blockLength;
	int blockCount;
	int movedStart;
	int mapIndex;
	int overlap;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	
	newStart = 0xc0;
	//    .local v7, "newStart":I
	start = 0x0;
	//    .local v10, "start":I
	i = 0x0;
	//    .local v3, "i":I
label_goto_4:
	if ( start >= 0xc0 )
		goto label_cond_13;
	this->map[i] = start;
	start = ( start + 0x20);
	i = ( i + 0x1);
	goto label_goto_4;
	// 458    .line 756
label_cond_13:
	blockLength = 0x40;
	//    .local v2, "blockLength":I
	//    .local v1, "blockCount":I
	start = 0xc0;
label_goto_18:
	if ( start >= this->dataLength )
		goto label_cond_b7;
	if ( start != 0x880 )
		goto label_cond_25;
	blockLength = 0x20;
	blockCount = 0x1;
label_cond_25:
	if ( this->map[_shri(start,0x5)] > 0 ) 
		goto label_cond_31;
	start = (start +  blockLength);
	goto label_goto_18;
	// 507    .line 779
label_cond_31:
	movedStart = this->findSameDataBlock(newStart, start, blockLength);
	//    .local v6, "movedStart":I
	if ( movedStart < 0 ) 
		goto label_cond_4f;
	i = blockCount;
	//    .local v4, "mapIndex":I
	mapIndex = _shri(start,0x5);
	//    .end local v4    # "mapIndex":I
	//    .local v5, "mapIndex":I
label_goto_3d:
	if ( i <= 0 )
		goto label_cond_4d;
	//    .end local v5    # "mapIndex":I
	//    .restart local v4    # "mapIndex":I
	this->map[mapIndex] = movedStart;
	movedStart = ( movedStart + 0x20);
	i = ( i + -0x1);
	mapIndex = ( mapIndex + 0x1);
	//    .end local v4    # "mapIndex":I
	//    .restart local v5    # "mapIndex":I
	goto label_goto_3d;
	// 555    .line 788
label_cond_4d:
	start = (start +  blockLength);
	goto label_goto_18;
	// 562    .line 796
	// 563    .end local v5    # "mapIndex":I
label_cond_4f:
	overlap = ( blockLength + -0x4);
	//    .local v9, "overlap":I
label_goto_51:
	if ( overlap <= 0 )
		goto label_cond_66;
	if ( !(( this->equal_int(this->data, (newStart - overlap), start, overlap) ^ 0x1)) )  
		goto label_cond_66;
	overlap = ( overlap + -0x4);
	goto label_goto_51;
	// 594    .line 800
label_cond_66:
	if ( overlap > 0 ) 
		goto label_cond_6a;
	if ( newStart >= start )
		goto label_cond_a0;
label_cond_6a:
	movedStart = (newStart - overlap);
	i = 0x2;
	//    .restart local v4    # "mapIndex":I
	mapIndex = _shri(start,0x5);
	//    .end local v4    # "mapIndex":I
	//    .restart local v5    # "mapIndex":I
label_goto_70:
	if ( i <= 0 )
		goto label_cond_80;
	//    .end local v5    # "mapIndex":I
	//    .restart local v4    # "mapIndex":I
	this->map[mapIndex] = movedStart;
	movedStart = ( movedStart + 0x20);
	i = ( i + -0x1);
	mapIndex = ( mapIndex + 0x1);
	//    .end local v4    # "mapIndex":I
	//    .restart local v5    # "mapIndex":I
	goto label_goto_70;
	// 640    .line 809
label_cond_80:
	start = (start +  overlap);
	i = (blockLength - overlap);
	start = start;
	//    .end local v10    # "start":I
	//    .local v11, "start":I
	newStart = newStart;
	//    .end local v7    # "newStart":I
	//    .local v8, "newStart":I
label_goto_85:
	if ( i <= 0 )
		goto label_cond_9c;
	newStart = ( newStart + 0x1);
	//    .end local v8    # "newStart":I
	//    .restart local v7    # "newStart":I
	start = ( start + 0x1);
	//    .end local v11    # "start":I
	//    .restart local v10    # "start":I
	this->data[newStart] = this->data[start];
	i = ( i + -0x1);
	start = start;
	//    .end local v10    # "start":I
	//    .restart local v11    # "start":I
	newStart = newStart;
	//    .end local v7    # "newStart":I
	//    .restart local v8    # "newStart":I
	goto label_goto_85;
label_cond_9c:
	start = start;
	//    .end local v11    # "start":I
	//    .restart local v10    # "start":I
	newStart = newStart;
	//    .end local v8    # "newStart":I
	//    .restart local v7    # "newStart":I
	goto label_goto_18;
	// 704    .line 814
	// 705    .end local v5    # "mapIndex":I
label_cond_a0:
	i = blockCount;
	//    .restart local v4    # "mapIndex":I
	mapIndex = _shri(start,0x5);
	//    .end local v4    # "mapIndex":I
	//    .restart local v5    # "mapIndex":I
label_goto_a4:
	if ( i <= 0 )
		goto label_cond_b4;
	//    .end local v5    # "mapIndex":I
	//    .restart local v4    # "mapIndex":I
	this->map[mapIndex] = start;
	start = ( start + 0x20);
	i = ( i + -0x1);
	mapIndex = ( mapIndex + 0x1);
	//    .end local v4    # "mapIndex":I
	//    .restart local v5    # "mapIndex":I
	goto label_goto_a4;
	// 742    .line 818
label_cond_b4:
	newStart = start;
	goto label_goto_18;
	// 748    .line 823
	// 749    .end local v5    # "mapIndex":I
	// 750    .end local v6    # "movedStart":I
	// 751    .end local v9    # "overlap":I
label_cond_b7:
	i = 0x0;
label_goto_b8:
	if ( i >= this->index2Length )
		goto label_cond_db;
	if ( i != 0x820 )
		goto label_cond_c4;
	i = ( i + 0x240);
label_cond_c4:
	this->index2[i] = this->map[_shri(this->index2[i],0x5)];
	i = ( i + 0x1);
	goto label_goto_b8;
	// 797    .line 830
label_cond_db:
	this->dataNullOffset = this->map[_shri(this->dataNullOffset,0x5)];
	newStart = newStart;
	//    .end local v7    # "newStart":I
	//    .restart local v8    # "newStart":I
label_goto_ec:
	if ( !(( newStart & 0x3)) )  
		goto label_cond_fe;
	newStart = ( newStart + 0x1);
	//    .end local v8    # "newStart":I
	//    .restart local v7    # "newStart":I
	this->data[newStart] = this->initialValue;
	newStart = newStart;
	//    .end local v7    # "newStart":I
	//    .restart local v8    # "newStart":I
	goto label_goto_ec;
	// 846    .line 837
label_cond_fe:
	if ( !(this->UTRIE2_DEBUG) )  
		goto label_cond_123;
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar0[0x0] = java::lang::Integer::valueOf(this->dataLength);
	cVar0[0x1] = java::lang::Integer::valueOf(newStart);
	java::lang::System::out->printf(std::make_shared<java::lang::String>(std::make_shared<char[]>("compacting UTrie2: count of 32-bit data words %d->%d%n")), cVar0);
label_cond_123:
	this->dataLength = newStart;
	return;

}
// .method private compactIndex2()V
void android::icu::impl::Trie2Writable::compactIndex2()
{
	
	int newStart;
	int start;
	int i;
	int movedStart;
	int overlap;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	
	newStart = 0x820;
	//    .local v2, "newStart":I
	start = 0x0;
	//    .local v5, "start":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( start >= 0x820 )
		goto label_cond_12;
	this->map[i] = start;
	start = ( start + 0x40);
	i = ( i + 0x1);
	goto label_goto_7;
	// 931    .line 856
label_cond_12:
	newStart = ( ( _shri((this->highStart -  0x10000),0xb) + 0x20) + 0x820);
	start = 0xa60;
label_goto_1f:
	if ( start >= this->index2Length )
		goto label_cond_76;
	movedStart = this->findSameIndex2Block(newStart, start);
	//    .local v1, "movedStart":I
	if ( movedStart < 0 ) 
		goto label_cond_32;
	this->map[_shri(start,0x6)] = movedStart;
	start = ( start + 0x40);
	goto label_goto_1f;
	// 974    .line 881
label_cond_32:
	overlap = 0x3f;
	//    .local v4, "overlap":I
label_goto_34:
	if ( overlap <= 0 )
		goto label_cond_45;
	if ( !(( this->equal_int(this->index2, (newStart - overlap), start, overlap) ^ 0x1)) )  
		goto label_cond_45;
	overlap = ( overlap + -0x1);
	goto label_goto_34;
	// 1001    .line 885
label_cond_45:
	if ( overlap > 0 ) 
		goto label_cond_49;
	if ( newStart >= start )
		goto label_cond_6c;
label_cond_49:
	this->map[_shri(start,0x6)] = (newStart - overlap);
	start = (start +  overlap);
	i = ( overlap - 0x40);
	start = start;
	//    .end local v5    # "start":I
	//    .local v6, "start":I
	newStart = newStart;
	//    .end local v2    # "newStart":I
	//    .local v3, "newStart":I
label_goto_56:
	if ( i <= 0 )
		goto label_cond_69;
	newStart = ( newStart + 0x1);
	//    .end local v3    # "newStart":I
	//    .restart local v2    # "newStart":I
	start = ( start + 0x1);
	//    .end local v6    # "start":I
	//    .restart local v5    # "start":I
	this->index2[newStart] = this->index2[start];
	i = ( i + -0x1);
	start = start;
	//    .end local v5    # "start":I
	//    .restart local v6    # "start":I
	newStart = newStart;
	//    .end local v2    # "newStart":I
	//    .restart local v3    # "newStart":I
	goto label_goto_56;
label_cond_69:
	start = start;
	//    .end local v6    # "start":I
	//    .restart local v5    # "start":I
	newStart = newStart;
	//    .end local v3    # "newStart":I
	//    .restart local v2    # "newStart":I
	goto label_goto_1f;
	// 1076    .line 895
label_cond_6c:
	this->map[_shri(start,0x6)] = start;
	start = ( start + 0x40);
	newStart = start;
	goto label_goto_1f;
	// 1092    .line 902
	// 1093    .end local v1    # "movedStart":I
	// 1094    .end local v4    # "overlap":I
label_cond_76:
	i = 0x0;
label_goto_77:
	if ( i >= 0x220 )
		goto label_cond_8c;
	this->index1[i] = this->map[_shri(this->index1[i],0x6)];
	i = ( i + 0x1);
	goto label_goto_77;
	// 1123    .line 905
label_cond_8c:
	this->index2NullOffset = this->map[_shri(this->index2NullOffset,0x6)];
	newStart = newStart;
	//    .end local v2    # "newStart":I
	//    .restart local v3    # "newStart":I
label_goto_97:
	if ( !(( newStart & 0x3)) )  
		goto label_cond_a6;
	newStart = ( newStart + 0x1);
	//    .end local v3    # "newStart":I
	//    .restart local v2    # "newStart":I
	this->index2[newStart] = 0x3fffc;
	newStart = newStart;
	//    .end local v2    # "newStart":I
	//    .restart local v3    # "newStart":I
	goto label_goto_97;
	// 1162    .line 918
label_cond_a6:
	if ( !(this->UTRIE2_DEBUG) )  
		goto label_cond_c4;
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar0[0x0] = java::lang::Integer::valueOf(this->index2Length);
	cVar0[0x1] = java::lang::Integer::valueOf(newStart);
	java::lang::System::out->printf(std::make_shared<java::lang::String>(std::make_shared<char[]>("compacting UTrie2: count of 16-bit index-2 words %d->%d%n")), cVar0);
label_cond_c4:
	this->index2Length = newStart;
	return;

}
// .method private compactTrie()V
void android::icu::impl::Trie2Writable::compactTrie()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	bool cVar4;
	int highValue;
	int localHighStart;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar5;
	int cVar6;
	int cVar7;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar8;
	
	cVar0 = 0x10000;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x0;
	cVar4 = 0x1;
	highValue = this->get(0x10ffff);
	//    .local v0, "highValue":I
	//    .local v1, "localHighStart":I
	localHighStart = ( ( this->findHighStart(highValue) + 0x7ff) & -0x800);
	if ( localHighStart != 0x110000 )
		goto label_cond_1b;
	highValue = this->errorValue;
label_cond_1b:
	this->highStart = localHighStart;
	if ( !(this->UTRIE2_DEBUG) )  
		goto label_cond_41;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar1);
	cVar5[cVar3] = java::lang::Integer::valueOf(this->highStart);
	cVar5[cVar4] = java::lang::Integer::valueOf(highValue);
	cVar5[cVar2] = java::lang::Integer::valueOf(this->initialValue);
	java::lang::System::out->printf(std::make_shared<java::lang::String>(std::make_shared<char[]>("UTrie2: highStart U+%04x  highValue 0x%x  initialValue 0x%x%n")), cVar5);
label_cond_41:
	if ( this->highStart >= 0x110000 )
		goto label_cond_55;
	if ( this->highStart >  cVar0 )
		goto label_cond_7c;
	//    .local v2, "suppHighStart":I
label_goto_4d:
	this->setRange(suppHighStart, 0x10ffff, this->initialValue, cVar4);
	//    .end local v2    # "suppHighStart":I
label_cond_55:
	this->compactData();
	if ( this->highStart <= cVar0 )
		goto label_cond_7f;
	this->compactIndex2();
label_cond_5f:
label_goto_5f:
	cVar6 = this->dataLength;
	this->dataLength = ( cVar6 + 0x1);
	this->data[cVar6] = highValue;
label_goto_69:
	if ( !(( this->dataLength & 0x3)) )  
		goto label_cond_a6;
	cVar7 = this->dataLength;
	this->dataLength = ( cVar7 + 0x1);
	this->data[cVar7] = this->initialValue;
	goto label_goto_69;
	// 1361    .line 953
label_cond_7c:
	//    .restart local v2    # "suppHighStart":I
	goto label_goto_4d;
	// 1368    .line 961
	// 1369    .end local v2    # "suppHighStart":I
label_cond_7f:
	if ( !(this->UTRIE2_DEBUG) )  
		goto label_cond_5f;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(cVar1);
	cVar8[cVar3] = java::lang::Integer::valueOf(this->highStart);
	cVar8[cVar4] = java::lang::Integer::valueOf(this->index2Length);
	cVar8[cVar2] = java::lang::Integer::valueOf(0x840);
	java::lang::System::out->printf(std::make_shared<java::lang::String>(std::make_shared<char[]>("UTrie2: highStart U+%04x  count of 16-bit index-2 words %d->%d%n")), cVar8);
	goto label_goto_5f;
	// 1412    .line 977
label_cond_a6:
	this->isCompacted = cVar4;
	return;

}
// .method private equal_int([IIII)Z
bool android::icu::impl::Trie2Writable::equal_int(std::shared_ptr<int[]> a,int s,int t,int length)
{
	
	int i;
	
	//    .param p1, "a"    # [I
	//    .param p2, "s"    # I
	//    .param p3, "t"    # I
	//    .param p4, "length"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= length )
		goto label_cond_12;
	if ( a[(s + i)] == a[(t + i)] )
		goto label_cond_f;
	return 0x0;
	// 1451    .line 620
label_cond_f:
	i = ( i + 0x1);
	goto label_goto_1;
	// 1457    .line 625
label_cond_12:
	return 0x1;

}
// .method private fillBlock(IIIIIZ)V
void android::icu::impl::Trie2Writable::fillBlock(int block,int start,int limit,int value,int initialValue,bool overwrite)
{
	
	int pLimit;
	int i;
	
	//    .param p1, "block"    # I
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "value"    # I
	//    .param p5, "initialValue"    # I
	//    .param p6, "overwrite"    # Z
	pLimit = (block + limit);
	//    .local v1, "pLimit":I
	if ( !(overwrite) )  
		goto label_cond_f;
	i = (block + start);
	//    .local v0, "i":I
label_goto_6:
	if ( i >= pLimit )
		goto label_cond_20;
	this->data[i] = value;
	i = ( i + 0x1);
	goto label_goto_6;
	// 1498    .line 373
	// 1499    .end local v0    # "i":I
label_cond_f:
	i = (block + start);
	//    .restart local v0    # "i":I
label_goto_11:
	if ( i >= pLimit )
		goto label_cond_20;
	if ( this->data[i] != initialValue )
		goto label_cond_1d;
	this->data[i] = value;
label_cond_1d:
	i = ( i + 0x1);
	goto label_goto_11;
	// 1525    .line 379
label_cond_20:
	return;

}
// .method private findHighStart(I)I
int android::icu::impl::Trie2Writable::findHighStart(int highValue)
{
	
	int prevI2Block;
	int prevBlock;
	int c;
	int i1;
	int i2Block;
	int i2;
	int block;
	int j;
	
	//    .param p1, "highValue"    # I
	if ( highValue != this->initialValue )
		goto label_cond_1c;
	prevI2Block = this->index2NullOffset;
	//    .local v8, "prevI2Block":I
	prevBlock = this->dataNullOffset;
	//    .local v7, "prevBlock":I
label_goto_9:
	0x110000;
	//    .local v6, "prev":I
	//    .local v2, "i1":I
	c = 0x110000;
	//    .local v1, "c":I
label_cond_f:
label_goto_f:
	if ( c <= 0 )
		goto label_cond_5c;
	i1 = ( i1 + -0x1);
	i2Block = this->index1[i1];
	//    .local v4, "i2Block":I
	if ( i2Block != prevI2Block )
		goto label_cond_1f;
	c = ( c + -0x800);
	goto label_goto_f;
	// 1585    .line 674
	// 1586    .end local v1    # "c":I
	// 1587    .end local v2    # "i1":I
	// 1588    .end local v4    # "i2Block":I
	// 1589    .end local v6    # "prev":I
	// 1590    .end local v7    # "prevBlock":I
	// 1591    .end local v8    # "prevI2Block":I
label_cond_1c:
	prevI2Block = -0x1;
	//    .restart local v8    # "prevI2Block":I
	prevBlock = -0x1;
	//    .restart local v7    # "prevBlock":I
	goto label_goto_9;
	// 1602    .line 689
	// 1603    .restart local v1    # "c":I
	// 1604    .restart local v2    # "i1":I
	// 1605    .restart local v4    # "i2Block":I
	// 1606    .restart local v6    # "prev":I
label_cond_1f:
	prevI2Block = i2Block;
	if ( i2Block != this->index2NullOffset )
		goto label_cond_2c;
	if ( highValue == this->initialValue )
		goto label_cond_29;
	return c;
	// 1623    .line 695
label_cond_29:
	c = ( c + -0x800);
	goto label_goto_f;
	// 1629    .line 698
label_cond_2c:
	i2 = 0x40;
	//    .local v3, "i2":I
label_cond_2e:
label_goto_2e:
	if ( i2 <= 0 )
		goto label_cond_f;
	i2 = ( i2 + -0x1);
	block = this->index2[(i2Block + i2)];
	//    .local v0, "block":I
	if ( block != prevBlock )
		goto label_cond_3d;
	c = ( c + -0x20);
	goto label_goto_2e;
	// 1657    .line 705
label_cond_3d:
	prevBlock = block;
	if ( block != this->dataNullOffset )
		goto label_cond_4a;
	if ( highValue == this->initialValue )
		goto label_cond_47;
	return c;
	// 1674    .line 711
label_cond_47:
	c = ( c + -0x20);
	goto label_goto_2e;
	// 1680    .line 713
label_cond_4a:
	j = 0x20;
	//    .local v5, "j":I
label_goto_4c:
	if ( j <= 0 )
		goto label_cond_2e;
	j = ( j + -0x1);
	//    .local v9, "value":I
	if ( this->data[(block + j)] == highValue )
		goto label_cond_59;
	return c;
	// 1704    .line 718
label_cond_59:
	c = ( c + -0x1);
	goto label_goto_4c;
	// 1710    .line 726
	// 1711    .end local v0    # "block":I
	// 1712    .end local v3    # "i2":I
	// 1713    .end local v4    # "i2Block":I
	// 1714    .end local v5    # "j":I
	// 1715    .end local v9    # "value":I
label_cond_5c:
	return 0x0;

}
// .method private findSameDataBlock(III)I
int android::icu::impl::Trie2Writable::findSameDataBlock(int dataLength,int otherBlock,int blockLength)
{
	
	int block;
	
	//    .param p1, "dataLength"    # I
	//    .param p2, "otherBlock"    # I
	//    .param p3, "blockLength"    # I
	block = 0x0;
	//    .local v0, "block":I
label_goto_2:
	if ( block >  (dataLength -  blockLength) )
		goto label_cond_10;
	if ( !(this->equal_int(this->data, block, otherBlock, blockLength)) )  
		goto label_cond_d;
	return block;
	// 1749    .line 650
label_cond_d:
	block = ( block + 0x4);
	goto label_goto_2;
	// 1755    .line 655
label_cond_10:
	return -0x1;

}
// .method private findSameIndex2Block(II)I
int android::icu::impl::Trie2Writable::findSameIndex2Block(int index2Length,int otherBlock)
{
	
	int block;
	
	//    .param p1, "index2Length"    # I
	//    .param p2, "otherBlock"    # I
	block = 0x0;
	//    .local v0, "block":I
label_goto_3:
	if ( block >  ( index2Length + -0x40) )
		goto label_cond_13;
	if ( !(this->equal_int(this->index2, block, otherBlock, 0x40)) )  
		goto label_cond_10;
	return block;
	// 1792    .line 635
label_cond_10:
	block = ( block + 0x1);
	goto label_goto_3;
	// 1798    .line 640
label_cond_13:
	return -0x1;

}
// .method private freeze(Landroid/icu/impl/Trie2;Landroid/icu/impl/Trie2$ValueWidth;)V
void android::icu::impl::Trie2Writable::freeze(std::shared_ptr<android::icu::impl::Trie2> dest,std::shared_ptr<android::icu::impl::Trie2_S_ValueWidth> valueBits)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int allIndexesLength;
	int dataMove;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar3;
	int indexLength;
	std::shared_ptr<android::icu::impl::Trie2_S_UTrie2Header> cVar4;
	int i;
	int destIdx;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	int index1Length;
	int index2Offset;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::lang::AssertionError> cVar10;
	
	//    .param p1, "dest"    # Landroid/icu/impl/Trie2;
	//    .param p2, "valueBits"    # Landroid/icu/impl/Trie2$ValueWidth;
	cVar0 = 0x0;
	cVar1 = 0x10000;
	cVar2 = 0xffff;
	if ( this->isCompacted )     
		goto label_cond_d;
	this->compactTrie();
label_cond_d:
	if ( this->highStart >  cVar1 )
		goto label_cond_28;
	allIndexesLength = 0x840;
	//    .local v0, "allIndexesLength":I
label_goto_13:
	if ( valueBits != android::icu::impl::Trie2_S_ValueWidth::BITS_16 )
		goto label_cond_2b;
	dataMove = allIndexesLength;
	//    .local v1, "dataMove":I
label_goto_18:
	if ( allIndexesLength >  cVar2 )
		goto label_cond_1f;
	if ( (this->dataNullOffset +  dataMove) <= cVar2 )
		goto label_cond_2d;
label_cond_1f:
	cVar3 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Trie2 data is too large.")));
	// throw
	throw cVar3;
	// 1866    .line 1034
	// 1867    .end local v0    # "allIndexesLength":I
	// 1868    .end local v1    # "dataMove":I
label_cond_28:
	//    .restart local v0    # "allIndexesLength":I
	goto label_goto_13;
	// 1875    .line 1039
label_cond_2b:
	0x0;
	//    .restart local v1    # "dataMove":I
	goto label_goto_18;
	// 1882    .line 1048
label_cond_2d:
	if ( ( dataMove + 0x880) >  cVar2 )
		goto label_cond_1f;
	if ( (this->dataLength +  dataMove) >  0x3fffc )
		goto label_cond_1f;
	indexLength = allIndexesLength;
	//    .local v7, "indexLength":I
	if ( valueBits != android::icu::impl::Trie2_S_ValueWidth::BITS_16 )
		goto label_cond_ba;
label_goto_41:
	dest->index = std::make_shared<std::vector<char[]>>(indexLength);
	dest->indexLength = allIndexesLength;
	dest->dataLength = this->dataLength;
	if ( this->highStart >  cVar1 )
		goto label_cond_c1;
	dest->index2NullOffset = cVar2;
label_goto_51:
	dest->initialValue = this->initialValue;
	dest->errorValue = this->errorValue;
	dest->highStart = this->highStart;
	dest->highValueIndex = ( (this->dataLength +  dataMove) + -0x4);
	dest->dataNullOffset = (this->dataNullOffset +  dataMove);
	cVar4 = std::make_shared<android::icu::impl::Trie2_S_UTrie2Header>();
	dest->header = cVar4;
	dest->header->signature = 0x54726932;
	if ( valueBits != android::icu::impl::Trie2_S_ValueWidth::BITS_16 )
		goto label_cond_c8;
label_goto_7d:
	dest->header->options = cVar0;
	dest->header->indexLength = dest->indexLength;
	dest->header->shiftedDataLength = _shri(dest->dataLength,0x2);
	dest->header->index2NullOffset = dest->index2NullOffset;
	dest->header->dataNullOffset = dest->dataNullOffset;
	dest->header->shiftedHighStart = _shri(dest->highStart,0xb);
	//    .local v2, "destIdx":I
	i = 0x0;
	//    .local v4, "i":I
	destIdx = 0x0;
	//    .end local v2    # "destIdx":I
	//    .local v3, "destIdx":I
label_goto_a4:
	if ( i >= 0x820 )
		goto label_cond_ca;
	//    .end local v3    # "destIdx":I
	//    .restart local v2    # "destIdx":I
	dest->index[destIdx] = (char)(_shri((this->index2[i] +  dataMove),0x2));
	i = ( i + 0x1);
	destIdx = ( destIdx + 0x1);
	//    .end local v2    # "destIdx":I
	//    .restart local v3    # "destIdx":I
	goto label_goto_a4;
	// 2073    .line 1059
	// 2074    .end local v3    # "destIdx":I
	// 2075    .end local v4    # "i":I
label_cond_ba:
	dest->data32 = std::make_shared<std::vector<int[]>>(this->dataLength);
	goto label_goto_41;
	// 2085    .line 1068
label_cond_c1:
	dest->index2NullOffset = ( this->index2NullOffset + 0x0);
	goto label_goto_51;
	// 2095    .line 1081
label_cond_c8:
	cVar0 = 0x1;
	goto label_goto_7d;
	// 2101    .line 1095
	// 2102    .restart local v3    # "destIdx":I
	// 2103    .restart local v4    # "i":I
label_cond_ca:
	if ( !(this->UTRIE2_DEBUG) )  
		goto label_cond_eb;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\nIndex2 for BMP limit is ")))->append(java::lang::Integer::toHexString(destIdx))->toString());
label_cond_eb:
	i = 0x0;
label_goto_ec:
	if ( i >= 0x2 )
		goto label_cond_fc;
	//    .end local v3    # "destIdx":I
	//    .restart local v2    # "destIdx":I
	dest->index[destIdx] = (char)(( dataMove + 0x80));
	i = ( i + 0x1);
	destIdx = ( destIdx + 0x1);
	//    .end local v2    # "destIdx":I
	//    .restart local v3    # "destIdx":I
	goto label_goto_ec;
	// 2167    .line 1103
label_cond_fc:
label_goto_fc:
	if ( i >= 0x20 )
		goto label_cond_112;
	//    .end local v3    # "destIdx":I
	//    .restart local v2    # "destIdx":I
	dest->index[destIdx] = (char)((this->index2[( i << 0x1)] +  dataMove));
	i = ( i + 0x1);
	destIdx = ( destIdx + 0x1);
	//    .end local v2    # "destIdx":I
	//    .restart local v3    # "destIdx":I
	goto label_goto_fc;
	// 2202    .line 1106
label_cond_112:
	if ( !(this->UTRIE2_DEBUG) )  
		goto label_cond_133;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Index2 for UTF-8 2byte values limit is ")))->append(java::lang::Integer::toHexString(destIdx))->toString());
label_cond_133:
	if ( this->highStart <= cVar1 )
		goto label_cond_1f1;
	index1Length = _shri((this->highStart -  cVar1),0xb);
	//    .local v5, "index1Length":I
	index2Offset = ( index1Length + 0x840);
	//    .local v6, "index2Offset":I
	i = 0x0;
label_goto_13f:
	if ( i >= index1Length )
		goto label_cond_154;
	//    .end local v3    # "destIdx":I
	//    .restart local v2    # "destIdx":I
	dest->index[destIdx] = (char)(( this->index1[( i + 0x20)] + 0x0));
	i = ( i + 0x1);
	destIdx = ( destIdx + 0x1);
	//    .end local v2    # "destIdx":I
	//    .restart local v3    # "destIdx":I
	goto label_goto_13f;
	// 2287    .line 1120
label_cond_154:
	if ( !(this->UTRIE2_DEBUG) )  
		goto label_cond_175;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Index 1 for supplementals, limit is ")))->append(java::lang::Integer::toHexString(destIdx))->toString());
label_cond_175:
	i = 0x0;
	destIdx = destIdx;
	//    .end local v3    # "destIdx":I
	//    .restart local v2    # "destIdx":I
label_goto_177:
	if ( i >= (this->index2Length -  index2Offset) )
		goto label_cond_190;
	//    .end local v2    # "destIdx":I
	//    .restart local v3    # "destIdx":I
	dest->index[destIdx] = (char)(_shri((this->index2[(index2Offset + i)] +  dataMove),0x2));
	i = ( i + 0x1);
	destIdx = ( destIdx + 0x1);
	//    .end local v3    # "destIdx":I
	//    .restart local v2    # "destIdx":I
	goto label_goto_177;
	// 2365    .line 1131
label_cond_190:
	if ( !(this->UTRIE2_DEBUG) )  
		goto label_cond_1b1;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Index 2 for supplementals, limit is ")))->append(java::lang::Integer::toHexString(destIdx))->toString());
	//    .end local v5    # "index1Length":I
	//    .end local v6    # "index2Offset":I
label_cond_1b1:
label_goto_1b1:
	// switch
	{
	auto item = ( android::icu::impl::Trie2Writable::-getandroid-icu-impl-Trie2$ValueWidthSwitchesValues({const[class].FS-Param})[valueBits->ordinal()] );
	if (item == 1) goto label_pswitch_1bf;
	if (item == 2) goto label_pswitch_1e1;
	}
label_cond_1be:
	return;
	// 2419    .line 1140
label_pswitch_1bf:
	if ( android::icu::impl::Trie2Writable::_assertionsDisabled )     
		goto label_cond_1cb;
	if ( destIdx == dataMove )
		goto label_cond_1cb;
	cVar10 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar10;
	// 2433    .line 1141
label_cond_1cb:
	dest->data16 = destIdx;
	i = 0x0;
label_goto_1ce:
	if ( i >= this->dataLength )
		goto label_cond_1be;
	//    .end local v2    # "destIdx":I
	//    .restart local v3    # "destIdx":I
	dest->index[destIdx] = (char)(this->data[i]);
	i = ( i + 0x1);
	destIdx = ( destIdx + 0x1);
	//    .end local v3    # "destIdx":I
	//    .restart local v2    # "destIdx":I
	goto label_goto_1ce;
	// 2469    .line 1148
label_pswitch_1e1:
	i = 0x0;
label_goto_1e2:
	if ( i >= this->dataLength )
		goto label_cond_1be;
	dest->data32[i] = this->data[i];
	i = ( i + 0x1);
	goto label_goto_1e2;
	// 2492    .end local v2    # "destIdx":I
	// 2493    .restart local v3    # "destIdx":I
label_cond_1f1:
	destIdx;
	//    .end local v3    # "destIdx":I
	//    .restart local v2    # "destIdx":I
	goto label_goto_1b1;
	// 2501    .line 1137
	// 2502    nop
	// 2504    :pswitch_data_1f4
	// 2505    .packed-switch 0x1
	// 2506        :pswitch_1bf
	// 2507        :pswitch_1e1
	// 2508    .end packed-switch

}
// .method private get(IZ)I
int android::icu::impl::Trie2Writable::get(int c,bool fromLSCP)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "c"    # I
	//    .param p2, "fromLSCP"    # Z
	cVar0 = 0xdc00;
	cVar1 = 0xd800;
	if ( c <  this->highStart )
		goto label_cond_19;
	if ( c <  cVar1 )
		goto label_cond_e;
	if ( c <  cVar0 )
		goto label_cond_17;
label_cond_e:
	return this->data[( this->dataLength + -0x4)];
	// 2542    .line 584
label_cond_17:
	if ( fromLSCP )     
		goto label_cond_e;
label_cond_19:
	if ( c <  cVar1 )
		goto label_cond_2f;
	if ( c >= cVar0 )
		goto label_cond_2f;
	if ( !(fromLSCP) )  
		goto label_cond_2f;
	//    .local v1, "i2":I
label_goto_23:
	//    .local v0, "block":I
	return this->data[(( c & 0x1f) +  this->index2[i2])];
	// 2579    .line 592
	// 2580    .end local v0    # "block":I
	// 2581    .end local v1    # "i2":I
label_cond_2f:
	//    .restart local v1    # "i2":I
	goto label_goto_23;

}
// .method private getDataBlock(IZ)I
int android::icu::impl::Trie2Writable::getDataBlock(int c,bool forLSCP)
{
	
	int i2;
	int oldBlock;
	int newBlock;
	
	//    .param p1, "c"    # I
	//    .param p2, "forLSCP"    # Z
	//    .local v0, "i2":I
	i2 = (this->getIndex2Block(c, forLSCP) +  ( _shri(c,0x5) & 0x3f));
	oldBlock = this->index2[i2];
	//    .local v2, "oldBlock":I
	if ( !(this->isWritableBlock(oldBlock)) )  
		goto label_cond_14;
	return oldBlock;
	// 2636    .line 285
label_cond_14:
	newBlock = this->allocDataBlock(oldBlock);
	//    .local v1, "newBlock":I
	this->setIndex2Entry(i2, newBlock);
	return newBlock;

}
// .method private getIndex2Block(IZ)I
int android::icu::impl::Trie2Writable::getIndex2Block(int c,bool forLSCP)
{
	
	int i1;
	int i2;
	
	//    .param p1, "c"    # I
	//    .param p2, "forLSCP"    # Z
	if ( c <  0xd800 )
		goto label_cond_f;
	if ( c >= 0xdc00 )
		goto label_cond_f;
	if ( !(forLSCP) )  
		goto label_cond_f;
	return 0x800;
	// 2672    .line 195
label_cond_f:
	i1 = _shri(c,0xb);
	//    .local v0, "i1":I
	i2 = this->index1[i1];
	//    .local v1, "i2":I
	if ( i2 != this->index2NullOffset )
		goto label_cond_21;
	i2 = this->allocIndex2Block();
	this->index1[i1] = i2;
label_cond_21:
	return i2;

}
// .method private init(II)V
void android::icu::impl::Trie2Writable::init(int initialValueP,int errorValueP)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int i;
	int j;
	
	//    .param p1, "initialValueP"    # I
	//    .param p2, "errorValueP"    # I
	cVar0 = 0x80;
	cVar1 = 0xa60;
	cVar2 = 0x100;
	cVar3 = 0x0;
	cVar4 = 0xc0;
	this->initialValue = initialValueP;
	this->errorValue = errorValueP;
	this->highStart = 0x110000;
	this->data = std::make_shared<std::vector<int[]>>(0x4000);
	this->dataCapacity = 0x4000;
	this->initialValue = initialValueP;
	this->errorValue = errorValueP;
	this->highStart = 0x110000;
	this->firstFreeBlock = cVar3;
	this->isCompacted = cVar3;
	i = 0x0;
	//    .local v0, "i":I
label_goto_28:
	if ( i >= cVar0 )
		goto label_cond_33;
	this->data[i] = this->initialValue;
	i = ( i + 0x1);
	goto label_goto_28;
	// 2778    .line 58
label_cond_33:
label_goto_33:
	if ( i >= cVar4 )
		goto label_cond_3e;
	this->data[i] = this->errorValue;
	i = ( i + 0x1);
	goto label_goto_33;
	// 2795    .line 61
label_cond_3e:
	i = 0xc0;
label_goto_40:
	if ( i >= cVar2 )
		goto label_cond_4b;
	this->data[i] = this->initialValue;
	i = ( i + 0x1);
	goto label_goto_40;
	// 2814    .line 64
label_cond_4b:
	this->dataNullOffset = cVar4;
	this->dataLength = cVar2;
	i = 0x0;
	j = 0x0;
	//    .local v2, "j":I
label_goto_51:
	if ( j >= cVar0 )
		goto label_cond_db;
	this->index2[i] = j;
	this->map[i] = 0x1;
	i = ( i + 0x1);
	j = ( j + 0x20);
	goto label_goto_51;
	// 2849    .line 74
	// 2850    .end local v0    # "i":I
	// 2851    .local v1, "i":I
label_goto_61:
	if ( j >= cVar4 )
		goto label_cond_6d;
	this->map[i] = cVar3;
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	j = ( j + 0x20);
	i = i;
	//    .end local v0    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_61;
	// 2873    .line 84
label_cond_6d:
	i = ( i + 0x1);
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	this->map[i] = 0x881d;
	j = ( j + 0x20);
label_goto_78:
	if ( j >= cVar2 )
		goto label_cond_83;
	this->map[i] = cVar3;
	i = ( i + 0x1);
	j = ( j + 0x20);
	goto label_goto_78;
	// 2906    .line 98
label_cond_83:
	i = 0x4;
label_goto_84:
	if ( i >= 0x820 )
		goto label_cond_8f;
	this->index2[i] = cVar4;
	i = ( i + 0x1);
	goto label_goto_84;
	// 2925    .line 106
label_cond_8f:
	i = 0x0;
label_goto_90:
	if ( i >= 0x240 )
		goto label_cond_9e;
	this->index2[( i + 0x820)] = -0x1;
	i = ( i + 0x1);
	goto label_goto_90;
	// 2948    .line 111
label_cond_9e:
	i = 0x0;
label_goto_9f:
	if ( i >= 0x40 )
		goto label_cond_ac;
	this->index2[( i + 0xa60)] = cVar4;
	i = ( i + 0x1);
	goto label_goto_9f;
	// 2969    .line 114
label_cond_ac:
	this->index2NullOffset = cVar1;
	this->index2Length = 0xaa0;
	i = 0x0;
	j = 0x0;
label_goto_b4:
	if ( i >= 0x20 )
		goto label_cond_c1;
	this->index1[i] = j;
	i = ( i + 0x1);
	j = ( j + 0x40);
	goto label_goto_b4;
	// 3002    .line 126
label_cond_c1:
label_goto_c1:
	if ( i >= 0x220 )
		goto label_cond_cc;
	this->index1[i] = cVar1;
	i = ( i + 0x1);
	goto label_goto_c1;
	// 3019    .line 135
label_cond_cc:
	i = 0x80;
label_goto_ce:
	if ( i >= 0x800 )
		goto label_cond_da;
	this->set(i, this->initialValue);
	i = ( i + 0x20);
	goto label_goto_ce;
	// 3038    .line 139
label_cond_da:
	return;
label_cond_db:
	i = i;
	//    .end local v0    # "i":I
	//    .restart local v1    # "i":I
	goto label_goto_61;

}
// .method private isInNullBlock(IZ)Z
bool android::icu::impl::Trie2Writable::isInNullBlock(int c,bool forLSCP)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	//    .param p2, "forLSCP"    # Z
	if ( !(java::lang::Character::isHighSurrogate((char)(c))) )  
		goto label_cond_17;
	if ( !(forLSCP) )  
		goto label_cond_17;
	//    .local v1, "i2":I
label_goto_d:
	//    .local v0, "block":I
	if ( this->index2[i2] != this->dataNullOffset )
		goto label_cond_24;
	cVar0 = 0x1;
label_goto_16:
	return cVar0;
	// 3091    .line 163
	// 3092    .end local v0    # "block":I
	// 3093    .end local v1    # "i2":I
label_cond_17:
	//    .restart local v1    # "i2":I
	goto label_goto_d;
	// 3112    .line 167
	// 3113    .restart local v0    # "block":I
label_cond_24:
	cVar0 = 0x0;
	goto label_goto_16;

}
// .method private isWritableBlock(I)Z
bool android::icu::impl::Trie2Writable::isWritableBlock(int block)
{
	
	bool cVar0;
	
	//    .param p1, "block"    # I
	cVar0 = 0x1;
	if ( block == this->dataNullOffset )
		goto label_cond_f;
	if ( cVar0 != this->map[_shri(block,0x5)] )
		goto label_cond_f;
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method private releaseDataBlock(I)V
void android::icu::impl::Trie2Writable::releaseDataBlock(int block)
{
	
	//    .param p1, "block"    # I
	this->map[_shri(block,0x5)] = (0 - this->firstFreeBlock);
	this->firstFreeBlock = block;
	return;

}
// .method private set(IZI)Landroid/icu/impl/Trie2Writable;
std::shared_ptr<android::icu::impl::Trie2Writable> android::icu::impl::Trie2Writable::set(int c,bool forLSCP,int value)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "forLSCP"    # Z
	//    .param p3, "value"    # I
	if ( !(this->isCompacted) )  
		goto label_cond_7;
	this->uncompact();
label_cond_7:
	//    .local v0, "block":I
	this->data[(( c & 0x1f) +  this->getDataBlock(c, forLSCP))] = value;
	return this;

}
// .method private setIndex2Entry(II)V
void android::icu::impl::Trie2Writable::setIndex2Entry(int i2,int block)
{
	
	std::shared_ptr<int[]> cVar0;
	int cVar1;
	int oldBlock;
	std::shared_ptr<int[]> cVar2;
	int cVar3;
	int cVar4;
	
	//    .param p1, "i2"    # I
	//    .param p2, "block"    # I
	cVar0 = this->map;
	cVar1 = _shri(block,0x5);
	cVar0[cVar1] = ( cVar0[cVar1] + 0x1);
	oldBlock = this->index2[i2];
	//    .local v0, "oldBlock":I
	cVar2 = this->map;
	cVar3 = _shri(oldBlock,0x5);
	cVar4 = ( cVar2[cVar3] + -0x1);
	cVar2[cVar3] = cVar4;
	if ( cVar4 )     
		goto label_cond_1d;
	this->releaseDataBlock(oldBlock);
label_cond_1d:
	this->index2[i2] = block;
	return;

}
// .method private uncompact()V
void android::icu::impl::Trie2Writable::uncompact()
{
	
	std::shared_ptr<android::icu::impl::Trie2Writable> tempTrie;
	
	tempTrie = std::make_shared<android::icu::impl::Trie2Writable>(this);
	//    .local v0, "tempTrie":Landroid/icu/impl/Trie2Writable;
	this->index1 = tempTrie->index1;
	this->index2 = tempTrie->index2;
	this->data = tempTrie->data;
	this->index2Length = tempTrie->index2Length;
	this->dataCapacity = tempTrie->dataCapacity;
	this->isCompacted = tempTrie->isCompacted;
	this->header = tempTrie->header;
	this->index = tempTrie->index;
	this->data16 = tempTrie->data16;
	this->data32 = tempTrie->data32;
	this->indexLength = tempTrie->indexLength;
	this->dataLength = tempTrie->dataLength;
	this->index2NullOffset = tempTrie->index2NullOffset;
	this->initialValue = tempTrie->initialValue;
	this->errorValue = tempTrie->errorValue;
	this->highStart = tempTrie->highStart;
	this->highValueIndex = tempTrie->highValueIndex;
	this->dataNullOffset = tempTrie->dataNullOffset;
	return;

}
// .method private writeBlock(II)V
void android::icu::impl::Trie2Writable::writeBlock(int block,int value)
{
	
	int block;
	
	//    .param p1, "block"    # I
	//    .param p2, "value"    # I
	//    .local v1, "limit":I
	block = block;
	//    .end local p1    # "block":I
	//    .local v0, "block":I
label_goto_3:
	if ( block >= ( block + 0x20) )
		goto label_cond_d;
	//    .end local v0    # "block":I
	//    .restart local p1    # "block":I
	this->data[block] = value;
	block = ( block + 0x1);
	//    .end local p1    # "block":I
	//    .restart local v0    # "block":I
	goto label_goto_3;
	// 3395    .line 358
label_cond_d:
	return;

}
// .method public get(I)I
int android::icu::impl::Trie2Writable::get(int codePoint)
{
	
	//    .param p1, "codePoint"    # I
	if ( codePoint < 0 ) 
		goto label_cond_7;
	if ( codePoint <= 0x10ffff )
		goto label_cond_a;
label_cond_7:
	return this->errorValue;
	// 3420    .line 576
label_cond_a:
	return this->get(codePoint, 0x1);

}
// .method public getFromU16SingleLead(C)I
int android::icu::impl::Trie2Writable::getFromU16SingleLead(char c)
{
	
	//    .param p1, "c"    # C
	return this->get(c, 0x0);

}
// .method public set(II)Landroid/icu/impl/Trie2Writable;
std::shared_ptr<android::icu::impl::Trie2Writable> android::icu::impl::Trie2Writable::set(int c,int value)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "c"    # I
	//    .param p2, "value"    # I
	if ( c < 0 ) 
		goto label_cond_8;
	if ( c <= 0x10ffff )
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point.")));
	// throw
	throw cVar0;
	// 3471    .line 299
label_cond_11:
	this->set(c, 0x1, value);
	this->fHash = 0x0;
	return this;

}
// .method public setForLeadSurrogateCodeUnit(CI)Landroid/icu/impl/Trie2Writable;
std::shared_ptr<android::icu::impl::Trie2Writable> android::icu::impl::Trie2Writable::setForLeadSurrogateCodeUnit(char codeUnit,int value)
{
	
	int cVar0;
	
	//    .param p1, "codeUnit"    # C
	//    .param p2, "value"    # I
	cVar0 = 0x0;
	this->fHash = cVar0;
	this->set(codeUnit, cVar0, value);
	return this;

}
// .method public setRange(IIIZ)Landroid/icu/impl/Trie2Writable;
std::shared_ptr<android::icu::impl::Trie2Writable> android::icu::impl::Trie2Writable::setRange(int cVar1,int end,int value,bool overwrite)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int limit;
	int block;
	int nextStart;
	int cVar1;
	int rest;
	int repeatBlock;
	int setRepeatBlock;
	int i2;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "value"    # I
	//    .param p4, "overwrite"    # Z
	if ( cVar1 >  0x10ffff )
		goto label_cond_7;
	if ( cVar1 >= 0 )
		goto label_cond_10;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid code point range.")));
	// throw
	throw cVar0;
	// 3527    .line 401
label_cond_10:
	if ( end >  0x10ffff )
		goto label_cond_7;
	if ( end < 0 ) 
		goto label_cond_7;
	if ( cVar1 >  end )
		goto label_cond_7;
	if ( overwrite )     
		goto label_cond_26;
	if ( value != this->initialValue )
		goto label_cond_26;
	return this;
	// 3553    .line 407
label_cond_26:
	this->fHash = 0x0;
	if ( !(this->isCompacted) )  
		goto label_cond_30;
	this->uncompact();
label_cond_30:
	limit = ( end + 0x1);
	//    .local v9, "limit":I
	if ( !(( cVar1 & 0x1f)) )  
		goto label_cond_50;
	block = this->getDataBlock(cVar1, 0x1);
	//    .local v2, "block":I
	nextStart = ( ( cVar1 + 0x20) & -0x20);
	//    .local v10, "nextStart":I
	if ( nextStart >  limit )
		goto label_cond_6f;
	this->fillBlock(block, ( cVar1 & 0x1f), 0x20, value, this->initialValue, overwrite);
	cVar1 = nextStart;
	//    .end local v2    # "block":I
	//    .end local v10    # "nextStart":I
label_cond_50:
	rest = ( limit & 0x1f);
	//    .local v12, "rest":I
	if ( value != this->initialValue )
		goto label_cond_7e;
	repeatBlock = this->dataNullOffset;
	//    .local v11, "repeatBlock":I
label_goto_5c:
	if ( cVar1 >= ( limit & -0x20) )
		goto label_cond_ce;
	setRepeatBlock = 0x0;
	//    .local v13, "setRepeatBlock":Z
	if ( value != this->initialValue )
		goto label_cond_80;
	if ( !(this->isInNullBlock(cVar1, 0x1)) )  
		goto label_cond_80;
	cVar1 = ( cVar1 + 0x20);
	goto label_goto_5c;
	// 3664    .line 425
	// 3665    .end local v11    # "repeatBlock":I
	// 3666    .end local v12    # "rest":I
	// 3667    .end local v13    # "setRepeatBlock":Z
	// 3668    .restart local v2    # "block":I
	// 3669    .restart local v10    # "nextStart":I
label_cond_6f:
	this->fillBlock(block, ( cVar1 & 0x1f), ( limit & 0x1f), value, this->initialValue, overwrite);
	return this;
	// 3690    .line 441
	// 3691    .end local v2    # "block":I
	// 3692    .end local v10    # "nextStart":I
	// 3693    .restart local v12    # "rest":I
label_cond_7e:
	-0x1;
	//    .restart local v11    # "repeatBlock":I
	goto label_goto_5c;
	// 3700    .line 454
	// 3701    .restart local v13    # "setRepeatBlock":Z
label_cond_80:
	//    .local v8, "i2":I
	i2 = (this->getIndex2Block(cVar1, 0x1) +  ( _shri(cVar1,0x5) & 0x3f));
	block = this->index2[i2];
	//    .restart local v2    # "block":I
	if ( !(this->isWritableBlock(block)) )  
		goto label_cond_b3;
	if ( !(overwrite) )  
		goto label_cond_a5;
	if ( block <  0x880 )
		goto label_cond_a5;
	setRepeatBlock = 0x1;
label_cond_9b:
label_goto_9b:
	if ( !(setRepeatBlock) )  
		goto label_cond_a2;
	if ( repeatBlock < 0 ) 
		goto label_cond_c3;
	this->setIndex2Entry(i2, repeatBlock);
label_cond_a2:
label_goto_a2:
	cVar1 = ( cVar1 + 0x20);
	goto label_goto_5c;
	// 3758    .line 470
label_cond_a5:
	this->fillBlock(block, 0x0, 0x20, value, this->initialValue, overwrite);
	goto label_goto_9b;
	// 3778    .line 472
label_cond_b3:
	if ( this->data[block] == value )
		goto label_cond_9b;
	if ( overwrite )     
		goto label_cond_c1;
	if ( block != this->dataNullOffset )
		goto label_cond_9b;
label_cond_c1:
	setRepeatBlock = 0x1;
	goto label_goto_9b;
	// 3800    .line 496
label_cond_c3:
	repeatBlock = this->getDataBlock(cVar1, 0x1);
	this->writeBlock(repeatBlock, value);
	goto label_goto_a2;
	// 3815    .line 504
	// 3816    .end local v2    # "block":I
	// 3817    .end local v8    # "i2":I
	// 3818    .end local v13    # "setRepeatBlock":Z
label_cond_ce:
	if ( rest <= 0 )
		goto label_cond_e1;
	//    .restart local v2    # "block":I
	this->fillBlock(this->getDataBlock(cVar1, 0x1), 0x0, rest, value, this->initialValue, overwrite);
	//    .end local v2    # "block":I
label_cond_e1:
	return this;

}
// .method public setRange(Landroid/icu/impl/Trie2$Range;Z)Landroid/icu/impl/Trie2Writable;
std::shared_ptr<android::icu::impl::Trie2Writable> android::icu::impl::Trie2Writable::setRange(std::shared_ptr<android::icu::impl::Trie2_S_Range> range,bool overwrite)
{
	
	int c;
	
	//    .param p1, "range"    # Landroid/icu/impl/Trie2$Range;
	//    .param p2, "overwrite"    # Z
	this->fHash = 0x0;
	if ( !(range->leadSurrogate) )  
		goto label_cond_21;
	c = range->startCodePoint;
	//    .local v0, "c":I
label_goto_9:
	if ( c >  range->endCodePoint )
		goto label_cond_2a;
	if ( overwrite )     
		goto label_cond_18;
	if ( this->getFromU16SingleLead((char)(c)) != this->initialValue )
		goto label_cond_1e;
label_cond_18:
	this->setForLeadSurrogateCodeUnit((char)(c), range->value);
label_cond_1e:
	c = ( c + 0x1);
	goto label_goto_9;
	// 3903    .line 537
	// 3904    .end local v0    # "c":I
label_cond_21:
	this->setRange(range->startCodePoint, range->endCodePoint, range->value, overwrite);
label_cond_2a:
	return this;

}
// .method public toTrie2_16()Landroid/icu/impl/Trie2_16;
std::shared_ptr<android::icu::impl::Trie2_16> android::icu::impl::Trie2Writable::toTrie2_16()
{
	
	std::shared_ptr<android::icu::impl::Trie2_16> frozenTrie;
	
	frozenTrie = std::make_shared<android::icu::impl::Trie2_16>();
	//    .local v0, "frozenTrie":Landroid/icu/impl/Trie2_16;
	this->freeze(frozenTrie, android::icu::impl::Trie2_S_ValueWidth::BITS_16);
	return frozenTrie;

}
// .method public toTrie2_32()Landroid/icu/impl/Trie2_32;
std::shared_ptr<android::icu::impl::Trie2_32> android::icu::impl::Trie2Writable::toTrie2_32()
{
	
	std::shared_ptr<android::icu::impl::Trie2_32> frozenTrie;
	
	frozenTrie = std::make_shared<android::icu::impl::Trie2_32>();
	//    .local v0, "frozenTrie":Landroid/icu/impl/Trie2_32;
	this->freeze(frozenTrie, android::icu::impl::Trie2_S_ValueWidth::BITS_32);
	return frozenTrie;

}


