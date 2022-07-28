#ifndef MIRAI_INTERFACE_IMP_H
#define MIRAI_INTERFACE_IMP_H

#include "Interfaces/IMiraiInterface.h"

#include "miraicore_api.h"

class MiraiInterfaceImp : public IMiraiInterface
{
public:
	MiraiInterfaceImp();
	virtual ~MiraiInterfaceImp() override;

private:
	miraicore_kref_net_mamoe_mirai_IMirai _IMiraiInterfaceHandle;
};

#endif