#pragma once
#include "CBaseObject.h"
#include "CTypeDefine.h"
class CTypeContainer :
    public CBaseObject
{

private:
    std::map<std::string, std::shared_ptr<CTypeDefine>> usedTypeMap;

public:
    CTypeContainer();
    std::shared_ptr<CTypeDefine> findType(std::string strClass);

    void collect(std::map<std::string, std::shared_ptr<CTypeDefine>>& typeMap);
};

