#include "Interfaces/IMiraiInterface.h"
#include "Interface/MiraiInterfaceImp.h"

std::shared_ptr<IMiraiInterface> IMiraiInterface::get()
{
	static std::shared_ptr<IMiraiInterface> instance = std::make_shared<MiraiInterfaceImp>();
	return instance;
}
