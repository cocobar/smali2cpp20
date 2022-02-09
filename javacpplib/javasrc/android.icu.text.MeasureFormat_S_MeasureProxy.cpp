// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$MeasureProxy.smali
#include "java2ctype.h"
#include "android.icu.text.CurrencyFormat.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat_S_MeasureProxy.h"
#include "android.icu.text.MeasureFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.TimeUnitFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.io.InvalidObjectException.h"
#include "java.io.ObjectInput.h"
#include "java.io.ObjectOutput.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.HashMap.h"

static android::icu::text::MeasureFormat_S_MeasureProxy::serialVersionUID = -0x53ba9df5cf4d9362L;
// .method public constructor <init>()V
android::icu::text::MeasureFormat_S_MeasureProxy::MeasureFormat_S_MeasureProxy()
{
	
	// 052    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$FormatWidth;Landroid/icu/text/NumberFormat;I)V
android::icu::text::MeasureFormat_S_MeasureProxy::MeasureFormat_S_MeasureProxy(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,int subClass)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "width"    # Landroid/icu/text/MeasureFormat$FormatWidth;
	//    .param p3, "numberFormat"    # Landroid/icu/text/NumberFormat;
	//    .param p4, "subClass"    # I
	// 067    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->locale = locale;
	this->formatWidth = width;
	this->numberFormat = numberFormat;
	this->subClass = subClass;
	cVar0 = std::make_shared<java::util::HashMap>();
	this->keyValues = cVar0;
	return;

}
// .method private createTimeUnitFormat()Landroid/icu/text/TimeUnitFormat;
std::shared_ptr<android::icu::text::TimeUnitFormat> android::icu::text::MeasureFormat_S_MeasureProxy::createTimeUnitFormat()
{
	
	std::shared_ptr<android::icu::text::TimeUnitFormat> result;
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 095        value = {
	// 096            Ljava/io/InvalidObjectException;
	// 097        }
	// 098    .end annotation
	if ( this->formatWidth != android::icu::text::MeasureFormat_S_FormatWidth::WIDE )
		goto label_cond_14;
	//    .local v1, "style":I
label_goto_7:
	result = std::make_shared<android::icu::text::TimeUnitFormat>(this->locale, style);
	//    .local v0, "result":Landroid/icu/text/TimeUnitFormat;
	result->setNumberFormat(this->numberFormat);
	return result;
	// 129    .line 1411
	// 130    .end local v0    # "result":Landroid/icu/text/TimeUnitFormat;
	// 131    .end local v1    # "style":I
label_cond_14:
	if ( this->formatWidth != android::icu::text::MeasureFormat_S_FormatWidth::SHORT )
		goto label_cond_1c;
	//    .restart local v1    # "style":I
	goto label_goto_7;
	// 145    .line 1414
	// 146    .end local v1    # "style":I
label_cond_1c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::InvalidObjectException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad width: ")))->append(this->formatWidth)->toString());
	// throw
	throw cVar0;

}
// .method private readResolve()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::MeasureFormat_S_MeasureProxy::readResolve()
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<android::icu::text::CurrencyFormat> cVar2;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 178        value = {
	// 179            Ljava/io/ObjectStreamException;
	// 180        }
	// 181    .end annotation
	// switch
	{
	auto item = ( this->subClass );
	if (item == 0) goto label_pswitch_21;
	if (item == 1) goto label_pswitch_2c;
	if (item == 2) goto label_pswitch_31;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::InvalidObjectException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown subclass: ")))->append(this->subClass)->toString());
	// throw
	throw cVar0;
	// 216    .line 1424
label_pswitch_21:
	return android::icu::text::MeasureFormat::getInstance(this->locale, this->formatWidth, this->numberFormat);
	// 230    .line 1426
label_pswitch_2c:
	return this->createTimeUnitFormat();
	// 238    .line 1428
label_pswitch_31:
	cVar2 = std::make_shared<android::icu::text::CurrencyFormat>(this->locale);
	return cVar2;
	// 248    .line 1422
	// 249    nop
	// 251    :pswitch_data_3a
	// 252    .packed-switch 0x0
	// 253        :pswitch_21
	// 254        :pswitch_2c
	// 255        :pswitch_31
	// 256    .end packed-switch

}
// .method public readExternal(Ljava/io/ObjectInput;)V
void android::icu::text::MeasureFormat_S_MeasureProxy::readExternal(std::shared_ptr<java::io::ObjectInput> in)
{
	
	std::shared_ptr<android::icu::text::NumberFormat> cVar0;
	std::shared_ptr<java::io::InvalidObjectException> cVar1;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<java::io::InvalidObjectException> cVar3;
	
	//    .param p1, "in"    # Ljava/io/ObjectInput;
	//    .annotation system Ldalvik/annotation/Throws;
	// 265        value = {
	// 266            Ljava/io/IOException;,
	// 267            Ljava/lang/ClassNotFoundException;
	// 268        }
	// 269    .end annotation
	in->readByte();
	this->locale = android::icu::util::ULocale::forLanguageTag(in->readUTF());
	this->formatWidth = android::icu::text::MeasureFormat::-wrap0(( in->readByte() & 0xff));
	cVar0 = in->readObject();
	cVar0->checkCast("android::icu::text::NumberFormat");
	this->numberFormat = cVar0;
	if ( this->numberFormat )     
		goto label_cond_2e;
	cVar1 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing number format.")));
	// throw
	throw cVar1;
	// 322    .line 1397
label_cond_2e:
	this->subClass = ( in->readByte() & 0xff);
	cVar2 = in->readObject();
	cVar2->checkCast("java::util::HashMap");
	this->keyValues = cVar2;
	if ( this->keyValues )     
		goto label_cond_4b;
	cVar3 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Missing optional values map.")));
	// throw
	throw cVar3;
	// 355    .line 1405
label_cond_4b:
	return;

}
// .method public writeExternal(Ljava/io/ObjectOutput;)V
void android::icu::text::MeasureFormat_S_MeasureProxy::writeExternal(std::shared_ptr<java::io::ObjectOutput> out)
{
	
	//    .param p1, "out"    # Ljava/io/ObjectOutput;
	//    .annotation system Ldalvik/annotation/Throws;
	// 364        value = {
	// 365            Ljava/io/IOException;
	// 366        }
	// 367    .end annotation
	out->writeByte(0x0);
	out->writeUTF(this->locale->toLanguageTag());
	out->writeByte(this->formatWidth->ordinal());
	out->writeObject(this->numberFormat);
	out->writeByte(this->subClass);
	out->writeObject(this->keyValues);
	return;

}


