// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterName.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.UCharacterName_S_AlgorithmName.h"
#include "android.icu.impl.UCharacterName.h"
#include "android.icu.impl.UCharacterNameReader.h"
#include "android.icu.impl.UCharacterUtility.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.io.IOException.h"
#include "java.lang.Integer.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::UCharacterName::EXTENDED_CATEGORY_ = 0x21;
static android::icu::impl::UCharacterName::FILE_NAME_ = std::make_shared<java::lang::String>("unames.icu");
static android::icu::impl::UCharacterName::GROUP_MASK_ = 0x1f;
static android::icu::impl::UCharacterName::GROUP_SHIFT_ = 0x5;
static android::icu::impl::UCharacterName::INSTANCE;
static android::icu::impl::UCharacterName::LEAD_SURROGATE_ = 0x1f;
static android::icu::impl::UCharacterName::LINES_PER_GROUP_ = 0x20;
static android::icu::impl::UCharacterName::NON_CHARACTER_ = 0x1e;
static android::icu::impl::UCharacterName::OFFSET_HIGH_OFFSET_ = 0x1;
static android::icu::impl::UCharacterName::OFFSET_LOW_OFFSET_ = 0x2;
static android::icu::impl::UCharacterName::SINGLE_NIBBLE_MAX_ = 0xb;
static android::icu::impl::UCharacterName::TRAIL_SURROGATE_ = 0x20;
static android::icu::impl::UCharacterName::TYPE_NAMES_;
static android::icu::impl::UCharacterName::UNKNOWN_TYPE_NAME_ = std::make_shared<java::lang::String>("unknown");
// .method static synthetic -wrap0([ILjava/lang/StringBuffer;)I
int android::icu::impl::UCharacterName::_wrap0(std::shared_ptr<int[]> set,std::shared_ptr<java::lang::StringBuffer> str)
{
	
	//    .param p0, "set"    # [I
	//    .param p1, "str"    # Ljava/lang/StringBuffer;
	return android::icu::impl::UCharacterName::add(set, str);

}
// .method static synthetic -wrap1([ILjava/lang/String;)I
int android::icu::impl::UCharacterName::_wrap1(std::shared_ptr<int[]> set,std::shared_ptr<java::lang::String> str)
{
	
	//    .param p0, "set"    # [I
	//    .param p1, "str"    # Ljava/lang/String;
	return android::icu::impl::UCharacterName::add(set, str);

}
// .method static constructor <clinit>()V
void android::icu::impl::UCharacterName::static_cinit()
{
	
	std::shared_ptr<java::util::MissingResourceException> cVar2;
	std::shared_ptr<android::icu::impl::UCharacterName> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar1;
	
	try {
	//label_try_start_0:
	cVar0 = std::make_shared<android::icu::impl::UCharacterName>();
	android::icu::impl::UCharacterName::INSTANCE = cVar0;
	//label_try_end_7:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ed;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_7} :catch_ed
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x21);
	cVar1[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("unassigned"));
	cVar1[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uppercase letter"));
	cVar1[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lowercase letter"));
	cVar1[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("titlecase letter"));
	cVar1[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("modifier letter"));
	cVar1[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other letter"));
	cVar1[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("non spacing mark"));
	cVar1[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("enclosing mark"));
	cVar1[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("combining spacing mark"));
	cVar1[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("decimal digit number"));
	cVar1[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("letter number"));
	cVar1[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other number"));
	cVar1[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("space separator"));
	cVar1[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("line separator"));
	cVar1[0xe] = std::make_shared<java::lang::String>(std::make_shared<char[]>("paragraph separator"));
	cVar1[0xf] = std::make_shared<java::lang::String>(std::make_shared<char[]>("control"));
	cVar1[0x10] = std::make_shared<java::lang::String>(std::make_shared<char[]>("format"));
	cVar1[0x11] = std::make_shared<java::lang::String>(std::make_shared<char[]>("private use area"));
	cVar1[0x12] = std::make_shared<java::lang::String>(std::make_shared<char[]>("surrogate"));
	cVar1[0x13] = std::make_shared<java::lang::String>(std::make_shared<char[]>("dash punctuation"));
	cVar1[0x14] = std::make_shared<java::lang::String>(std::make_shared<char[]>("start punctuation"));
	cVar1[0x15] = std::make_shared<java::lang::String>(std::make_shared<char[]>("end punctuation"));
	cVar1[0x16] = std::make_shared<java::lang::String>(std::make_shared<char[]>("connector punctuation"));
	cVar1[0x17] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other punctuation"));
	cVar1[0x18] = std::make_shared<java::lang::String>(std::make_shared<char[]>("math symbol"));
	cVar1[0x19] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency symbol"));
	cVar1[0x1a] = std::make_shared<java::lang::String>(std::make_shared<char[]>("modifier symbol"));
	cVar1[0x1b] = std::make_shared<java::lang::String>(std::make_shared<char[]>("other symbol"));
	cVar1[0x1c] = std::make_shared<java::lang::String>(std::make_shared<char[]>("initial punctuation"));
	cVar1[0x1d] = std::make_shared<java::lang::String>(std::make_shared<char[]>("final punctuation"));
	cVar1[0x1e] = std::make_shared<java::lang::String>(std::make_shared<char[]>("noncharacter"));
	cVar1[0x1f] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lead surrogate"));
	cVar1[0x20] = std::make_shared<java::lang::String>(std::make_shared<char[]>("trail surrogate"));
	android::icu::impl::UCharacterName::TYPE_NAMES_ = cVar1;
	return;
	// 358    .line 51
label_catch_ed:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::util::MissingResourceException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not construct UCharacterName. Missing unames.icu")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar2;

}
// .method private constructor <init>()V
android::icu::impl::UCharacterName::UCharacterName()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::StringBuffer> cVar3;
	std::shared_ptr<android::icu::impl::UCharacterNameReader> reader;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 380        value = {
	// 381            Ljava/io/IOException;
	// 382        }
	// 383    .end annotation
	cVar0 = 0x21;
	cVar1 = 0x8;
	cVar2 = 0x0;
	// 393    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_groupcount_ = cVar2;
	this->m_groupsize_ = cVar2;
	this->m_groupoffsets_ = std::make_shared<std::vector<char[]>>(cVar0);
	this->m_grouplengths_ = std::make_shared<std::vector<char[]>>(cVar0);
	this->m_nameSet_ = std::make_shared<std::vector<int[]>>(cVar1);
	this->m_ISOCommentSet_ = std::make_shared<std::vector<int[]>>(cVar1);
	cVar3 = std::make_shared<java::lang::StringBuffer>();
	this->m_utilStringBuffer_ = cVar3;
	this->m_utilIntBuffer_ = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v0, "b":Ljava/nio/ByteBuffer;
	reader = std::make_shared<android::icu::impl::UCharacterNameReader>(android::icu::impl::ICUBinary::getRequiredData(std::make_shared<java::lang::String>(std::make_shared<char[]>("unames.icu"))));
	//    .local v1, "reader":Landroid/icu/impl/UCharacterNameReader;
	reader->read(this);
	return;

}
// .method private static add([ILjava/lang/String;)I
int android::icu::impl::UCharacterName::add(std::shared_ptr<int[]> set,std::shared_ptr<java::lang::String> str)
{
	
	int result;
	int i;
	
	//    .param p0, "set"    # [I
	//    .param p1, "str"    # Ljava/lang/String;
	result = str->length();
	//    .local v1, "result":I
	i = ( result + -0x1);
	//    .local v0, "i":I
label_goto_6:
	if ( i < 0 ) 
		goto label_cond_12;
	android::icu::impl::UCharacterName::add(set, str->charAt(i));
	i = ( i + -0x1);
	goto label_goto_6;
	// 487    .line 1421
label_cond_12:
	return result;

}
// .method private static add([ILjava/lang/StringBuffer;)I
int android::icu::impl::UCharacterName::add(std::shared_ptr<int[]> set,std::shared_ptr<java::lang::StringBuffer> str)
{
	
	int result;
	int i;
	
	//    .param p0, "set"    # [I
	//    .param p1, "str"    # Ljava/lang/StringBuffer;
	result = str->length();
	//    .local v1, "result":I
	i = ( result + -0x1);
	//    .local v0, "i":I
label_goto_6:
	if ( i < 0 ) 
		goto label_cond_12;
	android::icu::impl::UCharacterName::add(set, str->charAt(i));
	i = ( i + -0x1);
	goto label_goto_6;
	// 523    .line 1437
label_cond_12:
	return result;

}
// .method private static add([IC)V
void android::icu::impl::UCharacterName::add(std::shared_ptr<int[]> set,char ch)
{
	
	int cVar0;
	
	//    .param p0, "set"    # [I
	//    .param p1, "ch"    # C
	cVar0 = _ushri(ch,0x5);
	set[cVar0] = (set[cVar0] |  (0x1 << ( ch & 0x1f)));
	return;

}
// .method private addAlgorithmName(I)I
int android::icu::impl::UCharacterName::addAlgorithmName(int maxlength)
{
	
	int i;
	int result;
	int maxlength;
	
	//    .param p1, "maxlength"    # I
	0x0;
	//    .local v1, "result":I
	i = ( this->m_algorithm_->size() + -0x1);
	//    .local v0, "i":I
label_goto_6:
	if ( i < 0 ) 
		goto label_cond_18;
	result = this->m_algorithm_[i]->add(this->m_nameSet_, maxlength);
	if ( result <= maxlength )
		goto label_cond_15;
	maxlength = result;
label_cond_15:
	i = ( i + -0x1);
	goto label_goto_6;
	// 596    .line 1456
label_cond_18:
	return maxlength;

}
// .method private addExtendedName(I)I
int android::icu::impl::UCharacterName::addExtendedName(int maxlength)
{
	
	int i;
	int length;
	int maxlength;
	
	//    .param p1, "maxlength"    # I
	i = ( android::icu::impl::UCharacterName::TYPE_NAMES_->size() + -0x1);
	//    .local v0, "i":I
label_goto_5:
	if ( i < 0 ) 
		goto label_cond_19;
	length = ( android::icu::impl::UCharacterName::add(this->m_nameSet_, android::icu::impl::UCharacterName::TYPE_NAMES_[i]) + 0x9);
	//    .local v1, "length":I
	if ( length <= maxlength )
		goto label_cond_16;
	maxlength = length;
label_cond_16:
	i = ( i + -0x1);
	goto label_goto_5;
	// 643    .line 1478
	// 644    .end local v1    # "length":I
label_cond_19:
	return maxlength;

}
// .method private addGroupName(I)V
void android::icu::impl::UCharacterName::addGroupName(int maxlength)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int maxisolength;
	std::shared<std::vector<char[]>> offsets;
	std::shared<std::vector<char[]>> lengths;
	std::shared<std::vector<unsigned char[]>> tokenlengths;
	int i;
	int linenumber;
	int lineoffset;
	int length;
	auto parsed;
	int maxlength;
	
	//    .param p1, "maxlength"    # I
	cVar0 = 0x22;
	cVar1 = 0x0;
	cVar2 = 0x1;
	maxisolength = 0x0;
	//    .local v5, "maxisolength":I
	offsets = std::make_shared<std::vector<char[]>>(cVar0);
	//    .local v7, "offsets":[C
	lengths = std::make_shared<std::vector<char[]>>(cVar0);
	//    .local v2, "lengths":[C
	tokenlengths = std::make_shared<std::vector<unsigned char[]>>(this->m_tokentable_->size());
	//    .local v9, "tokenlengths":[B
	i = 0x0;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= this->m_groupcount_ )
		goto label_cond_62;
	//    .local v6, "offset":I
	linenumber = 0x0;
	//    .local v3, "linenumber":I
label_goto_18:
	if ( linenumber >= 0x20 )
		goto label_cond_5f;
	lineoffset = (this->getGroupLengths(i, offsets, lengths) + offsets[linenumber]);
	//    .local v4, "lineoffset":I
	length = lengths[linenumber];
	//    .local v1, "length":I
	if ( length )     
		goto label_cond_27;
label_cond_24:
label_goto_24:
	linenumber = ( linenumber + 0x1);
	goto label_goto_18;
	// 724    .line 1574
label_cond_27:
	parsed = this->addGroupName(lineoffset, length, tokenlengths, this->m_nameSet_);
	//    .local v8, "parsed":[I
	if ( parsed[cVar1] <= maxlength )
		goto label_cond_33;
	maxlength = parsed[cVar1];
label_cond_33:
	lineoffset = (lineoffset +  parsed[cVar2]);
	if ( parsed[cVar2] >= length )
		goto label_cond_24;
	length = (length -  parsed[cVar2]);
	parsed = this->addGroupName(lineoffset, length, tokenlengths, this->m_nameSet_);
	if ( parsed[cVar1] <= maxlength )
		goto label_cond_49;
	maxlength = parsed[cVar1];
label_cond_49:
	if ( parsed[cVar2] >= length )
		goto label_cond_24;
	length = (length -  parsed[cVar2]);
	if ( this->addGroupName((lineoffset +  parsed[cVar2]), length, tokenlengths, this->m_ISOCommentSet_)[cVar2] <= maxisolength )
		goto label_cond_24;
	maxisolength = length;
	goto label_goto_24;
	// 808    .line 1559
	// 809    .end local v1    # "length":I
	// 810    .end local v4    # "lineoffset":I
	// 811    .end local v8    # "parsed":[I
label_cond_5f:
	i = ( i + 0x1);
	goto label_goto_f;
	// 817    .line 1608
	// 818    .end local v3    # "linenumber":I
	// 819    .end local v6    # "offset":I
label_cond_62:
	this->m_maxISOCommentLength_ = maxisolength;
	this->m_maxNameLength_ = maxlength;
	return;

}
// .method private addGroupName(II[B[I)[I
int android::icu::impl::UCharacterName::addGroupName(int offset,int length,std::shared_ptr<unsigned char[]> tokenlength,std::shared_ptr<int[]> set)
{
	
	int resultnlength;
	int resultplength;
	char b;
	char token;
	int token;
	unsigned char tlength;
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	
	//    .param p1, "offset"    # I
	//    .param p2, "length"    # I
	//    .param p3, "tokenlength"    # [B
	//    .param p4, "set"    # [I
	resultnlength = 0x0;
	//    .local v1, "resultnlength":I
	resultplength = 0x0;
	//    .local v2, "resultplength":I
label_goto_3:
	if ( resultplength >= length )
		goto label_cond_14;
	b = (char)(( this->m_groupstring_[(offset + resultplength)] & 0xff));
	//    .local v0, "b":C
	resultplength = ( resultplength + 0x1);
	if ( b != 0x3b )
		goto label_cond_20;
	//    .end local v0    # "b":C
label_cond_14:
	this->m_utilIntBuffer_[0x0] = resultnlength;
	this->m_utilIntBuffer_[0x1] = resultplength;
	return this->m_utilIntBuffer_;
	// 891    .line 1503
	// 892    .restart local v0    # "b":C
label_cond_20:
	if ( b <  this->m_tokentable_->size() )
		goto label_cond_2b;
	android::icu::impl::UCharacterName::add(set, b);
	resultnlength = ( resultnlength + 0x1);
	goto label_goto_3;
	// 908    .line 1508
label_cond_2b:
	token = this->m_tokentable_[( b & 0xff)];
	//    .local v4, "token":C
	if ( token != 0xfffe )
		goto label_cond_48;
	b = (char)((( b << 0x8) |  ( this->m_groupstring_[(offset + resultplength)] & 0xff)));
	token = this->m_tokentable_[b];
	resultplength = ( resultplength + 0x1);
label_cond_48:
	if ( token != 0xffff )
		goto label_cond_53;
	android::icu::impl::UCharacterName::add(set, b);
	resultnlength = ( resultnlength + 0x1);
	goto label_goto_3;
	// 959    .line 1523
label_cond_53:
	tlength = tokenlength[b];
	//    .local v3, "tlength":B
	if ( tlength )     
		goto label_cond_71;
	cVar0 = this->m_utilStringBuffer_;
	cVar0->monitor_enter();
	try {
	//label_try_start_5a:
	this->m_utilStringBuffer_->setLength(0x0);
	android::icu::impl::UCharacterUtility::getNullTermByteSubString(this->m_utilStringBuffer_, this->m_tokenstring_, token);
	//label_try_end_6c:
	}
	catch (...){
		goto label_catchall_73;
	}
	//    .catchall {:try_start_5a .. :try_end_6c} :catchall_73
	tlength = (unsigned char)(android::icu::impl::UCharacterName::add(set, this->m_utilStringBuffer_));
	cVar0->monitor_exit();
	tokenlength[b] = tlength;
label_cond_71:
	resultnlength = (resultnlength +  tlength);
	goto label_goto_3;
	// 1010    .line 1525
label_catchall_73:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private static contains([IC)Z
bool android::icu::impl::UCharacterName::contains(std::shared_ptr<int[]> set,char ch)
{
	
	bool cVar0;
	
	//    .param p0, "set"    # [I
	//    .param p1, "ch"    # C
	cVar0 = 0x1;
	if ( !((set[_ushri(ch,0x5)] &  (cVar0 << ( ch & 0x1f)))) )  
		goto label_cond_e;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method private convert([ILandroid/icu/text/UnicodeSet;)V
void android::icu::impl::UCharacterName::convert(std::shared_ptr<int[]> set,std::shared_ptr<android::icu::text::UnicodeSet> uset)
{
	
	char cVar0;
	
	//    .param p1, "set"    # [I
	//    .param p2, "uset"    # Landroid/icu/text/UnicodeSet;
	uset->clear();
	if ( this->initNameSetsLengths() )     
		goto label_cond_a;
	return;
	// 1070    .line 1652
label_cond_a:
	cVar0 = 0xff;
label_goto_c:
	if ( cVar0 <= 0 )
		goto label_cond_1b;
	if ( !(android::icu::impl::UCharacterName::contains(set, cVar0)) )  
		goto label_cond_17;
	uset->add(cVar0);
label_cond_17:
	cVar0 = (char)(( cVar0 + -0x1));
	//    .local v0, "c":C
	goto label_goto_c;
	// 1096    .line 1657
	// 1097    .end local v0    # "c":C
label_cond_1b:
	return;

}
// .method private getAlgName(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UCharacterName::getAlgName(int ch,int choice)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	int index;
	
	//    .param p1, "ch"    # I
	//    .param p2, "choice"    # I
	if ( !(choice) )  
		goto label_cond_5;
	if ( choice != 0x2 )
		goto label_cond_34;
label_cond_5:
	cVar0 = this->m_utilStringBuffer_;
	cVar0->monitor_enter();
	try {
	//label_try_start_8:
	this->m_utilStringBuffer_->setLength(0x0);
	index = ( this->m_algorithm_->size() + -0x1);
	//    .local v0, "index":I
label_goto_13:
	if ( index < 0 ) 
		goto label_cond_33;
	if ( !(this->m_algorithm_[index]->contains(ch)) )  
		goto label_cond_30;
	this->m_algorithm_[index]->appendName(ch, this->m_utilStringBuffer_);
	//label_try_end_2d:
	}
	catch (...){
		goto label_catchall_36;
	}
	//    .catchall {:try_start_8 .. :try_end_2d} :catchall_36
	cVar0->monitor_exit();
	return this->m_utilStringBuffer_->toString();
	// 1174    .line 1195
label_cond_30:
	index = ( index + -0x1);
	goto label_goto_13;
label_cond_33:
	cVar0->monitor_exit();
	//    .end local v0    # "index":I
label_cond_34:
	return 0x0;
	// 1190    .line 1192
label_catchall_36:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static getCodepointMSB(I)I
int android::icu::impl::UCharacterName::getCodepointMSB(int codepoint)
{
	
	//    .param p0, "codepoint"    # I
	return _shri(codepoint,0x5);

}
// .method private static getExtendedChar(Ljava/lang/String;I)I
int android::icu::impl::UCharacterName::getExtendedChar(std::shared_ptr<java::lang::String> name,int choice)
{
	
	int cVar0;
	int endIndex;
	int startIndex;
	std::vector<std::any> tryCatchExcetionList;
	int result;
	int i;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .param p1, "choice"    # I
	cVar0 = -0x1;
	if ( name->charAt(0x0) != 0x3c )
		goto label_cond_54;
	if ( choice != 0x2 )
		goto label_cond_53;
	endIndex = ( name->length() + -0x1);
	//    .local v1, "endIndex":I
	if ( name->charAt(endIndex) != 0x3e )
		goto label_cond_53;
	startIndex = name->lastIndexOf(0x2d);
	//    .local v5, "startIndex":I
	if ( startIndex < 0 ) 
		goto label_cond_53;
	startIndex = ( startIndex + 0x1);
	-0x1;
	//    .local v4, "result":I
	try {
	//label_try_start_26:
	//label_try_end_2f:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4e;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_26 .. :try_end_2f} :catch_4e
	result = java::lang::Integer::parseInt(name->substring(startIndex, endIndex), 0x10);
	//    .local v6, "type":Ljava/lang/String;
	//    .local v3, "length":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_3b:
	if ( i >= android::icu::impl::UCharacterName::TYPE_NAMES_->size() )
		goto label_cond_53;
	if ( name->substring(0x1, ( startIndex + -0x1))->compareTo(android::icu::impl::UCharacterName::TYPE_NAMES_[i]) )     
		goto label_cond_50;
	if ( android::icu::impl::UCharacterName::getType(result) != i )
		goto label_cond_53;
	return result;
	// 1329    .line 1360
	// 1330    .end local v2    # "i":I
	// 1331    .end local v3    # "length":I
	// 1332    .end local v6    # "type":Ljava/lang/String;
label_catch_4e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/NumberFormatException;
	return cVar0;
	// 1340    .line 1367
	// 1341    .end local v0    # "e":Ljava/lang/NumberFormatException;
	// 1342    .restart local v2    # "i":I
	// 1343    .restart local v3    # "length":I
	// 1344    .restart local v6    # "type":Ljava/lang/String;
label_cond_50:
	i = ( i + 0x1);
	goto label_goto_3b;
	// 1350    .line 1378
	// 1351    .end local v1    # "endIndex":I
	// 1352    .end local v2    # "i":I
	// 1353    .end local v3    # "length":I
	// 1354    .end local v4    # "result":I
	// 1355    .end local v5    # "startIndex":I
	// 1356    .end local v6    # "type":Ljava/lang/String;
label_cond_53:
	return cVar0;
	// 1360    .line 1380
label_cond_54:
	return -0x2;

}
// .method private getGroupChar(I[CLjava/lang/String;I)I
int android::icu::impl::UCharacterName::getGroupChar(int index,std::shared_ptr<char[]> length,std::shared_ptr<java::lang::String> name,int choice)
{
	
	int namelen;
	int result;
	int nindex;
	int len;
	int index;
	int fieldIndex;
	int count;
	unsigned char b;
	int token;
	
	//    .param p1, "index"    # I
	//    .param p2, "length"    # [C
	//    .param p3, "name"    # Ljava/lang/String;
	//    .param p4, "choice"    # I
	0x0;
	//    .local v1, "b":B
	namelen = name->length();
	//    .local v5, "namelen":I
	result = 0x0;
	//    .end local v1    # "b":B
	//    .local v9, "result":I
label_goto_6:
	if ( result >  0x20 )
		goto label_cond_a4;
	nindex = 0x0;
	//    .local v6, "nindex":I
	len = length[result];
	//    .local v4, "len":I
	if ( !(choice) )  
		goto label_cond_2f;
	if ( choice == 0x2 )
		goto label_cond_2f;
	if ( choice != 0x4 )
		goto label_cond_54;
	//    .local v3, "fieldIndex":I
label_cond_1a:
label_goto_1a:
	//    .local v8, "oldindex":I
	index = (index + android::icu::impl::UCharacterUtility::skipByteSubString(this->m_groupstring_, index, len, 0x3b));
	len = (len -  (index - index));
	fieldIndex = ( fieldIndex + -0x1);
	if ( fieldIndex > 0 ) 
		goto label_cond_1a;
	//    .end local v3    # "fieldIndex":I
	//    .end local v8    # "oldindex":I
label_cond_2f:
	count = 0x0;
	//    .local v2, "count":I
	nindex = nindex;
	//    .end local v6    # "nindex":I
	//    .local v7, "nindex":I
label_goto_31:
	if ( count >= len )
		goto label_cond_8f;
	if ( nindex == -0x1 )
		goto label_cond_8f;
	if ( nindex >= namelen )
		goto label_cond_8f;
	b = this->m_groupstring_[(index + count)];
	//    .local v1, "b":B
	count = ( count + 0x1);
	if ( b <  this->m_tokentable_->size() )
		goto label_cond_57;
	nindex = ( nindex + 0x1);
	//    .end local v7    # "nindex":I
	//    .restart local v6    # "nindex":I
	if ( name->charAt(nindex) == ( b & 0xff) )
		goto label_cond_52;
	nindex = -0x1;
label_cond_52:
label_goto_52:
	nindex = nindex;
	//    .end local v6    # "nindex":I
	//    .restart local v7    # "nindex":I
	goto label_goto_31;
	// 1518    .line 1263
	// 1519    .end local v1    # "b":B
	// 1520    .end local v2    # "count":I
	// 1521    .end local v7    # "nindex":I
	// 1522    .restart local v6    # "nindex":I
label_cond_54:
	//    .restart local v3    # "fieldIndex":I
	goto label_goto_1a;
	// 1529    .line 1285
	// 1530    .end local v3    # "fieldIndex":I
	// 1531    .end local v6    # "nindex":I
	// 1532    .restart local v1    # "b":B
	// 1533    .restart local v2    # "count":I
	// 1534    .restart local v7    # "nindex":I
label_cond_57:
	token = this->m_tokentable_[( b & 0xff)];
	//    .local v10, "token":C
	if ( token != 0xfffe )
		goto label_cond_73;
	token = this->m_tokentable_[(( b << 0x8) |  ( this->m_groupstring_[(index + count)] & 0xff))];
	count = ( count + 0x1);
label_cond_73:
	if ( token != 0xffff )
		goto label_cond_86;
	nindex = ( nindex + 0x1);
	//    .end local v7    # "nindex":I
	//    .restart local v6    # "nindex":I
	if ( name->charAt(nindex) == ( b & 0xff) )
		goto label_cond_52;
	nindex = -0x1;
	goto label_goto_52;
	// 1596    .line 1300
	// 1597    .end local v6    # "nindex":I
	// 1598    .restart local v7    # "nindex":I
label_cond_86:
	nindex = android::icu::impl::UCharacterUtility::compareNullTermByteSubString(name, this->m_tokenstring_, nindex, token);
	//    .end local v7    # "nindex":I
	//    .restart local v6    # "nindex":I
	goto label_goto_52;
	// 1613    .line 1305
	// 1614    .end local v1    # "b":B
	// 1615    .end local v6    # "nindex":I
	// 1616    .end local v10    # "token":C
	// 1617    .restart local v7    # "nindex":I
label_cond_8f:
	if ( namelen != nindex )
		goto label_cond_9e;
	if ( count == len )
		goto label_cond_9d;
	if ( this->m_groupstring_[(index + count)] != 0x3b )
		goto label_cond_9e;
label_cond_9d:
	return result;
	// 1638    .line 1310
label_cond_9e:
	index = (index + len);
	result = ( result + 0x1);
	goto label_goto_6;
	// 1647    .line 1312
	// 1648    .end local v2    # "count":I
	// 1649    .end local v4    # "len":I
	// 1650    .end local v7    # "nindex":I
label_cond_a4:
	return -0x1;

}
// .method private declared-synchronized getGroupChar(Ljava/lang/String;I)I
int android::icu::impl::UCharacterName::getGroupChar(std::shared_ptr<java::lang::String> name,int choice)
{
	
	int cVar0;
	int i;
	int result;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "choice"    # I
	cVar0 = -0x1;
	this->monitor_enter();
	i = 0x0;
	//    .local v0, "i":I
label_goto_3:
	try {
	//label_try_start_3:
	if ( i >= this->m_groupcount_ )
		goto label_cond_26;
	//    .local v2, "startgpstrindex":I
	result = this->getGroupChar(this->getGroupLengths(i, this->m_groupoffsets_, this->m_grouplengths_), this->m_grouplengths_, name, choice);
	//    .local v1, "result":I
	if ( result == cVar0 )
		goto label_cond_23;
	//label_try_end_1e:
	}
	catch (...){
		goto label_catchall_28;
	}
	//    .catchall {:try_start_3 .. :try_end_1e} :catchall_28
	this->monitor_exit();
	return (( this->m_groupinfo_[(this->m_groupsize_ *  i)] << 0x5) |  result);
	// 1719    .line 1215
label_cond_23:
	i = ( i + 0x1);
	goto label_goto_3;
	// 1725    .end local v1    # "result":I
	// 1726    .end local v2    # "startgpstrindex":I
label_cond_26:
	this->monitor_exit();
	return cVar0;
label_catchall_28:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public static getGroupLimit(I)I
int android::icu::impl::UCharacterName::getGroupLimit(int msb)
{
	
	//    .param p0, "msb"    # I
	return ( ( msb << 0x5) + 0x20);

}
// .method public static getGroupMin(I)I
int android::icu::impl::UCharacterName::getGroupMin(int msb)
{
	
	//    .param p0, "msb"    # I
	return ( msb << 0x5);

}
// .method public static getGroupMinFromCodepoint(I)I
int android::icu::impl::UCharacterName::getGroupMinFromCodepoint(int codepoint)
{
	
	//    .param p0, "codepoint"    # I
	return ( codepoint & -0x20);

}
// .method public static getGroupOffset(I)I
int android::icu::impl::UCharacterName::getGroupOffset(int codepoint)
{
	
	//    .param p0, "codepoint"    # I
	return ( codepoint & 0x1f);

}
// .method private static getType(I)I
int android::icu::impl::UCharacterName::getType(int ch)
{
	
	int result;
	
	//    .param p0, "ch"    # I
	if ( !(android::icu::impl::UCharacterUtility::isNonCharacter(ch)) )  
		goto label_cond_9;
	return 0x1e;
	// 1804    .line 1326
label_cond_9:
	result = android::icu::lang::UCharacter::getType(ch);
	//    .local v0, "result":I
	if ( result != 0x12 )
		goto label_cond_18;
	if ( ch >  0xdbff )
		goto label_cond_19;
	result = 0x1f;
label_cond_18:
label_goto_18:
	return result;
	// 1829    .line 1332
label_cond_19:
	result = 0x20;
	goto label_goto_18;

}
// .method private initNameSetsLengths()Z
bool android::icu::impl::UCharacterName::initNameSetsLengths()
{
	
	bool cVar0;
	std::shared_ptr<java::lang::String> extra;
	int i;
	
	cVar0 = 0x1;
	if ( this->m_maxNameLength_ <= 0 )
		goto label_cond_7;
	return cVar0;
	// 1852    .line 1622
label_cond_7:
	extra = std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789ABCDEF<>-"));
	//    .local v0, "extra":Ljava/lang/String;
	i = ( extra->length() + -0x1);
	//    .local v1, "i":I
label_goto_10:
	if ( i < 0 ) 
		goto label_cond_1e;
	android::icu::impl::UCharacterName::add(this->m_nameSet_, extra->charAt(i));
	i = ( i + -0x1);
	goto label_goto_10;
	// 1882    .line 1630
label_cond_1e:
	this->m_maxNameLength_ = this->addAlgorithmName(0x0);
	this->m_maxNameLength_ = this->addExtendedName(this->m_maxNameLength_);
	this->addGroupName(this->m_maxNameLength_);
	return cVar0;

}
// .method public getAlgorithmEnd(I)I
int android::icu::impl::UCharacterName::getAlgorithmEnd(int index)
{
	
	//    .param p1, "index"    # I
	return android::icu::impl::UCharacterName_S_AlgorithmName::-get0(this->m_algorithm_[index]);

}
// .method public getAlgorithmLength()I
int android::icu::impl::UCharacterName::getAlgorithmLength()
{
	
	return this->m_algorithm_->size();

}
// .method public getAlgorithmName(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UCharacterName::getAlgorithmName(int index,int codepoint)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	
	//    .param p1, "index"    # I
	//    .param p2, "codepoint"    # I
	0x0;
	//    .local v0, "result":Ljava/lang/String;
	cVar0 = this->m_utilStringBuffer_;
	cVar0->monitor_enter();
	try {
	//label_try_start_4:
	this->m_utilStringBuffer_->setLength(0x0);
	this->m_algorithm_[index]->appendName(codepoint, this->m_utilStringBuffer_);
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_1b;
	}
	//    .catchall {:try_start_4 .. :try_end_18} :catchall_1b
	//    .local v0, "result":Ljava/lang/String;
	cVar0->monitor_exit();
	return this->m_utilStringBuffer_->toString();
	// 1986    .line 494
	// 1987    .local v0, "result":Ljava/lang/String;
label_catchall_1b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public getAlgorithmStart(I)I
int android::icu::impl::UCharacterName::getAlgorithmStart(int index)
{
	
	//    .param p1, "index"    # I
	return android::icu::impl::UCharacterName_S_AlgorithmName::-get1(this->m_algorithm_[index]);

}
// .method public getCharFromName(ILjava/lang/String;)I
int android::icu::impl::UCharacterName::getCharFromName(int choice,std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	int cVar1;
	int result;
	std::shared_ptr<java::lang::String> upperCaseName;
	int count;
	
	//    .param p1, "choice"    # I
	//    .param p2, "name"    # Ljava/lang/String;
	cVar0 = 0x2;
	cVar1 = -0x1;
	if ( choice >= 0x4 )
		goto label_cond_8;
	if ( name )     
		goto label_cond_9;
label_cond_8:
	return cVar1;
	// 2037    .line 116
label_cond_9:
	if ( !(name->length()) )  
		goto label_cond_8;
	result = android::icu::impl::UCharacterName::getExtendedChar(name->toLowerCase(java::util::Locale::ENGLISH), choice);
	//    .local v1, "result":I
	if ( result <  cVar1 )
		goto label_cond_1c;
	return result;
	// 2063    .line 126
label_cond_1c:
	upperCaseName = name->toUpperCase(java::util::Locale::ENGLISH);
	//    .local v2, "upperCaseName":Ljava/lang/String;
	if ( !(choice) )  
		goto label_cond_26;
	if ( choice != cVar0 )
		goto label_cond_40;
label_cond_26:
	count = 0x0;
	//    .local v0, "count":I
	if ( !(this->m_algorithm_) )  
		goto label_cond_2e;
	count = this->m_algorithm_->size();
label_cond_2e:
	count = ( count + -0x1);
label_goto_30:
	if ( count < 0 ) 
		goto label_cond_40;
	result = this->m_algorithm_[count]->getChar(upperCaseName);
	if ( result < 0 ) 
		goto label_cond_3d;
	return result;
	// 2115    .line 137
label_cond_3d:
	count = ( count + -0x1);
	goto label_goto_30;
	// 2121    .line 145
	// 2122    .end local v0    # "count":I
label_cond_40:
	if ( choice != cVar0 )
		goto label_cond_4e;
	result = this->getGroupChar(upperCaseName, 0x0);
	if ( result != cVar1 )
		goto label_cond_4d;
	result = this->getGroupChar(upperCaseName, 0x3);
label_cond_4d:
label_goto_4d:
	return result;
	// 2147    .line 154
label_cond_4e:
	result = this->getGroupChar(upperCaseName, choice);
	goto label_goto_4d;

}
// .method public getCharNameCharacters(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::UCharacterName::getCharNameCharacters(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	this->convert(this->m_nameSet_, set);
	return;

}
// .method public getExtendedName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UCharacterName::getExtendedName(int ch)
{
	
	std::shared_ptr<java::lang::String> result;
	
	//    .param p1, "ch"    # I
	result = this->getName(ch, 0x0);
	//    .local v0, "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_b;
label_cond_b:
	return result;

}
// .method public getExtendedOr10Name(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UCharacterName::getExtendedOr10Name(int ch)
{
	
	int type;
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::lang::String> chStr;
	int zeros;
	
	//    .param p1, "ch"    # I
	0x0;
	//    .local v1, "result":Ljava/lang/String;
	type = android::icu::impl::UCharacterName::getType(ch);
	//    .local v2, "type":I
	if ( type <  android::icu::impl::UCharacterName::TYPE_NAMES_->size() )
		goto label_cond_45;
	//    .local v1, "result":Ljava/lang/String;
label_goto_d:
	cVar0 = this->m_utilStringBuffer_;
	cVar0->monitor_enter();
	try {
	//label_try_start_10:
	this->m_utilStringBuffer_->setLength(0x0);
	this->m_utilStringBuffer_->append(0x3c);
	this->m_utilStringBuffer_->append(result);
	this->m_utilStringBuffer_->append(0x2d);
	chStr = java::lang::Integer::toHexString(ch)->toUpperCase(java::util::Locale::ENGLISH);
	//    .local v0, "chStr":Ljava/lang/String;
	zeros = ( chStr->length() - 0x4);
	//    .local v3, "zeros":I
label_goto_39:
	if ( zeros <= 0 )
		goto label_cond_4a;
	this->m_utilStringBuffer_->append(0x30);
	//label_try_end_42:
	}
	catch (...){
		goto label_catchall_5e;
	}
	//    .catchall {:try_start_10 .. :try_end_42} :catchall_5e
	zeros = ( zeros + -0x1);
	goto label_goto_39;
	// 2293    .line 370
	// 2294    .end local v0    # "chStr":Ljava/lang/String;
	// 2295    .end local v3    # "zeros":I
	// 2296    .local v1, "result":Ljava/lang/String;
label_cond_45:
	//    .local v1, "result":Ljava/lang/String;
	goto label_goto_d;
	// 2305    .line 383
	// 2306    .restart local v0    # "chStr":Ljava/lang/String;
	// 2307    .restart local v3    # "zeros":I
label_cond_4a:
	try {
	//label_try_start_4a:
	this->m_utilStringBuffer_->append(chStr);
	this->m_utilStringBuffer_->append(0x3e);
	//label_try_end_5b:
	}
	catch (...){
		goto label_catchall_5e;
	}
	//    .catchall {:try_start_4a .. :try_end_5b} :catchall_5e
	cVar0->monitor_exit();
	return this->m_utilStringBuffer_->toString();
	// 2335    .line 372
	// 2336    .end local v0    # "chStr":Ljava/lang/String;
	// 2337    .end local v3    # "zeros":I
label_catchall_5e:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public getGroup(I)I
int android::icu::impl::UCharacterName::getGroup(int codepoint)
{
	
	int endGroup;
	int result;
	int gindex;
	
	//    .param p1, "codepoint"    # I
	endGroup = this->m_groupcount_;
	//    .local v0, "endGroup":I
	//    .local v2, "msb":I
	result = 0x0;
	//    .local v3, "result":I
label_goto_7:
	if ( result >= ( endGroup + -0x1) )
		goto label_cond_19;
	gindex = _shri((result + endGroup),0x1);
	//    .local v1, "gindex":I
	if ( android::icu::impl::UCharacterName::getCodepointMSB(codepoint) >= this->getGroupMSB(gindex) )
		goto label_cond_17;
	endGroup = gindex;
	goto label_goto_7;
	// 2389    .line 346
label_cond_17:
	result = gindex;
	goto label_goto_7;
	// 2395    .line 349
	// 2396    .end local v1    # "gindex":I
label_cond_19:
	return result;

}
// .method public getGroupLengths(I[C[C)I
int android::icu::impl::UCharacterName::getGroupLengths(int index,std::shared_ptr<char[]> offsets,std::shared_ptr<char[]> lengths)
{
	
	int cVar0;
	int cVar1;
	char cVar2;
	int length;
	int cVar3;
	int stringoffset;
	int i;
	int shift;
	unsigned char n;
	char length;
	
	//    .param p1, "index"    # I
	//    .param p2, "offsets"    # [C
	//    .param p3, "lengths"    # [C
	cVar0 = 0xffff;
	cVar1 = 0x20;
	cVar2 = 0x0;
	length = 0xffff;
	//    .local v2, "length":C
	0x0;
	//    .local v0, "b":B
	0x0;
	//    .local v3, "n":B
	cVar3 = (index *  this->m_groupsize_);
	stringoffset = android::icu::impl::UCharacterUtility::toInt(this->m_groupinfo_[( cVar3 + 0x1)], this->m_groupinfo_[( cVar3 + 0x2)]);
	//    .local v5, "stringoffset":I
	offsets[cVar2] = cVar2;
	i = 0x0;
	//    .end local v0    # "b":B
	//    .end local v2    # "length":C
	//    .end local v3    # "n":B
	//    .local v1, "i":I
label_goto_21:
	if ( i >= cVar1 )
		goto label_cond_5f;
	//    .local v0, "b":B
	shift = 0x4;
	//    .local v4, "shift":I
label_goto_28:
	if ( shift < 0 ) 
		goto label_cond_5c;
	n = (unsigned char)(( _shri(this->m_groupstring_[stringoffset],shift) & 0xf));
	//    .local v3, "n":B
	if ( length != cVar0 )
		goto label_cond_3d;
	if ( n <= 0xb )
		goto label_cond_3d;
	length = (char)(( ( n + -0xc) << 0x4));
label_goto_3a:
	shift = ( shift + -0x4);
	goto label_goto_28;
	// 2506    .line 203
label_cond_3d:
	if ( length == cVar0 )
		goto label_cond_58;
	lengths[i] = (char)(( (length | n) + 0xc));
label_goto_46:
	if ( i >= cVar1 )
		goto label_cond_52;
	offsets[( i + 0x1)] = (char)((offsets[i] +  lengths[i]));
label_cond_52:
	length = 0xffff;
	//    .restart local v2    # "length":C
	i = ( i + 0x1);
	goto label_goto_3a;
	// 2546    .line 207
	// 2547    .end local v2    # "length":C
label_cond_58:
	lengths[i] = (char)(n);
	goto label_goto_46;
	// 2555    .line 192
	// 2556    .end local v3    # "n":B
label_cond_5c:
	stringoffset = ( stringoffset + 0x1);
	goto label_goto_21;
	// 2562    .line 221
	// 2563    .end local v0    # "b":B
	// 2564    .end local v4    # "shift":I
label_cond_5f:
	return stringoffset;

}
// .method public getGroupMSB(I)I
int android::icu::impl::UCharacterName::getGroupMSB(int gindex)
{
	
	//    .param p1, "gindex"    # I
	if ( gindex <  this->m_groupcount_ )
		goto label_cond_6;
	return -0x1;
	// 2584    .line 401
label_cond_6:
	return this->m_groupinfo_[(this->m_groupsize_ *  gindex)];

}
// .method public declared-synchronized getGroupName(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UCharacterName::getGroupName(int ch,int choice)
{
	
	int group;
	int offset;
	
	//    .param p1, "ch"    # I
	//    .param p2, "choice"    # I
	this->monitor_enter();
	try {
	//label_try_start_1:
	//    .local v2, "msb":I
	group = this->getGroup(ch);
	//    .local v0, "group":I
	if ( android::icu::impl::UCharacterName::getCodepointMSB(ch) != this->m_groupinfo_[(this->m_groupsize_ *  group)] )
		goto label_cond_2b;
	//    .local v1, "index":I
	offset = ( ch & 0x1f);
	//    .local v3, "offset":I
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_2e;
	}
	//    .catchall {:try_start_1 .. :try_end_28} :catchall_2e
	this->monitor_exit();
	return this->getGroupName((this->m_groupoffsets_[offset] +  this->getGroupLengths(group, this->m_groupoffsets_, this->m_grouplengths_)), this->m_grouplengths_[offset], choice);
	// 2668    .line 522
	// 2669    .end local v1    # "index":I
	// 2670    .end local v3    # "offset":I
label_cond_2b:
	this->monitor_exit();
	return 0x0;
	// 2678    .end local v0    # "group":I
	// 2679    .end local v2    # "msb":I
label_catchall_2e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getGroupName(III)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UCharacterName::getGroupName(int index,int length,int choice)
{
	
	int index;
	int length;
	int fieldIndex;
	std::shared_ptr<java::lang::StringBuffer> cVar2;
	int i;
	int b;
	int token;
	
	//    .param p1, "index"    # I
	//    .param p2, "length"    # I
	//    .param p3, "choice"    # I
	if ( !(choice) )  
		goto label_cond_2c;
	if ( choice == 0x2 )
		goto label_cond_2c;
	if ( 0x3b >= this->m_tokentable_->size() )
		goto label_cond_17;
	if ( this->m_tokentable_[0x3b] != 0xffff )
		goto label_cond_5b;
label_cond_17:
	if ( choice != 0x4 )
		goto label_cond_59;
	//    .local v1, "fieldIndex":I
label_cond_1b:
label_goto_1b:
	//    .local v3, "oldindex":I
	index = (index +  android::icu::impl::UCharacterUtility::skipByteSubString(this->m_groupstring_, index, length, 0x3b));
	length = (length -  (index - index));
	fieldIndex = ( fieldIndex + -0x1);
	if ( fieldIndex > 0 ) 
		goto label_cond_1b;
	//    .end local v1    # "fieldIndex":I
	//    .end local v3    # "oldindex":I
label_cond_2c:
label_goto_2c:
	cVar2 = this->m_utilStringBuffer_;
	cVar2->monitor_enter();
	try {
	//label_try_start_2f:
	this->m_utilStringBuffer_->setLength(0x0);
	i = 0x0;
	//    .local v2, "i":I
label_goto_36:
	if ( i >= length )
		goto label_cond_49;
	b = this->m_groupstring_[(index + i)];
	//    .local v0, "b":B
	i = ( i + 0x1);
	if ( b <  this->m_tokentable_->size() )
		goto label_cond_66;
	if ( b != 0x3b )
		goto label_cond_5d;
	//    .end local v0    # "b":B
label_cond_49:
	if ( this->m_utilStringBuffer_->length() <= 0 )
		goto label_cond_a8;
	//label_try_end_56:
	}
	catch (...){
		goto label_catchall_63;
	}
	//    .catchall {:try_start_2f .. :try_end_56} :catchall_63
	cVar2->monitor_exit();
	return this->m_utilStringBuffer_->toString();
	// 2831    .line 248
	// 2832    .end local v2    # "i":I
label_cond_59:
	//    .restart local v1    # "fieldIndex":I
	goto label_goto_1b;
	// 2839    .line 260
	// 2840    .end local v1    # "fieldIndex":I
label_cond_5b:
	length = 0x0;
	goto label_goto_2c;
	// 2846    .line 276
	// 2847    .restart local v0    # "b":B
	// 2848    .restart local v2    # "i":I
label_cond_5d:
	try {
	//label_try_start_5d:
	this->m_utilStringBuffer_->append(b);
	//label_try_end_62:
	}
	catch (...){
		goto label_catchall_63;
	}
	//    .catchall {:try_start_5d .. :try_end_62} :catchall_63
	goto label_goto_36;
	// 2859    .line 264
	// 2860    .end local v0    # "b":B
	// 2861    .end local v2    # "i":I
label_catchall_63:
	// move-exception
	
	cVar2->monitor_exit();
	// throw
	throw;
	// 2869    .line 279
	// 2870    .restart local v0    # "b":B
	// 2871    .restart local v2    # "i":I
label_cond_66:
	try {
	//label_try_start_66:
	token = this->m_tokentable_[( b & 0xff)];
	//    .local v4, "token":C
	if ( token != 0xfffe )
		goto label_cond_82;
	token = this->m_tokentable_[(( b << 0x8) |  ( this->m_groupstring_[(index + i)] & 0xff))];
	i = ( i + 0x1);
label_cond_82:
	if ( token != 0xffff )
		goto label_cond_a0;
	if ( b != 0x3b )
		goto label_cond_97;
	if ( this->m_utilStringBuffer_->length() )     
		goto label_cond_49;
	if ( choice != 0x2 )
		goto label_cond_49;
	goto label_goto_36;
	// 2936    .line 298
label_cond_97:
	this->m_utilStringBuffer_->append((char)(( b & 0xff)));
	goto label_goto_36;
	// 2948    .line 302
label_cond_a0:
	android::icu::impl::UCharacterUtility::getNullTermByteSubString(this->m_utilStringBuffer_, this->m_tokenstring_, token);
	//label_try_end_a7:
	}
	catch (...){
		goto label_catchall_63;
	}
	//    .catchall {:try_start_66 .. :try_end_a7} :catchall_63
	goto label_goto_36;
	// 2961    .end local v0    # "b":B
	// 2962    .end local v4    # "token":C
label_cond_a8:
	cVar2->monitor_exit();
	return 0x0;

}
// .method public getISOCommentCharacters(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::UCharacterName::getISOCommentCharacters(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	this->convert(this->m_ISOCommentSet_, set);
	return;

}
// .method public getMaxCharNameLength()I
int android::icu::impl::UCharacterName::getMaxCharNameLength()
{
	
	if ( !(this->initNameSetsLengths()) )  
		goto label_cond_9;
	return this->m_maxNameLength_;
	// 3002    .line 538
label_cond_9:
	return 0x0;

}
// .method public getMaxISOCommentLength()I
int android::icu::impl::UCharacterName::getMaxISOCommentLength()
{
	
	if ( !(this->initNameSetsLengths()) )  
		goto label_cond_9;
	return this->m_maxISOCommentLength_;
	// 3025    .line 554
label_cond_9:
	return 0x0;

}
// .method public getName(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UCharacterName::getName(int ch,int choice)
{
	
	int result;
	std::shared_ptr<java::lang::String> result;
	
	//    .param p1, "ch"    # I
	//    .param p2, "choice"    # I
	if ( ch < 0 ) 
		goto label_cond_8;
	if ( ch <= 0x10ffff )
		goto label_cond_9;
label_cond_8:
	return 0x0;
	// 3051    .line 85
label_cond_9:
	if ( choice >  0x4 )
		goto label_cond_8;
	result = 0x0;
	//    .local v0, "result":Ljava/lang/String;
	result = this->getAlgName(ch, choice);
	//    .local v0, "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_19;
	if ( result->length() )     
		goto label_cond_20;
label_cond_19:
	if ( choice != 0x2 )
		goto label_cond_21;
	result = this->getExtendedName(ch);
label_cond_20:
label_goto_20:
	return result;
	// 3092    .line 98
label_cond_21:
	result = this->getGroupName(ch, choice);
	goto label_goto_20;

}
// .method setAlgorithm([Landroid/icu/impl/UCharacterName$AlgorithmName;)Z
bool android::icu::impl::UCharacterName::setAlgorithm(std::shared_ptr<std::vector<android::icu::impl::UCharacterName_S_AlgorithmName>> alg)
{
	
	//    .param p1, "alg"    # [Landroid/icu/impl/UCharacterName$AlgorithmName;
	if ( !(alg) )  
		goto label_cond_a;
	if ( !(alg->size()) )  
		goto label_cond_a;
	this->m_algorithm_ = alg;
	return 0x1;
	// 3123    .line 987
label_cond_a:
	return 0x0;

}
// .method setGroup([C[B)Z
bool android::icu::impl::UCharacterName::setGroup(std::shared_ptr<char[]> group,std::shared_ptr<unsigned char[]> groupstring)
{
	
	//    .param p1, "group"    # [C
	//    .param p2, "groupstring"    # [B
	if ( !(group) )  
		goto label_cond_11;
	if ( !(groupstring) )  
		goto label_cond_11;
	if ( group->size() <= 0 )
		goto label_cond_11;
	if ( groupstring->size() <= 0 )
		goto label_cond_11;
	this->m_groupinfo_ = group;
	this->m_groupstring_ = groupstring;
	return 0x1;
	// 3161    .line 1020
label_cond_11:
	return 0x0;

}
// .method setGroupCountSize(II)Z
bool android::icu::impl::UCharacterName::setGroupCountSize(int count,int size)
{
	
	//    .param p1, "count"    # I
	//    .param p2, "size"    # I
	if ( count <= 0 )
		goto label_cond_5;
	if ( size > 0 ) 
		goto label_cond_6;
label_cond_5:
	return 0x0;
	// 3183    .line 1001
label_cond_6:
	this->m_groupcount_ = count;
	this->m_groupsize_ = size;
	return 0x1;

}
// .method setToken([C[B)Z
bool android::icu::impl::UCharacterName::setToken(std::shared_ptr<char[]> token,std::shared_ptr<unsigned char[]> tokenstring)
{
	
	//    .param p1, "token"    # [C
	//    .param p2, "tokenstring"    # [B
	if ( !(token) )  
		goto label_cond_11;
	if ( !(tokenstring) )  
		goto label_cond_11;
	if ( token->size() <= 0 )
		goto label_cond_11;
	if ( tokenstring->size() <= 0 )
		goto label_cond_11;
	this->m_tokentable_ = token;
	this->m_tokenstring_ = tokenstring;
	return 0x1;
	// 3229    .line 973
label_cond_11:
	return 0x0;

}


