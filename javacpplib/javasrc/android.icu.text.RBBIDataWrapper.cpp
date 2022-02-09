// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIDataWrapper.smali
#include "java2ctype.h"
#include "android.icu.impl.CharTrie.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.text.RBBIDataWrapper_S_IsAcceptable.h"
#include "android.icu.text.RBBIDataWrapper_S_RBBIDataHeader.h"
#include "android.icu.text.RBBIDataWrapper_S_TrieFoldingFunc.h"
#include "android.icu.text.RBBIDataWrapper.h"
#include "android.icu.text.RuleBasedBreakIterator.h"
#include "java.io.IOException.h"
#include "java.io.PrintStream.h"
#include "java.lang.Integer.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.nio.Buffer.h"
#include "java.nio.ByteBuffer.h"
#include "java.nio.ByteOrder.h"

static android::icu::text::RBBIDataWrapper::ACCEPTING = 0x0;
static android::icu::text::RBBIDataWrapper::DATA_FORMAT = 0x42726b20;
static android::icu::text::RBBIDataWrapper::DH_CATCOUNT = 0x3;
static android::icu::text::RBBIDataWrapper::DH_FORMATVERSION = 0x1;
static android::icu::text::RBBIDataWrapper::DH_FTABLE = 0x4;
static android::icu::text::RBBIDataWrapper::DH_FTABLELEN = 0x5;
static android::icu::text::RBBIDataWrapper::DH_LENGTH = 0x2;
static android::icu::text::RBBIDataWrapper::DH_MAGIC = 0x0;
static android::icu::text::RBBIDataWrapper::DH_RTABLE = 0x6;
static android::icu::text::RBBIDataWrapper::DH_RTABLELEN = 0x7;
static android::icu::text::RBBIDataWrapper::DH_RULESOURCE = 0xe;
static android::icu::text::RBBIDataWrapper::DH_RULESOURCELEN = 0xf;
static android::icu::text::RBBIDataWrapper::DH_SFTABLE = 0x8;
static android::icu::text::RBBIDataWrapper::DH_SFTABLELEN = 0x9;
static android::icu::text::RBBIDataWrapper::DH_SIZE = 0x18;
static android::icu::text::RBBIDataWrapper::DH_SRTABLE = 0xa;
static android::icu::text::RBBIDataWrapper::DH_SRTABLELEN = 0xb;
static android::icu::text::RBBIDataWrapper::DH_STATUSTABLE = 0x10;
static android::icu::text::RBBIDataWrapper::DH_STATUSTABLELEN = 0x11;
static android::icu::text::RBBIDataWrapper::DH_TRIE = 0xc;
static android::icu::text::RBBIDataWrapper::DH_TRIELEN = 0xd;
static android::icu::text::RBBIDataWrapper::FLAGS = 0x4;
static android::icu::text::RBBIDataWrapper::FORMAT_VERSION = 0x3010000;
static android::icu::text::RBBIDataWrapper::IS_ACCEPTABLE;
static android::icu::text::RBBIDataWrapper::LOOKAHEAD = 0x1;
static android::icu::text::RBBIDataWrapper::NEXTSTATES = 0x4;
static android::icu::text::RBBIDataWrapper::NUMSTATES = 0x0;
static android::icu::text::RBBIDataWrapper::RBBI_BOF_REQUIRED = 0x2;
static android::icu::text::RBBIDataWrapper::RBBI_LOOKAHEAD_HARD_BREAK = 0x1;
static android::icu::text::RBBIDataWrapper::RESERVED = 0x3;
static android::icu::text::RBBIDataWrapper::ROWLEN = 0x2;
static android::icu::text::RBBIDataWrapper::ROW_DATA = 0x8;
static android::icu::text::RBBIDataWrapper::TAGIDX = 0x2;
static android::icu::text::RBBIDataWrapper::fTrieFoldingFunc;
// .method static constructor <clinit>()V
void android::icu::text::RBBIDataWrapper::static_cinit()
{
	
	std::shared_ptr<android::icu::text::RBBIDataWrapper_S_IsAcceptable> cVar0;
	std::shared_ptr<android::icu::text::RBBIDataWrapper_S_TrieFoldingFunc> cVar1;
	
	cVar0 = std::make_shared<android::icu::text::RBBIDataWrapper_S_IsAcceptable>(0x0);
	android::icu::text::RBBIDataWrapper::IS_ACCEPTABLE = cVar0;
	cVar1 = std::make_shared<android::icu::text::RBBIDataWrapper_S_TrieFoldingFunc>();
	android::icu::text::RBBIDataWrapper::fTrieFoldingFunc = cVar1;
	return;

}
// .method constructor <init>()V
android::icu::text::RBBIDataWrapper::RBBIDataWrapper()
{
	
	// 136    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private dumpCharCategories(Ljava/io/PrintStream;)V
void android::icu::text::RBBIDataWrapper::dumpCharCategories(std::shared_ptr<java::io::PrintStream> out)
{
	
	int n;
	std::shared<std::vector<std::vector<java::lang::String>>> catStrings;
	int rangeStart;
	int rangeEnd;
	int lastCat;
	std::shared<std::vector<int[]>> lastNewline;
	int category;
	int char32;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p1, "out"    # Ljava/io/PrintStream;
	n = this->fHeader->fCatCount;
	//    .local v5, "n":I
	catStrings = std::make_shared<std::vector<std::vector<java::lang::String>>>(( n + 0x1));
	//    .local v0, "catStrings":[Ljava/lang/String;
	rangeStart = 0x0;
	//    .local v7, "rangeStart":I
	rangeEnd = 0x0;
	//    .local v6, "rangeEnd":I
	lastCat = -0x1;
	//    .local v3, "lastCat":I
	lastNewline = std::make_shared<std::vector<int[]>>(( n + 0x1));
	//    .local v4, "lastNewline":[I
	category = 0x0;
	//    .local v1, "category":I
label_goto_10:
	if ( category >  this->fHeader->fCatCount )
		goto label_cond_1e;
	catStrings[category] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	category = ( category + 0x1);
	goto label_goto_10;
	// 198    .line 462
label_cond_1e:
	out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nCharacter Categories")));
	out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("--------------------")));
	char32 = 0x0;
	//    .local v2, "char32":I
label_goto_2b:
	if ( char32 >  0x10ffff )
		goto label_cond_6a;
	category = this->fTrie->getCodePointValue(char32);
	category = ( category & -0x4001);
	if ( category < 0 ) 
		goto label_cond_40;
	if ( category <= this->fHeader->fCatCount )
		goto label_cond_d8;
label_cond_40:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error, bad category ")))->append(java::lang::Integer::toHexString(category))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" for char ")))->append(java::lang::Integer::toHexString(char32))->toString());
label_cond_6a:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	catStrings[lastCat] = cVar1->append(catStrings[lastCat])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(java::lang::Integer::toHexString(rangeStart))->toString();
	if ( rangeEnd == rangeStart )
		goto label_cond_ac;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	catStrings[lastCat] = cVar2->append(catStrings[lastCat])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(java::lang::Integer::toHexString(rangeEnd))->toString();
label_cond_ac:
	category = 0x0;
label_goto_ad:
	if ( category >  this->fHeader->fCatCount )
		goto label_cond_155;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	out->println(cVar3->append(android::icu::text::RBBIDataWrapper::intToString(category, 0x5))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(catStrings[category])->toString());
	category = ( category + 0x1);
	goto label_goto_ad;
	// 396    .line 472
label_cond_d8:
	if ( category != lastCat )
		goto label_cond_df;
	char32;
label_goto_db:
	char32 = ( char32 + 0x1);
	goto label_goto_2b;
	// 409    .line 475
label_cond_df:
	if ( lastCat < 0 ) 
		goto label_cond_151;
	if ( catStrings[lastCat]->length() <= ( lastNewline[lastCat] + 0x46) )
		goto label_cond_10f;
	lastNewline[lastCat] = ( catStrings[lastCat]->length() + 0xa);
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	catStrings[lastCat] = cVar4->append(catStrings[lastCat])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n       ")))->toString();
label_cond_10f:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	catStrings[lastCat] = cVar5->append(catStrings[lastCat])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(java::lang::Integer::toHexString(rangeStart))->toString();
	if ( rangeEnd == rangeStart )
		goto label_cond_151;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	catStrings[lastCat] = cVar6->append(catStrings[lastCat])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")))->append(java::lang::Integer::toHexString(rangeEnd))->toString();
label_cond_151:
	lastCat = category;
	rangeEnd = char32;
	rangeStart = char32;
	goto label_goto_db;
	// 537    .line 498
label_cond_155:
	out->println();
	return;

}
// .method private dumpRow(Ljava/io/PrintStream;[SI)V
void android::icu::text::RBBIDataWrapper::dumpRow(std::shared_ptr<java::io::PrintStream> out,std::shared_ptr<short[]> table,int state)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> dest;
	int row;
	int col;
	
	//    .param p1, "out"    # Ljava/io/PrintStream;
	//    .param p2, "table"    # [S
	//    .param p3, "state"    # I
	cVar0 = 0x5;
	dest = std::make_shared<java::lang::StringBuilder>(( ( this->fHeader->fCatCount * 0x5) + 0x14));
	//    .local v1, "dest":Ljava/lang/StringBuilder;
	dest->append(android::icu::text::RBBIDataWrapper::intToString(state, 0x4));
	row = this->getRowIndex(state);
	//    .local v2, "row":I
	if ( !(table[( row + 0x0)]) )  
		goto label_cond_5d;
	dest->append(android::icu::text::RBBIDataWrapper::intToString(table[( row + 0x0)], cVar0));
label_goto_2b:
	if ( !(table[( row + 0x1)]) )  
		goto label_cond_64;
	dest->append(android::icu::text::RBBIDataWrapper::intToString(table[( row + 0x1)], cVar0));
label_goto_3c:
	dest->append(android::icu::text::RBBIDataWrapper::intToString(table[( row + 0x2)], cVar0));
	col = 0x0;
	//    .local v0, "col":I
label_goto_48:
	if ( col >= this->fHeader->fCatCount )
		goto label_cond_6b;
	dest->append(android::icu::text::RBBIDataWrapper::intToString(table[(( row + 0x4) +  col)], cVar0));
	col = ( col + 0x1);
	goto label_goto_48;
	// 661    .line 431
	// 662    .end local v0    # "col":I
label_cond_5d:
	dest->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("     ")));
	goto label_goto_2b;
	// 670    .line 436
label_cond_64:
	dest->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("     ")));
	goto label_goto_3c;
	// 678    .line 444
	// 679    .restart local v0    # "col":I
label_cond_6b:
	out->println(dest);
	return;

}
// .method private dumpTable(Ljava/io/PrintStream;[S)V
void android::icu::text::RBBIDataWrapper::dumpTable(std::shared_ptr<java::io::PrintStream> out,std::shared_ptr<short[]> table)
{
	
	std::shared_ptr<java::lang::StringBuilder> header;
	int n;
	int state;
	
	//    .param p1, "out"    # Ljava/io/PrintStream;
	//    .param p2, "table"    # [S
	if ( table )     
		goto label_cond_9;
	out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("  -- null -- ")));
label_goto_8:
	return;
	// 705    .line 401
label_cond_9:
	header = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>(" Row  Acc Look  Tag")));
	//    .local v0, "header":Ljava/lang/StringBuilder;
	n = 0x0;
	//    .local v1, "n":I
label_goto_12:
	if ( n >= this->fHeader->fCatCount )
		goto label_cond_23;
	header->append(android::icu::text::RBBIDataWrapper::intToString(n, 0x5));
	n = ( n + 0x1);
	goto label_goto_12;
	// 739    .line 405
label_cond_23:
	out->println(header->toString());
	n = 0x0;
label_goto_2b:
	if ( n >= header->length() )
		goto label_cond_3a;
	out->print(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	n = ( n + 0x1);
	goto label_goto_2b;
	// 767    .line 409
label_cond_3a:
	out->println();
	state = 0x0;
	//    .local v2, "state":I
label_goto_3e:
	if ( state >= this->getStateTableNumStates(table) )
		goto label_cond_4a;
	this->dumpRow(out, table, state);
	state = ( state + 0x1);
	goto label_goto_3e;
	// 790    .line 413
label_cond_4a:
	out->println();
	goto label_goto_8;

}
// .method static get(Ljava/nio/ByteBuffer;)Landroid/icu/text/RBBIDataWrapper;
std::shared_ptr<android::icu::text::RBBIDataWrapper> android::icu::text::RBBIDataWrapper::get(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::RBBIDataWrapper> This;
	bool cVar3;
	std::shared_ptr<android::icu::text::RBBIDataWrapper_S_RBBIDataHeader> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<java::io::IOException> cVar7;
	int pos;
	std::shared_ptr<android::icu::impl::CharTrie> cVar8;
	std::shared_ptr<java::io::IOException> cVar9;
	std::shared_ptr<java::io::IOException> cVar10;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 801        value = {
	// 802            Ljava/io/IOException;
	// 803        }
	// 804    .end annotation
	cVar0 = 0x3;
	cVar1 = 0x1;
	cVar2 = 0x0;
	This = std::make_shared<android::icu::text::RBBIDataWrapper>();
	//    .local v0, "This":Landroid/icu/text/RBBIDataWrapper;
	android::icu::impl::ICUBinary::readHeader(bytes, 0x42726b20, android::icu::text::RBBIDataWrapper::IS_ACCEPTABLE);
	if ( bytes->order() != java::nio::ByteOrder::BIG_ENDIAN )
		goto label_cond_104;
	cVar3 = cVar1;
label_goto_19:
	This->isBigEndian = cVar3;
	cVar4 = std::make_shared<android::icu::text::RBBIDataWrapper_S_RBBIDataHeader>();
	This->fHeader = cVar4;
	This->fHeader->fMagic = bytes->getInt();
	This->fHeader->fVersion = bytes->getInt(bytes->position());
	This->fHeader->fFormatVersion[cVar2] = bytes->get();
	This->fHeader->fFormatVersion[cVar1] = bytes->get();
	This->fHeader->fFormatVersion[0x2] = bytes->get();
	This->fHeader->fFormatVersion[cVar0] = bytes->get();
	This->fHeader->fLength = bytes->getInt();
	This->fHeader->fCatCount = bytes->getInt();
	This->fHeader->fFTable = bytes->getInt();
	This->fHeader->fFTableLen = bytes->getInt();
	This->fHeader->fRTable = bytes->getInt();
	This->fHeader->fRTableLen = bytes->getInt();
	This->fHeader->fSFTable = bytes->getInt();
	This->fHeader->fSFTableLen = bytes->getInt();
	This->fHeader->fSRTable = bytes->getInt();
	This->fHeader->fSRTableLen = bytes->getInt();
	This->fHeader->fTrie = bytes->getInt();
	This->fHeader->fTrieLen = bytes->getInt();
	This->fHeader->fRuleSource = bytes->getInt();
	This->fHeader->fRuleSourceLen = bytes->getInt();
	This->fHeader->fStatusTable = bytes->getInt();
	This->fHeader->fStatusTableLen = bytes->getInt();
	android::icu::impl::ICUBinary::skipBytes(bytes, 0x18);
	if ( This->fHeader->fMagic != 0xb1a0 )
		goto label_cond_fb;
	if ( This->fHeader->fVersion == cVar1 )
		goto label_cond_107;
	if ( This->fHeader->fFormatVersion[cVar2] == cVar0 )
		goto label_cond_107;
label_cond_fb:
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Break Iterator Rule Data Magic Number Incorrect, or unsupported data version.")));
	// throw
	throw cVar5;
label_cond_104:
	cVar3 = cVar2;
	goto label_goto_19;
	// 1105    .line 215
label_cond_107:
	0x60;
	//    .local v1, "pos":I
	if ( This->fHeader->fFTable <  0x60 )
		goto label_cond_11b;
	if ( This->fHeader->fFTable <= This->fHeader->fLength )
		goto label_cond_124;
label_cond_11b:
	cVar7 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Break iterator Rule data corrupt")));
	// throw
	throw cVar7;
	// 1141    .line 227
label_cond_124:
	android::icu::impl::ICUBinary::skipBytes(bytes, ( This->fHeader->fFTable + -0x60));
	This->fFTable = android::icu::impl::ICUBinary::getShorts(bytes, ( This->fHeader->fFTableLen / 0x2), ( This->fHeader->fFTableLen & 0x1));
	android::icu::impl::ICUBinary::skipBytes(bytes, (This->fHeader->fRTable -  (This->fHeader->fFTable +  This->fHeader->fFTableLen)));
	This->fRTable = android::icu::impl::ICUBinary::getShorts(bytes, ( This->fHeader->fRTableLen / 0x2), ( This->fHeader->fRTableLen & 0x1));
	pos = (This->fHeader->fRTable +  This->fHeader->fRTableLen);
	if ( This->fHeader->fSFTableLen <= 0 )
		goto label_cond_194;
	android::icu::impl::ICUBinary::skipBytes(bytes, (This->fHeader->fSFTable -  pos));
	This->fSFTable = android::icu::impl::ICUBinary::getShorts(bytes, ( This->fHeader->fSFTableLen / 0x2), ( This->fHeader->fSFTableLen & 0x1));
	pos = (This->fHeader->fSFTable +  This->fHeader->fSFTableLen);
label_cond_194:
	if ( This->fHeader->fSRTableLen <= 0 )
		goto label_cond_1bd;
	android::icu::impl::ICUBinary::skipBytes(bytes, (This->fHeader->fSRTable -  pos));
	This->fSRTable = android::icu::impl::ICUBinary::getShorts(bytes, ( This->fHeader->fSRTableLen / 0x2), ( This->fHeader->fSRTableLen & 0x1));
label_cond_1bd:
	android::icu::impl::ICUBinary::skipBytes(bytes, (This->fHeader->fTrie -  pos));
	pos = This->fHeader->fTrie;
	bytes->mark();
	cVar8 = std::make_shared<android::icu::impl::CharTrie>(bytes, android::icu::text::RBBIDataWrapper::fTrieFoldingFunc);
	This->fTrie = cVar8;
	bytes->reset();
	if ( pos <= This->fHeader->fStatusTable )
		goto label_cond_1e7;
	cVar9 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Break iterator Rule data corrupt")));
	// throw
	throw cVar9;
	// 1367    .line 305
label_cond_1e7:
	android::icu::impl::ICUBinary::skipBytes(bytes, (This->fHeader->fStatusTable -  pos));
	This->fStatusTable = android::icu::impl::ICUBinary::getInts(bytes, ( This->fHeader->fStatusTableLen / 0x4), ( This->fHeader->fStatusTableLen & 0x3));
	pos = (This->fHeader->fStatusTable +  This->fHeader->fStatusTableLen);
	if ( pos <= This->fHeader->fRuleSource )
		goto label_cond_219;
	cVar10 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Break iterator Rule data corrupt")));
	// throw
	throw cVar10;
	// 1425    .line 317
label_cond_219:
	android::icu::impl::ICUBinary::skipBytes(bytes, (This->fHeader->fRuleSource -  pos));
	This->fHeader->fRuleSource;
	This->fRuleSource = android::icu::impl::ICUBinary::getString(bytes, ( This->fHeader->fRuleSourceLen / 0x2), ( This->fHeader->fRuleSourceLen & 0x1));
	if ( !(android::icu::text::RuleBasedBreakIterator::fDebugEnv) )  
		goto label_cond_24b;
	if ( android::icu::text::RuleBasedBreakIterator::fDebugEnv->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("data"))) < 0 ) 
		goto label_cond_24b;
	This->dump(java::lang::System::out);
label_cond_24b:
	return This;

}
// .method private getStateTableNumStates([S)I
int android::icu::text::RBBIDataWrapper::getStateTableNumStates(std::shared_ptr<short[]> table)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	
	//    .param p1, "table"    # [S
	cVar0 = 0xffff;
	cVar1 = 0x1;
	cVar2 = 0x0;
	if ( !(this->isBigEndian) )  
		goto label_cond_12;
	return (( table[cVar2] << 0x10) |  (table[cVar1] &  cVar0));
	// 1514    .line 335
label_cond_12:
	return (( table[cVar1] << 0x10) |  (table[cVar2] &  cVar0));

}
// .method public static intToHexString(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RBBIDataWrapper::intToHexString(int n,int width)
{
	
	std::shared_ptr<java::lang::StringBuilder> dest;
	
	//    .param p0, "n"    # I
	//    .param p1, "width"    # I
	dest = std::make_shared<java::lang::StringBuilder>(width);
	//    .local v0, "dest":Ljava/lang/StringBuilder;
	dest->append(java::lang::Integer::toHexString(n));
label_goto_c:
	if ( dest->length() >= width )
		goto label_cond_19;
	dest->insert(0x0, 0x20);
	goto label_goto_c;
	// 1565    .line 389
label_cond_19:
	return dest->toString();

}
// .method public static intToString(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RBBIDataWrapper::intToString(int n,int width)
{
	
	std::shared_ptr<java::lang::StringBuilder> dest;
	
	//    .param p0, "n"    # I
	//    .param p1, "width"    # I
	dest = std::make_shared<java::lang::StringBuilder>(width);
	//    .local v0, "dest":Ljava/lang/StringBuilder;
	dest->append(n);
label_goto_8:
	if ( dest->length() >= width )
		goto label_cond_15;
	dest->insert(0x0, 0x20);
	goto label_goto_8;
	// 1606    .line 377
label_cond_15:
	return dest->toString();

}
// .method dump(Ljava/io/PrintStream;)V
void android::icu::text::RBBIDataWrapper::dump(std::shared_ptr<java::io::PrintStream> out)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "out"    # Ljava/io/PrintStream;
	if ( this->fFTable->size() )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 1636    .line 352
label_cond_b:
	out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("RBBI Data Wrapper dump ...")));
	out->println();
	out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Forward State Table")));
	this->dumpTable(out, this->fFTable);
	out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Reverse State Table")));
	this->dumpTable(out, this->fRTable);
	out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Forward Safe Points Table")));
	this->dumpTable(out, this->fSFTable);
	out->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Reverse Safe Points Table")));
	this->dumpTable(out, this->fSRTable);
	this->dumpCharCategories(out);
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	out->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Source Rules: ")))->append(this->fRuleSource)->toString());
	return;

}
// .method getRowIndex(I)I
int android::icu::text::RBBIDataWrapper::getRowIndex(int state)
{
	
	//    .param p1, "state"    # I
	return ( (( this->fHeader->fCatCount + 0x4) *  state) + 0x8);

}
// .method getStateTableFlags([S)I
int android::icu::text::RBBIDataWrapper::getStateTableFlags(std::shared_ptr<short[]> table)
{
	
	int cVar0;
	
	//    .param p1, "table"    # [S
	if ( !(this->isBigEndian) )  
		goto label_cond_8;
	cVar0 = 0x5;
label_goto_5:
	return table[cVar0];
label_cond_8:
	cVar0 = 0x4;
	goto label_goto_5;

}


