#include "Interface/MiraiInterfaceImp.h"

#include "NativeCPPCommon.h"

MiraiInterfaceImp::MiraiInterfaceImp()
{
	CHECK_MIRAI_SYMBOLS();

	_IMiraiInterfaceHandle = GMiraiSymbols->kotlin.root.net.mamoe.mirai.get_Mirai().pinned;
	if (_IMiraiInterfaceHandle == nullptr)
	{
		throw std::exception("Failed to get the mirai interface from mirai-core.");
	}
}

MiraiInterfaceImp::~MiraiInterfaceImp()
{
	if (_IMiraiInterfaceHandle != nullptr)
	{
		GMiraiSymbols->DisposeStablePointer(_IMiraiInterfaceHandle);
		_IMiraiInterfaceHandle = nullptr;
	}
}