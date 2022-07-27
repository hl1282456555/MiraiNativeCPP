#ifndef MIRAI_INTERFACE_IMP_H
#define MIRAI_INTERFACE_IMP_H

#include "Interfaces/IMiraiInterface.h"

#include <memory>
#include <mutex>

class MiraiInterfaceImp : public IMiraiInterface
{
public:
	MiraiInterfaceImp();
	virtual ~MiraiInterfaceImp() override;

private:
	void* _IMiraiInterfaceHandle;
};

#endif