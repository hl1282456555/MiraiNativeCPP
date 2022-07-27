#include "MiraiNativeCPP.h"
#include "NativeCPPCommon.h"

#include "miraicore_api.h"

miraicore_ExportedSymbols* GMiraiSymbols = nullptr;

namespace MiraiNativeCPP
{
	void Initialize()
	{
		mirai_init();

		GMiraiSymbols = miraicore_symbols();
		if (GMiraiSymbols == nullptr)
		{
			throw std::exception("Failed to load mirai-core symbols.");
		}
	}

	void Uinitialize()
	{

	}
}
