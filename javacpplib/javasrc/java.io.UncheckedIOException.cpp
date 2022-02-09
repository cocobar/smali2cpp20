// CPP L:\smali2cpp20\x64\Release\out\java\io\UncheckedIOException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InvalidObjectException.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.UncheckedIOException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.util.Objects.h"

static java::io::UncheckedIOException::serialVersionUID = -0x70e2db5b2e06cae9L;
// .method public constructor <init>(Ljava/io/IOException;)V
java::io::UncheckedIOException::UncheckedIOException(std::shared_ptr<java::io::IOException> cause)
{
	
	std::shared_ptr<java::lang::Throwable> cVar0;
	
	//    .param p1, "cause"    # Ljava/io/IOException;
	cVar0 = java::util::Objects::requireNonNull(cause);
	cVar0->checkCast("java::lang::Throwable");
	java::lang::RuntimeException::(cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/io/IOException;)V
java::io::UncheckedIOException::UncheckedIOException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::io::IOException> cause)
{
	
	std::shared_ptr<java::lang::Throwable> cVar0;
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/io/IOException;
	cVar0 = java::util::Objects::requireNonNull(cause);
	cVar0->checkCast("java::lang::Throwable");
	java::lang::RuntimeException::(message, cVar0);
	return;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void java::io::UncheckedIOException::readObject(std::shared_ptr<java::io::ObjectInputStream> s)
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	
	//    .param p1, "s"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 052        value = {
	// 053            Ljava/io/IOException;,
	// 054            Ljava/lang/ClassNotFoundException;
	// 055        }
	// 056    .end annotation
	s->defaultReadObject();
	//    .local v0, "cause":Ljava/lang/Throwable;
	if ( this->getCause()->instanceOf("java::io::IOException") )     
		goto label_cond_14;
	cVar0 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cause must be an IOException")));
	// throw
	throw cVar0;
	// 082    .line 89
label_cond_14:
	return;

}
// .method public getCause()Ljava/io/IOException;
std::shared_ptr<java::io::IOException> java::io::UncheckedIOException::getCause()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	cVar0 = this->getCause();
	cVar0->checkCast("java::io::IOException");
	return cVar0;

}


