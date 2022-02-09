// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\CalendarUtils.smali
#include "java2ctype.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "sun.util.calendar.CalendarUtils.h"

// .method public constructor <init>()V
sun::util::calendar::CalendarUtils::CalendarUtils()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static final amod(II)I
int sun::util::calendar::CalendarUtils::amod(int x,int y)
{
	
	int z;
	int y;
	
	//    .param p0, "x"    # I
	//    .param p1, "y"    # I
	z = sun::util::calendar::CalendarUtils::mod(x, y);
	//    .local v0, "z":I
	if ( z )     
		goto label_cond_7;
	//    .end local p1    # "y":I
label_goto_6:
	return y;
	// 036    .restart local p1    # "y":I
label_cond_7:
	y = z;
	goto label_goto_6;

}
// .method public static final amod(JJ)J
long long sun::util::calendar::CalendarUtils::amod(long long x,long long y)
{
	
	auto z;
	long long y;
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	z = sun::util::calendar::CalendarUtils::mod(x, y);
	//    .local v0, "z":J
	if ( (z > 0x0) )     
		goto label_cond_b;
	//    .end local p2    # "y":J
label_goto_a:
	return y;
	// 066    .restart local p2    # "y":J
label_cond_b:
	y = z;
	goto label_goto_a;

}
// .method public static final floorDivide(II)I
int sun::util::calendar::CalendarUtils::floorDivide(int n,int d)
{
	
	int cVar0;
	
	//    .param p0, "n"    # I
	//    .param p1, "d"    # I
	if ( n < 0 ) 
		goto label_cond_5;
	cVar0 = (n / d);
label_goto_4:
	return cVar0;
	// 089    .line 86
label_cond_5:
	cVar0 = ( (( n + 0x1) /  d) + -0x1);
	goto label_goto_4;

}
// .method public static final floorDivide(II[I)I
int sun::util::calendar::CalendarUtils::floorDivide(int n,int d,std::shared_ptr<int[]> r)
{
	
	int cVar0;
	int q;
	
	//    .param p0, "n"    # I
	//    .param p1, "d"    # I
	//    .param p2, "r"    # [I
	cVar0 = 0x0;
	if ( n < 0 ) 
		goto label_cond_a;
	r[cVar0] = (n % d);
	return (n / d);
	// 122    .line 107
label_cond_a:
	q = ( (( n + 0x1) /  d) + -0x1);
	//    .local v0, "q":I
	r[cVar0] = (n - (q * d));
	return q;

}
// .method public static final floorDivide(JI[I)I
int sun::util::calendar::CalendarUtils::floorDivide(long long n,int d,std::shared_ptr<int[]> r)
{
	
	long long cVar0;
	int cVar1;
	int q;
	
	//    .param p0, "n"    # J
	//    .param p2, "d"    # I
	//    .param p3, "r"    # [I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( (n > 0x0) < 0 ) 
		goto label_cond_14;
	r[cVar1] = (int)((n % (long long)(d)));
	return (int)((n / (long long)(d)));
	// 178    .line 130
label_cond_14:
	q = (int)((((n + cVar0) /  (long long)(d)) -  cVar0));
	//    .local v0, "q":I
	r[cVar1] = (int)((n - (long long)((q * d))));
	return q;

}
// .method public static final floorDivide(JJ)J
long long sun::util::calendar::CalendarUtils::floorDivide(long long n,long long d)
{
	
	long long cVar0;
	long long cVar1;
	
	//    .param p0, "n"    # J
	//    .param p2, "d"    # J
	cVar0 = 0x1;
	if ( (n > 0x0) < 0 ) 
		goto label_cond_b;
	cVar1 = (n / d);
label_goto_a:
	return cVar1;
	// 228    .line 72
label_cond_b:
	cVar1 = (((n + cVar0) /  d) -  cVar0);
	goto label_goto_a;

}
// .method public static final isGregorianLeapYear(I)Z
bool sun::util::calendar::CalendarUtils::isGregorianLeapYear(int gregorianYear)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p0, "gregorianYear"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( ( gregorianYear % 0x4) )     
		goto label_cond_11;
	if ( ( gregorianYear % 0x64) )     
		goto label_cond_e;
	if ( ( gregorianYear % 0x190) )     
		goto label_cond_f;
label_cond_e:
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = cVar1;
	goto label_goto_e;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_e;

}
// .method public static final isJulianLeapYear(I)Z
bool sun::util::calendar::CalendarUtils::isJulianLeapYear(int normalizedJulianYear)
{
	
	bool cVar1;
	
	//    .param p0, "normalizedJulianYear"    # I
	cVar1 = 0x0;
	if ( ( normalizedJulianYear % 0x4) )     
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public static final mod(II)I
int sun::util::calendar::CalendarUtils::mod(int x,int y)
{
	
	//    .param p0, "x"    # I
	//    .param p1, "y"    # I
	return (x - (sun::util::calendar::CalendarUtils::floorDivide(x, y) *  y));

}
// .method public static final mod(JJ)J
long long sun::util::calendar::CalendarUtils::mod(long long x,long long y)
{
	
	//    .param p0, "x"    # J
	//    .param p2, "y"    # J
	return (x - (sun::util::calendar::CalendarUtils::floorDivide(x, y) *  y));

}
// .method public static final sprintf0d(Ljava/lang/StringBuffer;II)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> sun::util::calendar::CalendarUtils::sprintf0d(std::shared_ptr<java::lang::StringBuffer> sb,int value,int cVar0)
{
	
	long long d;
	int cVar0;
	int n;
	int i;
	
	//    .param p0, "sb"    # Ljava/lang/StringBuffer;
	//    .param p1, "value"    # I
	//    .param p2, "width"    # I
	d = (long long)(value);
	//    .local v0, "d":J
	if ( (d > 0x0) >= 0 )
		goto label_cond_f;
	sb->append(0x2d);
	d = (0 - d);
	cVar0 = ( cVar0 + -0x1);
label_cond_f:
	n = 0xa;
	//    .local v3, "n":I
	i = 0x2;
	//    .local v2, "i":I
label_goto_12:
	if ( i >= cVar0 )
		goto label_cond_19;
	n = ( n * 0xa);
	i = ( i + 0x1);
	goto label_goto_12;
	// 383    .line 186
label_cond_19:
	i = 0x1;
label_goto_1a:
	if ( i >= cVar0 )
		goto label_cond_2b;
	if ( (d > (long long)(n)) >= 0 )
		goto label_cond_2b;
	sb->append(0x30);
	n = ( n / 0xa);
	i = ( i + 0x1);
	goto label_goto_1a;
	// 409    .line 190
label_cond_2b:
	sb->append(d);
	return sb;

}
// .method public static final sprintf0d(Ljava/lang/StringBuilder;II)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> sun::util::calendar::CalendarUtils::sprintf0d(std::shared_ptr<java::lang::StringBuilder> sb,int value,int cVar0)
{
	
	long long d;
	int cVar0;
	int n;
	int i;
	
	//    .param p0, "sb"    # Ljava/lang/StringBuilder;
	//    .param p1, "value"    # I
	//    .param p2, "width"    # I
	d = (long long)(value);
	//    .local v0, "d":J
	if ( (d > 0x0) >= 0 )
		goto label_cond_f;
	sb->append(0x2d);
	d = (0 - d);
	cVar0 = ( cVar0 + -0x1);
label_cond_f:
	n = 0xa;
	//    .local v3, "n":I
	i = 0x2;
	//    .local v2, "i":I
label_goto_12:
	if ( i >= cVar0 )
		goto label_cond_19;
	n = ( n * 0xa);
	i = ( i + 0x1);
	goto label_goto_12;
	// 466    .line 167
label_cond_19:
	i = 0x1;
label_goto_1a:
	if ( i >= cVar0 )
		goto label_cond_2b;
	if ( (d > (long long)(n)) >= 0 )
		goto label_cond_2b;
	sb->append(0x30);
	n = ( n / 0xa);
	i = ( i + 0x1);
	goto label_goto_1a;
	// 492    .line 171
label_cond_2b:
	sb->append(d);
	return sb;

}


