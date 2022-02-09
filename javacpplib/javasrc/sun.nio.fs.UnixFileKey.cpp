// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileKey.smali
#include "java2ctype.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.nio.fs.UnixFileKey.h"

// .method constructor <init>(JJ)V
sun::nio::fs::UnixFileKey::UnixFileKey(long long st_dev,long long st_ino)
{
	
	//    .param p1, "st_dev"    # J
	//    .param p3, "st_ino"    # J
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->st_dev = st_dev;
	this->st_ino = st_ino;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::nio::fs::UnixFileKey::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::nio::fs::UnixFileKey> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( obj != this )
		goto label_cond_5;
	return cVar0;
	// 049    .line 51
label_cond_5:
	if ( obj->instanceOf("sun::nio::fs::UnixFileKey") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = obj;
	other->checkCast("sun::nio::fs::UnixFileKey");
	//    .local v0, "other":Lsun/nio/fs/UnixFileKey;
	if ( (this->st_dev > other->st_dev) )     
		goto label_cond_1e;
	if ( (this->st_ino > other->st_ino) )     
		goto label_cond_1e;
label_goto_1d:
	return cVar0;
label_cond_1e:
	cVar0 = cVar1;
	goto label_goto_1d;

}
// .method public hashCode()I
int sun::nio::fs::UnixFileKey::hashCode()
{
	
	int cVar0;
	
	cVar0 = 0x20;
	return ((int)((this->st_dev ^  _ushrll(this->st_dev,cVar0))) +  (int)((this->st_ino ^  _ushrll(this->st_ino,cVar0))));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixFileKey::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(dev=")))->append(java::lang::Long::toHexString(this->st_dev))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",ino=")))->append(this->st_ino)->append(0x29);
	return sb->toString();

}


