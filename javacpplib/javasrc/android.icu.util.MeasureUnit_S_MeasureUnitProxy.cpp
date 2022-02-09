// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit$MeasureUnitProxy.smali
#include "java2ctype.h"
#include "android.icu.util.MeasureUnit_S_MeasureUnitProxy.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.io.ObjectInput.h"
#include "java.io.ObjectOutput.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::util::MeasureUnit_S_MeasureUnitProxy::serialVersionUID = -0x364588070e86861eL;
// .method public constructor <init>()V
android::icu::util::MeasureUnit_S_MeasureUnitProxy::MeasureUnit_S_MeasureUnitProxy()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::util::MeasureUnit_S_MeasureUnitProxy::MeasureUnit_S_MeasureUnitProxy(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> subType)
{
	
	//    .param p1, "type"    # Ljava/lang/String;
	//    .param p2, "subType"    # Ljava/lang/String;
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->type = type;
	this->subType = subType;
	return;

}
// .method private readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::MeasureUnit_S_MeasureUnitProxy::readResolve()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 064        value = {
	// 065            Ljava/io/ObjectStreamException;
	// 066        }
	// 067    .end annotation
	return android::icu::util::MeasureUnit::internalGetInstance(this->type, this->subType);

}
// .method public readExternal(Ljava/io/ObjectInput;)V
void android::icu::util::MeasureUnit_S_MeasureUnitProxy::readExternal(std::shared_ptr<java::io::ObjectInput> in)
{
	
	int extra;
	
	//    .param p1, "in"    # Ljava/io/ObjectInput;
	//    .annotation system Ldalvik/annotation/Throws;
	// 088        value = {
	// 089            Ljava/io/IOException;,
	// 090            Ljava/lang/ClassNotFoundException;
	// 091        }
	// 092    .end annotation
	in->readByte();
	this->type = in->readUTF();
	this->subType = in->readUTF();
	extra = in->readShort();
	//    .local v0, "extra":I
	if ( extra <= 0 )
		goto label_cond_1b;
	//    .local v1, "extraBytes":[B
	in->read(std::make_shared<std::vector<unsigned char[]>>(extra), 0x0, extra);
	//    .end local v1    # "extraBytes":[B
label_cond_1b:
	return;

}
// .method public writeExternal(Ljava/io/ObjectOutput;)V
void android::icu::util::MeasureUnit_S_MeasureUnitProxy::writeExternal(std::shared_ptr<java::io::ObjectOutput> out)
{
	
	int cVar0;
	
	//    .param p1, "out"    # Ljava/io/ObjectOutput;
	//    .annotation system Ldalvik/annotation/Throws;
	// 140        value = {
	// 141            Ljava/io/IOException;
	// 142        }
	// 143    .end annotation
	cVar0 = 0x0;
	out->writeByte(cVar0);
	out->writeUTF(this->type);
	out->writeUTF(this->subType);
	out->writeShort(cVar0);
	return;

}


