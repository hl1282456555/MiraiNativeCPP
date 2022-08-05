#ifndef STRUCTURES_GUILD_H
#define STRUCTURES_GUILD_H

#include "Definitions.h"

#include <boost/container/string.hpp>
#include <boost/container/vector.hpp>

enum EGuildChannelType
{
	Text = 1,
	Voice = 2,
	Live = 5,
	Topic = 7
};

struct FGuildRole
{
	uint64 RoleId;
	boost::container::string RoleName;
	int32 Num;
	int32 MaxNum;
	uint32 ArgbColor;
	bool Independent;
	bool Owned;
	bool Disabled;
};

struct FGuildUserProfile
{
	uint64 TinyId;
	int64 JoinTime;
	boost::container::string Nickname;
	boost::container::string AvatarUrl;
	boost::container::vector<FGuildRole> Roles;
};

struct FGuildMemberInfo
{
	uint64 TinyId;
	int64 LastSpeakTime;
	uint64 Role;
	boost::container::string RoleName;
	boost::container::string Title;
	boost::container::string NickName;
};

struct FGuildMeta
{
	uint64 GuildId;
	boost::container::string GuildName;
	boost::container::string GuildProfile;
	int64 MaxMemberCount;
	int64 MemberCount;
	int64 CreateTime;
	int32 MaxRobotCount;
	int32 MaxAdminCount;
	uint64 OwnerId;
};

struct FGuildChannelSlowModeInfo
{
	int32 SlowModeKey;
	int32 SpeakFrequency;
	int32 SlowModeCircle;
	boost::container::string SlowModeText;
};

struct FGuildChannelMeta
{
	int64 CreatorUin;
	uint64 CreatorTinyId;
	int64 CreateTime;
	uint64 GuildId;
	int32 VisibleType;
	uint64 TopMessageSeq;
	int64 TopMessageTime;
	uint64 TopMessageOperatorId;
	int32 CurrentSlowMode;
	int32 TalkPermission;
	boost::container::vector<FGuildChannelSlowModeInfo> SlowModes;
};

struct FGuildChannelInfo
{
	uint64 ChannelId;
	boost::container::string ChannelName;
	uint64 Time;
	uint32 EventTime;
	uint32 NotifyType;
	EGuildChannelType ChannelType;
	uint64 AtAllSeq;
	FGuildChannelMeta Meta;
	int64 FetchTime;
};

struct FFetchGuildMemberListWithRoleResult
{
	boost::container::vector<FGuildMemberInfo> Members;
	uint32 NextIndex;
	uint64 NextRoleId;
	boost::container::string NextQueryParam;
	bool Finished;
};

struct FGuildInfo
{
	uint64 GuildId;
	uint64 GuildCode;
	boost::container::string GuildName;
	boost::container::string CoverUrl;
	boost::container::string AvatarUrl;
	boost::container::vector<FGuildChannelInfo> Channels;
};

struct FGuildService
{
	uint64 TinyId;
	boost::container::string Nickname;
	boost::container::string AvatarUrl;
	uint32 GuildCount;
	boost::container::vector<FGuildInfo> Guilds;
};

#endif