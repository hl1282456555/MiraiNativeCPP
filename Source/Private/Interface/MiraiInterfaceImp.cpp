#include "Interface/MiraiInterfaceImp.h"

#include "NativeCPPCommon.h"

MiraiInterfaceImp::MiraiInterfaceImp()
{
	CHECK_MIRAI_SYMBOLS();

	IMiraiInterfaceHandle_ = GMiraiSymbols->kotlin.root.net.mamoe.mirai.get_Mirai().pinned;
	if (IMiraiInterfaceHandle_ == nullptr)
	{
		throw std::exception("Failed to get the mirai interface from mirai-core.");
	}
}

MiraiInterfaceImp::~MiraiInterfaceImp()
{
	if (IMiraiInterfaceHandle_ != nullptr)
	{
		GMiraiSymbols->DisposeStablePointer(IMiraiInterfaceHandle_);
		IMiraiInterfaceHandle_ = nullptr;
	}
}