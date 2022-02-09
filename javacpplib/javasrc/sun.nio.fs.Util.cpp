// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\Util.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.charset.Charset.h"
#include "java.nio.file.LinkOption.h"
#include "java.util.HashSet.h"
#include "java.util.Set.h"
#include "sun.nio.fs.Util.h"

static sun::nio::fs::Util::jnuEncoding;
// .method static constructor <clinit>()V
void sun::nio::fs::Util::static_cinit()
{
	
	sun::nio::fs::Util::jnuEncoding = java::nio::charset::Charset::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("UTF-8")));
	return;

}
// .method private constructor <init>()V
sun::nio::fs::Util::Util()
{
	
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static varargs followLinks([Ljava/nio/file/LinkOption;)Z
bool sun::nio::fs::Util::followLinks(std::shared_ptr<std::vector<java::nio::file::LinkOption>> options)
{
	
	int cVar0;
	auto option;
	std::shared_ptr<java::lang::NullPointerException> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p0, "options"    # [Ljava/nio/file/LinkOption;
	//    .local v0, "followLinks":Z
	cVar0 = 0x0;
label_goto_3:
	if ( cVar0 >= options->size() )
		goto label_cond_20;
	option = options[cVar0];
	//    .local v1, "option":Ljava/nio/file/LinkOption;
	if ( option != java::nio::file::LinkOption::NOFOLLOW_LINKS )
		goto label_cond_f;
	0x0;
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_3;
	// 071    .line 126
label_cond_f:
	if ( option )     
		goto label_cond_17;
	cVar2 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar2;
	// 082    .line 129
label_cond_17:
	cVar3 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Should not get here")));
	// throw
	throw cVar3;
	// 092    .line 132
	// 093    .end local v1    # "option":Ljava/nio/file/LinkOption;
label_cond_20:
	return 0x1;

}
// .method static jnuEncoding()Ljava/nio/charset/Charset;
std::shared_ptr<java::nio::charset::Charset> sun::nio::fs::Util::jnuEncoding()
{
	
	return sun::nio::fs::Util::jnuEncoding;

}
// .method static varargs newSet(Ljava/util/Set;[Ljava/lang/Object;)Ljava/util/Set;
template <typename E>
std::shared_ptr<java::util::Set<E>> sun::nio::fs::Util::newSet(std::shared_ptr<java::util::Set<E>> other,std::shared_ptr<std::vector<E>> elements)
{
	
	std::shared_ptr<java::util::HashSet> set;
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 111        value = {
	// 112            "<E:",
	// 113            "Ljava/lang/Object;",
	// 114            ">(",
	// 115            "Ljava/util/Set",
	// 116            "<TE;>;[TE;)",
	// 117            "Ljava/util/Set",
	// 118            "<TE;>;"
	// 119        }
	// 120    .end annotation
	//    .annotation runtime Ljava/lang/SafeVarargs;
	// 123    .end annotation
	//    .local p0, "other":Ljava/util/Set;, "Ljava/util/Set<TE;>;"
	//    .local p1, "elements":[Ljava/lang/Object;, "[TE;"
	set = std::make_shared<java::util::HashSet>(other);
	//    .local v1, "set":Ljava/util/HashSet;, "Ljava/util/HashSet<TE;>;"
	cVar0 = 0x0;
label_goto_7:
	if ( cVar0 >= elements->size() )
		goto label_cond_11;
	//    .local v0, "e":Ljava/lang/Object;, "TE;"
	set->add(elements[cVar0]);
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_7;
	// 153    .line 115
	// 154    .end local v0    # "e":Ljava/lang/Object;, "TE;"
label_cond_11:
	return set;

}
// .method static varargs newSet([Ljava/lang/Object;)Ljava/util/Set;
template <typename E>
std::shared_ptr<java::util::Set<E>> sun::nio::fs::Util::newSet(std::shared_ptr<std::vector<E>> elements)
{
	
	std::shared_ptr<java::util::HashSet> set;
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 162        value = {
	// 163            "<E:",
	// 164            "Ljava/lang/Object;",
	// 165            ">([TE;)",
	// 166            "Ljava/util/Set",
	// 167            "<TE;>;"
	// 168        }
	// 169    .end annotation
	//    .annotation runtime Ljava/lang/SafeVarargs;
	// 172    .end annotation
	//    .local p0, "elements":[Ljava/lang/Object;, "[TE;"
	set = std::make_shared<java::util::HashSet>();
	//    .local v1, "set":Ljava/util/HashSet;, "Ljava/util/HashSet<TE;>;"
	cVar0 = 0x0;
label_goto_7:
	if ( cVar0 >= elements->size() )
		goto label_cond_11;
	//    .local v0, "e":Ljava/lang/Object;, "TE;"
	set->add(elements[cVar0]);
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_7;
	// 201    .line 102
	// 202    .end local v0    # "e":Ljava/lang/Object;, "TE;"
label_cond_11:
	return set;

}
// .method static split(Ljava/lang/String;C)[Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::Util::split(std::shared_ptr<java::lang::String> s,char c)
{
	
	int count;
	int i;
	std::shared<std::vector<std::vector<java::lang::String>>> result;
	int n;
	int last;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "c"    # C
	count = 0x0;
	//    .local v0, "count":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_2:
	if ( i >= s->length() )
		goto label_cond_13;
	if ( s->charAt(i) != c )
		goto label_cond_10;
	count = ( count + 0x1);
label_cond_10:
	i = ( i + 0x1);
	goto label_goto_2;
	// 244    .line 80
label_cond_13:
	result = std::make_shared<std::vector<std::vector<java::lang::String>>>(( count + 0x1));
	//    .local v5, "result":[Ljava/lang/String;
	n = 0x0;
	//    .local v3, "n":I
	last = 0x0;
	//    .local v2, "last":I
	i = 0x0;
label_goto_1a:
	if ( i >= s->length() )
		goto label_cond_34;
	if ( s->charAt(i) != c )
		goto label_cond_31;
	//    .end local v3    # "n":I
	//    .local v4, "n":I
	result[n] = s->substring(last, i);
	last = ( i + 0x1);
	n = ( n + 0x1);
	//    .end local v4    # "n":I
	//    .restart local v3    # "n":I
label_cond_31:
	i = ( i + 0x1);
	goto label_goto_1a;
	// 300    .line 89
label_cond_34:
	result[n] = s->substring(last, s->length());
	return result;

}
// .method static toBytes(Ljava/lang/String;)[B
unsigned char sun::nio::fs::Util::toBytes(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	return s->getBytes(sun::nio::fs::Util::jnuEncoding);

}
// .method static toString([B)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::Util::toString(std::shared_ptr<unsigned char[]> bytes)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "bytes"    # [B
	cVar0 = std::make_shared<java::lang::String>(bytes, sun::nio::fs::Util::jnuEncoding);
	return cVar0;

}


