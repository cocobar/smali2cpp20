// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UBiDiProps.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.UBiDiProps_S_IsAcceptable.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Iterator.h"

static android::icu::impl::UBiDiProps::BIDI_CONTROL_SHIFT = 0xb;
static android::icu::impl::UBiDiProps::BPT_MASK = 0x300;
static android::icu::impl::UBiDiProps::BPT_SHIFT = 0x8;
static android::icu::impl::UBiDiProps::CLASS_MASK = 0x1f;
static android::icu::impl::UBiDiProps::DATA_FILE_NAME = std::make_shared<java::lang::String>("ubidi.icu");
static android::icu::impl::UBiDiProps::DATA_NAME = std::make_shared<java::lang::String>("ubidi");
static android::icu::impl::UBiDiProps::DATA_TYPE = std::make_shared<java::lang::String>("icu");
static android::icu::impl::UBiDiProps::ESC_MIRROR_DELTA = -0x4;
static android::icu::impl::UBiDiProps::FMT = 0x42694469;
static android::icu::impl::UBiDiProps::INSTANCE;
static android::icu::impl::UBiDiProps::IS_MIRRORED_SHIFT = 0xc;
static android::icu::impl::UBiDiProps::IX_JG_LIMIT = 0x5;
static android::icu::impl::UBiDiProps::IX_JG_LIMIT2 = 0x7;
static android::icu::impl::UBiDiProps::IX_JG_START = 0x4;
static android::icu::impl::UBiDiProps::IX_JG_START2 = 0x6;
static android::icu::impl::UBiDiProps::IX_MAX_VALUES = 0xf;
static android::icu::impl::UBiDiProps::IX_MIRROR_LENGTH = 0x3;
static android::icu::impl::UBiDiProps::IX_TOP = 0x10;
static android::icu::impl::UBiDiProps::IX_TRIE_SIZE = 0x2;
static android::icu::impl::UBiDiProps::JOIN_CONTROL_SHIFT = 0xa;
static android::icu::impl::UBiDiProps::JT_MASK = 0xe0;
static android::icu::impl::UBiDiProps::JT_SHIFT = 0x5;
static android::icu::impl::UBiDiProps::MAX_JG_MASK = 0xff0000;
static android::icu::impl::UBiDiProps::MAX_JG_SHIFT = 0x10;
static android::icu::impl::UBiDiProps::MIRROR_DELTA_SHIFT = 0xd;
static android::icu::impl::UBiDiProps::MIRROR_INDEX_SHIFT = 0x15;
// .method static constructor <clinit>()V
void android::icu::impl::UBiDiProps::static_cinit()
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar1;
	std::shared_ptr<android::icu::impl::UBiDiProps> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	cVar0 = std::make_shared<android::icu::impl::UBiDiProps>();
	android::icu::impl::UBiDiProps::INSTANCE = cVar0;
	//label_try_end_7:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_8;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_7} :catch_8
	return;
	// 098    .line 346
label_catch_8:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar1 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method private constructor <init>()V
android::icu::impl::UBiDiProps::UBiDiProps()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 114        value = {
	// 115            Ljava/io/IOException;
	// 116        }
	// 117    .end annotation
	// 121    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "bytes":Ljava/nio/ByteBuffer;
	this->readData(android::icu::impl::ICUBinary::getData(std::make_shared<java::lang::String>(std::make_shared<char[]>("ubidi.icu"))));
	return;

}
// .method private static final getClassFromProps(I)I
int android::icu::impl::UBiDiProps::getClassFromProps(int props)
{
	
	//    .param p0, "props"    # I
	return ( props & 0x1f);

}
// .method private static final getFlagFromProps(II)Z
bool android::icu::impl::UBiDiProps::getFlagFromProps(int props,int shift)
{
	
	bool cVar1;
	
	//    .param p0, "props"    # I
	//    .param p1, "shift"    # I
	cVar1 = 0x0;
	if ( !(( _shri(props,shift) & 0x1)) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method private final getMirror(II)I
int android::icu::impl::UBiDiProps::getMirror(int c,int props)
{
	
	int delta;
	int i;
	int m;
	int c2;
	
	//    .param p1, "c"    # I
	//    .param p2, "props"    # I
	delta = android::icu::impl::UBiDiProps::getMirrorDeltaFromProps(props);
	//    .local v1, "delta":I
	if ( delta == -0x4 )
		goto label_cond_a;
	return (c + delta);
	// 192    .line 192
label_cond_a:
	//    .local v3, "length":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_10:
	if ( i >= this->indexes[0x3] )
		goto label_cond_2b;
	m = this->mirrors[i];
	//    .local v4, "m":I
	c2 = android::icu::impl::UBiDiProps::getMirrorCodePoint(m);
	//    .local v0, "c2":I
	if ( c != c2 )
		goto label_cond_29;
	return android::icu::impl::UBiDiProps::getMirrorCodePoint(this->mirrors[android::icu::impl::UBiDiProps::getMirrorIndex(m)]);
	// 238    .line 201
label_cond_29:
	if ( c >= c2 )
		goto label_cond_2c;
	//    .end local v0    # "c2":I
	//    .end local v4    # "m":I
label_cond_2b:
	return c;
	// 248    .line 195
	// 249    .restart local v0    # "c2":I
	// 250    .restart local v4    # "m":I
label_cond_2c:
	i = ( i + 0x1);
	goto label_goto_10;

}
// .method private static final getMirrorCodePoint(I)I
int android::icu::impl::UBiDiProps::getMirrorCodePoint(int m)
{
	
	//    .param p0, "m"    # I
	return (0x1fffff &  m);

}
// .method private static final getMirrorDeltaFromProps(I)I
int android::icu::impl::UBiDiProps::getMirrorDeltaFromProps(int props)
{
	
	//    .param p0, "props"    # I
	return _shri((short)(props),0xd);

}
// .method private static final getMirrorIndex(I)I
int android::icu::impl::UBiDiProps::getMirrorIndex(int m)
{
	
	//    .param p0, "m"    # I
	return _ushri(m,0x15);

}
// .method private readData(Ljava/nio/ByteBuffer;)V
void android::icu::impl::UBiDiProps::readData(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::UBiDiProps_S_IsAcceptable> cVar1;
	int count;
	std::shared_ptr<java::io::IOException> cVar2;
	int i;
	int expectedTrieLength;
	int trieLength;
	std::shared_ptr<java::io::IOException> cVar3;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 298        value = {
	// 299            Ljava/io/IOException;
	// 300        }
	// 301    .end annotation
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::impl::UBiDiProps_S_IsAcceptable>(0x0);
	android::icu::impl::ICUBinary::readHeader(bytes, 0x42694469, cVar1);
	count = bytes->getInt();
	//    .local v0, "count":I
	if ( count >= 0x10 )
		goto label_cond_1e;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("indexes[0] too small in ubidi.icu")));
	// throw
	throw cVar2;
	// 337    .line 56
label_cond_1e:
	this->indexes = std::make_shared<std::vector<int[]>>(count);
	this->indexes[cVar0] = count;
	i = 0x1;
	//    .local v2, "i":I
label_goto_27:
	if ( i >= count )
		goto label_cond_34;
	this->indexes[i] = bytes->getInt();
	i = ( i + 0x1);
	goto label_goto_27;
	// 369    .line 64
label_cond_34:
	this->trie = android::icu::impl::Trie2_16::createFromSerialized(bytes);
	expectedTrieLength = this->indexes[0x2];
	//    .local v1, "expectedTrieLength":I
	trieLength = this->trie->getSerializedLength();
	//    .local v3, "trieLength":I
	if ( trieLength <= expectedTrieLength )
		goto label_cond_50;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ubidi.icu: not enough bytes for the trie")));
	// throw
	throw cVar3;
	// 405    .line 71
label_cond_50:
	android::icu::impl::ICUBinary::skipBytes(bytes, (expectedTrieLength - trieLength));
	count = this->indexes[0x3];
	if ( count <= 0 )
		goto label_cond_62;
	this->mirrors = android::icu::impl::ICUBinary::getInts(bytes, count, cVar0);
label_cond_62:
	this->jgArray = std::make_shared<std::vector<unsigned char[]>>((this->indexes[0x5] - this->indexes[0x4]));
	bytes->get(this->jgArray);
	this->jgArray2 = std::make_shared<std::vector<unsigned char[]>>((this->indexes[0x7] - this->indexes[0x6]));
	bytes->get(this->jgArray2);
	return;

}
// .method public final addPropertyStarts(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::UBiDiProps::addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	int cVar0;
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	int i;
	int c;
	int start;
	int limit;
	int prev;
	unsigned char jg;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0x5;
	trieIterator = this->trie->iterator();
	//    .local v9, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_7:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_1f;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v7, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_1f;
	set->add(range->startCodePoint);
	goto label_goto_7;
	// 528    .line 114
	// 529    .end local v7    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_1f:
	//    .local v4, "length":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_25:
	if ( i >= this->indexes[0x3] )
		goto label_cond_37;
	c = android::icu::impl::UBiDiProps::getMirrorCodePoint(this->mirrors[i]);
	//    .local v0, "c":I
	set->add(c, ( c + 0x1));
	i = ( i + 0x1);
	goto label_goto_25;
	// 565    .line 121
	// 566    .end local v0    # "c":I
label_cond_37:
	start = this->indexes[0x4];
	//    .local v8, "start":I
	limit = this->indexes[cVar0];
	//    .local v5, "limit":I
	//    .local v3, "jga":[B
label_goto_42:
	prev = 0x0;
	//    .local v6, "prev":B
	i = 0x0;
	//    .end local v6    # "prev":B
label_goto_46:
	if ( i >= (limit - start) )
		goto label_cond_55;
	jg = this->jgArray[i];
	//    .local v2, "jg":B
	if ( jg == prev )
		goto label_cond_50;
	set->add(start);
	prev = jg;
label_cond_50:
	start = ( start + 0x1);
	i = ( i + 0x1);
	goto label_goto_46;
	// 622    .line 135
	// 623    .end local v2    # "jg":B
label_cond_55:
	if ( !(prev) )  
		goto label_cond_5a;
	set->add(limit);
label_cond_5a:
	if ( limit != this->indexes[cVar0] )
		goto label_cond_6d;
	start = this->indexes[0x6];
	limit = this->indexes[0x7];
	this->jgArray2;
	goto label_goto_42;
	// 657    .line 152
label_cond_6d:
	return;

}
// .method public final getClass(I)I
int android::icu::impl::UBiDiProps::getClass(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::UBiDiProps::getClassFromProps(this->trie->get(c));

}
// .method public final getJoiningGroup(I)I
int android::icu::impl::UBiDiProps::getJoiningGroup(int c)
{
	
	int start;
	
	//    .param p1, "c"    # I
	start = this->indexes[0x4];
	//    .local v1, "start":I
	//    .local v0, "limit":I
	if ( start >  c )
		goto label_cond_17;
	if ( c >= this->indexes[0x5] )
		goto label_cond_17;
	return ( this->jgArray[(c - start)] & 0xff);
	// 718    .line 236
label_cond_17:
	start = this->indexes[0x6];
	if ( start >  c )
		goto label_cond_2e;
	if ( c >= this->indexes[0x7] )
		goto label_cond_2e;
	return ( this->jgArray2[(c - start)] & 0xff);
	// 749    .line 241
label_cond_2e:
	return 0x0;

}
// .method public final getJoiningType(I)I
int android::icu::impl::UBiDiProps::getJoiningType(int c)
{
	
	//    .param p1, "c"    # I
	return _shri(( this->trie->get(c) & 0xe0),0x5);

}
// .method public final getMaxValue(I)I
int android::icu::impl::UBiDiProps::getMaxValue(int which)
{
	
	int max;
	
	//    .param p1, "which"    # I
	max = this->indexes[0xf];
	//    .local v0, "max":I
	// switch
	{
	auto item = ( which );
	if (item == 0x1000) goto label_sswitch_b;
	if (item == 0x1006) goto label_sswitch_e;
	if (item == 0x1007) goto label_sswitch_14;
	if (item == 0x1015) goto label_sswitch_19;
	}
	return -0x1;
	// 796    .line 162
label_sswitch_b:
	return ( max & 0x1f);
	// 802    .line 164
label_sswitch_e:
	return _shri((0xff0000 &  max),0x10);
	// 812    .line 166
label_sswitch_14:
	return _shri(( max & 0xe0),0x5);
	// 820    .line 168
label_sswitch_19:
	return _shri(( max & 0x300),0x8);
	// 828    .line 160
	// 829    :sswitch_data_1e
	// 830    .sparse-switch
	// 831        0x1000 -> :sswitch_b
	// 832        0x1006 -> :sswitch_e
	// 833        0x1007 -> :sswitch_14
	// 834        0x1015 -> :sswitch_19
	// 835    .end sparse-switch

}
// .method public final getMirror(I)I
int android::icu::impl::UBiDiProps::getMirror(int c)
{
	
	//    .param p1, "c"    # I
	//    .local v0, "props":I
	return this->getMirror(c, this->trie->get(c));

}
// .method public final getPairedBracket(I)I
int android::icu::impl::UBiDiProps::getPairedBracket(int c)
{
	
	int props;
	
	//    .param p1, "c"    # I
	props = this->trie->get(c);
	//    .local v0, "props":I
	if ( ( props & 0x300) )     
		goto label_cond_b;
	return c;
	// 880    .line 253
label_cond_b:
	return this->getMirror(c, props);

}
// .method public final getPairedBracketType(I)I
int android::icu::impl::UBiDiProps::getPairedBracketType(int c)
{
	
	//    .param p1, "c"    # I
	return _shri(( this->trie->get(c) & 0x300),0x8);

}
// .method public final isBidiControl(I)Z
bool android::icu::impl::UBiDiProps::isBidiControl(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::UBiDiProps::getFlagFromProps(this->trie->get(c), 0xb);

}
// .method public final isJoinControl(I)Z
bool android::icu::impl::UBiDiProps::isJoinControl(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::UBiDiProps::getFlagFromProps(this->trie->get(c), 0xa);

}
// .method public final isMirrored(I)Z
bool android::icu::impl::UBiDiProps::isMirrored(int c)
{
	
	//    .param p1, "c"    # I
	return android::icu::impl::UBiDiProps::getFlagFromProps(this->trie->get(c), 0xc);

}


