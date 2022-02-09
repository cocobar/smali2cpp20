#ifndef __sun_nio_fs_UnixSecureDirectoryStream__
#define __sun_nio_fs_UnixSecureDirectoryStream__
// H L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixSecureDirectoryStream.smali
#include "java2ctype.h"
#include "java.nio.file.Path.h"
#include "java.nio.file.SecureDirectoryStream.h"

namespace sun::nio::fs{
class UnixSecureDirectoryStream : public java::nio::file::SecureDirectoryStream<java::nio::file::Path> {
public:
	UnixSecureDirectoryStream();
	virtual ~UnixSecureDirectoryStream();

}; // class UnixSecureDirectoryStream
}; // namespace sun::nio::fs

#endif //__sun_nio_fs_UnixSecureDirectoryStream__

