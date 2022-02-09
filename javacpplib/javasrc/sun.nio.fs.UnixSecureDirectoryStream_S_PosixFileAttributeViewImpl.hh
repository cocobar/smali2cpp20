#ifndef __sun_nio_fs_UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl__
#define __sun_nio_fs_UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl__
// H L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixSecureDirectoryStream$PosixFileAttributeViewImpl.smali
#include "java2ctype.h"
#include "java.nio.file.attribute.PosixFileAttributeView.hh"
#include "sun.nio.fs.UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl.hh"

namespace sun::nio::fs{
class UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl : public sun::nio::fs::UnixSecureDirectoryStream_S_BasicFileAttributeViewImpl, public java::nio::file::attribute::PosixFileAttributeView {
public:
	UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl();
	virtual ~UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl();

}; // class UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl
}; // namespace sun::nio::fs

#endif //__sun_nio_fs_UnixSecureDirectoryStream_S_PosixFileAttributeViewImpl__

