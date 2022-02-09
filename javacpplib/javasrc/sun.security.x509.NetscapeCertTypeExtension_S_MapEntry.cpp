// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\NetscapeCertTypeExtension$MapEntry.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.NetscapeCertTypeExtension_S_MapEntry.h"

// .method constructor <init>(Ljava/lang/String;I)V
sun::security::x509::NetscapeCertTypeExtension_S_MapEntry::NetscapeCertTypeExtension_S_MapEntry(std::shared_ptr<java::lang::String> name,int position)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "position"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->mName = name;
	this->mPosition = position;
	return;

}


