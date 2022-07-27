#ifndef I_MIRAI_INTERFACE_H
#define I_MIRAI_INTERFACE_H

#include "Definitions.h"
#include <memory>

EXPORT_SCOPE_START

class IMiraiInterface
{
public:
	virtual ~IMiraiInterface() = 0;

	static std::shared_ptr<IMiraiInterface> get();

	// IMirai interface
	/*virtual void getBotFactory() = 0;
	virtual void getFileCacheStrategy() = 0;
	virtual void setFileCacheStrategy() = 0;
	virtual long long calculateGroupCodeByGroupUin(long long GroupUin) = 0;
	virtual long long calculateGroupUinByGroupCode(long long GroupCode) = 0;*/
};

EXPORT_SCOPE_END

#endif