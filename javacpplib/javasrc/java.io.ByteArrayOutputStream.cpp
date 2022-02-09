// CPP L:\smali2cpp20\x64\Release\out\java\io\ByteArrayOutputStream.smali
#include "java2ctype.h"
#include "java.io.ByteArrayOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.OutOfMemoryError.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

static java::io::ByteArrayOutputStream::MAX_ARRAY_SIZE = 0x7ffffff7;
// .method public constructor <init>()V
java::io::ByteArrayOutputStream::ByteArrayOutputStream()
{
	
	java::io::ByteArrayOutputStream::(0x20);
	return;

}
// .method public constructor <init>(I)V
java::io::ByteArrayOutputStream::ByteArrayOutputStream(int size)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "size"    # I
	// 036    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V
	if ( size >= 0 )
		goto label_cond_1f;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Negative initial size: ")))->append(size)->toString());
	// throw
	throw cVar0;
	// 066    .line 77
label_cond_1f:
	this->buf = std::make_shared<std::vector<unsigned char[]>>(size);
	return;

}
// .method private ensureCapacity(I)V
void java::io::ByteArrayOutputStream::ensureCapacity(int minCapacity)
{
	
	//    .param p1, "minCapacity"    # I
	if ( (minCapacity - this->buf->size()) <= 0 )
		goto label_cond_a;
	this->grow(minCapacity);
label_cond_a:
	return;

}
// .method private grow(I)V
void java::io::ByteArrayOutputStream::grow(int minCapacity)
{
	
	int newCapacity;
	
	//    .param p1, "minCapacity"    # I
	//    .local v1, "oldCapacity":I
	newCapacity = ( this->buf->size() << 0x1);
	//    .local v0, "newCapacity":I
	if ( (newCapacity - minCapacity) >= 0 )
		goto label_cond_a;
	newCapacity = minCapacity;
label_cond_a:
	if ( (newCapacity - 0x7ffffff7) <= 0 )
		goto label_cond_15;
label_cond_15:
	this->buf = java::util::Arrays::copyOf(this->buf, newCapacity);
	return;

}
// .method private static hugeCapacity(I)I
int java::io::ByteArrayOutputStream::hugeCapacity(int minCapacity)
{
	
	int cVar2;
	std::shared_ptr<java::lang::OutOfMemoryError> cVar1;
	
	//    .param p0, "minCapacity"    # I
	cVar2 = 0x7ffffff7;
	if ( minCapacity >= 0 )
		goto label_cond_b;
	cVar1 = std::make_shared<java::lang::OutOfMemoryError>();
	// throw
	throw cVar1;
	// 165    .line 124
label_cond_b:
	if ( minCapacity <= cVar2 )
		goto label_cond_10;
	cVar2 = 0x7fffffff;
label_cond_10:
	return cVar2;

}
// .method public close()V
void java::io::ByteArrayOutputStream::close()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 182        value = {
	// 183            Ljava/io/IOException;
	// 184        }
	// 185    .end annotation
	return;

}
// .method public declared-synchronized reset()V
void java::io::ByteArrayOutputStream::reset()
{
	
	this->monitor_enter();
	try {
	//label_try_start_2:
	this->count = 0x0;
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_6;
	}
	//    .catchall {:try_start_2 .. :try_end_4} :catchall_6
	this->monitor_exit();
	return;
label_catchall_6:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized size()I
int java::io::ByteArrayOutputStream::size()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_5;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_5
	this->monitor_exit();
	return this->count;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized toByteArray()[B
unsigned char java::io::ByteArrayOutputStream::toByteArray()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_1 .. :try_end_8} :catchall_b
	this->monitor_exit();
	return java::util::Arrays::copyOf(this->buf, this->count);
label_catchall_b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ByteArrayOutputStream::toString()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = std::make_shared<java::lang::String>(this->buf, 0x0, this->count);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_1 .. :try_end_b} :catchall_d
	this->monitor_exit();
	return cVar0;
label_catchall_d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized toString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ByteArrayOutputStream::toString(int hibyte)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "hibyte"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 309    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = std::make_shared<java::lang::String>(this->buf, hibyte, 0x0, this->count);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_1 .. :try_end_b} :catchall_d
	this->monitor_exit();
	return cVar0;
label_catchall_d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized toString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ByteArrayOutputStream::toString(std::shared_ptr<java::lang::String> charsetName)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "charsetName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 344        value = {
	// 345            Ljava/io/UnsupportedEncodingException;
	// 346        }
	// 347    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = std::make_shared<java::lang::String>(this->buf, 0x0, this->count, charsetName);
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_1 .. :try_end_b} :catchall_d
	this->monitor_exit();
	return cVar0;
label_catchall_d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized write(I)V
void java::io::ByteArrayOutputStream::write(int b)
{
	
	//    .param p1, "b"    # I
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->ensureCapacity(( this->count + 0x1));
	this->buf[this->count] = (unsigned char)(b);
	this->count = ( this->count + 0x1);
	//label_try_end_15:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_1 .. :try_end_15} :catchall_17
	this->monitor_exit();
	return;
label_catchall_17:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized write([BII)V
void java::io::ByteArrayOutputStream::write(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar0;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	this->monitor_enter();
	if ( off < 0 ) 
		goto label_cond_6;
	try {
	//label_try_start_3:
	if ( off <= b->size() )
		goto label_cond_f;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 448    :try_end_c
	// 449    .catchall {:try_start_3 .. :try_end_c} :catchall_c
label_catchall_c:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 458    .line 149
label_cond_f:
	if ( len < 0 ) 
		goto label_cond_6;
	try {
	//label_try_start_13:
	if ( ((off + len) -  b->size()) > 0 ) 
		goto label_cond_6;
	this->ensureCapacity((this->count +  len));
	java::lang::System::arraycopy(b, off, this->buf, this->count, len);
	this->count = (this->count +  len);
	//label_try_end_29:
	}
	catch (...){
		goto label_catchall_c;
	}
	//    .catchall {:try_start_13 .. :try_end_29} :catchall_c
	this->monitor_exit();
	return;

}
// .method public declared-synchronized writeTo(Ljava/io/OutputStream;)V
void java::io::ByteArrayOutputStream::writeTo(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 505        value = {
	// 506            Ljava/io/IOException;
	// 507        }
	// 508    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	out->write(this->buf, 0x0, this->count);
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_1 .. :try_end_9} :catchall_b
	this->monitor_exit();
	return;
label_catchall_b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


