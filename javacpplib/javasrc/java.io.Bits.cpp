// CPP L:\smali2cpp20\x64\Release\out\java\io\Bits.smali
#include "java2ctype.h"
#include "java.io.Bits.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"

// .method constructor <init>()V
java::io::Bits::Bits()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static getBoolean([BI)Z
bool java::io::Bits::getBoolean(std::shared_ptr<unsigned char[]> b,int off)
{
	
	bool cVar1;
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	cVar1 = 0x0;
	if ( !(b[off]) )  
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method static getChar([BI)C
char java::io::Bits::getChar(std::shared_ptr<unsigned char[]> b,int off)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	return (char)((( b[( off + 0x1)] & 0xff) +  ( b[off] << 0x8)));

}
// .method static getDouble([BI)D
double java::io::Bits::getDouble(std::shared_ptr<unsigned char[]> b,int off)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	return java::lang::Double::longBitsToDouble(java::io::Bits::getLong(b, off));

}
// .method static getFloat([BI)F
float java::io::Bits::getFloat(std::shared_ptr<unsigned char[]> b,int off)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	return java::lang::Float::intBitsToFloat(java::io::Bits::getInt(b, off));

}
// .method static getInt([BI)I
int java::io::Bits::getInt(std::shared_ptr<unsigned char[]> b,int off)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	return (((( b[( off + 0x3)] & 0xff) +  ( ( b[( off + 0x2)] & 0xff) << 0x8)) +  ( ( b[( off + 0x1)] & 0xff) << 0x10)) +  ( b[off] << 0x18));

}
// .method static getLong([BI)J
long long java::io::Bits::getLong(std::shared_ptr<unsigned char[]> b,int off)
{
	
	long long cVar0;
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	cVar0 = 0xff;
	return (((((((((long long)(b[( off + 0x7)]) &  cVar0) +  (((long long)(b[( off + 0x6)]) &  cVar0) << 0x8)) +  (((long long)(b[( off + 0x5)]) &  cVar0) << 0x10)) +  (((long long)(b[( off + 0x4)]) &  cVar0) << 0x18)) +  (((long long)(b[( off + 0x3)]) &  cVar0) << 0x20)) +  (((long long)(b[( off + 0x2)]) &  cVar0) << 0x28)) +  (((long long)(b[( off + 0x1)]) &  cVar0) << 0x30)) +  ((long long)(b[off]) << 0x38));

}
// .method static getShort([BI)S
short java::io::Bits::getShort(std::shared_ptr<unsigned char[]> b,int off)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	return (short)((( b[( off + 0x1)] & 0xff) +  ( b[off] << 0x8)));

}
// .method static putBoolean([BIZ)V
void java::io::Bits::putBoolean(std::shared_ptr<unsigned char[]> b,int off,bool val)
{
	
	int cVar0;
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	//    .param p2, "val"    # Z
	if ( !(val) )  
		goto label_cond_7;
	cVar0 = 0x1;
label_goto_3:
	b[off] = (unsigned char)(cVar0);
	return;
	// 320    .line 85
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_3;

}
// .method static putChar([BIC)V
void java::io::Bits::putChar(std::shared_ptr<unsigned char[]> b,int off,char val)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	//    .param p2, "val"    # C
	b[( off + 0x1)] = (unsigned char)(val);
	b[off] = (unsigned char)(_ushri(val,0x8));
	return;

}
// .method static putDouble([BID)V
void java::io::Bits::putDouble(std::shared_ptr<unsigned char[]> b,int off,double val)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	//    .param p2, "val"    # D
	java::io::Bits::putLong(b, off, java::lang::Double::doubleToLongBits(val));
	return;

}
// .method static putFloat([BIF)V
void java::io::Bits::putFloat(std::shared_ptr<unsigned char[]> b,int off,float val)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	//    .param p2, "val"    # F
	java::io::Bits::putInt(b, off, java::lang::Float::floatToIntBits(val));
	return;

}
// .method static putInt([BII)V
void java::io::Bits::putInt(std::shared_ptr<unsigned char[]> b,int off,int val)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	//    .param p2, "val"    # I
	b[( off + 0x3)] = (unsigned char)(val);
	b[( off + 0x2)] = (unsigned char)(_ushri(val,0x8));
	b[( off + 0x1)] = (unsigned char)(_ushri(val,0x10));
	b[off] = (unsigned char)(_ushri(val,0x18));
	return;

}
// .method static putLong([BIJ)V
void java::io::Bits::putLong(std::shared_ptr<unsigned char[]> b,int off,long long val)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	//    .param p2, "val"    # J
	b[( off + 0x7)] = (unsigned char)((int)(val));
	b[( off + 0x6)] = (unsigned char)((int)(_ushrll(val,0x8)));
	b[( off + 0x5)] = (unsigned char)((int)(_ushrll(val,0x10)));
	b[( off + 0x4)] = (unsigned char)((int)(_ushrll(val,0x18)));
	b[( off + 0x3)] = (unsigned char)((int)(_ushrll(val,0x20)));
	b[( off + 0x2)] = (unsigned char)((int)(_ushrll(val,0x28)));
	b[( off + 0x1)] = (unsigned char)((int)(_ushrll(val,0x30)));
	b[off] = (unsigned char)((int)(_ushrll(val,0x38)));
	return;

}
// .method static putShort([BIS)V
void java::io::Bits::putShort(std::shared_ptr<unsigned char[]> b,int off,short val)
{
	
	//    .param p0, "b"    # [B
	//    .param p1, "off"    # I
	//    .param p2, "val"    # S
	b[( off + 0x1)] = (unsigned char)(val);
	b[off] = (unsigned char)(_ushri(val,0x8));
	return;

}


