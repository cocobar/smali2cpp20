// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\StringPrep.smali
#include "java2ctype.h"
#include "android.icu.impl.CharTrie.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.StringPrepDataReader.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "android.icu.impl.UBiDiProps.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.Normalizer_S_Mode.h"
#include "android.icu.text.Normalizer.h"
#include "android.icu.text.StringPrep_S_Values.h"
#include "android.icu.text.StringPrep.h"
#include "android.icu.text.StringPrepParseException.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "android.icu.util.VersionInfo.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.ref.WeakReference.h"
#include "java.nio.ByteBuffer.h"

static android::icu::text::StringPrep::ALLOW_UNASSIGNED = 0x1;
static android::icu::text::StringPrep::CACHE;
static android::icu::text::StringPrep::CHECK_BIDI_ON = 0x2;
static android::icu::text::StringPrep::DEFAULT = 0x0;
static android::icu::text::StringPrep::DELETE = 0x3;
static android::icu::text::StringPrep::FOUR_UCHARS_MAPPING_INDEX_START = 0x6;
static android::icu::text::StringPrep::INDEX_MAPPING_DATA_SIZE = 0x1;
static android::icu::text::StringPrep::INDEX_TOP = 0x10;
static android::icu::text::StringPrep::MAP = 0x1;
static android::icu::text::StringPrep::MAX_INDEX_VALUE = 0x3fbf;
static android::icu::text::StringPrep::MAX_PROFILE = 0xd;
static android::icu::text::StringPrep::NORMALIZATION_ON = 0x1;
static android::icu::text::StringPrep::NORM_CORRECTNS_LAST_UNI_VERSION = 0x2;
static android::icu::text::StringPrep::ONE_UCHAR_MAPPING_INDEX_START = 0x3;
static android::icu::text::StringPrep::OPTIONS = 0x7;
static android::icu::text::StringPrep::PROFILE_NAMES;
static android::icu::text::StringPrep::PROHIBITED = 0x2;
static android::icu::text::StringPrep::RFC3491_NAMEPREP = 0x0;
static android::icu::text::StringPrep::RFC3530_NFS4_CIS_PREP = 0x3;
static android::icu::text::StringPrep::RFC3530_NFS4_CS_PREP = 0x1;
static android::icu::text::StringPrep::RFC3530_NFS4_CS_PREP_CI = 0x2;
static android::icu::text::StringPrep::RFC3530_NFS4_MIXED_PREP_PREFIX = 0x4;
static android::icu::text::StringPrep::RFC3530_NFS4_MIXED_PREP_SUFFIX = 0x5;
static android::icu::text::StringPrep::RFC3722_ISCSI = 0x6;
static android::icu::text::StringPrep::RFC3920_NODEPREP = 0x7;
static android::icu::text::StringPrep::RFC3920_RESOURCEPREP = 0x8;
static android::icu::text::StringPrep::RFC4011_MIB = 0x9;
static android::icu::text::StringPrep::RFC4013_SASLPREP = 0xa;
static android::icu::text::StringPrep::RFC4505_TRACE = 0xb;
static android::icu::text::StringPrep::RFC4518_LDAP = 0xc;
static android::icu::text::StringPrep::RFC4518_LDAP_CI = 0xd;
static android::icu::text::StringPrep::THREE_UCHARS_MAPPING_INDEX_START = 0x5;
static android::icu::text::StringPrep::TWO_UCHARS_MAPPING_INDEX_START = 0x4;
static android::icu::text::StringPrep::TYPE_LIMIT = 0x4;
static android::icu::text::StringPrep::TYPE_THRESHOLD = 0xfff0;
static android::icu::text::StringPrep::UNASSIGNED;
// .method static constructor <clinit>()V
void android::icu::text::StringPrep::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar1;
	
	cVar0 = 0xe;
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar1[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc3491"));
	cVar1[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc3530cs"));
	cVar1[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc3530csci"));
	cVar1[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc3491"));
	cVar1[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc3530mixp"));
	cVar1[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc3491"));
	cVar1[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc3722"));
	cVar1[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc3920node"));
	cVar1[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc3920res"));
	cVar1[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc4011"));
	cVar1[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc4013"));
	cVar1[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc4505"));
	cVar1[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc4518"));
	cVar1[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("rfc4518ci"));
	android::icu::text::StringPrep::PROFILE_NAMES = cVar1;
	android::icu::text::StringPrep::CACHE = std::make_shared<std::vector<std::vector<java::lang::ref::WeakReference>>>(cVar0);
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
android::icu::text::StringPrep::StringPrep(std::shared_ptr<java::io::InputStream> inputStream)
{
	
	//    .param p1, "inputStream"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 240        value = {
	// 241            Ljava/io/IOException;
	// 242        }
	// 243    .end annotation
	android::icu::text::StringPrep::(android::icu::impl::ICUBinary::getByteBufferFromInputStreamAndCloseStream(inputStream));
	return;

}
// .method private constructor <init>(Ljava/nio/ByteBuffer;)V
android::icu::text::StringPrep::StringPrep(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	std::shared_ptr<android::icu::impl::StringPrepDataReader> reader;
	std::shared_ptr<android::icu::impl::CharTrie> cVar3;
	bool cVar4;
	std::shared_ptr<android::icu::util::VersionInfo> normUniVer;
	std::shared_ptr<java::io::IOException> cVar5;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 261        value = {
	// 262            Ljava/io/IOException;
	// 263        }
	// 264    .end annotation
	cVar0 = 0x7;
	cVar1 = 0x1;
	cVar2 = 0x0;
	// 274    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	reader = std::make_shared<android::icu::impl::StringPrepDataReader>(bytes);
	//    .local v1, "reader":Landroid/icu/impl/StringPrepDataReader;
	this->indexes = reader->readIndexes(0x10);
	cVar3 = std::make_shared<android::icu::impl::CharTrie>(bytes, 0x0);
	this->sprepTrie = cVar3;
	this->mappingData = reader->read(( this->indexes[cVar1] / 0x2));
	if ( ( this->indexes[cVar0] & 0x1) <= 0 )
		goto label_cond_76;
	cVar4 = cVar1;
label_goto_30:
	this->doNFKC = cVar4;
	if ( ( this->indexes[cVar0] & 0x2) <= 0 )
		goto label_cond_78;
label_goto_3a:
	this->checkBiDi = cVar1;
	this->sprepUniVer = android::icu::text::StringPrep::getVersionInfo(reader->getUnicodeVersion());
	this->normCorrVer = android::icu::text::StringPrep::getVersionInfo(this->indexes[0x2]);
	normUniVer = android::icu::lang::UCharacter::getUnicodeVersion({const[class].FS-Param});
	//    .local v0, "normUniVer":Landroid/icu/util/VersionInfo;
	if ( normUniVer->compareTo(this->sprepUniVer) >= 0 )
		goto label_cond_7a;
	if ( normUniVer->compareTo(this->normCorrVer) >= 0 )
		goto label_cond_7a;
	if ( ( this->indexes[cVar0] & 0x1) <= 0 )
		goto label_cond_7a;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Normalization Correction version not supported")));
	// throw
	throw cVar5;
	// 405    .end local v0    # "normUniVer":Landroid/icu/util/VersionInfo;
label_cond_76:
	cVar4 = cVar2;
	goto label_goto_30;
label_cond_78:
	cVar1 = cVar2;
	goto label_goto_3a;
	// 418    .line 285
	// 419    .restart local v0    # "normUniVer":Landroid/icu/util/VersionInfo;
label_cond_7a:
	if ( !(this->checkBiDi) )  
		goto label_cond_82;
	this->bdp = android::icu::impl::UBiDiProps::INSTANCE;
label_cond_82:
	return;

}
// .method private getCodePointValue(I)C
char android::icu::text::StringPrep::getCodePointValue(int ch)
{
	
	//    .param p1, "ch"    # I
	return this->sprepTrie->getCodePointValue(ch);

}
// .method public static getInstance(I)Landroid/icu/text/StringPrep;
std::shared_ptr<android::icu::text::StringPrep> android::icu::text::StringPrep::getInstance(int profile)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<std::vector<java::lang::ref::WeakReference>> cVar1;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::lang::ref::WeakReference> ref;
	std::shared_ptr<android::icu::text::StringPrep> cVar2;
	auto instance;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::nio::ByteBuffer> bytes;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar5;
	std::shared_ptr<android::icu::text::StringPrep> instance;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::ref::WeakReference> cVar4;
	
	//    .param p0, "profile"    # I
	if ( profile < 0 ) 
		goto label_cond_6;
	if ( profile <= 0xd )
		goto label_cond_f;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad profile type")));
	// throw
	throw cVar0;
	// 472    .line 300
label_cond_f:
	//    .local v3, "instance":Landroid/icu/text/StringPrep;
	cVar1 = android::icu::text::StringPrep::CACHE;
	cVar1->monitor_enter();
	try {
	//label_try_start_13:
	ref = android::icu::text::StringPrep::CACHE[profile];
	//    .local v5, "ref":Ljava/lang/ref/WeakReference;, "Ljava/lang/ref/WeakReference<Landroid/icu/text/StringPrep;>;"
	if ( !(ref) )  
		goto label_cond_65;
	cVar2 = ref->get();
	cVar2->checkCast("android::icu::text::StringPrep");
	//label_try_end_21:
	}
	catch (...){
		goto label_catchall_5f;
	}
	//    .catchall {:try_start_13 .. :try_end_21} :catchall_5f
	//    .local v3, "instance":Landroid/icu/text/StringPrep;
	instance = cVar2;
	//    .end local v3    # "instance":Landroid/icu/text/StringPrep;
	//    .local v4, "instance":Landroid/icu/text/StringPrep;
label_goto_22:
	if ( instance )     
		goto label_cond_63;
	try {
	//label_try_start_24:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_3f:
	}
	catch (...){
		goto label_catchall_5b;
	}
	//    .catchall {:try_start_24 .. :try_end_3f} :catchall_5b
	bytes = android::icu::impl::ICUBinary::getRequiredData(cVar3->append(android::icu::text::StringPrep::PROFILE_NAMES[profile])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".spp")))->toString());
	//    .local v1, "bytes":Ljava/nio/ByteBuffer;
	if ( !(bytes) )  
		goto label_cond_61;
	try {
	//label_try_start_42:
	instance = std::make_shared<android::icu::text::StringPrep>(bytes);
	//label_try_end_47:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_54;
	}
	catch (...){
		goto label_catchall_5b;
	}
	//    .catch Ljava/io/IOException; {:try_start_42 .. :try_end_47} :catch_54
	//    .catchall {:try_start_42 .. :try_end_47} :catchall_5b
	//    .end local v4    # "instance":Landroid/icu/text/StringPrep;
	//    .restart local v3    # "instance":Landroid/icu/text/StringPrep;
label_goto_47:
	if ( !(instance) )  
		goto label_cond_52;
	try {
	//label_try_start_49:
	cVar4 = std::make_shared<java::lang::ref::WeakReference>(instance);
	android::icu::text::StringPrep::CACHE[profile] = cVar4;
	//label_try_end_52:
	}
	catch (...){
		goto label_catchall_5f;
	}
	//    .catchall {:try_start_49 .. :try_end_52} :catchall_5f
	//    .end local v1    # "bytes":Ljava/nio/ByteBuffer;
label_cond_52:
label_goto_52:
	cVar1->monitor_exit();
	return instance;
	// 583    .line 315
	// 584    .end local v3    # "instance":Landroid/icu/text/StringPrep;
	// 585    .restart local v1    # "bytes":Ljava/nio/ByteBuffer;
	// 586    .restart local v4    # "instance":Landroid/icu/text/StringPrep;
label_catch_54:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	try {
	//label_try_start_55:
	cVar5 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar5;
	// 598    :try_end_5b
	// 599    .catchall {:try_start_55 .. :try_end_5b} :catchall_5b
	// 601    .line 304
	// 602    .end local v1    # "bytes":Ljava/nio/ByteBuffer;
	// 603    .end local v2    # "e":Ljava/io/IOException;
label_catchall_5b:
	// move-exception
	catchall = tryCatchExcetionList.back();
	instance;
	//    .end local v4    # "instance":Landroid/icu/text/StringPrep;
	//    .end local v5    # "ref":Ljava/lang/ref/WeakReference;, "Ljava/lang/ref/WeakReference<Landroid/icu/text/StringPrep;>;"
label_goto_5d:
	cVar1->monitor_exit();
	// throw
	throw;
label_catchall_5f:
	// move-exception
	catchall = tryCatchExcetionList.back();
	goto label_goto_5d;
	// 621    .restart local v1    # "bytes":Ljava/nio/ByteBuffer;
	// 622    .restart local v4    # "instance":Landroid/icu/text/StringPrep;
	// 623    .restart local v5    # "ref":Ljava/lang/ref/WeakReference;, "Ljava/lang/ref/WeakReference<Landroid/icu/text/StringPrep;>;"
label_cond_61:
	instance = instance;
	//    .end local v4    # "instance":Landroid/icu/text/StringPrep;
	//    .restart local v3    # "instance":Landroid/icu/text/StringPrep;
	goto label_goto_47;
	// 631    .end local v1    # "bytes":Ljava/nio/ByteBuffer;
	// 632    .end local v3    # "instance":Landroid/icu/text/StringPrep;
	// 633    .restart local v4    # "instance":Landroid/icu/text/StringPrep;
label_cond_63:
	//    .end local v4    # "instance":Landroid/icu/text/StringPrep;
	//    .restart local v3    # "instance":Landroid/icu/text/StringPrep;
	goto label_goto_52;
	// 641    .local v3, "instance":Landroid/icu/text/StringPrep;
label_cond_65:
	instance = 0x0;
	//    .restart local v4    # "instance":Landroid/icu/text/StringPrep;
	goto label_goto_22;

}
// .method private static final getValues(CLandroid/icu/text/StringPrep$Values;)V
void android::icu::text::StringPrep::getValues(char trieWord,std::shared_ptr<android::icu::text::StringPrep_S_Values> values)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	
	//    .param p0, "trieWord"    # C
	//    .param p1, "values"    # Landroid/icu/text/StringPrep$Values;
	cVar0 = 0xfff0;
	cVar1 = 0x1;
	cVar2 = 0x0;
	values->reset();
	if ( trieWord )     
		goto label_cond_e;
	values->type = 0x4;
label_cond_d:
label_goto_d:
	return;
	// 677    .line 347
label_cond_e:
	if ( trieWord <  cVar0 )
		goto label_cond_15;
	values->type = (trieWord - cVar0);
	goto label_goto_d;
	// 688    .line 351
label_cond_15:
	values->type = cVar1;
	if ( ( trieWord & 0x2) <= 0 )
		goto label_cond_2f;
	values->isIndex = cVar1;
	values->value = _shri(trieWord,0x2);
label_goto_21:
	if ( _shri(trieWord,0x2) != 0x3fbf )
		goto label_cond_d;
	values->type = 0x3;
	values->isIndex = cVar2;
	values->value = cVar2;
	goto label_goto_d;
	// 726    .line 358
label_cond_2f:
	values->isIndex = cVar2;
	values->value = _shri(( trieWord << 0x10),0x10);
	values->value = _shri(values->value,0x2);
	goto label_goto_21;

}
// .method private static getVersionInfo(I)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::text::StringPrep::getVersionInfo(int comp)
{
	
	//    .param p0, "comp"    # I
	//    .local v1, "micro":I
	//    .local v2, "milli":I
	//    .local v3, "minor":I
	//    .local v0, "major":I
	return android::icu::util::VersionInfo::getInstance(( _shri(comp,0x18) & 0xff), ( _shri(comp,0x10) & 0xff), ( _shri(comp,0x8) & 0xff), ( comp & 0xff));

}
// .method private static getVersionInfo([B)Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::text::StringPrep::getVersionInfo(std::shared_ptr<unsigned char[]> version)
{
	
	//    .param p0, "version"    # [B
	if ( version->size() == 0x4 )
		goto label_cond_6;
	return 0x0;
	// 799    .line 244
label_cond_6:
	return android::icu::util::VersionInfo::getInstance(version[0x0], version[0x1], version[0x2], version[0x3]);

}
// .method private map(Landroid/icu/text/UCharacterIterator;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::StringPrep::map(std::shared_ptr<android::icu::text::UCharacterIterator> iter,int options)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::StringPrep_S_Values> val;
	std::shared_ptr<java::lang::StringBuffer> dest;
	int ch;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar3;
	int index;
	
	//    .param p1, "iter"    # Landroid/icu/text/UCharacterIterator;
	//    .param p2, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 829        value = {
	// 830            Landroid/icu/text/StringPrepParseException;
	// 831        }
	// 832    .end annotation
	cVar0 = 0x5;
	cVar1 = 0x4;
	cVar2 = 0x3;
	val = std::make_shared<android::icu::text::StringPrep_S_Values>(0x0);
	//    .local v7, "val":Landroid/icu/text/StringPrep$Values;
	0x0;
	//    .local v6, "result":C
	-0x1;
	//    .local v1, "ch":I
	dest = std::make_shared<java::lang::StringBuffer>();
	//    .local v2, "dest":Ljava/lang/StringBuffer;
	if ( ( options & 0x1) <= 0 )
		goto label_cond_3a;
	//    .end local v6    # "result":C
	//    .local v0, "allowUnassigned":Z
label_goto_15:
	ch = iter->nextCodePoint();
	if ( ch == -0x1 )
		goto label_cond_8b;
	//    .local v6, "result":C
	android::icu::text::StringPrep::getValues(this->getCodePointValue(ch), val);
	if ( val->type )     
		goto label_cond_3c;
	if ( 0x1 )     
		goto label_cond_3c;
	cVar3 = std::make_shared<android::icu::text::StringPrepParseException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("An unassigned code point was found in the input")), cVar2, iter->getText(), iter->getIndex());
	// throw
	throw cVar3;
	// 917    .line 381
	// 918    .end local v0    # "allowUnassigned":Z
	// 919    .local v6, "result":C
label_cond_3a:
	0x0;
	//    .restart local v0    # "allowUnassigned":Z
	goto label_goto_15;
	// 926    .line 393
	// 927    .local v6, "result":C
label_cond_3c:
	if ( val->type != 0x1 )
		goto label_cond_86;
	if ( !(val->isIndex) )  
		goto label_cond_7f;
	index = val->value;
	//    .local v3, "index":I
	if ( index <  this->indexes[cVar2] )
		goto label_cond_5a;
	if ( index >= this->indexes[cVar1] )
		goto label_cond_5a;
	//    .local v5, "length":I
label_goto_54:
	dest->append(this->mappingData, index, length);
	goto label_goto_15;
	// 970    .line 401
	// 971    .end local v5    # "length":I
label_cond_5a:
	if ( index <  this->indexes[cVar1] )
		goto label_cond_68;
	if ( index >= this->indexes[cVar0] )
		goto label_cond_68;
	//    .restart local v5    # "length":I
	goto label_goto_54;
	// 993    .line 404
	// 994    .end local v5    # "length":I
label_cond_68:
	if ( index <  this->indexes[cVar0] )
		goto label_cond_77;
	if ( index >= this->indexes[0x6] )
		goto label_cond_77;
	//    .restart local v5    # "length":I
	goto label_goto_54;
	// 1018    .line 408
	// 1019    .end local v5    # "length":I
label_cond_77:
	//    .end local v3    # "index":I
	//    .local v4, "index":I
	//    .restart local v5    # "length":I
	//    .end local v4    # "index":I
	//    .restart local v3    # "index":I
	goto label_goto_54;
	// 1036    .line 415
	// 1037    .end local v3    # "index":I
	// 1038    .end local v5    # "length":I
label_cond_7f:
label_cond_82:
	android::icu::text::UTF16::append(dest, ch);
	goto label_goto_15;
	// 1050    .line 417
label_cond_86:
	if ( val->type != cVar2 )
		goto label_cond_82;
	goto label_goto_15;
	// 1058    .line 425
	// 1059    .end local v6    # "result":C
label_cond_8b:
	return dest;

}
// .method private normalize(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::StringPrep::normalize(std::shared_ptr<java::lang::StringBuffer> src)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	
	//    .param p1, "src"    # Ljava/lang/StringBuffer;
	cVar0 = std::make_shared<java::lang::StringBuffer>(android::icu::text::Normalizer::normalize(src->toString(), android::icu::text::Normalizer::NFKC, 0x20));
	return cVar0;

}
// .method public prepare(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::StringPrep::prepare(std::shared_ptr<java::lang::String> src,int options)
{
	
	//    .param p1, "src"    # Ljava/lang/String;
	//    .param p2, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1101        value = {
	// 1102            Landroid/icu/text/StringPrepParseException;
	// 1103        }
	// 1104    .end annotation
	//    .local v0, "result":Ljava/lang/StringBuffer;
	return this->prepare(android::icu::text::UCharacterIterator::getInstance(src), options)->toString();

}
// .method public prepare(Landroid/icu/text/UCharacterIterator;I)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::StringPrep::prepare(std::shared_ptr<android::icu::text::UCharacterIterator> src,int options)
{
	
	std::shared_ptr<java::lang::StringBuffer> mapOut;
	std::shared_ptr<java::lang::StringBuffer> normOut;
	std::shared_ptr<android::icu::text::UCharacterIterator> iter;
	std::shared_ptr<android::icu::text::StringPrep_S_Values> val;
	int direction;
	int firstCharDir;
	int rtlPos;
	int ltrPos;
	int rightToLeft;
	int ch;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar0;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar1;
	std::shared_ptr<android::icu::text::StringPrepParseException> cVar2;
	
	//    .param p1, "src"    # Landroid/icu/text/UCharacterIterator;
	//    .param p2, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1130        value = {
	// 1131            Landroid/icu/text/StringPrepParseException;
	// 1132        }
	// 1133    .end annotation
	mapOut = this->map(src, options);
	//    .local v11, "mapOut":Ljava/lang/StringBuffer;
	normOut = mapOut;
	//    .local v12, "normOut":Ljava/lang/StringBuffer;
	if ( !(this->doNFKC) )  
		goto label_cond_13;
	normOut = this->normalize(mapOut);
label_cond_13:
	iter = android::icu::text::UCharacterIterator::getInstance(normOut);
	//    .local v8, "iter":Landroid/icu/text/UCharacterIterator;
	val = std::make_shared<android::icu::text::StringPrep_S_Values>(0x0);
	//    .local v16, "val":Landroid/icu/text/StringPrep$Values;
	direction = 0x17;
	//    .local v6, "direction":I
	firstCharDir = 0x17;
	//    .local v7, "firstCharDir":I
	rtlPos = -0x1;
	//    .local v15, "rtlPos":I
	ltrPos = -0x1;
	//    .local v10, "ltrPos":I
	rightToLeft = 0x0;
	//    .local v14, "rightToLeft":Z
	//    .local v9, "leftToRight":Z
label_cond_26:
label_goto_26:
	ch = iter->nextCodePoint();
	//    .local v5, "ch":I
	if ( ch == -0x1 )
		goto label_cond_a0;
	//    .local v13, "result":C
	android::icu::text::StringPrep::getValues(this->getCodePointValue(ch), val);
	if ( val->type != 0x2 )
		goto label_cond_68;
	var45 = cVar0(std::make_shared<java::lang::String>(std::make_shared<char[]>("A prohibited code point was found in the input")), 0x2, iter->getText(), val->value);
	// throw
	throw cVar0;
	// 1274    .line 528
label_cond_68:
	if ( !(this->checkBiDi) )  
		goto label_cond_26;
	direction = this->bdp->getClass(ch);
	if ( firstCharDir != 0x17 )
		goto label_cond_83;
	firstCharDir = direction;
label_cond_83:
	if ( direction )     
		goto label_cond_8c;
	0x1;
	( iter->getIndex() + -0x1);
label_cond_8c:
	if ( direction == 0x1 )
		goto label_cond_98;
	if ( direction != 0xd )
		goto label_cond_26;
label_cond_98:
	0x1;
	( iter->getIndex() + -0x1);
	goto label_goto_26;
	// 1348    .line 543
	// 1349    .end local v13    # "result":C
label_cond_a0:
	if ( !(this->checkBiDi) )  
		goto label_cond_fa;
	if ( !(0x0) )  
		goto label_cond_c7;
	if ( !(rightToLeft) )  
		goto label_cond_c7;
	if ( rtlPos <= ltrPos )
		goto label_cond_c5;
	//    .end local v15    # "rtlPos":I
label_goto_b7:
	var83 = cVar1(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input does not conform to the rules for BiDi code points.")), 0x4, iter->getText(), rtlPos);
	// throw
	throw cVar1;
	// 1395    .restart local v15    # "rtlPos":I
label_cond_c5:
	rtlPos = ltrPos;
	goto label_goto_b7;
	// 1402    .line 552
label_cond_c7:
	if ( !(rightToLeft) )  
		goto label_cond_fa;
	if ( firstCharDir == 0x1 )
		goto label_cond_ee;
	if ( firstCharDir == 0xd )
		goto label_cond_ee;
label_cond_d5:
	if ( rtlPos <= ltrPos )
		goto label_cond_fb;
	//    .end local v15    # "rtlPos":I
label_goto_e0:
	var98 = cVar2(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input does not conform to the rules for BiDi code points.")), 0x4, iter->getText(), rtlPos);
	// throw
	throw cVar2;
	// 1451    .line 554
	// 1452    .restart local v15    # "rtlPos":I
label_cond_ee:
	if ( direction == 0x1 )
		goto label_cond_fa;
	if ( direction != 0xd )
		goto label_cond_d5;
label_cond_fa:
	return normOut;
label_cond_fb:
	rtlPos = ltrPos;
	goto label_goto_e0;

}


