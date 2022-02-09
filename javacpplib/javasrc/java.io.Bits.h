#ifndef __java_io_Bits__
#define __java_io_Bits__
// H L:\smali2cpp20\x64\Release\out\java\io\Bits.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace java::io{
class Bits : public java::lang::Object {
protected:
private:
public:
	Bits();
	static bool getBoolean(std::shared_ptr<unsigned char[]> b,int off);
	static char getChar(std::shared_ptr<unsigned char[]> b,int off);
	static double getDouble(std::shared_ptr<unsigned char[]> b,int off);
	static float getFloat(std::shared_ptr<unsigned char[]> b,int off);
	static int getInt(std::shared_ptr<unsigned char[]> b,int off);
	static long long getLong(std::shared_ptr<unsigned char[]> b,int off);
	static short getShort(std::shared_ptr<unsigned char[]> b,int off);
	static void putBoolean(std::shared_ptr<unsigned char[]> b,int off,bool val);
	static void putChar(std::shared_ptr<unsigned char[]> b,int off,char val);
	static void putDouble(std::shared_ptr<unsigned char[]> b,int off,double val);
	static void putFloat(std::shared_ptr<unsigned char[]> b,int off,float val);
	static void putInt(std::shared_ptr<unsigned char[]> b,int off,int val);
	static void putLong(std::shared_ptr<unsigned char[]> b,int off,long long val);
	static void putShort(std::shared_ptr<unsigned char[]> b,int off,short val);
public:
	virtual ~Bits(){
	}

}; // class Bits
}; // namespace java::io

#endif //__java_io_Bits__

