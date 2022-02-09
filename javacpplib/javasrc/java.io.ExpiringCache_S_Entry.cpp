// CPP L:\smali2cpp20\x64\Release\out\java\io\ExpiringCache$Entry.smali
#include "java2ctype.h"
#include "java.io.ExpiringCache_S_Entry.h"
#include "java.lang.String.h"

// .method constructor <init>(JLjava/lang/String;)V
java::io::ExpiringCache_S_Entry::ExpiringCache_S_Entry(long long timestamp,std::shared_ptr<java::lang::String> val)
{
	
	//    .param p1, "timestamp"    # J
	//    .param p3, "val"    # Ljava/lang/String;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->timestamp = timestamp;
	this->val = val;
	return;

}
// .method setTimestamp(J)V
void java::io::ExpiringCache_S_Entry::setTimestamp(long long timestamp)
{
	
	//    .param p1, "timestamp"    # J
	this->timestamp = timestamp;
	return;

}
// .method setVal(Ljava/lang/String;)V
void java::io::ExpiringCache_S_Entry::setVal(std::shared_ptr<java::lang::String> val)
{
	
	//    .param p1, "val"    # Ljava/lang/String;
	this->val = val;
	return;

}
// .method timestamp()J
long long java::io::ExpiringCache_S_Entry::timestamp()
{
	
	return this->timestamp;

}
// .method val()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ExpiringCache_S_Entry::val()
{
	
	return this->val;

}


