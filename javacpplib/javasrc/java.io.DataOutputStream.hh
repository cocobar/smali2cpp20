#ifndef __java_io_DataOutputStream__
#define __java_io_DataOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\DataOutputStream.smali
#include "java2ctype.h"
#include "java.io.DataOutput.hh"
#include "java.io.FilterOutputStream.hh"

namespace java::io{
class DataOutputStream : public java::io::FilterOutputStream, public java::io::DataOutput {
public:
	DataOutputStream();
	virtual ~DataOutputStream();

}; // class DataOutputStream
}; // namespace java::io

#endif //__java_io_DataOutputStream__

