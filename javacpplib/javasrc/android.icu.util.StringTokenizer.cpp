// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\StringTokenizer.smali
#include "java2ctype.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.StringTokenizer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.NoSuchElementException.h"

static android::icu::util::StringTokenizer::DEFAULT_DELIMITERS_;
static android::icu::util::StringTokenizer::EMPTY_DELIMITER_;
static android::icu::util::StringTokenizer::TOKEN_SIZE_ = 0x64;
// .method static constructor <clinit>()V
void android::icu::util::StringTokenizer::static_cinit()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	std::shared<std::vector<int[]>> cVar1;
	
	cVar1 = std::make_shared<std::vector<int[]>>(0x6);
	?;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(cVar1);
	android::icu::util::StringTokenizer::DEFAULT_DELIMITERS_ = cVar0;
	android::icu::util::StringTokenizer::EMPTY_DELIMITER_ = android::icu::text::UnicodeSet::EMPTY;
	return;
	// 080    .line 577
	// 081    :array_12
	// 082    .array-data 4
	// 083        0x9
	// 084        0xa
	// 085        0xc
	// 086        0xd
	// 087        0x20
	// 088        0x20
	// 089    .end array-data

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::StringTokenizer::StringTokenizer(std::shared_ptr<java::lang::String> str)
{
	
	bool cVar0;
	
	//    .param p1, "str"    # Ljava/lang/String;
	cVar0 = 0x0;
	android::icu::util::StringTokenizer::(str, android::icu::util::StringTokenizer::DEFAULT_DELIMITERS_, cVar0, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/UnicodeSet;)V
android::icu::util::StringTokenizer::StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::UnicodeSet> delim)
{
	
	bool cVar0;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "delim"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0x0;
	android::icu::util::StringTokenizer::(str, delim, cVar0, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/UnicodeSet;Z)V
android::icu::util::StringTokenizer::StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::UnicodeSet> delim,bool returndelims)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "delim"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "returndelims"    # Z
	android::icu::util::StringTokenizer::(str, delim, returndelims, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/UnicodeSet;ZZ)V
android::icu::util::StringTokenizer::StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<android::icu::text::UnicodeSet> delim,bool returndelims,bool coalescedelims)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "delim"    # Landroid/icu/text/UnicodeSet;
	//    .param p3, "returndelims"    # Z
	//    .param p4, "coalescedelims"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 146    .end annotation
	cVar0 = 0x0;
	cVar1 = -0x1;
	// 154    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_source_ = str;
	this->m_length_ = str->length();
	if ( delim )     
		goto label_cond_22;
	this->m_delimiters_ = android::icu::util::StringTokenizer::EMPTY_DELIMITER_;
label_goto_13:
	this->m_returnDelimiters_ = returndelims;
	this->m_coalesceDelimiters_ = coalescedelims;
	this->m_tokenOffset_ = cVar1;
	this->m_tokenSize_ = cVar1;
	if ( this->m_length_ )     
		goto label_cond_25;
	this->m_nextOffset_ = cVar1;
label_cond_21:
label_goto_21:
	return;
	// 200    .line 153
label_cond_22:
	this->m_delimiters_ = delim;
	goto label_goto_13;
	// 206    .line 164
label_cond_25:
	this->m_nextOffset_ = cVar0;
	if ( returndelims )     
		goto label_cond_21;
	this->m_nextOffset_ = this->getNextNonDelimiter(cVar0);
	goto label_goto_21;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::util::StringTokenizer::StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> delim)
{
	
	bool cVar0;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "delim"    # Ljava/lang/String;
	cVar0 = 0x0;
	android::icu::util::StringTokenizer::(str, delim, cVar0, cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Z)V
android::icu::util::StringTokenizer::StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> delim,bool returndelims)
{
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "delim"    # Ljava/lang/String;
	//    .param p3, "returndelims"    # Z
	android::icu::util::StringTokenizer::(str, delim, returndelims, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;ZZ)V
android::icu::util::StringTokenizer::StringTokenizer(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> delim,bool returndelims,bool coalescedelims)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar2;
	
	//    .param p1, "str"    # Ljava/lang/String;
	//    .param p2, "delim"    # Ljava/lang/String;
	//    .param p3, "returndelims"    # Z
	//    .param p4, "coalescedelims"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 261    .end annotation
	cVar0 = -0x1;
	cVar1 = 0x0;
	// 269    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_delimiters_ = android::icu::util::StringTokenizer::EMPTY_DELIMITER_;
	if ( !(delim) )  
		goto label_cond_20;
	if ( delim->length() <= 0 )
		goto label_cond_20;
	cVar2 = std::make_shared<android::icu::text::UnicodeSet>();
	this->m_delimiters_ = cVar2;
	this->m_delimiters_->addAll(delim);
	this->checkDelimiters();
label_cond_20:
	this->m_coalesceDelimiters_ = coalescedelims;
	this->m_source_ = str;
	this->m_length_ = str->length();
	this->m_returnDelimiters_ = returndelims;
	this->m_tokenOffset_ = cVar0;
	this->m_tokenSize_ = cVar0;
	if ( this->m_length_ )     
		goto label_cond_37;
	this->m_nextOffset_ = cVar0;
label_cond_36:
label_goto_36:
	return;
	// 336    .line 247
label_cond_37:
	this->m_nextOffset_ = cVar1;
	if ( returndelims )     
		goto label_cond_36;
	this->m_nextOffset_ = this->getNextNonDelimiter(cVar1);
	goto label_goto_36;

}
// .method private getNextDelimiter(I)I
int android::icu::util::StringTokenizer::getNextDelimiter(int offset)
{
	
	int result;
	int c;
	
	//    .param p1, "offset"    # I
	if ( offset < 0 ) 
		goto label_cond_3a;
	result = offset;
	//    .local v1, "result":I
	0x0;
	//    .local v0, "c":I
	if ( this->delims )     
		goto label_cond_28;
label_goto_8:
	if ( !(this->m_delimiters_->contains(android::icu::text::UTF16::charAt(this->m_source_, result))) )  
		goto label_cond_1b;
label_cond_16:
label_goto_16:
	if ( result >= this->m_length_ )
		goto label_cond_3a;
	return result;
	// 401    .line 607
label_cond_1b:
	result = ( result + 0x1);
	if ( result >= this->m_length_ )
		goto label_cond_16;
	goto label_goto_8;
	// 412    .line 615
label_cond_22:
	result = ( result + 0x1);
	if ( result >= this->m_length_ )
		goto label_cond_16;
label_cond_28:
	c = android::icu::text::UTF16::charAt(this->m_source_, result);
	if ( c >= this->delims->size() )
		goto label_cond_22;
	if ( !(this->delims[c]) )  
		goto label_cond_22;
	goto label_goto_16;
	// 444    .line 622
	// 445    .end local v0    # "c":I
	// 446    .end local v1    # "result":I
label_cond_3a:
	return ( this->m_length_ - -0x1);

}
// .method private getNextNonDelimiter(I)I
int android::icu::util::StringTokenizer::getNextNonDelimiter(int offset)
{
	
	int result;
	int c;
	bool cVar0;
	
	//    .param p1, "offset"    # I
	if ( offset < 0 ) 
		goto label_cond_3d;
	result = offset;
	//    .local v1, "result":I
	0x0;
	//    .local v0, "c":I
	if ( this->delims )     
		goto label_cond_29;
label_goto_9:
	if ( this->m_delimiters_->contains(android::icu::text::UTF16::charAt(this->m_source_, result)) )     
		goto label_cond_1c;
label_cond_17:
label_goto_17:
	if ( result >= this->m_length_ )
		goto label_cond_3d;
	return result;
	// 505    .line 643
label_cond_1c:
	result = ( result + 0x1);
	if ( result >= this->m_length_ )
		goto label_cond_17;
	goto label_goto_9;
	// 516    .line 651
label_cond_23:
	result = ( result + 0x1);
	if ( result >= this->m_length_ )
		goto label_cond_17;
label_cond_29:
	c = android::icu::text::UTF16::charAt(this->m_source_, result);
	if ( c >= this->delims->size() )
		goto label_cond_3b;
	cVar0 = this->delims[c];
label_goto_38:
	if ( cVar0 )     
		goto label_cond_23;
	goto label_goto_17;
label_cond_3b:
	cVar0 = 0x0;
	goto label_goto_38;
	// 554    .line 658
	// 555    .end local v0    # "c":I
	// 556    .end local v1    # "result":I
label_cond_3d:
	return ( this->m_length_ - -0x1);

}
// .method checkDelimiters()V
void android::icu::util::StringTokenizer::checkDelimiters()
{
	
	int maxChar;
	int i;
	int ch;
	
	if ( !(this->m_delimiters_) )  
		goto label_cond_e;
	if ( this->m_delimiters_->size() )     
		goto label_cond_13;
label_cond_e:
	this->delims = std::make_shared<std::vector<bool[]>>(0x0);
label_cond_12:
label_goto_12:
	return;
	// 599    .line 665
label_cond_13:
	maxChar = this->m_delimiters_->getRangeEnd(( this->m_delimiters_->getRangeCount() + -0x1));
	//    .local v2, "maxChar":I
	if ( maxChar >= 0x7f )
		goto label_cond_3d;
	this->delims = std::make_shared<std::vector<bool[]>>(( maxChar + 0x1));
	i = 0x0;
	//    .local v1, "i":I
label_goto_2c:
	ch = this->m_delimiters_->charAt(i);
	//    .local v0, "ch":I
	if ( -0x1 == ch )
		goto label_cond_12;
	this->delims[ch] = 0x1;
	i = ( i + 0x1);
	goto label_goto_2c;
	// 656    .line 672
	// 657    .end local v0    # "ch":I
	// 658    .end local v1    # "i":I
label_cond_3d:
	this->delims = 0x0;
	goto label_goto_12;

}
// .method public countTokens()I
int android::icu::util::StringTokenizer::countTokens()
{
	
	int cVar0;
	int cVar1;
	int result;
	std::shared_ptr<int[]> temptokenindex;
	int originalsize;
	int newsize;
	int c;
	int cVar2;
	int p;
	
	cVar0 = 0x64;
	cVar1 = 0x0;
	result = 0x0;
	//    .local v5, "result":I
	if ( !(this->hasMoreTokens()) )  
		goto label_cond_80;
	if ( this->m_tokenOffset_ < 0 ) 
		goto label_cond_14;
	return (this->m_tokenSize_ -  this->m_tokenOffset_);
	// 698    .line 468
label_cond_14:
	if ( this->m_tokenStart_ )     
		goto label_cond_20;
	this->m_tokenStart_ = std::make_shared<std::vector<int[]>>(cVar0);
	this->m_tokenLimit_ = std::make_shared<std::vector<int[]>>(cVar0);
label_cond_20:
	if ( this->m_tokenStart_->size() != result )
		goto label_cond_3e;
	temptokenindex = this->m_tokenStart_;
	//    .local v6, "temptokenindex":[I
	//    .local v7, "temptokensize":[I
	originalsize = temptokenindex->size();
	//    .local v3, "originalsize":I
	newsize = ( originalsize + 0x64);
	//    .local v2, "newsize":I
	this->m_tokenStart_ = std::make_shared<std::vector<int[]>>(newsize);
	this->m_tokenLimit_ = std::make_shared<std::vector<int[]>>(newsize);
	java::lang::System::arraycopy(temptokenindex, cVar1, this->m_tokenStart_, cVar1, originalsize);
	java::lang::System::arraycopy(this->m_tokenLimit_, cVar1, this->m_tokenLimit_, cVar1, originalsize);
	//    .end local v2    # "newsize":I
	//    .end local v3    # "originalsize":I
	//    .end local v6    # "temptokenindex":[I
	//    .end local v7    # "temptokensize":[I
label_cond_3e:
	this->m_tokenStart_[result] = this->m_nextOffset_;
	if ( !(this->m_returnDelimiters_) )  
		goto label_cond_a6;
	c = android::icu::text::UTF16::charAt(this->m_source_, this->m_nextOffset_);
	//    .local v0, "c":I
	if ( this->delims )     
		goto label_cond_81;
	cVar2 = this->m_delimiters_->contains(c);
label_goto_5a:
	if ( !(cVar2) )  
		goto label_cond_9b;
	if ( !(this->m_coalesceDelimiters_) )  
		goto label_cond_8d;
	this->m_tokenLimit_[result] = this->getNextNonDelimiter(this->m_nextOffset_);
label_goto_6a:
	this->m_nextOffset_ = this->m_tokenLimit_[result];
	//    .end local v0    # "c":I
label_goto_70:
	result = ( result + 0x1);
	if ( this->m_nextOffset_ >= 0 )
		goto label_cond_20;
	this->m_tokenOffset_ = cVar1;
	this->m_tokenSize_ = result;
	this->m_nextOffset_ = this->m_tokenStart_[cVar1];
label_cond_80:
	return result;
	// 854    .line 490
	// 855    .restart local v0    # "c":I
label_cond_81:
	if ( c >= this->delims->size() )
		goto label_cond_8b;
	cVar2 = this->delims[c];
	//    .local v1, "contains":Z
	goto label_goto_5a;
	// 870    .end local v1    # "contains":Z
label_cond_8b:
	cVar2 = 0x0;
	//    .local v1, "contains":Z
	goto label_goto_5a;
	// 877    .line 496
	// 878    .end local v1    # "contains":Z
label_cond_8d:
	p = ( this->m_nextOffset_ + 0x1);
	//    .local v4, "p":I
	if ( p != this->m_length_ )
		goto label_cond_96;
label_cond_96:
	this->m_tokenLimit_[result] = p;
	goto label_goto_6a;
	// 901    .line 505
	// 902    .end local v4    # "p":I
label_cond_9b:
	this->m_tokenLimit_[result] = this->getNextDelimiter(this->m_nextOffset_);
	goto label_goto_6a;
	// 916    .line 510
	// 917    .end local v0    # "c":I
label_cond_a6:
	this->m_tokenLimit_[result] = this->getNextDelimiter(this->m_nextOffset_);
	this->m_nextOffset_ = this->getNextNonDelimiter(this->m_tokenLimit_[result]);
	goto label_goto_70;

}
// .method public hasMoreElements()Z
bool android::icu::util::StringTokenizer::hasMoreElements()
{
	
	return this->hasMoreTokens();

}
// .method public hasMoreTokens()Z
bool android::icu::util::StringTokenizer::hasMoreTokens()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->m_nextOffset_ < 0 ) 
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public nextElement()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::StringTokenizer::nextElement()
{
	
	return this->nextToken();

}
// .method public nextToken()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::StringTokenizer::nextToken()
{
	
	std::shared_ptr<java::util::NoSuchElementException> cVar0;
	int tokenlimit;
	int c;
	int cVar1;
	std::shared_ptr<java::util::NoSuchElementException> cVar2;
	
	if ( this->m_tokenOffset_ >= 0 )
		goto label_cond_8d;
	if ( this->m_nextOffset_ >= 0 )
		goto label_cond_11;
	cVar0 = std::make_shared<java::util::NoSuchElementException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No more tokens in String")));
	// throw
	throw cVar0;
	// 1007    .line 313
label_cond_11:
	if ( !(this->m_returnDelimiters_) )  
		goto label_cond_6b;
	tokenlimit = 0x0;
	//    .local v3, "tokenlimit":I
	c = android::icu::text::UTF16::charAt(this->m_source_, this->m_nextOffset_);
	//    .local v0, "c":I
	if ( this->delims )     
		goto label_cond_41;
	cVar1 = this->m_delimiters_->contains(c);
label_goto_28:
	if ( !(cVar1) )  
		goto label_cond_5b;
	if ( !(this->m_coalesceDelimiters_) )  
		goto label_cond_4d;
	tokenlimit = this->getNextNonDelimiter(this->m_nextOffset_);
label_cond_34:
label_goto_34:
	if ( tokenlimit >= 0 )
		goto label_cond_62;
	//    .local v2, "result":Ljava/lang/String;
label_goto_3e:
	this->m_nextOffset_ = tokenlimit;
	return result;
	// 1077    .line 318
	// 1078    .end local v2    # "result":Ljava/lang/String;
label_cond_41:
	if ( c >= this->delims->size() )
		goto label_cond_4b;
	cVar1 = this->delims[c];
	//    .local v1, "contains":Z
	goto label_goto_28;
	// 1093    .end local v1    # "contains":Z
label_cond_4b:
	cVar1 = 0x0;
	//    .local v1, "contains":Z
	goto label_goto_28;
	// 1100    .line 323
	// 1101    .end local v1    # "contains":Z
label_cond_4d:
	tokenlimit = (this->m_nextOffset_ + android::icu::text::UTF16::getCharCount(c));
	if ( tokenlimit != this->m_length_ )
		goto label_cond_34;
	tokenlimit = -0x1;
	goto label_goto_34;
	// 1121    .line 330
label_cond_5b:
	tokenlimit = this->getNextDelimiter(this->m_nextOffset_);
	goto label_goto_34;
	// 1131    .line 337
label_cond_62:
	//    .restart local v2    # "result":Ljava/lang/String;
	goto label_goto_3e;
	// 1144    .line 343
	// 1145    .end local v0    # "c":I
	// 1146    .end local v2    # "result":Ljava/lang/String;
	// 1147    .end local v3    # "tokenlimit":I
label_cond_6b:
	tokenlimit = this->getNextDelimiter(this->m_nextOffset_);
	//    .restart local v3    # "tokenlimit":I
	if ( tokenlimit >= 0 )
		goto label_cond_7e;
	//    .restart local v2    # "result":Ljava/lang/String;
	this->m_nextOffset_ = tokenlimit;
label_goto_7d:
	return result;
	// 1176    .line 350
	// 1177    .end local v2    # "result":Ljava/lang/String;
label_cond_7e:
	//    .restart local v2    # "result":Ljava/lang/String;
	this->m_nextOffset_ = this->getNextNonDelimiter(tokenlimit);
	goto label_goto_7d;
	// 1197    .line 358
	// 1198    .end local v2    # "result":Ljava/lang/String;
	// 1199    .end local v3    # "tokenlimit":I
label_cond_8d:
	if ( this->m_tokenOffset_ <  this->m_tokenSize_ )
		goto label_cond_9c;
	cVar2 = std::make_shared<java::util::NoSuchElementException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No more tokens in String")));
	// throw
	throw cVar2;
	// 1216    .line 362
label_cond_9c:
	if ( this->m_tokenLimit_[this->m_tokenOffset_] < 0 ) 
		goto label_cond_ce;
	//    .restart local v2    # "result":Ljava/lang/String;
label_goto_b6:
	this->m_tokenOffset_ = ( this->m_tokenOffset_ + 0x1);
	this->m_nextOffset_ = -0x1;
	if ( this->m_tokenOffset_ >= this->m_tokenSize_ )
		goto label_cond_cd;
	this->m_nextOffset_ = this->m_tokenStart_[this->m_tokenOffset_];
label_cond_cd:
	return result;
	// 1281    .line 367
	// 1282    .end local v2    # "result":Ljava/lang/String;
label_cond_ce:
	//    .restart local v2    # "result":Ljava/lang/String;
	goto label_goto_b6;

}
// .method public nextToken(Landroid/icu/text/UnicodeSet;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::StringTokenizer::nextToken(std::shared_ptr<android::icu::text::UnicodeSet> delim)
{
	
	int cVar0;
	
	//    .param p1, "delim"    # Landroid/icu/text/UnicodeSet;
	cVar0 = -0x1;
	this->m_delimiters_ = delim;
	this->checkDelimiters();
	this->m_tokenOffset_ = cVar0;
	this->m_tokenSize_ = cVar0;
	if ( this->m_returnDelimiters_ )     
		goto label_cond_16;
	this->m_nextOffset_ = this->getNextNonDelimiter(this->m_nextOffset_);
label_cond_16:
	return this->nextToken();

}
// .method public nextToken(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::StringTokenizer::nextToken(std::shared_ptr<java::lang::String> delim)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	//    .param p1, "delim"    # Ljava/lang/String;
	this->m_delimiters_ = android::icu::util::StringTokenizer::EMPTY_DELIMITER_;
	if ( !(delim) )  
		goto label_cond_18;
	if ( delim->length() <= 0 )
		goto label_cond_18;
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>();
	this->m_delimiters_ = cVar0;
	this->m_delimiters_->addAll(delim);
label_cond_18:
	return this->nextToken(this->m_delimiters_);

}


