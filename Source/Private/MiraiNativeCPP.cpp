#include "MiraiNativeCPP.h"
#include "NativeCPPCommon.h"

#include "miraicore_api.h"

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
