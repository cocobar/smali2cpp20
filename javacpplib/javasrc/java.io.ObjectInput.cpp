// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInput.smali
#include "java2ctype.h"
#include "java.io.ObjectInput.h"
#include "java.lang.Object.h"

// .method public abstract available()I
int java::io::ObjectInput::available()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 013        value = {
	// 014            Ljava/io/IOException;
	// 015        }
	// 016    .end annotation

}
// .method public abstract close()V
void java::io::ObjectInput::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 021        value = {
	// 022            Ljava/io/IOException;
	// 023        }
	// 024    .end annotation

}
// .method public abstract read()I
int java::io::ObjectInput::read()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 029        value = {
	// 030            Ljava/io/IOException;
	// 031        }
	// 032    .end annotation

}
// .method public abstract read([B)I
int java::io::ObjectInput::read(std::shared_ptr<unsigned char[]> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 037        value = {
	// 038            Ljava/io/IOException;
	// 039        }
	// 040    .end annotation

}
// .method public abstract read([BII)I
int java::io::ObjectInput::read(std::shared_ptr<unsigned char[]> var0,int var1,int var2)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 045        value = {
	// 046            Ljava/io/IOException;
	// 047        }
	// 048    .end annotation

}
// .method public abstract readObject()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInput::readObject()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 053        value = {
	// 054            Ljava/lang/ClassNotFoundException;,
	// 055            Ljava/io/IOException;
	// 056        }
	// 057    .end annotation

}
// .method public abstract skip(J)J
long long java::io::ObjectInput::skip(long long var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 062        value = {
	// 063            Ljava/io/IOException;
	// 064        }
	// 065    .end annotation

}


