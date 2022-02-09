// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\Cache$EqualByteArray.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.Arrays.h"
#include "sun.security.util.Cache_S_EqualByteArray.h"

// .method public constructor <init>([B)V
sun::security::util::Cache_S_EqualByteArray::Cache_S_EqualByteArray(std::shared_ptr<unsigned char[]> b)
{
	
	//    .param p1, "b"    # [B
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->b = b;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::util::Cache_S_EqualByteArray::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::util::Cache_S_EqualByteArray> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 054    .line 189
label_cond_4:
	if ( obj->instanceOf("sun::security::util::Cache_S_EqualByteArray") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::util::Cache_S_EqualByteArray");
	//    .local v0, "other":Lsun/security/util/Cache$EqualByteArray;
	return java::util::Arrays::equals(this->b, other->b);

}
// .method public hashCode()I
int sun::security::util::Cache_S_EqualByteArray::hashCode()
{
	
	int h;
	int i;
	
	h = this->hash;
	//    .local v0, "h":I
	if ( h )     
		goto label_cond_1d;
	h = ( this->b->size() + 0x1);
	i = 0x0;
	//    .local v1, "i":I
label_goto_a:
	if ( i >= this->b->size() )
		goto label_cond_1b;
	h = (h +  ( ( this->b[i] & 0xff) * 0x25));
	i = ( i + 0x1);
	goto label_goto_a;
	// 129    .line 180
label_cond_1b:
	this->hash = h;
	//    .end local v1    # "i":I
label_cond_1d:
	return h;

}


