#ifndef MIRAI_INTERFACE_IMP_H
#define MIRAI_INTERFACE_IMP_H

#include "IMiraiInterface.h"
#include "miraicore_api.h"

#include <memory>
#include <mutex>

class MiraiInterfaceImp : public IMiraiInterface
{
public:
	MiraiInterfaceImp();
	virtual ~MiraiInterfaceImp();

	static std::shared_ptr<IMiraiInterface> get();

private:
	static std::once_flag InstanceFlag_;
	static std::shared_ptr<IMiraiInterface> Instance_;

	miraicore_kref_net_mamoe_mirai_IMirai* InternalMiraiInterface_;
};

#endif