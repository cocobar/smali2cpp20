
#ifndef __CSMALIABSTRACT_H__
#define __CSMALIABSTRACT_H__

#include "CBaseAssert.h"
#include "CTypeContainer.h"

class CSmaliAbstract :public CBaseObject
{
private:
	bool isPrivate;
	bool isPublic;
	bool isProtcted;

	CTypeContainer usedType;

public:
	CSmaliAbstract();

	static inline constexpr int OUT_HPP = 0;
	static inline constexpr int OUT_H = 1;
	static inline constexpr int OUT_CPP = 2;
	static inline constexpr int OUT_TYPE = 3;
	static inline constexpr int OUT_MODULE = 4;

	// STRICTFP(0x800, "strictfp", false, true, false),
	static constexpr uint32_t kAccPublic = 0x0001;  // class, field, method, ic
	static constexpr uint32_t kAccPrivate = 0x0002;  // field, method, ic
	static constexpr uint32_t kAccProtected = 0x0004;  // field, method, ic
	static constexpr uint32_t kAccStatic = 0x0008;  // field, method, ic
	static constexpr uint32_t kAccFinal = 0x0010;  // class, field, method, ic
	static constexpr uint32_t kAccSynchronized = 0x0020;  // method (only allowed on natives)
	static constexpr uint32_t kAccSuper = 0x0020;  // class (not used in dex)
	static constexpr uint32_t kAccVolatile = 0x0040;  // field
	static constexpr uint32_t kAccBridge = 0x0040;  // method (1.5)
	static constexpr uint32_t kAccTransient = 0x0080;  // field
	static constexpr uint32_t kAccVarargs = 0x0080;  // method (1.5)
	static constexpr uint32_t kAccNative = 0x0100;  // method
	static constexpr uint32_t kAccInterface = 0x0200;  // class, ic
	static constexpr uint32_t kAccAbstract = 0x0400;  // class, method, ic
	static constexpr uint32_t kAccStrict = 0x0800;  // method
	static constexpr uint32_t kAccSynthetic = 0x1000;  // class, field, method, ic
	static constexpr uint32_t kAccAnnotation = 0x2000;  // class, ic (1.5)
	static constexpr uint32_t kAccEnum = 0x4000;  // class, field, ic (1.5)
	static constexpr uint32_t kAccConstructor = 0x00010000;  // method (dex only) <(cl)init>
	static constexpr uint32_t kAccDeclaredSynchronized = 0x00020000;  // method (dex only)

	static constexpr uint32_t kAllMethodFlags =
		kAccPublic |
		kAccPrivate |
		kAccProtected |
		kAccStatic |
		kAccFinal |
		kAccSynchronized |
		kAccBridge |
		kAccVarargs |
		kAccNative |
		kAccAbstract |
		kAccStrict |
		kAccSynthetic;

	void setPrivateType();
	void setPublicType();
	void setProtctedType();
	bool getPrivateType();
	bool getPublicType();
	bool getProtctedType();

	int isStatic = 0;

	unsigned long flag = 0;

	std::string getCppPermissionString(unsigned long val);

	void setFlags(std::string strFlags);

	void useType(std::string strClass, std::string strMember, bool bMethod);

	void collect(std::map<std::string, std::shared_ptr<CTypeDefine>> & usedTypeMap);
};

#endif

