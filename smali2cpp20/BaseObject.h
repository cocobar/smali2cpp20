
#ifndef __BaseObject_H__
#define __BaseObject_H__
#include <vector>
#include <string>





class CBaseObject {
public:
	CBaseObject() {};
	CBaseObject(const CBaseObject& mr) {};
	virtual CBaseObject& operator = (const CBaseObject& mr) {
		return *this;
	};
};
#endif


