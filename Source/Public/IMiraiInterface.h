#ifndef I_MIRAI_INTERFACE_H
#define I_MIRAI_INTERFACE_H

#include <memory>

class IMiraiInterface
{
public:
	virtual ~IMiraiInterface() = 0;

	virtual std::shared_ptr<IMiraiInterface> get() = 0;
};

#endif