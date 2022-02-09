// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixMountEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "sun.nio.fs.UnixMountEntry.h"
#include "sun.nio.fs.Util.h"

// .method constructor <init>()V
sun::nio::fs::UnixMountEntry::UnixMountEntry()
{
	
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method dev()J
long long sun::nio::fs::UnixMountEntry::dev()
{
	
	return this->dev;

}
// .method dir()[B
unsigned char sun::nio::fs::UnixMountEntry::dir()
{
	
	return this->dir;

}
// .method fstype()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixMountEntry::fstype()
{
	
	if ( this->fstypeAsString )     
		goto label_cond_c;
	this->fstypeAsString = sun::nio::fs::Util::toString(this->fstype);
label_cond_c:
	return this->fstypeAsString;

}
// .method hasOption(Ljava/lang/String;)Z
bool sun::nio::fs::UnixMountEntry::hasOption(std::shared_ptr<java::lang::String> requested)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	
	//    .param p1, "requested"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( this->optionsAsString )     
		goto label_cond_d;
	this->optionsAsString = sun::nio::fs::Util::toString(this->opts);
label_cond_d:
	cVar1 = sun::nio::fs::Util::split(this->optionsAsString, 0x2c);
	cVar2 = cVar0;
label_goto_17:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_26;
	//    .local v0, "opt":Ljava/lang/String;
	if ( !(cVar1[cVar2]->equals(requested)) )  
		goto label_cond_23;
	return 0x1;
	// 134    .line 69
label_cond_23:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_17;
	// 140    .line 73
	// 141    .end local v0    # "opt":Ljava/lang/String;
label_cond_26:
	return cVar0;

}
// .method isIgnored()Z
bool sun::nio::fs::UnixMountEntry::isIgnored()
{
	
	return this->hasOption(std::make_shared<java::lang::String>(std::make_shared<char[]>("ignore")));

}
// .method isReadOnly()Z
bool sun::nio::fs::UnixMountEntry::isReadOnly()
{
	
	return this->hasOption(std::make_shared<java::lang::String>(std::make_shared<char[]>("ro")));

}
// .method name()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::nio::fs::UnixMountEntry::name()
{
	
	return sun::nio::fs::Util::toString(this->name);

}


