#ifndef MIRAI_CONTACT_IMP_H
#define MIRAI_CONTACT_IMP_H

#include "Interfaces/IMiraiContact.h"
#include "Interfaces/IMiraiBot.h"
#include "miraicore_api.h"

#include <map>
#include <string>

class MiraiContactImp : public IMiraiContact
{
public:
	explicit MiraiContactImp(miraicore_kref_net_mamoe_mirai_contact_Contact InContact, bool bPossess = true);
	virtual ~MiraiContactImp() override;

	// IMiraiContactOrBot interface
	virtual const char* getAvatarUrl(EAvatarSpec AvatarSpec) override;
	virtual std::shared_ptr<IMiraiBot> getBot() override;
	virtual long long getId() override;
private:
	bool bOwnedContact;
	std::map<EAvatarSpec, std::string> _CachedAvatarUrl;
	miraicore_kref_net_mamoe_mirai_contact_Contact _MiraiContactHandle;
};

#endif