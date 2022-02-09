// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UPropertyAliases.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.IllegalIcuArgumentException.h"
#include "android.icu.impl.UPropertyAliases_S_IsAcceptable.h"
#include "android.icu.impl.UPropertyAliases.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "android.icu.util.BytesTrie.h"
#include "java.io.IOException.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::UPropertyAliases::DATA_FORMAT = 0x706e616d;
static android::icu::impl::UPropertyAliases::INSTANCE;
static android::icu::impl::UPropertyAliases::IS_ACCEPTABLE;
static android::icu::impl::UPropertyAliases::IX_BYTE_TRIES_OFFSET = 0x1;
static android::icu::impl::UPropertyAliases::IX_NAME_GROUPS_OFFSET = 0x2;
static android::icu::impl::UPropertyAliases::IX_RESERVED3_OFFSET = 0x3;
static android::icu::impl::UPropertyAliases::IX_VALUE_MAPS_OFFSET;
// .method static constructor <clinit>()V
void android::icu::impl::UPropertyAliases::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::UPropertyAliases_S_IsAcceptable> cVar0;
	std::shared_ptr<java::util::MissingResourceException> mre;
	std::shared_ptr<android::icu::impl::UPropertyAliases> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = std::make_shared<android::icu::impl::UPropertyAliases_S_IsAcceptable>(0x0);
	android::icu::impl::UPropertyAliases::IS_ACCEPTABLE = cVar0;
	try {
	//label_try_start_8:
	cVar1 = std::make_shared<android::icu::impl::UPropertyAliases>();
	android::icu::impl::UPropertyAliases::INSTANCE = cVar1;
	//label_try_end_f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_f} :catch_10
	return;
	// 065    .line 228
label_catch_10:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	mre = std::make_shared<java::util::MissingResourceException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not construct UPropertyAliases. Missing pnames.icu")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	//    .local v1, "mre":Ljava/util/MissingResourceException;
	mre->initCause(getCatchExcetionFromList);
	// throw
	throw mre;

}
// .method private constructor <init>()V
android::icu::impl::UPropertyAliases::UPropertyAliases()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 094        value = {
	// 095            Ljava/io/IOException;
	// 096        }
	// 097    .end annotation
	// 101    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "bytes":Ljava/nio/ByteBuffer;
	this->load(android::icu::impl::ICUBinary::getRequiredData(std::make_shared<java::lang::String>(std::make_shared<char[]>("pnames.icu"))));
	return;

}
// .method private static asciiToLowercase(I)I
int android::icu::impl::UPropertyAliases::asciiToLowercase(int cVar0)
{
	
	int cVar0;
	
	//    .param p0, "c"    # I
	if ( 0x41 >  cVar0 )
		goto label_cond_a;
	if ( cVar0 >  0x5a )
		goto label_cond_a;
	cVar0 = ( cVar0 + 0x20);
	//    .end local p0    # "c":I
label_cond_a:
	return cVar0;

}
// .method public static compare(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::impl::UPropertyAliases::compare(std::shared_ptr<java::lang::String> stra,std::shared_ptr<java::lang::String> strb)
{
	
	int istra;
	int istrb;
	int cstrb;
	int cstra;
	int endstrb;
	int rc;
	
	//    .param p0, "stra"    # Ljava/lang/String;
	//    .param p1, "strb"    # Ljava/lang/String;
	istra = 0x0;
	//    .local v4, "istra":I
	istrb = 0x0;
	//    .local v5, "istrb":I
	//    .local v0, "cstra":I
	cstrb = 0x0;
	//    .local v1, "cstrb":I
label_goto_5:
	if ( istra >= stra->length() )
		goto label_cond_12;
	cstra = stra->charAt(istra);
	// switch
	{
	auto item = ( cstra );
	if (item == 0x9) goto label_sswitch_32;
	if (item == 0xa) goto label_sswitch_32;
	if (item == 0xb) goto label_sswitch_32;
	if (item == 0xc) goto label_sswitch_32;
	if (item == 0xd) goto label_sswitch_32;
	if (item == 0x20) goto label_sswitch_32;
	if (item == 0x2d) goto label_sswitch_32;
	if (item == 0x5f) goto label_sswitch_32;
	}
label_cond_12:
label_goto_12:
	if ( istrb >= strb->length() )
		goto label_cond_1f;
	cstrb = strb->charAt(istrb);
	// switch
	{
	auto item = ( cstrb );
	if (item == 0x9) goto label_sswitch_35;
	if (item == 0xa) goto label_sswitch_35;
	if (item == 0xb) goto label_sswitch_35;
	if (item == 0xc) goto label_sswitch_35;
	if (item == 0xd) goto label_sswitch_35;
	if (item == 0x20) goto label_sswitch_35;
	if (item == 0x2d) goto label_sswitch_35;
	if (item == 0x5f) goto label_sswitch_35;
	}
label_cond_1f:
	if ( istra != stra->length() )
		goto label_cond_38;
	//    .local v2, "endstra":Z
label_goto_26:
	if ( istrb != strb->length() )
		goto label_cond_3a;
	endstrb = 0x1;
	//    .local v3, "endstrb":Z
label_goto_2d:
	if ( !(endstra) )  
		goto label_cond_4a;
	if ( !(endstrb) )  
		goto label_cond_3c;
	return 0x0;
	// 225    .line 345
	// 226    .end local v2    # "endstra":Z
	// 227    .end local v3    # "endstrb":Z
label_sswitch_32:
	istra = ( istra + 0x1);
	goto label_goto_5;
	// 234    .line 356
label_sswitch_35:
	istrb = ( istrb + 0x1);
	goto label_goto_12;
	// 241    .line 363
label_cond_38:
	//    .restart local v2    # "endstra":Z
	goto label_goto_26;
	// 248    .line 364
label_cond_3a:
	//    .restart local v3    # "endstrb":Z
	goto label_goto_2d;
	// 255    .line 367
label_cond_3c:
label_cond_3d:
label_goto_3d:
	rc = (android::icu::impl::UPropertyAliases::asciiToLowercase(0x0) - android::icu::impl::UPropertyAliases::asciiToLowercase(cstrb));
	//    .local v6, "rc":I
	if ( !(rc) )  
		goto label_cond_4e;
	return rc;
	// 279    .line 368
	// 280    .end local v6    # "rc":I
label_cond_4a:
	if ( !(endstrb) )  
		goto label_cond_3d;
	cstrb = 0x0;
	goto label_goto_3d;
	// 289    .line 377
	// 290    .restart local v6    # "rc":I
label_cond_4e:
	istra = ( istra + 0x1);
	istrb = ( istrb + 0x1);
	goto label_goto_5;
	// 299    .line 342
	// 300    nop
	// 302    :sswitch_data_54
	// 303    .sparse-switch
	// 304        0x9 -> :sswitch_32
	// 305        0xa -> :sswitch_32
	// 306        0xb -> :sswitch_32
	// 307        0xc -> :sswitch_32
	// 308        0xd -> :sswitch_32
	// 309        0x20 -> :sswitch_32
	// 310        0x2d -> :sswitch_32
	// 311        0x5f -> :sswitch_32
	// 312    .end sparse-switch
	// 314    .line 353
	// 315    :sswitch_data_76
	// 316    .sparse-switch
	// 317        0x9 -> :sswitch_35
	// 318        0xa -> :sswitch_35
	// 319        0xb -> :sswitch_35
	// 320        0xc -> :sswitch_35
	// 321        0xd -> :sswitch_35
	// 322        0x20 -> :sswitch_35
	// 323        0x2d -> :sswitch_35
	// 324        0x5f -> :sswitch_35
	// 325    .end sparse-switch

}
// .method private containsName(Landroid/icu/util/BytesTrie;Ljava/lang/CharSequence;)Z
bool android::icu::impl::UPropertyAliases::containsName(std::shared_ptr<android::icu::util::BytesTrie> trie,std::shared_ptr<java::lang::CharSequence> name)
{
	
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> result;
	int i;
	int c;
	
	//    .param p1, "trie"    # Landroid/icu/util/BytesTrie;
	//    .param p2, "name"    # Ljava/lang/CharSequence;
	result = android::icu::util::BytesTrie_S_Result::NO_VALUE;
	//    .local v2, "result":Landroid/icu/util/BytesTrie$Result;
	i = 0x0;
	//    .local v1, "i":I
label_goto_3:
	if ( i >= name->length() )
		goto label_cond_35;
	c = name->charAt(i);
	//    .local v0, "c":I
	if ( c == 0x2d )
		goto label_cond_15;
	if ( c != 0x5f )
		goto label_cond_18;
label_cond_15:
label_goto_15:
	i = ( i + 0x1);
	goto label_goto_3;
	// 371    .line 208
label_cond_18:
	if ( c == 0x20 )
		goto label_cond_15;
	if ( 0x9 >  c )
		goto label_cond_24;
	if ( c <= 0xd )
		goto label_cond_15;
label_cond_24:
	if ( result->hasNext() )     
		goto label_cond_2c;
	return 0x0;
	// 398    .line 214
label_cond_2c:
	result = trie->next(android::icu::impl::UPropertyAliases::asciiToLowercase(c));
	goto label_goto_15;
	// 411    .line 217
	// 412    .end local v0    # "c":I
label_cond_35:
	return result->hasValue();

}
// .method private findProperty(I)I
int android::icu::impl::UPropertyAliases::findProperty(int property)
{
	
	int cVar0;
	int i;
	int numRanges;
	int start;
	int limit;
	
	//    .param p1, "property"    # I
	cVar0 = 0x0;
	i = 0x1;
	//    .local v0, "i":I
	numRanges = this->valueMaps[cVar0];
	//    .local v2, "numRanges":I
label_goto_6:
	if ( numRanges <= 0 )
		goto label_cond_16;
	start = this->valueMaps[i];
	//    .local v3, "start":I
	limit = this->valueMaps[( i + 0x1)];
	//    .local v1, "limit":I
	i = ( i + 0x2);
	if ( property >= start )
		goto label_cond_17;
	//    .end local v1    # "limit":I
	//    .end local v3    # "start":I
label_cond_16:
	return cVar0;
	// 467    .line 133
	// 468    .restart local v1    # "limit":I
	// 469    .restart local v3    # "start":I
label_cond_17:
	if ( property >= limit )
		goto label_cond_1f;
	return (( (property - start) * 0x2) +  i);
	// 482    .line 136
label_cond_1f:
	i = (i +  ( (limit - start) * 0x2));
	numRanges = ( numRanges + -0x1);
	goto label_goto_6;

}
// .method private findPropertyValueNameGroup(II)I
int android::icu::impl::UPropertyAliases::findPropertyValueNameGroup(int valueMapIndex,int value)
{
	
	int cVar0;
	int cVar1;
	int valueMapIndex;
	int numRanges;
	int start;
	int limit;
	int nameGroupOffsetsStart;
	int v;
	
	//    .param p1, "valueMapIndex"    # I
	//    .param p2, "value"    # I
	cVar0 = 0x0;
	if ( valueMapIndex )     
		goto label_cond_4;
	return cVar0;
	// 510    .line 145
label_cond_4:
	cVar1 = ( valueMapIndex + 0x1);
	valueMapIndex = ( cVar1 + 0x1);
	//    .end local p1    # "valueMapIndex":I
	//    .local v5, "valueMapIndex":I
	numRanges = this->valueMaps[cVar1];
	//    .local v2, "numRanges":I
	if ( numRanges >= 0x10 )
		goto label_cond_32;
	valueMapIndex = valueMapIndex;
	//    .end local v5    # "valueMapIndex":I
	//    .restart local p1    # "valueMapIndex":I
label_goto_11:
	if ( numRanges <= 0 )
		goto label_cond_21;
	start = this->valueMaps[valueMapIndex];
	//    .local v3, "start":I
	limit = this->valueMaps[( valueMapIndex + 0x1)];
	//    .local v0, "limit":I
	valueMapIndex = ( valueMapIndex + 0x2);
	if ( value >= start )
		goto label_cond_22;
	//    .end local v0    # "limit":I
	//    .end local v3    # "start":I
label_cond_21:
	return cVar0;
	// 563    .line 157
	// 564    .restart local v0    # "limit":I
	// 565    .restart local v3    # "start":I
label_cond_22:
	if ( value >= limit )
		goto label_cond_2c;
	return this->valueMaps[((valueMapIndex + value) -  start)];
	// 580    .line 160
label_cond_2c:
	valueMapIndex = (valueMapIndex +  (limit - start));
	numRanges = ( numRanges + -0x1);
	goto label_goto_11;
	// 591    .line 164
	// 592    .end local v0    # "limit":I
	// 593    .end local v3    # "start":I
	// 594    .end local p1    # "valueMapIndex":I
	// 595    .restart local v5    # "valueMapIndex":I
label_cond_32:
	valueMapIndex;
	//    .local v6, "valuesStart":I
	nameGroupOffsetsStart = ( (valueMapIndex + numRanges) + -0x10);
	//    .local v1, "nameGroupOffsetsStart":I
	valueMapIndex = valueMapIndex;
	//    .end local v5    # "valueMapIndex":I
	//    .restart local p1    # "valueMapIndex":I
label_goto_38:
	v = this->valueMaps[valueMapIndex];
	//    .local v4, "v":I
	if ( value <  v )
		goto label_cond_21;
	if ( value != v )
		goto label_cond_48;
	return this->valueMaps[((nameGroupOffsetsStart + valueMapIndex) -  valueMapIndex)];
	// 634    .line 174
label_cond_48:
	valueMapIndex = ( valueMapIndex + 0x1);
	if ( valueMapIndex >= nameGroupOffsetsStart )
		goto label_cond_21;
	goto label_goto_38;

}
// .method private getName(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UPropertyAliases::getName(int nameGroupsIndex,int nameIndex)
{
	
	int nameGroupsIndex;
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	int nameIndex;
	int nameStart;
	
	//    .param p1, "nameGroupsIndex"    # I
	//    .param p2, "nameIndex"    # I
	nameGroupsIndex = ( nameGroupsIndex + 0x1);
	//    .end local p1    # "nameGroupsIndex":I
	//    .local v0, "nameGroupsIndex":I
	//    .local v2, "numNames":I
	if ( nameIndex < 0 ) 
		goto label_cond_c;
	if ( this->nameGroups->charAt(nameGroupsIndex) >  nameIndex )
		goto label_cond_15;
label_cond_c:
	cVar0 = std::make_shared<android::icu::impl::IllegalIcuArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid property (value) name choice")));
	// throw
	throw cVar0;
label_cond_15:
	nameGroupsIndex = nameGroupsIndex;
	//    .end local v0    # "nameGroupsIndex":I
	//    .restart local p1    # "nameGroupsIndex":I
label_goto_16:
	if ( nameIndex <= 0 )
		goto label_cond_28;
label_goto_18:
	nameGroupsIndex = ( nameGroupsIndex + 0x1);
	//    .end local p1    # "nameGroupsIndex":I
	//    .restart local v0    # "nameGroupsIndex":I
	if ( !(this->nameGroups->charAt(nameGroupsIndex)) )  
		goto label_cond_24;
	nameGroupsIndex = nameGroupsIndex;
	//    .end local v0    # "nameGroupsIndex":I
	//    .restart local p1    # "nameGroupsIndex":I
	goto label_goto_18;
	// 705    .line 185
	// 706    .end local p1    # "nameGroupsIndex":I
	// 707    .restart local v0    # "nameGroupsIndex":I
label_cond_24:
	nameIndex = ( nameIndex + -0x1);
	nameGroupsIndex = nameGroupsIndex;
	//    .end local v0    # "nameGroupsIndex":I
	//    .restart local p1    # "nameGroupsIndex":I
	goto label_goto_16;
	// 717    .line 189
label_cond_28:
	nameStart = nameGroupsIndex;
	//    .local v1, "nameStart":I
label_goto_29:
	if ( !(this->nameGroups->charAt(nameGroupsIndex)) )  
		goto label_cond_34;
	nameGroupsIndex = ( nameGroupsIndex + 0x1);
	goto label_goto_29;
	// 737    .line 193
label_cond_34:
	if ( nameStart != nameGroupsIndex )
		goto label_cond_38;
	return 0x0;
	// 746    .line 196
label_cond_38:
	return this->nameGroups->substring(nameStart, nameGroupsIndex);

}
// .method private getPropertyOrValueEnum(ILjava/lang/CharSequence;)I
int android::icu::impl::UPropertyAliases::getPropertyOrValueEnum(int bytesTrieOffset,std::shared_ptr<java::lang::CharSequence> alias)
{
	
	std::shared_ptr<android::icu::util::BytesTrie> trie;
	
	//    .param p1, "bytesTrieOffset"    # I
	//    .param p2, "alias"    # Ljava/lang/CharSequence;
	trie = std::make_shared<android::icu::util::BytesTrie>(this->bytesTries, bytesTrieOffset);
	//    .local v0, "trie":Landroid/icu/util/BytesTrie;
	if ( !(this->containsName(trie, alias)) )  
		goto label_cond_12;
	return trie->getValue();
	// 785    .line 277
label_cond_12:
	return -0x1;

}
// .method private load(Ljava/nio/ByteBuffer;)V
void android::icu::impl::UPropertyAliases::load(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	int cVar0;
	int indexesLength;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared<std::vector<int[]>> inIndexes;
	int i;
	int nextOffset;
	int numBytes;
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 796        value = {
	// 797            Ljava/io/IOException;
	// 798        }
	// 799    .end annotation
	cVar0 = 0x0;
	android::icu::impl::ICUBinary::readHeader(bytes, 0x706e616d, android::icu::impl::UPropertyAliases::IS_ACCEPTABLE);
	indexesLength = ( bytes->getInt() / 0x4);
	//    .local v2, "indexesLength":I
	if ( indexesLength >= 0x8 )
		goto label_cond_1c;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("pnames.icu: not enough indexes")));
	// throw
	throw cVar1;
	// 833    .line 88
label_cond_1c:
	inIndexes = std::make_shared<std::vector<int[]>>(indexesLength);
	//    .local v1, "inIndexes":[I
	inIndexes[cVar0] = ( indexesLength * 0x4);
	i = 0x1;
	//    .local v0, "i":I
label_goto_23:
	if ( i >= indexesLength )
		goto label_cond_2e;
	inIndexes[i] = bytes->getInt();
	i = ( i + 0x1);
	goto label_goto_23;
	// 862    .line 95
label_cond_2e:
	//    .local v6, "offset":I
	nextOffset = inIndexes[0x1];
	//    .local v3, "nextOffset":I
	//    .local v5, "numInts":I
	this->valueMaps = android::icu::impl::ICUBinary::getInts(bytes, ( (nextOffset - inIndexes[cVar0]) / 0x4), cVar0);
	nextOffset = inIndexes[0x2];
	//    .local v4, "numBytes":I
	this->bytesTries = std::make_shared<std::vector<unsigned char[]>>((nextOffset - nextOffset));
	bytes->get(this->bytesTries);
	numBytes = (inIndexes[0x3] - nextOffset);
	sb = std::make_shared<java::lang::StringBuilder>(numBytes);
	//    .local v7, "sb":Ljava/lang/StringBuilder;
	i = 0x0;
label_goto_58:
	if ( i >= numBytes )
		goto label_cond_65;
	sb->append((char)(bytes->get()));
	i = ( i + 0x1);
	goto label_goto_58;
	// 945    .line 115
label_cond_65:
	this->nameGroups = sb->toString();
	return;

}
// .method public getPropertyEnum(Ljava/lang/CharSequence;)I
int android::icu::impl::UPropertyAliases::getPropertyEnum(std::shared_ptr<java::lang::CharSequence> alias)
{
	
	//    .param p1, "alias"    # Ljava/lang/CharSequence;
	return this->getPropertyOrValueEnum(0x0, alias);

}
// .method public getPropertyName(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UPropertyAliases::getPropertyName(int property,int nameChoice)
{
	
	int valueMapIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "property"    # I
	//    .param p2, "nameChoice"    # I
	valueMapIndex = this->findProperty(property);
	//    .local v0, "valueMapIndex":I
	if ( valueMapIndex )     
		goto label_cond_36;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid property enum ")))->append(property)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (0x")))->append(java::lang::Integer::toHexString(property))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar0;
	// 1036    .line 249
label_cond_36:
	return this->getName(this->valueMaps[valueMapIndex], nameChoice);

}
// .method public getPropertyValueEnum(ILjava/lang/CharSequence;)I
int android::icu::impl::UPropertyAliases::getPropertyValueEnum(int property,std::shared_ptr<java::lang::CharSequence> alias)
{
	
	int valueMapIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "property"    # I
	//    .param p2, "alias"    # Ljava/lang/CharSequence;
	valueMapIndex = this->findProperty(property);
	//    .local v0, "valueMapIndex":I
	if ( valueMapIndex )     
		goto label_cond_36;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid property enum ")))->append(property)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (0x")))->append(java::lang::Integer::toHexString(property))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar0;
	// 1111    .line 299
label_cond_36:
	valueMapIndex = this->valueMaps[( valueMapIndex + 0x1)];
	if ( valueMapIndex )     
		goto label_cond_6e;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Property ")))->append(property)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (0x")))->append(java::lang::Integer::toHexString(property))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") does not have named values")))->toString());
	// throw
	throw cVar2;
	// 1171    .line 307
label_cond_6e:
	return this->getPropertyOrValueEnum(this->valueMaps[valueMapIndex], alias);

}
// .method public getPropertyValueEnumNoThrow(ILjava/lang/CharSequence;)I
int android::icu::impl::UPropertyAliases::getPropertyValueEnumNoThrow(int property,std::shared_ptr<java::lang::CharSequence> alias)
{
	
	int cVar0;
	int valueMapIndex;
	
	//    .param p1, "property"    # I
	//    .param p2, "alias"    # Ljava/lang/CharSequence;
	cVar0 = -0x1;
	valueMapIndex = this->findProperty(property);
	//    .local v0, "valueMapIndex":I
	if ( valueMapIndex )     
		goto label_cond_8;
	return cVar0;
	// 1204    .line 319
label_cond_8:
	valueMapIndex = this->valueMaps[( valueMapIndex + 0x1)];
	if ( valueMapIndex )     
		goto label_cond_11;
	return cVar0;
	// 1218    .line 325
label_cond_11:
	return this->getPropertyOrValueEnum(this->valueMaps[valueMapIndex], alias);

}
// .method public getPropertyValueName(III)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::UPropertyAliases::getPropertyValueName(int property,int value,int nameChoice)
{
	
	int valueMapIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int nameGroupOffset;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "property"    # I
	//    .param p2, "value"    # I
	//    .param p3, "nameChoice"    # I
	valueMapIndex = this->findProperty(property);
	//    .local v1, "valueMapIndex":I
	if ( valueMapIndex )     
		goto label_cond_36;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid property enum ")))->append(property)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (0x")))->append(java::lang::Integer::toHexString(property))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar0;
	// 1294    .line 263
label_cond_36:
	nameGroupOffset = this->findPropertyValueNameGroup(this->valueMaps[( valueMapIndex + 0x1)], value);
	//    .local v0, "nameGroupOffset":I
	if ( nameGroupOffset )     
		goto label_cond_72;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Property ")))->append(property)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (0x")))->append(java::lang::Integer::toHexString(property))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") does not have named values")))->toString());
	// throw
	throw cVar2;
	// 1359    .line 269
label_cond_72:
	return this->getName(nameGroupOffset, nameChoice);

}


