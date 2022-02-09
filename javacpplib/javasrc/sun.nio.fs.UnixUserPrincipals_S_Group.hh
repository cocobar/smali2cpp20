#ifndef __sun_nio_fs_UnixUserPrincipals_S_Group__
#define __sun_nio_fs_UnixUserPrincipals_S_Group__
// H L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixUserPrincipals$Group.smali
#include "java2ctype.h"
#include "java.nio.file.attribute.GroupPrincipal.hh"
#include "sun.nio.fs.UnixUserPrincipals_S_User.hh"

namespace sun::nio::fs{
class UnixUserPrincipals_S_Group : public sun::nio::fs::UnixUserPrincipals_S_User, public java::nio::file::attribute::GroupPrincipal {
public:
	UnixUserPrincipals_S_Group();
	virtual ~UnixUserPrincipals_S_Group();

}; // class UnixUserPrincipals_S_Group
}; // namespace sun::nio::fs

#endif //__sun_nio_fs_UnixUserPrincipals_S_Group__

