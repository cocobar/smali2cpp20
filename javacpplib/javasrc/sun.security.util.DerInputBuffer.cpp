// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\DerInputBuffer.smali
#include "java2ctype.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.io.IOException.h"
#include "java.lang.Character.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.math.BigInteger.h"
#include "java.util.Date.h"
#include "java.util.TimeZone.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputBuffer.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarSystem.h"
#include "sun.util.calendar.Gregorian.h"

// .method constructor <init>([B)V
sun::security::util::DerInputBuffer::DerInputBuffer(std::shared_ptr<unsigned char[]> buf)
{
	
	//    .param p1, "buf"    # [B
	java::io::ByteArrayInputStream::(buf);
	return;

}
// .method constructor <init>([BII)V
sun::security::util::DerInputBuffer::DerInputBuffer(std::shared_ptr<unsigned char[]> buf,int offset,int len)
{
	
	//    .param p1, "buf"    # [B
	//    .param p2, "offset"    # I
	//    .param p3, "len"    # I
	java::io::ByteArrayInputStream::(buf, offset, len);
	return;

}
// .method private getTime(IZ)Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::util::DerInputBuffer::getTime(int cVar4,bool generalized)
{
	
	std::shared_ptr<java::lang::String> type;
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int cVar5;
	int cVar6;
	int month;
	int cVar7;
	int cVar8;
	int day;
	int cVar9;
	int cVar10;
	int hour;
	int cVar11;
	int cVar12;
	int minute;
	int cVar13;
	int cVar14;
	int cVar15;
	int second;
	int precision;
	int peek;
	std::shared_ptr<java::io::IOException> cVar18;
	std::shared_ptr<java::lang::StringBuilder> cVar19;
	int cVar28;
	int cVar23;
	std::shared_ptr<java::io::IOException> cVar24;
	std::shared_ptr<java::lang::StringBuilder> cVar25;
	std::shared_ptr<sun::util::calendar::CalendarSystem> gcal;
	std::shared_ptr<sun::util::calendar::CalendarDate> date;
	auto time;
	std::shared_ptr<java::io::IOException> cVar29;
	std::shared_ptr<java::lang::StringBuilder> cVar30;
	int cVar31;
	std::shared_ptr<java::io::IOException> cVar32;
	std::shared_ptr<java::lang::StringBuilder> cVar33;
	int cVar34;
	int cVar35;
	int hr;
	int cVar36;
	int cVar37;
	int min;
	std::shared_ptr<java::io::IOException> cVar38;
	std::shared_ptr<java::lang::StringBuilder> cVar39;
	long long time;
	std::shared_ptr<java::util::Date> cVar40;
	int cVar41;
	int cVar42;
	int cVar43;
	int cVar44;
	std::shared_ptr<java::io::IOException> cVar45;
	std::shared_ptr<java::lang::StringBuilder> cVar46;
	int cVar26;
	int cVar27;
	int cVar20;
	int cVar21;
	int cVar22;
	int cVar16;
	int cVar17;
	int year;
	
	//    .param p1, "len"    # I
	//    .param p2, "generalized"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 040        value = {
	// 041            Ljava/io/IOException;
	// 042        }
	// 043    .end annotation
	0x0;
	//    .local v16, "type":Ljava/lang/String;
	if ( !(generalized) )  
		goto label_cond_286;
	type = std::make_shared<java::lang::String>(std::make_shared<char[]>("Generalized"));
	//    .local v16, "type":Ljava/lang/String;
	cVar0 = this->pos;
	this->pos = ( cVar0 + 0x1);
	//    .local v17, "year":I
	cVar1 = this->pos;
	this->pos = ( cVar1 + 0x1);
	cVar2 = this->pos;
	this->pos = ( cVar2 + 0x1);
	cVar3 = this->pos;
	this->pos = ( cVar3 + 0x1);
	cVar4 = ( cVar4 + -0x2);
label_goto_9d:
	cVar5 = this->pos;
	this->pos = ( cVar5 + 0x1);
	//    .local v10, "month":I
	cVar6 = this->pos;
	this->pos = ( cVar6 + 0x1);
	month = (( java::lang::Character::digit((char)(this->buf[cVar5]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar6]), 0xa));
	cVar7 = this->pos;
	this->pos = ( cVar7 + 0x1);
	//    .local v3, "day":I
	cVar8 = this->pos;
	this->pos = ( cVar8 + 0x1);
	day = (( java::lang::Character::digit((char)(this->buf[cVar7]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar8]), 0xa));
	cVar9 = this->pos;
	this->pos = ( cVar9 + 0x1);
	//    .local v5, "hour":I
	cVar10 = this->pos;
	this->pos = ( cVar10 + 0x1);
	hour = (( java::lang::Character::digit((char)(this->buf[cVar9]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar10]), 0xa));
	cVar11 = this->pos;
	this->pos = ( cVar11 + 0x1);
	//    .local v9, "minute":I
	cVar12 = this->pos;
	this->pos = ( cVar12 + 0x1);
	minute = (( java::lang::Character::digit((char)(this->buf[cVar11]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar12]), 0xa));
	cVar13 = ( cVar4 + -0xa);
	0x0;
	//    .local v7, "millis":I
	if ( cVar13 <= 0x2 )
		goto label_cond_419;
	if ( cVar13 >= 0xc )
		goto label_cond_419;
	cVar14 = this->pos;
	this->pos = ( cVar14 + 0x1);
	//    .local v13, "second":I
	cVar15 = this->pos;
	this->pos = ( cVar15 + 0x1);
	second = (( java::lang::Character::digit((char)(this->buf[cVar14]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar15]), 0xa));
	if ( this->buf[this->pos] == 0x2e )
		goto label_cond_23c;
	if ( this->buf[this->pos] != 0x2c )
		goto label_cond_37e;
label_cond_23c:
	this->pos = ( this->pos + 0x1);
	precision = 0x0;
	//    .local v12, "precision":I
	peek = this->pos;
	//    .local v11, "peek":I
label_goto_251:
	if ( this->buf[peek] == 0x5a )
		goto label_cond_2e7;
	if ( this->buf[peek] == 0x2b )
		goto label_cond_2e7;
	if ( this->buf[peek] == 0x2d )
		goto label_cond_2e7;
	peek = ( peek + 0x1);
	precision = ( precision + 0x1);
	goto label_goto_251;
	// 754    .line 324
	// 755    .end local v3    # "day":I
	// 756    .end local v5    # "hour":I
	// 757    .end local v7    # "millis":I
	// 758    .end local v9    # "minute":I
	// 759    .end local v10    # "month":I
	// 760    .end local v11    # "peek":I
	// 761    .end local v12    # "precision":I
	// 762    .end local v13    # "second":I
	// 763    .end local v17    # "year":I
	// 764    .local v16, "type":Ljava/lang/String;
label_cond_286:
	//    .local v16, "type":Ljava/lang/String;
	cVar16 = this->pos;
	this->pos = ( cVar16 + 0x1);
	//    .restart local v17    # "year":I
	cVar17 = this->pos;
	this->pos = ( cVar17 + 0x1);
	year = (( java::lang::Character::digit((char)(this->buf[cVar16]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar17]), 0xa));
	if ( year >= 0x32 )
		goto label_cond_2df;
	( year + 0x7d0);
	goto label_goto_9d;
	// 862    .line 331
label_cond_2df:
	( year + 0x76c);
	goto label_goto_9d;
	// 872    .line 372
	// 873    .restart local v3    # "day":I
	// 874    .restart local v5    # "hour":I
	// 875    .restart local v7    # "millis":I
	// 876    .restart local v9    # "minute":I
	// 877    .restart local v10    # "month":I
	// 878    .restart local v11    # "peek":I
	// 879    .restart local v12    # "precision":I
	// 880    .restart local v13    # "second":I
label_cond_2e7:
	// switch
	{
	auto item = ( precision );
	if (item == 1) goto label_pswitch_3f2;
	if (item == 2) goto label_pswitch_3a7;
	if (item == 3) goto label_pswitch_30f;
	}
	cVar19 = std::make_shared<java::lang::StringBuilder>();
	cVar18 = std::make_shared<java::io::IOException>(cVar19->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parse ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" time, unsupported precision for seconds value")))->toString());
	// throw
	throw cVar18;
	// 921    .line 374
label_pswitch_30f:
	cVar20 = this->pos;
	this->pos = ( cVar20 + 0x1);
	cVar21 = this->pos;
	this->pos = ( cVar21 + 0x1);
	cVar22 = this->pos;
	this->pos = ( cVar22 + 0x1);
	((( ( java::lang::Character::digit((char)(this->buf[cVar20]), 0xa) * 0x64) + 0x0) + ( java::lang::Character::digit((char)(this->buf[cVar21]), 0xa) * 0xa)) + java::lang::Character::digit((char)(this->buf[cVar22]), 0xa));
label_goto_37c:
	cVar23 = (( ( cVar13 + -0x2) + -0x1) - precision);
	//    .end local v11    # "peek":I
	//    .end local v12    # "precision":I
label_cond_37e:
label_goto_37e:
	if ( !(month) )  
		goto label_cond_382;
	if ( day )     
		goto label_cond_41c;
label_cond_382:
	cVar25 = std::make_shared<java::lang::StringBuilder>();
	cVar24 = std::make_shared<java::io::IOException>(cVar25->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parse ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" time, invalid format")))->toString());
	// throw
	throw cVar24;
	// 1086    .line 379
	// 1087    .restart local v11    # "peek":I
	// 1088    .restart local v12    # "precision":I
label_pswitch_3a7:
	cVar26 = this->pos;
	this->pos = ( cVar26 + 0x1);
	cVar27 = this->pos;
	this->pos = ( cVar27 + 0x1);
	(( ( java::lang::Character::digit((char)(this->buf[cVar26]), 0xa) * 0x64) + 0x0) + ( java::lang::Character::digit((char)(this->buf[cVar27]), 0xa) * 0xa));
	goto label_goto_37c;
	// 1170    .line 383
label_pswitch_3f2:
	cVar28 = this->pos;
	this->pos = ( cVar28 + 0x1);
	goto label_goto_37c;
	// 1213    .line 392
	// 1214    .end local v11    # "peek":I
	// 1215    .end local v12    # "precision":I
	// 1216    .end local v13    # "second":I
label_cond_419:
	0x0;
	//    .restart local v13    # "second":I
	goto label_goto_37e;
	// 1223    .line 395
label_cond_41c:
	if ( month >  0xc )
		goto label_cond_382;
	if ( day >  0x1f )
		goto label_cond_382;
	if ( hour >= 0x18 )
		goto label_cond_382;
	if ( minute >= 0x3c )
		goto label_cond_382;
	if ( second >= 0x3c )
		goto label_cond_382;
	gcal = sun::util::calendar::CalendarSystem::getGregorianCalendar({const[class].FS-Param});
	//    .local v4, "gcal":Lsun/util/calendar/CalendarSystem;
	date = gcal->newCalendarDate(0x0);
	//    .local v2, "date":Lsun/util/calendar/CalendarDate;
	date->setDate((((( java::lang::Character::digit((char)(this->buf[cVar0]), 0xa) * 0x3e8) + ( java::lang::Character::digit((char)(this->buf[cVar1]), 0xa) * 0x64)) + ( java::lang::Character::digit((char)(this->buf[cVar2]), 0xa) * 0xa)) + java::lang::Character::digit((char)(this->buf[cVar3]), 0xa)), month, day);
	date->setTimeOfDay(hour, minute, second, ( ( java::lang::Character::digit((char)(this->buf[cVar28]), 0xa) * 0x64) + 0x0));
	time = gcal->getTime(date);
	//    .local v14, "time":J
	if ( cVar23 == 0x1 )
		goto label_cond_487;
	if ( cVar23 == 0x5 )
		goto label_cond_487;
	cVar30 = std::make_shared<java::lang::StringBuilder>();
	cVar29 = std::make_shared<java::io::IOException>(cVar30->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parse ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" time, invalid offset")))->toString());
	// throw
	throw cVar29;
	// 1338    .line 417
label_cond_487:
	cVar31 = this->pos;
	this->pos = ( cVar31 + 0x1);
	// switch
	{
	auto item = ( this->buf[cVar31] );
	if (item == 0x2b) goto label_sswitch_4c5;
	if (item == 0x2d) goto label_sswitch_59d;
	if (item == 0x5a) goto label_sswitch_595;
	}
	cVar33 = std::make_shared<java::lang::StringBuilder>();
	cVar32 = std::make_shared<java::io::IOException>(cVar33->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parse ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" time, garbage offset")))->toString());
	// throw
	throw cVar32;
	// 1399    .line 419
label_sswitch_4c5:
	cVar34 = this->pos;
	this->pos = ( cVar34 + 0x1);
	//    .local v6, "hr":I
	cVar35 = this->pos;
	this->pos = ( cVar35 + 0x1);
	hr = (( java::lang::Character::digit((char)(this->buf[cVar34]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar35]), 0xa));
	cVar36 = this->pos;
	this->pos = ( cVar36 + 0x1);
	//    .local v8, "min":I
	cVar37 = this->pos;
	this->pos = ( cVar37 + 0x1);
	min = (( java::lang::Character::digit((char)(this->buf[cVar36]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar37]), 0xa));
	if ( hr >= 0x18 )
		goto label_cond_55d;
	if ( min <  0x3c )
		goto label_cond_582;
label_cond_55d:
	cVar39 = std::make_shared<java::lang::StringBuilder>();
	cVar38 = std::make_shared<java::io::IOException>(cVar39->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parse ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" time, +hhmm")))->toString());
	// throw
	throw cVar38;
	// 1599    .line 427
label_cond_582:
	time = (time - (long long)(( ( (( hr * 0x3c) + min) * 0x3c) * 0x3e8)));
	//    .end local v6    # "hr":I
	//    .end local v8    # "min":I
label_goto_595:
label_sswitch_595:
	var662 = cVar40(time);
	return cVar40;
	// 1634    .line 431
label_sswitch_59d:
	cVar41 = this->pos;
	this->pos = ( cVar41 + 0x1);
	//    .restart local v6    # "hr":I
	cVar42 = this->pos;
	this->pos = ( cVar42 + 0x1);
	hr = (( java::lang::Character::digit((char)(this->buf[cVar41]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar42]), 0xa));
	cVar43 = this->pos;
	this->pos = ( cVar43 + 0x1);
	//    .restart local v8    # "min":I
	cVar44 = this->pos;
	this->pos = ( cVar44 + 0x1);
	min = (( java::lang::Character::digit((char)(this->buf[cVar43]), 0xa) * 0xa) + java::lang::Character::digit((char)(this->buf[cVar44]), 0xa));
	if ( hr >= 0x18 )
		goto label_cond_635;
	if ( min <  0x3c )
		goto label_cond_65a;
label_cond_635:
	cVar46 = std::make_shared<java::lang::StringBuilder>();
	cVar45 = std::make_shared<java::io::IOException>(cVar46->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parse ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" time, -hhmm")))->toString());
	// throw
	throw cVar45;
	// 1834    .line 439
label_cond_65a:
	time = (time + (long long)(( ( (( hr * 0x3c) + min) * 0x3c) * 0x3e8)));
	goto label_goto_595;
	// 1859    .line 372
	// 1860    nop
	// 1862    :pswitch_data_670
	// 1863    .packed-switch 0x1
	// 1864        :pswitch_3f2
	// 1865        :pswitch_3a7
	// 1866        :pswitch_30f
	// 1867    .end packed-switch
	// 1869    .line 417
	// 1870    :sswitch_data_67a
	// 1871    .sparse-switch
	// 1872        0x2b -> :sswitch_4c5
	// 1873        0x2d -> :sswitch_59d
	// 1874        0x5a -> :sswitch_595
	// 1875    .end sparse-switch

}
// .method dup()Lsun/security/util/DerInputBuffer;
std::shared_ptr<sun::security::util::DerInputBuffer> sun::security::util::DerInputBuffer::dup()
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<sun::security::util::DerInputBuffer> retval;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	retval = this->clone();
	retval->checkCast("sun::security::util::DerInputBuffer");
	//    .local v1, "retval":Lsun/security/util/DerInputBuffer;
	retval->mark(0x7fffffff);
	//label_try_end_c:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_c} :catch_d
	return retval;
	// 1903    .line 59
	// 1904    .end local v1    # "retval":Lsun/security/util/DerInputBuffer;
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::util::DerInputBuffer::equals(std::shared_ptr<java::lang::Object> other)
{
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( !(other->instanceOf("sun::security::util::DerInputBuffer")) )  
		goto label_cond_b;
	other->checkCast("sun::security::util::DerInputBuffer");
	//    .end local p1    # "other":Ljava/lang/Object;
	return this->equals(other);
	// 1941    .line 101
	// 1942    .restart local p1    # "other":Ljava/lang/Object;
label_cond_b:
	return 0x0;

}
// .method equals(Lsun/security/util/DerInputBuffer;)Z
bool sun::security::util::DerInputBuffer::equals(std::shared_ptr<sun::security::util::DerInputBuffer> other)
{
	
	bool cVar0;
	bool cVar1;
	int max;
	int i;
	
	//    .param p1, "other"    # Lsun/security/util/DerInputBuffer;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 1964    .line 108
label_cond_5:
	max = this->available();
	//    .local v1, "max":I
	if ( other->available() == max )
		goto label_cond_10;
	return cVar1;
	// 1981    .line 111
label_cond_10:
	i = 0x0;
	//    .local v0, "i":I
label_goto_11:
	if ( i >= max )
		goto label_cond_27;
	if ( this->buf[(this->pos +  i)] == other->buf[(other->pos +  i)] )
		goto label_cond_24;
	return cVar1;
	// 2011    .line 111
label_cond_24:
	i = ( i + 0x1);
	goto label_goto_11;
	// 2017    .line 116
label_cond_27:
	return cVar0;

}
// .method getBigInteger(IZ)Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::util::DerInputBuffer::getBigInteger(int len,bool makePositive)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared<std::vector<unsigned char[]>> bytes;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::math::BigInteger> cVar5;
	std::shared_ptr<java::math::BigInteger> cVar6;
	
	//    .param p1, "len"    # I
	//    .param p2, "makePositive"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2027        value = {
	// 2028            Ljava/io/IOException;
	// 2029        }
	// 2030    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( len <= this->available() )
		goto label_cond_11;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("short read of integer")));
	// throw
	throw cVar2;
	// 2053    .line 153
label_cond_11:
	if ( len )     
		goto label_cond_1c;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding: zero length Int value")));
	// throw
	throw cVar3;
	// 2066    .line 157
label_cond_1c:
	bytes = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v0, "bytes":[B
	java::lang::System::arraycopy(this->buf, this->pos, bytes, cVar1, len);
	this->skip((long long)(len));
	if ( len <  0x2 )
		goto label_cond_3d;
	if ( bytes[cVar1] )     
		goto label_cond_3d;
	if ( bytes[cVar0] < 0 ) 
		goto label_cond_3d;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding: redundant leading 0s")));
	// throw
	throw cVar4;
	// 2105    .line 167
label_cond_3d:
	if ( !(makePositive) )  
		goto label_cond_45;
	cVar5 = std::make_shared<java::math::BigInteger>(cVar0, bytes);
	return cVar5;
	// 2116    .line 170
label_cond_45:
	cVar6 = std::make_shared<java::math::BigInteger>(bytes);
	return cVar6;

}
// .method getBitString()[B
unsigned char sun::security::util::DerInputBuffer::getBitString()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2128        value = {
	// 2129            Ljava/io/IOException;
	// 2130        }
	// 2131    .end annotation
	return this->getBitString(this->available());

}
// .method public getBitString(I)[B
unsigned char sun::security::util::DerInputBuffer::getBitString(int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	unsigned char numOfPadBits;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared<std::vector<unsigned char[]>> retval;
	int cVar3;
	
	//    .param p1, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2150        value = {
	// 2151            Ljava/io/IOException;
	// 2152        }
	// 2153    .end annotation
	if ( len <= this->available() )
		goto label_cond_10;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("short read of bit string")));
	// throw
	throw cVar0;
	// 2174    .line 203
label_cond_10:
	if ( len )     
		goto label_cond_1b;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding: zero length bit string")));
	// throw
	throw cVar1;
	// 2187    .line 207
label_cond_1b:
	numOfPadBits = this->buf[this->pos];
	//    .local v0, "numOfPadBits":I
	if ( numOfPadBits < 0 ) 
		goto label_cond_26;
	if ( numOfPadBits <= 0x7 )
		goto label_cond_2f;
label_cond_26:
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid number of padding bits")));
	// throw
	throw cVar2;
	// 2213    .line 212
label_cond_2f:
	retval = std::make_shared<std::vector<unsigned char[]>>(( len + -0x1));
	//    .local v1, "retval":[B
	java::lang::System::arraycopy(this->buf, ( this->pos + 0x1), retval, 0x0, ( len + -0x1));
	if ( !(numOfPadBits) )  
		goto label_cond_4b;
	cVar3 = ( len + -0x2);
	retval[cVar3] = (unsigned char)((retval[cVar3] &  (0xff << numOfPadBits)));
label_cond_4b:
	this->skip((long long)(len));
	return retval;

}
// .method public getGeneralizedTime(I)Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::util::DerInputBuffer::getGeneralizedTime(int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2263        value = {
	// 2264            Ljava/io/IOException;
	// 2265        }
	// 2266    .end annotation
	if ( len <= this->available() )
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("short read of DER Generalized Time")));
	// throw
	throw cVar0;
	// 2285    .line 280
label_cond_f:
	if ( len <  0xd )
		goto label_cond_17;
	if ( len <= 0x17 )
		goto label_cond_20;
label_cond_17:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER Generalized Time length error")));
	// throw
	throw cVar1;
	// 2305    .line 283
label_cond_20:
	return this->getTime(len, 0x1);

}
// .method public getInteger(I)I
int sun::security::util::DerInputBuffer::getInteger(int len)
{
	
	std::shared_ptr<java::math::BigInteger> result;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2320        value = {
	// 2321            Ljava/io/IOException;
	// 2322        }
	// 2323    .end annotation
	result = this->getBigInteger(len, 0x0);
	//    .local v0, "result":Ljava/math/BigInteger;
	if ( result->compareTo(java::math::BigInteger::valueOf(-0x80000000)) >= 0 )
		goto label_cond_1b;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Integer below minimum valid value")));
	// throw
	throw cVar0;
	// 2356    .line 189
label_cond_1b:
	if ( result->compareTo(java::math::BigInteger::valueOf(0x7fffffff)) <= 0 )
		goto label_cond_31;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Integer exceeds maximum valid value")));
	// throw
	throw cVar1;
	// 2379    .line 192
label_cond_31:
	return result->intValue();

}
// .method getPos()I
int sun::security::util::DerInputBuffer::getPos()
{
	
	return this->pos;

}
// .method getSlice(II)[B
unsigned char sun::security::util::DerInputBuffer::getSlice(int startPos,int size)
{
	
	std::shared<std::vector<unsigned char[]>> result;
	
	//    .param p1, "startPos"    # I
	//    .param p2, "size"    # I
	result = std::make_shared<std::vector<unsigned char[]>>(size);
	//    .local v0, "result":[B
	java::lang::System::arraycopy(this->buf, startPos, result, 0x0, size);
	return result;

}
// .method public getUTCTime(I)Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::util::DerInputBuffer::getUTCTime(int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2423        value = {
	// 2424            Ljava/io/IOException;
	// 2425        }
	// 2426    .end annotation
	if ( len <= this->available() )
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("short read of DER UTC Time")));
	// throw
	throw cVar0;
	// 2445    .line 265
label_cond_f:
	if ( len <  0xb )
		goto label_cond_17;
	if ( len <= 0x11 )
		goto label_cond_20;
label_cond_17:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DER UTC Time length error")));
	// throw
	throw cVar1;
	// 2465    .line 268
label_cond_20:
	return this->getTime(len, 0x0);

}
// .method getUnalignedBitString()Lsun/security/util/BitArray;
std::shared_ptr<sun::security::util::BitArray> sun::security::util::DerInputBuffer::getUnalignedBitString()
{
	
	int len;
	int unusedBits;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared<std::vector<unsigned char[]>> bits;
	std::shared_ptr<sun::security::util::BitArray> bitArray;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2479        value = {
	// 2480            Ljava/io/IOException;
	// 2481        }
	// 2482    .end annotation
	if ( this->pos <  this->count )
		goto label_cond_9;
	return 0x0;
	// 2499    .line 240
label_cond_9:
	len = this->available();
	//    .local v2, "len":I
	unusedBits = ( this->buf[this->pos] & 0xff);
	//    .local v4, "unusedBits":I
	if ( unusedBits <= 0x7 )
		goto label_cond_32;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid value for unused bits: ")))->append(unusedBits)->toString());
	// throw
	throw cVar0;
	// 2546    .line 245
label_cond_32:
	bits = std::make_shared<std::vector<unsigned char[]>>(( len + -0x1));
	//    .local v1, "bits":[B
	if ( bits->size() )     
		goto label_cond_4f;
	//    .local v3, "length":I
label_goto_3a:
	java::lang::System::arraycopy(this->buf, ( this->pos + 0x1), bits, 0x0, ( len + -0x1));
	bitArray = std::make_shared<sun::security::util::BitArray>(length, bits);
	//    .local v0, "bitArray":Lsun/security/util/BitArray;
	this->pos = this->count;
	return bitArray;
	// 2587    .line 247
	// 2588    .end local v0    # "bitArray":Lsun/security/util/BitArray;
	// 2589    .end local v3    # "length":I
label_cond_4f:
	//    .restart local v3    # "length":I
	goto label_goto_3a;

}
// .method public hashCode()I
int sun::security::util::DerInputBuffer::hashCode()
{
	
	int retval;
	int i;
	
	retval = 0x0;
	//    .local v3, "retval":I
	//    .local v1, "len":I
	//    .local v2, "p":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_8:
	if ( i >= this->available() )
		goto label_cond_15;
	retval = (retval +  (this->buf[(this->pos + i)] *  i));
	i = ( i + 0x1);
	goto label_goto_8;
	// 2642    .line 132
label_cond_15:
	return retval;

}
// .method peek()I
int sun::security::util::DerInputBuffer::peek()
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2650        value = {
	// 2651            Ljava/io/IOException;
	// 2652        }
	// 2653    .end annotation
	if ( this->pos <  this->count )
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("out of data")));
	// throw
	throw cVar0;
	// 2672    .line 90
label_cond_f:
	return this->buf[this->pos];

}
// .method toByteArray()[B
unsigned char sun::security::util::DerInputBuffer::toByteArray()
{
	
	int len;
	std::shared<std::vector<unsigned char[]>> retval;
	
	len = this->available();
	//    .local v0, "len":I
	if ( len > 0 ) 
		goto label_cond_9;
	return 0x0;
	// 2703    .line 68
label_cond_9:
	retval = std::make_shared<std::vector<unsigned char[]>>(len);
	//    .local v1, "retval":[B
	java::lang::System::arraycopy(this->buf, this->pos, retval, 0x0, len);
	return retval;

}
// .method truncate(I)V
void sun::security::util::DerInputBuffer::truncate(int len)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2723        value = {
	// 2724            Ljava/io/IOException;
	// 2725        }
	// 2726    .end annotation
	if ( len <= this->available() )
		goto label_cond_f;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("insufficient data")));
	// throw
	throw cVar0;
	// 2745    .line 138
label_cond_f:
	this->count = (this->pos +  len);
	return;

}


