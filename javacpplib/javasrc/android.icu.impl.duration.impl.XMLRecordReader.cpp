// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\XMLRecordReader.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.XMLRecordReader.h"
#include "android.icu.lang.UCharacter.h"
#include "java.io.IOException.h"
#include "java.io.PrintStream.h"
#include "java.io.Reader.h"
#include "java.lang.Integer.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.ArrayList.h"
#include "java.util.List.h"

// .method public constructor <init>(Ljava/io/Reader;)V
android::icu::impl::duration::impl::XMLRecordReader::XMLRecordReader(std::shared_ptr<java::io::Reader> r)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "r"    # Ljava/io/Reader;
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->r = r;
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->nameStack = cVar0;
	if ( !(this->getTag()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("?xml")))) )  
		goto label_cond_1c;
	this->advance();
label_cond_1c:
	if ( !(this->getTag()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("!--")))) )  
		goto label_cond_2c;
	this->advance();
label_cond_2c:
	return;

}
// .method private advance()V
void android::icu::impl::duration::impl::XMLRecordReader::advance()
{
	
	this->tag = 0x0;
	return;

}
// .method private getTag()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::impl::XMLRecordReader::getTag()
{
	
	if ( this->tag )     
		goto label_cond_a;
	this->tag = this->readNextTag();
label_cond_a:
	return this->tag;

}
// .method private match(Ljava/lang/String;)Z
bool android::icu::impl::duration::impl::XMLRecordReader::match(std::shared_ptr<java::lang::String> target)
{
	
	//    .param p1, "target"    # Ljava/lang/String;
	if ( !(this->getTag()->equals(target)) )  
		goto label_cond_f;
	this->advance();
	return 0x1;
	// 145    .line 196
label_cond_f:
	return 0x0;

}
// .method private readData()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::impl::XMLRecordReader::readData()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int inWhitespace;
	int c;
	bool cVar3;
	std::shared_ptr<java::lang::StringBuilder> numBuf;
	int radix;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> charBuf;
	std::shared_ptr<java::lang::String> charName;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	cVar0 = 0x3c;
	cVar1 = 0x3b;
	cVar2 = -0x1;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v8, "sb":Ljava/lang/StringBuilder;
	inWhitespace = 0x0;
	//    .local v4, "inWhitespace":Z
label_cond_b:
label_goto_b:
	c = this->readChar();
	//    .local v0, "c":I
	if ( c == cVar2 )
		goto label_cond_13;
	if ( c != cVar0 )
		goto label_cond_1f;
label_cond_13:
	if ( c != cVar0 )
		goto label_cond_1d;
	cVar3 = 0x1;
label_goto_16:
	this->atTag = cVar3;
	return sb->toString();
	// 201    .line 217
label_cond_1d:
	cVar3 = 0x0;
	goto label_goto_16;
	// 207    .line 220
label_cond_1f:
	if ( c != 0x26 )
		goto label_cond_56;
	c = this->readChar();
	if ( c != 0x23 )
		goto label_cond_90;
	numBuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "numBuf":Ljava/lang/StringBuilder;
	//    .local v7, "radix":I
	c = this->readChar();
	if ( c != 0x78 )
		goto label_cond_40;
	radix = 0x10;
	c = this->readChar();
label_cond_40:
label_goto_40:
	if ( c == cVar1 )
		goto label_cond_4d;
	if ( c == cVar2 )
		goto label_cond_4d;
	numBuf->append((char)(c));
	c = this->readChar();
	goto label_goto_40;
	// 270    .line 235
label_cond_4d:
	try {
	//label_try_start_4d:
	//label_try_end_54:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_66;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_4d .. :try_end_54} :catch_66
	//    .local v5, "num":I
	c = (char)(java::lang::Integer::parseInt(numBuf->toString(), 0xa));
	//    .end local v5    # "num":I
	//    .end local v6    # "numBuf":Ljava/lang/StringBuilder;
	//    .end local v7    # "radix":I
label_cond_56:
label_goto_56:
	if ( !(android::icu::lang::UCharacter::isWhitespace(c)) )  
		goto label_cond_105;
	if ( inWhitespace )     
		goto label_cond_b;
	c = 0x20;
	inWhitespace = 0x1;
label_goto_61:
	sb->append((char)(c));
	goto label_goto_b;
	// 316    .line 237
	// 317    .restart local v6    # "numBuf":Ljava/lang/StringBuilder;
	// 318    .restart local v7    # "radix":I
label_catch_66:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "ex":Ljava/lang/NumberFormatException;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("numbuf: ")))->append(numBuf->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" radix: ")))->append(radix)->toString());
	// throw
	throw;
	// 365    .line 243
	// 366    .end local v3    # "ex":Ljava/lang/NumberFormatException;
	// 367    .end local v6    # "numBuf":Ljava/lang/StringBuilder;
	// 368    .end local v7    # "radix":I
label_cond_90:
	charBuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "charBuf":Ljava/lang/StringBuilder;
label_goto_95:
	if ( c == cVar1 )
		goto label_cond_a2;
	if ( c == cVar2 )
		goto label_cond_a2;
	charBuf->append((char)(c));
	c = this->readChar();
	goto label_goto_95;
	// 393    .line 248
label_cond_a2:
	charName = charBuf->toString();
	//    .local v2, "charName":Ljava/lang/String;
	if ( !(charName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("lt")))) )  
		goto label_cond_b2;
	c = 0x3c;
	goto label_goto_56;
	// 414    .line 251
label_cond_b2:
	if ( !(charName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("gt")))) )  
		goto label_cond_be;
	c = 0x3e;
	goto label_goto_56;
	// 429    .line 253
label_cond_be:
	if ( !(charName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("quot")))) )  
		goto label_cond_ca;
	c = 0x22;
	goto label_goto_56;
	// 444    .line 255
label_cond_ca:
	if ( !(charName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("apos")))) )  
		goto label_cond_d6;
	c = 0x27;
	goto label_goto_56;
	// 459    .line 257
label_cond_d6:
	if ( !(charName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("amp")))) )  
		goto label_cond_e3;
	c = 0x26;
	goto label_goto_56;
	// 474    .line 260
label_cond_e3:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unrecognized character entity: \'")))->append(charName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString());
	goto label_goto_b;
	// 508    .line 274
	// 509    .end local v1    # "charBuf":Ljava/lang/StringBuilder;
	// 510    .end local v2    # "charName":Ljava/lang/String;
label_cond_105:
	0x0;
	goto label_goto_61;

}
// .method private readNextTag()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::impl::XMLRecordReader::readNextTag()
{
	
	int cVar0;
	int cVar1;
	int c;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	cVar0 = 0x3c;
	cVar1 = -0x1;
	0x0;
	//    .local v0, "c":I
label_cond_4:
	if ( this->atTag )     
		goto label_cond_15;
	c = this->readChar();
	if ( c == cVar0 )
		goto label_cond_10;
	if ( c != cVar1 )
		goto label_cond_30;
label_cond_10:
	if ( c != cVar0 )
		goto label_cond_15;
	this->atTag = 0x1;
label_cond_15:
label_goto_15:
	if ( !(this->atTag) )  
		goto label_cond_59;
	this->atTag = 0x0;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
label_goto_21:
	c = this->readChar();
	if ( c == 0x3e )
		goto label_cond_2b;
	if ( c != cVar1 )
		goto label_cond_54;
label_cond_2b:
	return sb->toString();
	// 593    .line 292
	// 594    .end local v1    # "sb":Ljava/lang/StringBuilder;
label_cond_30:
	if ( android::icu::lang::UCharacter::isWhitespace(c) )     
		goto label_cond_4;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::err->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected non-whitespace character ")))->append(java::lang::Integer::toHexString(c))->toString());
	goto label_goto_15;
	// 633    .line 307
	// 634    .restart local v1    # "sb":Ljava/lang/StringBuilder;
label_cond_54:
	sb->append((char)(c));
	goto label_goto_21;
	// 642    .line 312
	// 643    .end local v1    # "sb":Ljava/lang/StringBuilder;
label_cond_59:
	return 0x0;

}
// .method public bool(Ljava/lang/String;)Z
bool android::icu::impl::duration::impl::XMLRecordReader::bool(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Object> s;
	
	//    .param p1, "name"    # Ljava/lang/String;
	s = this->string(name);
	//    .local v0, "s":Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_e;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("true"))->equals(s);
	// 675    .line 75
label_cond_e:
	return 0x0;

}
// .method public boolArray(Ljava/lang/String;)[Z
bool android::icu::impl::duration::impl::XMLRecordReader::boolArray(std::shared_ptr<java::lang::String> name)
{
	
	auto sa;
	std::shared<std::vector<bool[]>> result;
	int i;
	
	//    .param p1, "name"    # Ljava/lang/String;
	sa = this->stringArray(name);
	//    .local v2, "sa":[Ljava/lang/String;
	if ( !(sa) )  
		goto label_cond_1d;
	result = std::make_shared<std::vector<bool[]>>(sa->size());
	//    .local v1, "result":[Z
	i = 0x0;
	//    .local v0, "i":I
label_goto_b:
	if ( i >= sa->size() )
		goto label_cond_1c;
	result[i] = std::make_shared<java::lang::String>(std::make_shared<char[]>("true"))->equals(sa[i]);
	i = ( i + 0x1);
	goto label_goto_b;
	// 729    .line 86
label_cond_1c:
	return result;
	// 733    .line 88
	// 734    .end local v0    # "i":I
	// 735    .end local v1    # "result":[Z
label_cond_1d:
	return 0x0;

}
// .method public character(Ljava/lang/String;)C
char android::icu::impl::duration::impl::XMLRecordReader::character(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "name"    # Ljava/lang/String;
	s = this->string(name);
	//    .local v0, "s":Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_c;
	return s->charAt(0x0);
	// 763    .line 97
label_cond_c:
	return 0xffff;

}
// .method public characterArray(Ljava/lang/String;)[C
char android::icu::impl::duration::impl::XMLRecordReader::characterArray(std::shared_ptr<java::lang::String> name)
{
	
	auto sa;
	std::shared<std::vector<char[]>> result;
	int i;
	
	//    .param p1, "name"    # Ljava/lang/String;
	sa = this->stringArray(name);
	//    .local v2, "sa":[Ljava/lang/String;
	if ( !(sa) )  
		goto label_cond_1b;
	result = std::make_shared<std::vector<char[]>>(sa->size());
	//    .local v1, "result":[C
	i = 0x0;
	//    .local v0, "i":I
label_goto_b:
	if ( i >= sa->size() )
		goto label_cond_1a;
	result[i] = sa[i]->charAt(0x0);
	i = ( i + 0x1);
	goto label_goto_b;
	// 817    .line 108
label_cond_1a:
	return result;
	// 821    .line 110
	// 822    .end local v0    # "i":I
	// 823    .end local v1    # "result":[C
label_cond_1b:
	return 0x0;

}
// .method public close()Z
bool android::icu::impl::duration::impl::XMLRecordReader::close()
{
	
	int ix;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	ix = ( this->nameStack->size() + -0x1);
	//    .local v0, "ix":I
	name = this->nameStack->get(ix);
	name->checkCast("java::lang::String");
	//    .local v1, "name":Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->getTag()->equals(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(name)->toString())) )  
		goto label_cond_38;
	this->nameStack->remove(ix);
	this->advance();
	return 0x1;
	// 894    .line 66
label_cond_38:
	return 0x0;

}
// .method public namedIndex(Ljava/lang/String;[Ljava/lang/String;)B
unsigned char android::icu::impl::duration::impl::XMLRecordReader::namedIndex(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> names)
{
	
	std::shared_ptr<java::lang::String> sa;
	int i;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "names"    # [Ljava/lang/String;
	sa = this->string(name);
	//    .local v1, "sa":Ljava/lang/String;
	if ( !(sa) )  
		goto label_cond_17;
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= names->size() )
		goto label_cond_17;
	if ( !(sa->equals(names[i])) )  
		goto label_cond_14;
	return (unsigned char)(i);
	// 939    .line 117
label_cond_14:
	i = ( i + 0x1);
	goto label_goto_7;
	// 945    .line 123
	// 946    .end local v0    # "i":I
label_cond_17:
	return -0x1;

}
// .method public namedIndexArray(Ljava/lang/String;[Ljava/lang/String;)[B
unsigned char android::icu::impl::duration::impl::XMLRecordReader::namedIndexArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> names)
{
	
	auto sa;
	std::shared<std::vector<unsigned char[]>> result;
	int i;
	int j;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "names"    # [Ljava/lang/String;
	sa = this->stringArray(name);
	//    .local v4, "sa":[Ljava/lang/String;
	if ( !(sa) )  
		goto label_cond_2a;
	result = std::make_shared<std::vector<unsigned char[]>>(sa->size());
	//    .local v2, "result":[B
	i = 0x0;
	//    .local v0, "i":I
label_goto_b:
	if ( i >= sa->size() )
		goto label_cond_29;
	//    .local v3, "s":Ljava/lang/String;
	j = 0x0;
	//    .local v1, "j":I
label_goto_11:
	if ( j >= names->size() )
		goto label_cond_25;
	if ( !(names[j]->equals(sa[i])) )  
		goto label_cond_22;
	result[i] = (unsigned char)(j);
label_goto_1f:
	i = ( i + 0x1);
	goto label_goto_b;
	// 1018    .line 133
label_cond_22:
	j = ( j + 0x1);
	goto label_goto_11;
	// 1024    .line 139
label_cond_25:
	result[i] = -0x1;
	goto label_goto_1f;
	// 1032    .line 141
	// 1033    .end local v1    # "j":I
	// 1034    .end local v3    # "s":Ljava/lang/String;
label_cond_29:
	return result;
	// 1038    .line 143
	// 1039    .end local v0    # "i":I
	// 1040    .end local v2    # "result":[B
label_cond_2a:
	return 0x0;

}
// .method public open(Ljava/lang/String;)Z
bool android::icu::impl::duration::impl::XMLRecordReader::open(std::shared_ptr<java::lang::String> title)
{
	
	//    .param p1, "title"    # Ljava/lang/String;
	if ( !(this->getTag()->equals(title)) )  
		goto label_cond_14;
	this->nameStack->add(title);
	this->advance();
	return 0x1;
	// 1074    .line 54
label_cond_14:
	return 0x0;

}
// .method readChar()I
int android::icu::impl::duration::impl::XMLRecordReader::readChar()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	//label_try_end_5:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_5} :catch_7
	return this->r->read();
	// 1097    .line 318
label_catch_7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	return -0x1;

}
// .method public string(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::impl::XMLRecordReader::string(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	if ( !(this->match(name)) )  
		goto label_cond_25;
	//    .local v0, "result":Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->match(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(name)->toString())) )  
		goto label_cond_25;
	return this->readData();
	// 1154    .line 154
	// 1155    .end local v0    # "result":Ljava/lang/String;
label_cond_25:
	return 0x0;

}
// .method public stringArray(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::impl::XMLRecordReader::stringArray(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<java::lang::Object> s;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<std::vector<java::lang::String>> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->match(cVar0->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("List")))->toString())) )  
		goto label_cond_62;
	list = std::make_shared<java::util::ArrayList>();
	//    .local v0, "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
label_goto_20:
	s = this->string(name);
	//    .local v1, "s":Ljava/lang/String;
	if ( !(s) )  
		goto label_cond_34;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null"))->equals(s)) )  
		goto label_cond_30;
	//    .end local v1    # "s":Ljava/lang/String;
label_cond_30:
	list->add(s);
	goto label_goto_20;
	// 1228    .line 168
	// 1229    .restart local v1    # "s":Ljava/lang/String;
label_cond_34:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->match(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("List")))->toString())) )  
		goto label_cond_62;
	cVar2 = list->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(list->size()));
	cVar2->checkCast("std::vector<java::lang::String>");
	return cVar2;
	// 1276    .line 172
	// 1277    .end local v0    # "list":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 1278    .end local v1    # "s":Ljava/lang/String;
label_cond_62:
	return 0x0;

}
// .method public stringTable(Ljava/lang/String;)[[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::impl::XMLRecordReader::stringTable(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::ArrayList> list;
	std::shared_ptr<java::lang::Object> sa;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->match(cVar0->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Table")))->toString())) )  
		goto label_cond_58;
	list = std::make_shared<java::util::ArrayList>();
	//    .local v0, "list":Ljava/util/List;, "Ljava/util/List<[Ljava/lang/String;>;"
label_goto_20:
	sa = this->stringArray(name);
	//    .local v1, "sa":[Ljava/lang/String;
	if ( !(sa) )  
		goto label_cond_2a;
	list->add(sa);
	goto label_goto_20;
	// 1335    .line 183
label_cond_2a:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->match(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Table")))->toString())) )  
		goto label_cond_58;
	cVar2 = list->toArray(std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(list->size()));
	cVar2->checkCast("std::vector<std::vector<java::lang::String>>");
	return cVar2;
	// 1382    .line 187
	// 1383    .end local v0    # "list":Ljava/util/List;, "Ljava/util/List<[Ljava/lang/String;>;"
	// 1384    .end local v1    # "sa":[Ljava/lang/String;
label_cond_58:
	return 0x0;

}


