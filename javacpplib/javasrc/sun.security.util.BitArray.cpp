// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\BitArray.smali
#include "java2ctype.h"
#include "java.io.ByteArrayOutputStream.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"
#include "sun.security.util.BitArray.h"

static sun::security::util::BitArray::BITS_PER_UNIT = 0x8;
static sun::security::util::BitArray::BYTES_PER_LINE = 0x8;
static sun::security::util::BitArray::NYBBLE;
// .method static constructor <clinit>()V
void sun::security::util::BitArray::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[][]>> cVar1;
	std::shared<std::vector<unsigned char[]>> cVar2;
	std::shared<std::vector<unsigned char[]>> cVar3;
	std::shared<std::vector<unsigned char[]>> cVar4;
	std::shared<std::vector<unsigned char[]>> cVar5;
	std::shared<std::vector<unsigned char[]>> cVar6;
	std::shared<std::vector<unsigned char[]>> cVar7;
	std::shared<std::vector<unsigned char[]>> cVar8;
	std::shared<std::vector<unsigned char[]>> cVar9;
	std::shared<std::vector<unsigned char[]>> cVar10;
	std::shared<std::vector<unsigned char[]>> cVar11;
	std::shared<std::vector<unsigned char[]>> cVar12;
	std::shared<std::vector<unsigned char[]>> cVar13;
	std::shared<std::vector<unsigned char[]>> cVar14;
	std::shared<std::vector<unsigned char[]>> cVar15;
	std::shared<std::vector<unsigned char[]>> cVar16;
	std::shared<std::vector<unsigned char[]>> cVar17;
	
	cVar0 = 0x4;
	cVar1 = std::make_shared<std::vector<unsigned char[][]>>(0x10);
	cVar2 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0x0] = cVar2;
	cVar3 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0x1] = cVar3;
	cVar4 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0x2] = cVar4;
	cVar5 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0x3] = cVar5;
	cVar6 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[cVar0] = cVar6;
	cVar7 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0x5] = cVar7;
	cVar8 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0x6] = cVar8;
	cVar9 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0x7] = cVar9;
	cVar10 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0x8] = cVar10;
	cVar11 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0x9] = cVar11;
	cVar12 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0xa] = cVar12;
	cVar13 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0xb] = cVar13;
	cVar14 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0xc] = cVar14;
	cVar15 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0xd] = cVar15;
	cVar16 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0xe] = cVar16;
	cVar17 = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	?;
	cVar1[0xf] = cVar17;
	sun::security::util::BitArray::NYBBLE = cVar1;
	return;
	// 180    .line 220
	// 181    nop
	// 183    :array_90
	// 184    .array-data 1
	// 185        0x30t
	// 186        0x30t
	// 187        0x30t
	// 188        0x30t
	// 189    .end array-data
	// 191    .line 221
	// 192    :array_96
	// 193    .array-data 1
	// 194        0x30t
	// 195        0x30t
	// 196        0x30t
	// 197        0x31t
	// 198    .end array-data
	// 200    .line 222
	// 201    :array_9c
	// 202    .array-data 1
	// 203        0x30t
	// 204        0x30t
	// 205        0x31t
	// 206        0x30t
	// 207    .end array-data
	// 209    .line 223
	// 210    :array_a2
	// 211    .array-data 1
	// 212        0x30t
	// 213        0x30t
	// 214        0x31t
	// 215        0x31t
	// 216    .end array-data
	// 218    .line 224
	// 219    :array_a8
	// 220    .array-data 1
	// 221        0x30t
	// 222        0x31t
	// 223        0x30t
	// 224        0x30t
	// 225    .end array-data
	// 227    .line 225
	// 228    :array_ae
	// 229    .array-data 1
	// 230        0x30t
	// 231        0x31t
	// 232        0x30t
	// 233        0x31t
	// 234    .end array-data
	// 236    .line 226
	// 237    :array_b4
	// 238    .array-data 1
	// 239        0x30t
	// 240        0x31t
	// 241        0x31t
	// 242        0x30t
	// 243    .end array-data
	// 245    .line 227
	// 246    :array_ba
	// 247    .array-data 1
	// 248        0x30t
	// 249        0x31t
	// 250        0x31t
	// 251        0x31t
	// 252    .end array-data
	// 254    .line 228
	// 255    :array_c0
	// 256    .array-data 1
	// 257        0x31t
	// 258        0x30t
	// 259        0x30t
	// 260        0x30t
	// 261    .end array-data
	// 263    .line 229
	// 264    :array_c6
	// 265    .array-data 1
	// 266        0x31t
	// 267        0x30t
	// 268        0x30t
	// 269        0x31t
	// 270    .end array-data
	// 272    .line 230
	// 273    :array_cc
	// 274    .array-data 1
	// 275        0x31t
	// 276        0x30t
	// 277        0x31t
	// 278        0x30t
	// 279    .end array-data
	// 281    .line 231
	// 282    :array_d2
	// 283    .array-data 1
	// 284        0x31t
	// 285        0x30t
	// 286        0x31t
	// 287        0x31t
	// 288    .end array-data
	// 290    .line 232
	// 291    :array_d8
	// 292    .array-data 1
	// 293        0x31t
	// 294        0x31t
	// 295        0x30t
	// 296        0x30t
	// 297    .end array-data
	// 299    .line 233
	// 300    :array_de
	// 301    .array-data 1
	// 302        0x31t
	// 303        0x31t
	// 304        0x30t
	// 305        0x31t
	// 306    .end array-data
	// 308    .line 234
	// 309    :array_e4
	// 310    .array-data 1
	// 311        0x31t
	// 312        0x31t
	// 313        0x31t
	// 314        0x30t
	// 315    .end array-data
	// 317    .line 235
	// 318    :array_ea
	// 319    .array-data 1
	// 320        0x31t
	// 321        0x31t
	// 322        0x31t
	// 323        0x31t
	// 324    .end array-data

}
// .method public constructor <init>(I)V
sun::security::util::BitArray::BitArray(int length)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "length"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 331        value = {
	// 332            Ljava/lang/IllegalArgumentException;
	// 333        }
	// 334    .end annotation
	// 338    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( length >= 0 )
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative length for BitArray")));
	// throw
	throw cVar0;
	// 352    .line 61
label_cond_e:
	this->length = length;
	this->repn = std::make_shared<std::vector<unsigned char[]>>(( ( ( length + 0x8) + -0x1) / 0x8));
	return;

}
// .method public constructor <init>(I[B)V
sun::security::util::BitArray::BitArray(int length,std::shared_ptr<unsigned char[]> a)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	int repLength;
	std::shared_ptr<unsigned char[]> cVar3;
	int cVar4;
	
	//    .param p1, "length"    # I
	//    .param p2, "a"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 376        value = {
	// 377            Ljava/lang/IllegalArgumentException;
	// 378        }
	// 379    .end annotation
	cVar0 = 0x0;
	// 385    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( length >= 0 )
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative length for BitArray")));
	// throw
	throw cVar1;
	// 399    .line 79
label_cond_f:
	if ( ( a->size() * 0x8) >= length )
		goto label_cond_1d;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Byte array too short to represent bit array of given length")));
	// throw
	throw cVar2;
	// 416    .line 84
label_cond_1d:
	this->length = length;
	repLength = ( ( ( length + 0x8) + -0x1) / 0x8);
	//    .local v1, "repLength":I
	//    .local v2, "unusedBits":I
	//    .local v0, "bitMask":B
	this->repn = std::make_shared<std::vector<unsigned char[]>>(repLength);
	java::lang::System::arraycopy(a, cVar0, this->repn, cVar0, repLength);
	if ( repLength <= 0 )
		goto label_cond_42;
	cVar3 = this->repn;
	cVar4 = ( repLength + -0x1);
	cVar3[cVar4] = (unsigned char)((cVar3[cVar4] &  (unsigned char)((0xff << (( repLength * 0x8) - length)))));
label_cond_42:
	return;

}
// .method private constructor <init>(Lsun/security/util/BitArray;)V
sun::security::util::BitArray::BitArray(std::shared_ptr<sun::security::util::BitArray> ba)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .param p1, "ba"    # Lsun/security/util/BitArray;
	// 479    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->length = ba->length;
	cVar0 = ba->repn->clone();
	cVar0->checkCast("unsigned char[]");
	this->repn = cVar0;
	return;

}
// .method public constructor <init>([Z)V
sun::security::util::BitArray::BitArray(std::shared_ptr<bool[]> bits)
{
	
	int i;
	
	//    .param p1, "bits"    # [Z
	// 507    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->length = bits->size();
	this->repn = std::make_shared<std::vector<unsigned char[]>>(( ( this->length + 0x7) / 0x8));
	i = 0x0;
	//    .local v0, "i":I
label_goto_11:
	if ( i >= this->length )
		goto label_cond_1d;
	this->set(i, bits[i]);
	i = ( i + 0x1);
	goto label_goto_11;
	// 544    .line 113
label_cond_1d:
	return;

}
// .method private static position(I)I
int sun::security::util::BitArray::position(int idx)
{
	
	//    .param p0, "idx"    # I
	return (0x1 << ( ( idx % 0x8) - 0x7));

}
// .method private static subscript(I)I
int sun::security::util::BitArray::subscript(int idx)
{
	
	//    .param p0, "idx"    # I
	return ( idx / 0x8);

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::util::BitArray::clone()
{
	
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	
	cVar0 = std::make_shared<sun::security::util::BitArray>(this);
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::util::BitArray::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::util::BitArray> ba;
	int i;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( obj != this )
		goto label_cond_5;
	return cVar0;
	// 605    .line 175
label_cond_5:
	if ( !(obj) )  
		goto label_cond_d;
	if ( !(( obj->instanceOf("sun::security::util::BitArray") ^ 0x1)) )  
		goto label_cond_e;
label_cond_d:
	return cVar1;
label_cond_e:
	ba = obj;
	ba->checkCast("sun::security::util::BitArray");
	//    .local v0, "ba":Lsun/security/util/BitArray;
	if ( ba->length == this->length )
		goto label_cond_18;
	return cVar1;
	// 634    .line 181
label_cond_18:
	i = 0x0;
	//    .local v1, "i":I
label_goto_19:
	if ( i >= this->repn->size() )
		goto label_cond_2c;
	if ( this->repn[i] == ba->repn[i] )
		goto label_cond_29;
	return cVar1;
	// 659    .line 181
label_cond_29:
	i = ( i + 0x1);
	goto label_goto_19;
	// 665    .line 184
label_cond_2c:
	return cVar0;

}
// .method public get(I)Z
bool sun::security::util::BitArray::get(int index)
{
	
	bool cVar2;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar1;
	
	//    .param p1, "index"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 674        value = {
	// 675            Ljava/lang/ArrayIndexOutOfBoundsException;
	// 676        }
	// 677    .end annotation
	cVar2 = 0x0;
	if ( index < 0 ) 
		goto label_cond_7;
	if ( index <  this->length )
		goto label_cond_11;
label_cond_7:
	cVar1 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(java::lang::Integer::toString(index));
	// throw
	throw cVar1;
	// 701    .line 132
label_cond_11:
	if ( !((this->repn[sun::security::util::BitArray::subscript(index)] &  sun::security::util::BitArray::position(index))) )  
		goto label_cond_21;
	cVar2 = 0x1;
label_cond_21:
	return cVar2;

}
// .method public hashCode()I
int sun::security::util::BitArray::hashCode()
{
	
	int hashCode;
	int i;
	
	hashCode = 0x0;
	//    .local v0, "hashCode":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_2:
	if ( i >= this->repn->size() )
		goto label_cond_12;
	hashCode = (( hashCode * 0x1f) + this->repn[i]);
	i = ( i + 0x1);
	goto label_goto_2;
	// 758    .line 210
label_cond_12:
	return (this->length ^  hashCode);

}
// .method public length()I
int sun::security::util::BitArray::length()
{
	
	return this->length;

}
// .method public set(IZ)V
void sun::security::util::BitArray::set(int index,bool value)
{
	
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar0;
	int idx;
	int bit;
	std::shared_ptr<unsigned char[]> cVar1;
	std::shared_ptr<unsigned char[]> cVar2;
	
	//    .param p1, "index"    # I
	//    .param p2, "value"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 782        value = {
	// 783            Ljava/lang/ArrayIndexOutOfBoundsException;
	// 784        }
	// 785    .end annotation
	if ( index < 0 ) 
		goto label_cond_6;
	if ( index <  this->length )
		goto label_cond_10;
label_cond_6:
	cVar0 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(java::lang::Integer::toString(index));
	// throw
	throw cVar0;
	// 807    .line 143
label_cond_10:
	idx = sun::security::util::BitArray::subscript(index);
	//    .local v1, "idx":I
	bit = sun::security::util::BitArray::position(index);
	//    .local v0, "bit":I
	if ( !(value) )  
		goto label_cond_23;
	cVar1 = this->repn;
	cVar1[idx] = (unsigned char)((cVar1[idx] |  bit));
label_goto_22:
	return;
	// 838    .line 149
label_cond_23:
	cVar2 = this->repn;
	cVar2[idx] = (unsigned char)((cVar2[idx] &  (~bit)));
	goto label_goto_22;

}
// .method public toBooleanArray()[Z
bool sun::security::util::BitArray::toBooleanArray()
{
	
	std::shared<std::vector<bool[]>> bits;
	int i;
	
	bits = std::make_shared<std::vector<bool[]>>(this->length);
	//    .local v0, "bits":[Z
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= this->length )
		goto label_cond_12;
	bits[i] = this->get(i);
	i = ( i + 0x1);
	goto label_goto_5;
	// 886    .line 196
label_cond_12:
	return bits;

}
// .method public toByteArray()[B
unsigned char sun::security::util::BitArray::toByteArray()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	cVar0 = this->repn->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::util::BitArray::toString()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::io::ByteArrayOutputStream> out;
	int i;
	int cVar2;
	std::shared_ptr<java::lang::String> cVar4;
	
	cVar0 = 0x4;
	cVar1 = 0x0;
	out = std::make_shared<java::io::ByteArrayOutputStream>();
	//    .local v1, "out":Ljava/io/ByteArrayOutputStream;
	i = 0x0;
	//    .local v0, "i":I
label_goto_8:
	if ( i >= ( this->repn->size() + -0x1) )
		goto label_cond_3e;
	out->write(sun::security::util::BitArray::NYBBLE[( _shri(this->repn[i],0x4) & 0xf)], cVar1, cVar0);
	out->write(sun::security::util::BitArray::NYBBLE[( this->repn[i] & 0xf)], cVar1, cVar0);
	if ( ( i % 0x8) != 0x7 )
		goto label_cond_38;
	out->write(0xa);
label_goto_35:
	i = ( i + 0x1);
	goto label_goto_8;
	// 980    .line 253
label_cond_38:
	out->write(0x20);
	goto label_goto_35;
	// 988    .line 258
label_cond_3e:
	i = ( ( this->repn->size() + -0x1) * 0x8);
label_goto_45:
	if ( i >= this->length )
		goto label_cond_5a;
	if ( !(this->get(i)) )  
		goto label_cond_57;
	cVar2 = 0x31;
label_goto_51:
	out->write(cVar2);
	i = ( i + 0x1);
	goto label_goto_45;
	// 1020    .line 259
label_cond_57:
	cVar2 = 0x30;
	goto label_goto_51;
	// 1026    .line 262
label_cond_5a:
	cVar4 = std::make_shared<java::lang::String>(out->toByteArray());
	return cVar4;

}
// .method public truncate()Lsun/security/util/BitArray;
std::shared_ptr<sun::security::util::BitArray> sun::security::util::BitArray::truncate()
{
	
	int i;
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	std::shared_ptr<sun::security::util::BitArray> cVar1;
	
	i = ( this->length + -0x1);
	//    .local v0, "i":I
label_goto_4:
	if ( i < 0 ) 
		goto label_cond_21;
	if ( !(this->get(i)) )  
		goto label_cond_1e;
	cVar0 = std::make_shared<sun::security::util::BitArray>(( i + 0x1), java::util::Arrays::copyOf(this->repn, ( ( i + 0x8) / 0x8)));
	return cVar0;
	// 1078    .line 267
label_cond_1e:
	i = ( i + -0x1);
	goto label_goto_4;
	// 1084    .line 272
label_cond_21:
	cVar1 = std::make_shared<sun::security::util::BitArray>(0x1);
	return cVar1;

}


