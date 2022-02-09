// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\BOCSU.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.BOCSU.h"
#include "android.icu.util.ByteArrayWrapper.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"

static android::icu::impl::coll::BOCSU::SLOPE_LEAD_2_ = 0x2a;
static android::icu::impl::coll::BOCSU::SLOPE_LEAD_3_ = 0x3;
static android::icu::impl::coll::BOCSU::SLOPE_MAX_ = 0xff;
static android::icu::impl::coll::BOCSU::SLOPE_MAX_BYTES_ = 0x4;
static android::icu::impl::coll::BOCSU::SLOPE_MIDDLE_ = 0x81;
static android::icu::impl::coll::BOCSU::SLOPE_MIN_ = 0x3;
static android::icu::impl::coll::BOCSU::SLOPE_REACH_NEG_1_ = -0x50;
static android::icu::impl::coll::BOCSU::SLOPE_REACH_NEG_2_ = -0x29ac;
static android::icu::impl::coll::BOCSU::SLOPE_REACH_NEG_3_ = -0x2f112;
static android::icu::impl::coll::BOCSU::SLOPE_REACH_POS_1_ = 0x50;
static android::icu::impl::coll::BOCSU::SLOPE_REACH_POS_2_ = 0x29ab;
static android::icu::impl::coll::BOCSU::SLOPE_REACH_POS_3_ = 0x2f111;
static android::icu::impl::coll::BOCSU::SLOPE_SINGLE_ = 0x50;
static android::icu::impl::coll::BOCSU::SLOPE_START_NEG_2_ = 0x31;
static android::icu::impl::coll::BOCSU::SLOPE_START_NEG_3_ = 0x7;
static android::icu::impl::coll::BOCSU::SLOPE_START_POS_2_ = 0xd2;
static android::icu::impl::coll::BOCSU::SLOPE_START_POS_3_ = 0xfc;
static android::icu::impl::coll::BOCSU::SLOPE_TAIL_COUNT_ = 0xfd;
// .method private constructor <init>()V
android::icu::impl::coll::BOCSU::BOCSU()
{
	
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static ensureAppendCapacity(Landroid/icu/util/ByteArrayWrapper;II)V
void android::icu::impl::coll::BOCSU::ensureAppendCapacity(std::shared_ptr<android::icu::util::ByteArrayWrapper> sink,int minCapacity,int cVar0)
{
	
	int cVar0;
	
	//    .param p0, "sink"    # Landroid/icu/util/ByteArrayWrapper;
	//    .param p1, "minCapacity"    # I
	//    .param p2, "desiredCapacity"    # I
	//    .local v0, "remainingCapacity":I
	if ( (sink->bytes->size() - sink->size) <  minCapacity )
		goto label_cond_a;
	return;
	// 078    .line 140
label_cond_a:
	if ( cVar0 >= minCapacity )
		goto label_cond_d;
	cVar0 = minCapacity;
label_cond_d:
	sink->ensureCapacity((sink->size +  cVar0));
	return;

}
// .method private static final getNegDivMod(II)J
long long android::icu::impl::coll::BOCSU::getNegDivMod(int number,int factor)
{
	
	int modulo;
	long long result;
	
	//    .param p0, "number"    # I
	//    .param p1, "factor"    # I
	modulo = (number % factor);
	//    .local v0, "modulo":I
	result = (long long)((number / factor));
	//    .local v2, "result":J
	if ( modulo >= 0 )
		goto label_cond_b;
label_cond_b:
	return ((result << 0x20) |  (long long)(modulo));

}
// .method private static final writeDiff(I[BI)I
int android::icu::impl::coll::BOCSU::writeDiff(int diff,std::shared_ptr<unsigned char[]> buffer,int offset)
{
	
	int cVar0;
	int cVar1;
	int offset;
	int cVar2;
	int cVar4;
	auto division;
	int modulo;
	
	//    .param p0, "diff"    # I
	//    .param p1, "buffer"    # [B
	//    .param p2, "offset"    # I
	cVar0 = 0xfd;
	cVar1 = 0x20;
	if ( diff <  -0x50 )
		goto label_cond_75;
	if ( diff >  0x50 )
		goto label_cond_16;
	offset = ( offset + 0x1);
	//    .end local p2    # "offset":I
	//    .local v3, "offset":I
	buffer[offset] = (unsigned char)(( diff + 0x81));
	offset = offset;
	//    .end local v3    # "offset":I
	//    .restart local p2    # "offset":I
label_goto_15:
	return offset;
	// 178    .line 265
label_cond_16:
	if ( diff >  0x29ab )
		goto label_cond_2d;
	offset = ( offset + 0x1);
	//    .end local p2    # "offset":I
	//    .restart local v3    # "offset":I
	buffer[offset] = (unsigned char)(( ( diff / 0xfd) + 0xd2));
	offset = ( offset + 0x1);
	//    .end local v3    # "offset":I
	//    .restart local p2    # "offset":I
	buffer[offset] = (unsigned char)(( ( diff % 0xfd) + 0x3));
	goto label_goto_15;
	// 216    .line 271
label_cond_2d:
	if ( diff >  0x2f111 )
		goto label_cond_50;
	buffer[( offset + 0x2)] = (unsigned char)(( ( diff % 0xfd) + 0x3));
	cVar2 = ( diff / 0xfd);
	buffer[( offset + 0x1)] = (unsigned char)(( ( cVar2 % 0xfd) + 0x3));
	buffer[offset] = (unsigned char)(( ( cVar2 / 0xfd) + 0xfc));
	offset = ( offset + 0x3);
	goto label_goto_15;
	// 266    .line 282
label_cond_50:
	buffer[( offset + 0x3)] = (unsigned char)(( ( diff % 0xfd) + 0x3));
	cVar4 = ( diff / 0xfd);
	buffer[( offset + 0x2)] = (unsigned char)(( ( cVar4 % 0xfd) + 0x3));
	buffer[( offset + 0x1)] = (unsigned char)(( ( ( cVar4 / 0xfd) % 0xfd) + 0x3));
	buffer[offset] = -0x1;
	offset = ( offset + 0x4);
	goto label_goto_15;
	// 322    .line 295
label_cond_75:
	division = android::icu::impl::coll::BOCSU::getNegDivMod(diff, cVar0);
	//    .local v0, "division":J
	modulo = (int)(division);
	//    .local v2, "modulo":I
	if ( diff <  -0x29ac )
		goto label_cond_90;
	offset = ( offset + 0x1);
	//    .end local p2    # "offset":I
	//    .restart local v3    # "offset":I
	buffer[offset] = (unsigned char)(( (int)(_shrll(division,cVar1)) + 0x31));
	offset = ( offset + 0x1);
	//    .end local v3    # "offset":I
	//    .restart local p2    # "offset":I
	buffer[offset] = (unsigned char)(( modulo + 0x3));
	goto label_goto_15;
	// 367    .line 302
label_cond_90:
	if ( diff <  -0x2f112 )
		goto label_cond_b7;
	buffer[( offset + 0x2)] = (unsigned char)(( modulo + 0x3));
	division = android::icu::impl::coll::BOCSU::getNegDivMod((int)(_shrll(division,cVar1)), cVar0);
	buffer[( offset + 0x1)] = (unsigned char)(( (int)(division) + 0x3));
	buffer[offset] = (unsigned char)(( (int)(_shrll(division,cVar1)) + 0x7));
	offset = ( offset + 0x3);
	goto label_goto_15;
	// 421    .line 313
label_cond_b7:
	buffer[( offset + 0x3)] = (unsigned char)(( modulo + 0x3));
	division = android::icu::impl::coll::BOCSU::getNegDivMod((int)(_shrll(division,cVar1)), cVar0);
	buffer[( offset + 0x2)] = (unsigned char)(( (int)(division) + 0x3));
	buffer[( offset + 0x1)] = (unsigned char)(( (int)(android::icu::impl::coll::BOCSU::getNegDivMod((int)(_shrll(division,cVar1)), cVar0)) + 0x3));
	buffer[offset] = 0x3;
	offset = ( offset + 0x4);
	goto label_goto_15;

}
// .method public static writeIdenticalLevelRun(ILjava/lang/CharSequence;IILandroid/icu/util/ByteArrayWrapper;)I
int android::icu::impl::coll::BOCSU::writeIdenticalLevelRun(int prev,std::shared_ptr<java::lang::CharSequence> s,int i,int length,std::shared_ptr<android::icu::util::ByteArrayWrapper> sink)
{
	
	std::shared_ptr<unsigned char[]> buffer;
	int p;
	int cVar0;
	int c;
	int i;
	int prev;
	
	//    .param p0, "prev"    # I
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "i"    # I
	//    .param p3, "length"    # I
	//    .param p4, "sink"    # Landroid/icu/util/ByteArrayWrapper;
label_goto_0:
	if ( i >= length )
		goto label_cond_4a;
	android::icu::impl::coll::BOCSU::ensureAppendCapacity(sink, 0x10, ( s->length() * 0x2));
	buffer = sink->bytes;
	//    .local v0, "buffer":[B
	//    .local v2, "capacity":I
	//    .local v4, "p":I
	//    .local v3, "lastSafe":I
	p = sink->size;
	//    .end local v4    # "p":I
	//    .local v5, "p":I
label_goto_15:
	if ( i >= length )
		goto label_cond_47;
	if ( p >  ( buffer->size() + -0x4) )
		goto label_cond_47;
	if ( prev <  0x4e00 )
		goto label_cond_22;
	if ( prev <  0xa000 )
		goto label_cond_3c;
label_cond_22:
	cVar0 = ( ( prev & -0x80) + 0x50);
label_goto_26:
	c = java::lang::Character::codePointAt(s, i);
	//    .local v1, "c":I
	i = (i +  java::lang::Character::charCount(c));
	if ( c != 0xfffe )
		goto label_cond_3f;
	//    .end local v5    # "p":I
	//    .restart local v4    # "p":I
	buffer[p] = 0x2;
	prev = 0x0;
label_goto_3a:
	p = p;
	//    .end local v4    # "p":I
	//    .restart local v5    # "p":I
	goto label_goto_15;
	// 587    .line 119
	// 588    .end local v1    # "c":I
label_cond_3c:
	cVar0 = 0x7654;
	goto label_goto_26;
	// 594    .line 128
	// 595    .restart local v1    # "c":I
label_cond_3f:
	//    .end local v5    # "p":I
	//    .restart local v4    # "p":I
	prev = c;
	goto label_goto_3a;
	// 610    .line 132
	// 611    .end local v1    # "c":I
	// 612    .end local v4    # "p":I
	// 613    .restart local v5    # "p":I
label_cond_47:
	sink->size = p;
	goto label_goto_0;
	// 619    .line 134
	// 620    .end local v0    # "buffer":[B
	// 621    .end local v2    # "capacity":I
	// 622    .end local v3    # "lastSafe":I
	// 623    .end local v5    # "p":I
label_cond_4a:
	return prev;

}


