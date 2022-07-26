#include "MiraiInterfaceImp.h"

std::once_flag MiraiInterfaceImp::InstanceFlag_;
std::shared_ptr<IMiraiInterface> MiraiInterfaceImp::Instance_;

MiraiInterfaceImp::MiraiInterfaceImp()
	: InternalMiraiInterface_(nullptr)
{

}

MiraiInterfaceImp::~MiraiInterfaceImp()
{

}

std::shared_ptr<IMiraiInterface> MiraiInterfaceImp::get()
{
	std::call_once(InstanceFlag_, 
		[&]()
		{
			Instance_ = std::make_shared<MiraiInterfaceImp>();
		});

	return Instance_;
}

