// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\XMLRecordWriter.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.XMLRecordWriter.h"
#include "android.icu.lang.UCharacter.h"
#include "java.io.IOException.h"
#include "java.io.PrintStream.h"
#include "java.io.Writer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.ArrayList.h"
#include "java.util.List.h"

static android::icu::impl::duration::impl::XMLRecordWriter::INDENT = std::make_shared<java::lang::String>("    ");
static android::icu::impl::duration::impl::XMLRecordWriter::NULL_NAME = std::make_shared<java::lang::String>("Null");
// .method public constructor <init>(Ljava/io/Writer;)V
android::icu::impl::duration::impl::XMLRecordWriter::XMLRecordWriter(std::shared_ptr<java::io::Writer> w)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "w"    # Ljava/io/Writer;
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->w = w;
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->nameStack = cVar0;
	return;

}
// .method private static ctos(C)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::impl::XMLRecordWriter::ctos(char value)
{
	
	//    .param p0, "value"    # C
	if ( value != 0x3c )
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("&lt;"));
	// 068    .line 79
label_cond_8:
	if ( value != 0x26 )
		goto label_cond_10;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("&amp;"));
	// 079    .line 82
label_cond_10:
	return java::lang::String::valueOf(value);

}
// .method private internalString(Ljava/lang/String;Ljava/lang/String;)V
void android::icu::impl::duration::impl::XMLRecordWriter::internalString(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> normalizedValue)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "normalizedValue"    # Ljava/lang/String;
	if ( !(normalizedValue) )  
		goto label_cond_39;
	this->newline();
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->writeString(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("<")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(">")))->append(normalizedValue)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("</")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(">")))->toString());
label_cond_39:
	return;

}
// .method private internalStringArray(Ljava/lang/String;[Ljava/lang/String;)V
void android::icu::impl::duration::impl::XMLRecordWriter::internalStringArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> normalizedValues)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int i;
	std::shared_ptr<java::lang::String> value;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "normalizedValues"    # [Ljava/lang/String;
	if ( !(normalizedValues) )  
		goto label_cond_2d;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->push(cVar0->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("List")))->toString());
	i = 0x0;
	//    .local v0, "i":I
label_goto_1a:
	if ( i >= normalizedValues->size() )
		goto label_cond_2a;
	value = normalizedValues[i];
	//    .local v1, "value":Ljava/lang/String;
	if ( value )     
		goto label_cond_24;
label_cond_24:
	this->string(name, value);
	i = ( i + 0x1);
	goto label_goto_1a;
	// 210    .line 193
	// 211    .end local v1    # "value":Ljava/lang/String;
label_cond_2a:
	this->pop();
	//    .end local v0    # "i":I
label_cond_2d:
	return;

}
// .method private newline()V
void android::icu::impl::duration::impl::XMLRecordWriter::newline()
{
	
	int i;
	
	this->writeString(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	i = 0x0;
	//    .local v0, "i":I
label_goto_7:
	if ( i >= this->nameStack->size() )
		goto label_cond_18;
	this->writeString(std::make_shared<java::lang::String>(std::make_shared<char[]>("    ")));
	i = ( i + 0x1);
	goto label_goto_7;
	// 253    .line 251
label_cond_18:
	return;

}
// .method public static normalize(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::duration::impl::XMLRecordWriter::normalize(std::shared_ptr<java::lang::String> str)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int inWhitespace;
	int special;
	int i;
	int c;
	char c;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .param p0, "str"    # Ljava/lang/String;
	cVar0 = 0x3c;
	cVar1 = 0x0;
	if ( str )     
		goto label_cond_7;
	return 0x0;
	// 275    .line 135
label_cond_7:
	sb = 0x0;
	//    .local v3, "sb":Ljava/lang/StringBuilder;
	inWhitespace = 0x0;
	//    .local v2, "inWhitespace":Z
	0x0;
	//    .local v0, "c":C
	special = 0x0;
	//    .local v4, "special":Z
	i = 0x0;
	//    .end local v0    # "c":C
	//    .end local v3    # "sb":Ljava/lang/StringBuilder;
	//    .local v1, "i":I
label_goto_c:
	if ( i >= str->length() )
		goto label_cond_63;
	c = str->charAt(i);
	//    .local v0, "c":C
	if ( !(android::icu::lang::UCharacter::isWhitespace(c)) )  
		goto label_cond_43;
	if ( sb )     
		goto label_cond_2d;
	if ( inWhitespace )     
		goto label_cond_24;
	if ( c == 0x20 )
		goto label_cond_2d;
label_cond_24:
	sb = std::make_shared<java::lang::StringBuilder>(str->substring(cVar1, i));
label_cond_2d:
	if ( !(inWhitespace) )  
		goto label_cond_32;
	//    .end local v0    # "c":C
label_cond_2f:
label_goto_2f:
	i = ( i + 0x1);
	goto label_goto_c;
	// 349    .line 148
	// 350    .restart local v0    # "c":C
label_cond_32:
	inWhitespace = 0x1;
	special = 0x0;
	c = 0x20;
	//    .end local v0    # "c":C
label_cond_36:
label_goto_36:
	if ( !(sb) )  
		goto label_cond_2f;
	if ( !(special) )  
		goto label_cond_5f;
	if ( c != cVar0 )
		goto label_cond_5b;
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("&lt;"));
label_goto_3f:
	sb->append(cVar2);
	goto label_goto_2f;
	// 379    .line 152
	// 380    .restart local v0    # "c":C
label_cond_43:
	0x0;
	if ( c == cVar0 )
		goto label_cond_4a;
	if ( c != 0x26 )
		goto label_cond_59;
label_cond_4a:
	special = 0x1;
label_goto_4b:
	if ( !(special) )  
		goto label_cond_36;
	if ( sb )     
		goto label_cond_36;
	sb = std::make_shared<java::lang::StringBuilder>(str->substring(cVar1, i));
	//    .local v3, "sb":Ljava/lang/StringBuilder;
	goto label_goto_36;
	// 412    .line 153
	// 413    .end local v3    # "sb":Ljava/lang/StringBuilder;
label_cond_59:
	special = 0x0;
	goto label_goto_4b;
	// 419    .line 160
	// 420    .end local v0    # "c":C
label_cond_5b:
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("&amp;"));
	goto label_goto_3f;
	// 426    .line 162
label_cond_5f:
	sb->append(c);
	goto label_goto_2f;
	// 432    .line 166
label_cond_63:
	if ( !(sb) )  
		goto label_cond_6a;
	return sb->toString();
	// 443    .line 173
label_cond_6a:
	return str;

}
// .method private pop()V
void android::icu::impl::duration::impl::XMLRecordWriter::pop()
{
	
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .local v0, "ix":I
	name = this->nameStack->remove(( this->nameStack->size() + -0x1));
	name->checkCast("java::lang::String");
	//    .local v1, "name":Ljava/lang/String;
	this->newline();
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->writeString(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("</")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(">")))->toString());
	return;

}
// .method private push(Ljava/lang/String;)V
void android::icu::impl::duration::impl::XMLRecordWriter::push(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	this->newline();
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->writeString(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("<")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(">")))->toString());
	this->nameStack->add(name);
	return;

}
// .method private writeString(Ljava/lang/String;)V
void android::icu::impl::duration::impl::XMLRecordWriter::writeString(std::shared_ptr<java::lang::String> str)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "str"    # Ljava/lang/String;
	if ( !(this->w) )  
		goto label_cond_a;
	try {
	//label_try_start_5:
	this->w->write(str);
	//label_try_end_a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_a} :catch_b
label_cond_a:
label_goto_a:
	return;
	// 575    .line 257
label_catch_b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	java::lang::System::err->println(getCatchExcetionFromList->getMessage());
	this->w = 0x0;
	goto label_goto_a;

}
// .method public bool(Ljava/lang/String;Z)V
void android::icu::impl::duration::impl::XMLRecordWriter::bool(std::shared_ptr<java::lang::String> name,bool value)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "value"    # Z
	this->internalString(name, java::lang::String::valueOf(value));
	return;

}
// .method public boolArray(Ljava/lang/String;[Z)V
void android::icu::impl::duration::impl::XMLRecordWriter::boolArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<bool[]> values)
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> stringValues;
	int i;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "values"    # [Z
	if ( !(values) )  
		goto label_cond_17;
	stringValues = std::make_shared<std::vector<std::vector<java::lang::String>>>(values->size());
	//    .local v1, "stringValues":[Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= values->size() )
		goto label_cond_14;
	stringValues[i] = java::lang::String::valueOf(values[i]);
	i = ( i + 0x1);
	goto label_goto_6;
	// 652    .line 71
label_cond_14:
	this->stringArray(name, stringValues);
	//    .end local v0    # "i":I
	//    .end local v1    # "stringValues":[Ljava/lang/String;
label_cond_17:
	return;

}
// .method public character(Ljava/lang/String;C)V
void android::icu::impl::duration::impl::XMLRecordWriter::character(std::shared_ptr<java::lang::String> name,char value)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "value"    # C
	if ( value == 0xffff )
		goto label_cond_c;
	this->internalString(name, android::icu::impl::duration::impl::XMLRecordWriter::ctos(value));
label_cond_c:
	return;

}
// .method public characterArray(Ljava/lang/String;[C)V
void android::icu::impl::duration::impl::XMLRecordWriter::characterArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<char[]> values)
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> stringValues;
	int i;
	char value;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "values"    # [C
	if ( !(values) )  
		goto label_cond_22;
	stringValues = std::make_shared<std::vector<std::vector<java::lang::String>>>(values->size());
	//    .local v1, "stringValues":[Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= values->size() )
		goto label_cond_1f;
	value = values[i];
	//    .local v2, "value":C
	if ( value != 0xffff )
		goto label_cond_18;
	stringValues[i] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Null"));
label_goto_15:
	i = ( i + 0x1);
	goto label_goto_6;
	// 730    .line 101
label_cond_18:
	stringValues[i] = android::icu::impl::duration::impl::XMLRecordWriter::ctos(value);
	goto label_goto_15;
	// 740    .line 104
	// 741    .end local v2    # "value":C
label_cond_1f:
	this->internalStringArray(name, stringValues);
	//    .end local v0    # "i":I
	//    .end local v1    # "stringValues":[Ljava/lang/String;
label_cond_22:
	return;

}
// .method public close()Z
bool android::icu::impl::duration::impl::XMLRecordWriter::close()
{
	
	int ix;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	ix = ( this->nameStack->size() + -0x1);
	//    .local v0, "ix":I
	if ( ix < 0 ) 
		goto label_cond_36;
	name = this->nameStack->remove(ix);
	name->checkCast("java::lang::String");
	//    .local v1, "name":Ljava/lang/String;
	this->newline();
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->writeString(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("</")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(">")))->toString());
	return 0x1;
	// 816    .line 49
	// 817    .end local v1    # "name":Ljava/lang/String;
label_cond_36:
	return 0x0;

}
// .method public flush()V
void android::icu::impl::duration::impl::XMLRecordWriter::flush()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	this->w->flush();
	//label_try_end_5:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_5} :catch_6
label_goto_5:
	return;
	// 838    .line 55
label_catch_6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	goto label_goto_5;

}
// .method public namedIndex(Ljava/lang/String;[Ljava/lang/String;I)V
void android::icu::impl::duration::impl::XMLRecordWriter::namedIndex(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> names,int value)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "names"    # [Ljava/lang/String;
	//    .param p3, "value"    # I
	if ( value < 0 ) 
		goto label_cond_7;
	this->internalString(name, names[value]);
label_cond_7:
	return;

}
// .method public namedIndexArray(Ljava/lang/String;[Ljava/lang/String;[B)V
void android::icu::impl::duration::impl::XMLRecordWriter::namedIndexArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> names,std::shared_ptr<unsigned char[]> values)
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> stringValues;
	int i;
	unsigned char value;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "names"    # [Ljava/lang/String;
	//    .param p3, "values"    # [B
	if ( !(values) )  
		goto label_cond_1d;
	stringValues = std::make_shared<std::vector<std::vector<java::lang::String>>>(values->size());
	//    .local v1, "stringValues":[Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= values->size() )
		goto label_cond_1a;
	value = values[i];
	//    .local v2, "value":I
	if ( value >= 0 )
		goto label_cond_15;
	stringValues[i] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Null"));
label_goto_12:
	i = ( i + 0x1);
	goto label_goto_6;
	// 909    .line 124
label_cond_15:
	stringValues[i] = names[value];
	goto label_goto_12;
	// 917    .line 127
	// 918    .end local v2    # "value":I
label_cond_1a:
	this->internalStringArray(name, stringValues);
	//    .end local v0    # "i":I
	//    .end local v1    # "stringValues":[Ljava/lang/String;
label_cond_1d:
	return;

}
// .method public open(Ljava/lang/String;)Z
bool android::icu::impl::duration::impl::XMLRecordWriter::open(std::shared_ptr<java::lang::String> title)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "title"    # Ljava/lang/String;
	this->newline();
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->writeString(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("<")))->append(title)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(">")))->toString());
	this->nameStack->add(title);
	return 0x1;

}
// .method public string(Ljava/lang/String;Ljava/lang/String;)V
void android::icu::impl::duration::impl::XMLRecordWriter::string(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	this->internalString(name, android::icu::impl::duration::impl::XMLRecordWriter::normalize(value));
	return;

}
// .method public stringArray(Ljava/lang/String;[Ljava/lang/String;)V
void android::icu::impl::duration::impl::XMLRecordWriter::stringArray(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<java::lang::String>> values)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int i;
	std::shared_ptr<java::lang::String> value;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "values"    # [Ljava/lang/String;
	if ( !(values) )  
		goto label_cond_31;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->push(cVar0->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("List")))->toString());
	i = 0x0;
	//    .local v0, "i":I
label_goto_1a:
	if ( i >= values->size() )
		goto label_cond_2e;
	value = android::icu::impl::duration::impl::XMLRecordWriter::normalize(values[i]);
	//    .local v1, "value":Ljava/lang/String;
	if ( value )     
		goto label_cond_28;
label_cond_28:
	this->internalString(name, value);
	i = ( i + 0x1);
	goto label_goto_1a;
	// 1054    .line 213
	// 1055    .end local v1    # "value":Ljava/lang/String;
label_cond_2e:
	this->pop();
	//    .end local v0    # "i":I
label_cond_31:
	return;

}
// .method public stringTable(Ljava/lang/String;[[Ljava/lang/String;)V
void android::icu::impl::duration::impl::XMLRecordWriter::stringTable(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<std::vector<java::lang::String>>> values)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	int i;
	std::shared_ptr<std::vector<java::lang::String>> rowValues;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "values"    # [[Ljava/lang/String;
	if ( !(values) )  
		goto label_cond_45;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->push(cVar0->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Table")))->toString());
	i = 0x0;
	//    .local v0, "i":I
label_goto_1a:
	if ( i >= values->size() )
		goto label_cond_42;
	rowValues = values[i];
	//    .local v1, "rowValues":[Ljava/lang/String;
	if ( rowValues )     
		goto label_cond_3e;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->internalString(cVar1->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("List")))->toString(), std::make_shared<java::lang::String>(std::make_shared<char[]>("Null")));
label_goto_3b:
	i = ( i + 0x1);
	goto label_goto_1a;
	// 1140    .line 226
label_cond_3e:
	this->stringArray(name, rowValues);
	goto label_goto_3b;
	// 1146    .line 229
	// 1147    .end local v1    # "rowValues":[Ljava/lang/String;
label_cond_42:
	this->pop();
	//    .end local v0    # "i":I
label_cond_45:
	return;

}


