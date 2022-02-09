#ifndef __java_lang_Enum__
#define __java_lang_Enum__
// H L:\smali2cpp20\x64\Release\out\java\lang\Enum.smali
#include "java2ctype.h"
#include "java.io.InvalidObjectException.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.Serializable.h"
#include "java.lang.Class.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Comparable.h"
#include "java.lang.Enum_S_1.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "libcore.util.BasicLruCache.h"

namespace java::lang{
template <typename E>
class Enum : public java::lang::Comparable<E>, public java::io::Serializable {
protected:
	Enum(std::shared_ptr<java::lang::String> name,int ordinal);
	std::shared_ptr<java::lang::Object> clone();
	void finalize();
private:
	static std::shared_ptr<libcore::util::BasicLruCache<java::lang::Class<java::lang::Enum>,std::vector<java::lang::Object>>> sharedConstantsCache;
	std::shared_ptr<java::lang::String> name;
	int ordinal;
	void readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	void readObjectNoData();
public:
	static void static_cinit();
	static std::shared_ptr<T> getSharedConstants(std::shared_ptr<java::lang::Class<T>> enumType);
	static std::shared_ptr<T> valueOf(std::shared_ptr<java::lang::Class<T>> enumType,std::shared_ptr<java::lang::String> name);
	int compareTo(std::shared_ptr<E> o);
	bool equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<java::lang::Class<E>> getDeclaringClass();
	int hashCode();
	std::shared_ptr<java::lang::String> name();
	int ordinal();
	std::shared_ptr<java::lang::String> toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Enum<E>::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Enum(){
	}

}; // class Enum
}; // namespace java::lang
// .method static constructor <clinit>()V
template <typename E>
static void static_cinit()
{
	
	std::shared_ptr<java::lang::Enum_S_1> cVar0;
	
	cVar0 = std::make_shared<java::lang::Enum_S_1>(0x40);
	java::lang::Enum<E>::sharedConstantsCache = cVar0;
	return;

}
// .method protected constructor <init>(Ljava/lang/String;I)V
template <typename E>
java::lang::Enum<E>::Enum(std::shared_ptr<java::lang::String> name,int ordinal)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "ordinal"    # I
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	// 080    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = name;
	this->ordinal = ordinal;
	return;

}
// .method public static getSharedConstants(Ljava/lang/Class;)[Ljava/lang/Enum;
template <typename E,typename T>
std::shared_ptr<T> java::lang::Enum<E>::getSharedConstants(std::shared_ptr<java::lang::Class<T>> enumType)
{
	
	std::shared_ptr<std::vector<java::lang::Enum>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 095        value = {
	// 096            "<T:",
	// 097            "Ljava/lang/Enum",
	// 098            "<TT;>;>(",
	// 099            "Ljava/lang/Class",
	// 100            "<TT;>;)[TT;"
	// 101        }
	// 102    .end annotation
	//    .local p0, "enumType":Ljava/lang/Class;, "Ljava/lang/Class<TT;>;"
	cVar0 = java::lang::Enum<E>::sharedConstantsCache->get(enumType);
	cVar0->checkCast("std::vector<java::lang::Enum>");
	return cVar0;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
template <typename E>
void java::lang::Enum<E>::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 122        value = {
	// 123            Ljava/io/IOException;,
	// 124            Ljava/lang/ClassNotFoundException;
	// 125        }
	// 126    .end annotation
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	cVar0 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("can\'t deserialize enum")));
	// throw
	throw cVar0;

}
// .method private readObjectNoData()V
template <typename E>
void java::lang::Enum<E>::readObjectNoData()
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 143        value = {
	// 144            Ljava/io/ObjectStreamException;
	// 145        }
	// 146    .end annotation
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	cVar0 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("can\'t deserialize enum")));
	// throw
	throw cVar0;

}
// .method public static valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;
template <typename E,typename T>
std::shared_ptr<T> java::lang::Enum<E>::valueOf(std::shared_ptr<java::lang::Class<T>> enumType,std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	auto values;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int i;
	std::shared_ptr<java::lang::Enum<E>> value;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 164        value = {
	// 165            "<T:",
	// 166            "Ljava/lang/Enum",
	// 167            "<TT;>;>(",
	// 168            "Ljava/lang/Class",
	// 169            "<TT;>;",
	// 170            "Ljava/lang/String;",
	// 171            ")TT;"
	// 172        }
	// 173    .end annotation
	//    .local p0, "enumType":Ljava/lang/Class;, "Ljava/lang/Class<TT;>;"
	if ( enumType )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("enumType == null")));
	// throw
	throw cVar0;
	// 189    .line 241
	label_cond_b:
	if ( name )     
		goto label_cond_16;
	cVar1 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("name == null")));
	// throw
	throw cVar1;
	// 202    .line 244
	label_cond_16:
	values = java::lang::Enum<E>::getSharedConstants(enumType);
	//    .local v2, "values":[Ljava/lang/Enum;, "[TT;"
	if ( values )     
		goto label_cond_3a;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(enumType->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is not an enum type.")))->toString());
	// throw
	throw cVar2;
	// 241    .line 251
	label_cond_3a:
	i = ( values->size() + -0x1);
	//    .local v0, "i":I
	label_goto_3d:
	if ( i < 0 ) 
		goto label_cond_4f;
	value = values[i];
	//    .local v1, "value":Ljava/lang/Enum;, "TT;"
	if ( !(name->equals(value->name())) )  
		goto label_cond_4c;
	return value;
	// 269    .line 251
	label_cond_4c:
	i = ( i + -0x1);
	goto label_goto_3d;
	// 275    .line 257
	// 276    .end local v1    # "value":Ljava/lang/Enum;, "TT;"
	label_cond_4f:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No enum constant ")))->append(enumType->getCanonicalName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))->append(name)->toString());
	// throw
	throw cVar4;

}
// .method protected final clone()Ljava/lang/Object;
template <typename E>
std::shared_ptr<java::lang::Object> java::lang::Enum<E>::clone()
{
	
	std::shared_ptr<java::lang::CloneNotSupportedException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 324        value = {
	// 325            Ljava/lang/CloneNotSupportedException;
	// 326        }
	// 327    .end annotation
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	cVar0 = std::make_shared<java::lang::CloneNotSupportedException>();
	// throw
	throw cVar0;

}
// .method public final compareTo(Ljava/lang/Enum;)I
template <typename E>
int java::lang::Enum<E>::compareTo(std::shared_ptr<E> o)
{
	
	std::shared_ptr<java::lang::ClassCastException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 342        value = {
	// 343            "(TE;)I"
	// 344        }
	// 345    .end annotation
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	//    .local p1, "o":Ljava/lang/Enum;, "TE;"
	o;
	//    .local v0, "other":Ljava/lang/Enum;, "Ljava/lang/Enum<*>;"
	this;
	//    .local v1, "self":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	if ( this->getClass() == o->getClass() )
		goto label_cond_1c;
	if ( this->getDeclaringClass() == o->getDeclaringClass() )
		goto label_cond_1c;
	cVar0 = std::make_shared<java::lang::ClassCastException>();
	// throw
	throw cVar0;
	// 387    .line 186
	label_cond_1c:
	return (this->ordinal -  o->ordinal);

}
// .method public bridge synthetic compareTo(Ljava/lang/Object;)I
template <typename E>
int java::lang::Enum<E>::compareTo(std::shared_ptr<java::lang::Object> cVar0)
{
	
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	cVar0->checkCast("java::lang::Enum<E>");
	return this->compareTo(cVar0);

}
// .method public final equals(Ljava/lang/Object;)Z
template <typename E>
bool java::lang::Enum<E>::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	if ( this != other )
		goto label_cond_4;
	cVar0 = 0x1;
	label_goto_3:
	return cVar0;
	label_cond_4:
	cVar0 = 0x0;
	goto label_goto_3;

}
// .method protected final finalize()V
template <typename E>
void java::lang::Enum<E>::finalize()
{
	
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	return;

}
// .method public final getDeclaringClass()Ljava/lang/Class;
template <typename E>
std::shared_ptr<java::lang::Class<E>> java::lang::Enum<E>::getDeclaringClass()
{
	
	std::shared_ptr<java::lang::Class> clazz;
	auto zuper;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 445        value = {
	// 446            "()",
	// 447            "Ljava/lang/Class",
	// 448            "<TE;>;"
	// 449        }
	// 450    .end annotation
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	clazz = this->getClass();
	//    .local v0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	zuper = clazz->getSuperclass();
	//    .local v1, "zuper":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( zuper != java::lang::Enum<E>() )
		goto label_cond_d;
	//    .end local v0    # "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	label_goto_c:
	return clazz;
	// 475    .restart local v0    # "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	label_cond_d:
	clazz = zuper;
	goto label_goto_c;

}
// .method public final hashCode()I
template <typename E>
int java::lang::Enum<E>::hashCode()
{
	
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	return this->hashCode();

}
// .method public final name()Ljava/lang/String;
template <typename E>
std::shared_ptr<java::lang::String> java::lang::Enum<E>::name()
{
	
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	return this->name;

}
// .method public final ordinal()I
template <typename E>
int java::lang::Enum<E>::ordinal()
{
	
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	return this->ordinal;

}
// .method public toString()Ljava/lang/String;
template <typename E>
std::shared_ptr<java::lang::String> java::lang::Enum<E>::toString()
{
	
	//    .local p0, "this":Ljava/lang/Enum;, "Ljava/lang/Enum<TE;>;"
	return this->name;

}

#endif //__java_lang_Enum__

