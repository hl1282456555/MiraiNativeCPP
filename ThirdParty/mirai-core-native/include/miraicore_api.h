#ifndef KONAN_MIRAICORE_H
#define KONAN_MIRAICORE_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            miraicore_KBoolean;
#else
typedef _Bool           miraicore_KBoolean;
#endif
typedef unsigned short     miraicore_KChar;
typedef signed char        miraicore_KByte;
typedef short              miraicore_KShort;
typedef int                miraicore_KInt;
typedef long long          miraicore_KLong;
typedef unsigned char      miraicore_KUByte;
typedef unsigned short     miraicore_KUShort;
typedef unsigned int       miraicore_KUInt;
typedef unsigned long long miraicore_KULong;
typedef float              miraicore_KFloat;
typedef double             miraicore_KDouble;
#ifndef _MSC_VER
typedef float __attribute__ ((__vector_size__ (16))) miraicore_KVector128;
#else
#include <xmmintrin.h>
typedef __m128 miraicore_KVector128;
#endif
typedef void*              miraicore_KNativePtr;
struct miraicore_KType;
typedef struct miraicore_KType miraicore_KType;

typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Byte;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Short;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Int;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Long;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Float;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Double;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Char;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Boolean;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Unit;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_IMirai;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_Bot;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_coroutines_CompletableJob;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Friend;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Stranger;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_EventChannel;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ContactList;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_MiraiLogger;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Throwable;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Group;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_action_BotNudge;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_Bot_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_List;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_sequences_Sequence;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_BotFactory;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_ByteArray;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_BotFactory_BotConfigurationLambda;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_BotFactory_INSTANCE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Function1;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_FileCacheStrategy;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_IntArray;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageChain;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_FileMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Image;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ContactOrBot;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_LowLevelApiAccessor;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_FriendInfo;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_StrangerInfo;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_BotIsBeingMutedException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_OtherClient;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Member;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_NormalMember;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_User;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_UserOrBot;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Platform;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_MemberPermission;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Function0;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_AnonymousMember;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_action_MemberNudge;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_AudioSupported;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_AvatarSpec;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_AvatarSpec_SMALLEST;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_AvatarSpec_SMALL;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_AvatarSpec_MEDIUM;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_AvatarSpec_LARGE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_AvatarSpec_LARGEST;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_AvatarSpec_ORIGINAL;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Message;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_ANDROID_PAD;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_AOL_CHAOJIHUIYUAN;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_AOL_HUIYUAN;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_AOL_SQQ;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_CAR;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_HRTX_IPHONE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_HRTX_PC;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MC_3G;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MISRO_MSG;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_ANDROID;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_ANDROID_NEW;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_HD;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_HD_NEW;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_IPAD;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_IPAD_NEW;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_IPHONE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_OTHER;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_PC_QQ;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_PC_TIM;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_MOBILE_WINPHONE_NEW;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_QQ_FORELDER;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_QQ_SERVICE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_TV_QQ;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_WIN8;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_WINPHONE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_ClientKind_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Contact;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Contact_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_FileSupported;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_file_RemoteFiles;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_action_FriendNudge;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_Announcements;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_GroupSettings;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Group_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_MemberPermission_MEMBER;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_MemberPermission_ADMINISTRATOR;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_MemberPermission_OWNER;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_MessageTooLargeException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Any;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_PermissionDeniedException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Platform_IOS;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Platform_MOBILE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Platform_WINDOWS;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_Platform_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason_MESSAGE_TOO_LARGE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason_BOT_MUTED;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason_GROUP_CHAT_LIMITED;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason_AT_ALL_LIMITED;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_TempUser;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_action_UserNudge;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_action_Nudge;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_OnlineAnnouncement;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_Announcement;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_Announcement_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Array;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_serialization_encoding_Decoder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_serialization_encoding_Encoder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_serialization_KSerializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFile;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFolder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFolder_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessages;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingSupported;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_FriendInfoImpl;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorType;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_Map;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_GroupHonorTypeSerializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorType_TALKATIVE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorType_PERFORMER;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorType_LEGEND;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorType_STRONG_NEWBIE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorType_EMOTION;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorType_ACTIVE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorType_EXCLUSIVE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupHonorType_MANAGE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_GroupInfo;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_MemberInfo;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_ONLINE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_OFFLINE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_AWAY;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_INVISIBLE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_BUSY;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_Q_ME;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_DND;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_RECEIVE_OFFLINE_MESSAGE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_UNKNOWN;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_OnlineStatus_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_Factory;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_UserInfo;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_UserProfile;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_UserProfile_Sex;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_UserProfile_Sex_MALE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_UserProfile_Sex_FEMALE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_data_UserProfile_Sex_UNKNOWN;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_coroutines_CoroutineScope;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_coroutines_CoroutineContext;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_AbstractEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_coroutines_sync_Mutex;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_BroadcastControllable;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_CancellableEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_ConcurrencyKind;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_ConcurrencyKind_CONCURRENT;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_ConcurrencyKind_LOCKED;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_Event;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_EventPriority;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_EventPriority_HIGHEST;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_EventPriority_HIGH;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_EventPriority_NORMAL;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_EventPriority_LOW;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_EventPriority_LOWEST;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_EventPriority_MONITOR;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_ExceptionInEventChannelFilterException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_GlobalEventChannel;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_coroutines_flow_Flow;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_InternalGlobalEventChannelProvider;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_ListeningStatus;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_ListeningStatus_LISTENING;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_ListeningStatus_STOPPED;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_MessageSelectionTimeoutException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupOperableEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MessagePostSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSource;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_AbstractMessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_ExternalResource;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotActiveEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotAvatarChangedEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Active;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Retrieve;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Active;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_CauseAware;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotOnlineEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotPassiveEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_EventCancelledException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendAddEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendAvatarChangedEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendDeleteEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_MessageReceipt;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupAwareMessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupMemberEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Active;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Retrieve;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Quit;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MessagePreSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_MessageSyncEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_OtherClientEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_OtherClientOfflineEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_StrangerAddEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_StrangerEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_StrangerRelationChangeEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_StrangerRelationChangeEvent_Deleted;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_StrangerRelationChangeEvent_Friended;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_TempMessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_TempMessagePostSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_TempMessagePreSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_UserEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_UserMessageEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_event_events_UserMessagePreSendEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_internal_event_VerboseEvent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_internal_message_MessageSourceSerializerImpl;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_internal_network_Packet;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_internal_network_Packet_NoEventLog;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_internal_network_Packet_NoLog;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_MessageSerializers;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_serialization_modules_SerializersModule;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_MessageSerializers_INSTANCE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_action_AsyncRecallResult;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_coroutines_Deferred;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_action_Nudge_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_code_CodableMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_text_StringBuilder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_code_MiraiCode;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_Iterable;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_Iterator;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageKey;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_At;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_FlashImage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_AudioCodec;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ServiceMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_SingleMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_PlainText;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Audio;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Voice;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_AbstractServiceMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_AbstractServiceMessage_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_At_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_At_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_AtAll;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Audio_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_AudioCodec_AMR;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_AudioCodec_SILK;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_AudioCodec_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_Collection;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_ListIterator;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ConstrainSingle;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_CustomMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Factory;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_io_ktor_utils_io_core_ByteReadPacket;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion_CustomMessageFullDataDeserializeInternalException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion_CustomMessageFullDataDeserializeUserException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_CustomMessageMetadata;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_CustomMessageMetadata_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Dice;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Dice_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Dice_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Face;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Face_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Face_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_FlashImage_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_FlashImage_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy_Default;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_MutableIterator;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_MutableListIterator;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_MutableList;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_HummerMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_HummerMessage_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ImageType;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Image_AsStringSerializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Image_Builder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Image_Builder_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Image_FallbackSerializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Image_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_text_Regex;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Image_Serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ImageType_PNG;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ImageType_BMP;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ImageType_JPG;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ImageType_GIF;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ImageType_APNG;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ImageType_UNKNOWN;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ImageType_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ImageType_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_InternalImageProtocol;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_InternalImageProtocol_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_LightApp;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_LightApp_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_LightApp_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MarketFace;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MarketFace_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_CharSequence;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Message_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_serialization_json_Json;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_serialization_StringFormat;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageContent;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageContent_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageMetadata;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_LONG;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_FORWARD;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_MUSIC_SHARE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_QuoteReply;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_GROUP;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_FRIEND;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_TEMP;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_STRANGER;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MusicKind;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MusicKind_NeteaseCloudMusic;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MusicKind_QQMusic;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MusicKind_MiguMusic;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MusicKind_KugouMusic;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MusicKind_KuwoMusic;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MusicShare;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MusicShare_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_MusicShare_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Factory;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Factory_INSTANCE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToFriend;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToFriend_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToGroup;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToGroup_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToStranger;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToStranger_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToTemp;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToTemp_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_PlainText_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_PlainText_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_PokeMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_PttMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_PttMessage_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RichMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RichMessage_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind_LONG;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind_FORWARD;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind_MUSIC_SHARE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ServiceMessage_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_ShowImageFlag;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_SingleMessage_Serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_visitor_MessageVisitor;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_visitor_MessageVisitorUnit;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage_Serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_VipFace;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_VipFace_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Voice_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_Voice_Key;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder_ItemBuilder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_network_CustomLoginFailedException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_network_ForceOfflineException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_network_LoginFailedException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_network_NoServerAvailableException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_network_NoStandardInputForCaptchaException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_network_RetryLaterException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_network_UnsupportedSMSLoginException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_network_UnsupportedSliderCaptchaException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_network_WrongPasswordException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_spi_AudioToSilkService;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_spi_AudioToSilkService_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_spi_BaseService;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_DeviceInfo;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_collections_MutableMap;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_io_ktor_utils_io_core_Input;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_MutableTypeSafeMap;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_random_Random;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_ranges_CharRange;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_Clock;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_DeserializationFailure;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_FailureResponse;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_MiraiFile;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_coroutines_CoroutineName;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_coroutines_sync_Semaphore;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_coroutines_SuspendFunction0;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_coroutines_Job;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Byte_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_io_ktor_utils_io_charsets_Charset;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlinx_serialization_descriptors_ClassSerialDescriptorBuilder;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_io_ktor_utils_io_errors_PosixException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_io_ktor_utils_io_errors_IOException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_HeartbeatStrategy;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_LoginSolver;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_HeartbeatStrategy_STAT_HB;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_HeartbeatStrategy_REGISTER;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_HeartbeatStrategy_NONE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol_ANDROID_PHONE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol_ANDROID_PAD;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol_ANDROID_WATCH;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol_IPAD;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol_MACOS;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version_$serializer;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_ExternalResource_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_FileCacheStrategy_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_LoginSolver_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_MiraiLogger_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_MiraiLogger_Factory;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_reflect_KClass;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_MiraiLogger_Factory_INSTANCE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_OverFileSizeMaxException;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_PlatformLogger;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_SilentLogger;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_SimpleLogger;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Function3;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Function2;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority_VERBOSE;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority_DEBUG;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority_INFO;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority_WARNING;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority_ERROR;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_AdjustedClock;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_ByteArrayPool;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_CheckableResponse;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_Clock_SystemDefault;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_reflect_KType;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_kotlin_Exception;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_JsonStruct;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_io_ktor_utils_io_core_Output;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_MiraiFile_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_Services;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_Symbol;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_Symbol_Companion;
typedef struct {
  miraicore_KNativePtr pinned;
} miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap_Companion;

extern void mirai_init();

typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(miraicore_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  miraicore_KBoolean (*IsInstance)(miraicore_KNativePtr ref, const miraicore_KType* type);
  miraicore_kref_kotlin_Byte (*createNullableByte)(miraicore_KByte);
  miraicore_kref_kotlin_Short (*createNullableShort)(miraicore_KShort);
  miraicore_kref_kotlin_Int (*createNullableInt)(miraicore_KInt);
  miraicore_kref_kotlin_Long (*createNullableLong)(miraicore_KLong);
  miraicore_kref_kotlin_Float (*createNullableFloat)(miraicore_KFloat);
  miraicore_kref_kotlin_Double (*createNullableDouble)(miraicore_KDouble);
  miraicore_kref_kotlin_Char (*createNullableChar)(miraicore_KChar);
  miraicore_kref_kotlin_Boolean (*createNullableBoolean)(miraicore_KBoolean);
  miraicore_kref_kotlin_Unit (*createNullableUnit)(void);

  /* User functions. */
  struct {
    struct {
      struct {
        struct {
          struct {
            miraicore_kref_net_mamoe_mirai_IMirai (*get_Mirai)();
            miraicore_kref_kotlinx_coroutines_CompletableJob (*get_supervisorJob)(miraicore_kref_net_mamoe_mirai_Bot thiz);
            miraicore_KBoolean (*containsFriend)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_KLong id);
            miraicore_KBoolean (*containsGroup)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_KLong id);
            struct {
              miraicore_KType* (*_type)(void);
              miraicore_kref_net_mamoe_mirai_contact_Friend (*get_asFriend)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_asStranger)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_kref_net_mamoe_mirai_utils_BotConfiguration (*get_configuration)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_kref_net_mamoe_mirai_event_EventChannel (*get_eventChannel)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_kref_net_mamoe_mirai_contact_ContactList (*get_friends)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_kref_net_mamoe_mirai_contact_ContactList (*get_groups)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_KBoolean (*get_isOnline)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_kref_net_mamoe_mirai_utils_MiraiLogger (*get_logger)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_kref_net_mamoe_mirai_contact_ContactList (*get_otherClients)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              miraicore_kref_net_mamoe_mirai_contact_ContactList (*get_strangers)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              void (*close)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              void (*close_)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_kref_kotlin_Throwable cause);
              miraicore_kref_net_mamoe_mirai_contact_Friend (*getFriend)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_KLong id);
              miraicore_kref_net_mamoe_mirai_contact_Friend (*getFriendOrFail)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_KLong id);
              miraicore_kref_net_mamoe_mirai_contact_Group (*getGroup)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_KLong id);
              miraicore_kref_net_mamoe_mirai_contact_Group (*getGroupOrFail)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_KLong id);
              miraicore_kref_net_mamoe_mirai_contact_Stranger (*getStranger)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_KLong id);
              miraicore_kref_net_mamoe_mirai_contact_Stranger (*getStrangerOrFail)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_KLong id);
              miraicore_kref_net_mamoe_mirai_message_action_BotNudge (*nudge)(miraicore_kref_net_mamoe_mirai_Bot thiz);
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_Bot_Companion (*_instance)();
                miraicore_kref_kotlin_collections_List (*get_instances)(miraicore_kref_net_mamoe_mirai_Bot_Companion thiz);
                miraicore_kref_kotlin_sequences_Sequence (*get_instancesSequence)(miraicore_kref_net_mamoe_mirai_Bot_Companion thiz);
                miraicore_kref_net_mamoe_mirai_Bot (*findInstance)(miraicore_kref_net_mamoe_mirai_Bot_Companion thiz, miraicore_KLong qq);
                miraicore_kref_net_mamoe_mirai_Bot (*getInstance)(miraicore_kref_net_mamoe_mirai_Bot_Companion thiz, miraicore_KLong qq);
                miraicore_kref_net_mamoe_mirai_Bot (*getInstanceOrNull)(miraicore_kref_net_mamoe_mirai_Bot_Companion thiz, miraicore_KLong qq);
              } Companion;
            } Bot;
            struct {
              miraicore_KType* (*_type)(void);
              miraicore_kref_net_mamoe_mirai_Bot (*newBot)(miraicore_kref_net_mamoe_mirai_BotFactory thiz, miraicore_KLong qq, miraicore_kref_kotlin_ByteArray passwordMd5);
              miraicore_kref_net_mamoe_mirai_Bot (*newBot_)(miraicore_kref_net_mamoe_mirai_BotFactory thiz, miraicore_KLong qq, miraicore_kref_kotlin_ByteArray passwordMd5, miraicore_kref_net_mamoe_mirai_BotFactory_BotConfigurationLambda configuration);
              miraicore_kref_net_mamoe_mirai_Bot (*newBot__)(miraicore_kref_net_mamoe_mirai_BotFactory thiz, miraicore_KLong qq, miraicore_kref_kotlin_ByteArray passwordMd5, miraicore_kref_net_mamoe_mirai_utils_BotConfiguration configuration);
              miraicore_kref_net_mamoe_mirai_Bot (*newBot___)(miraicore_kref_net_mamoe_mirai_BotFactory thiz, miraicore_KLong qq, const char* password);
              miraicore_kref_net_mamoe_mirai_Bot (*newBot____)(miraicore_kref_net_mamoe_mirai_BotFactory thiz, miraicore_KLong qq, const char* password, miraicore_kref_net_mamoe_mirai_BotFactory_BotConfigurationLambda configuration);
              miraicore_kref_net_mamoe_mirai_Bot (*newBot_____)(miraicore_kref_net_mamoe_mirai_BotFactory thiz, miraicore_KLong qq, const char* password, miraicore_kref_net_mamoe_mirai_utils_BotConfiguration configuration);
              struct {
                miraicore_KType* (*_type)(void);
                void (*invoke)(miraicore_kref_net_mamoe_mirai_BotFactory_BotConfigurationLambda thiz, miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz1);
              } BotConfigurationLambda;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_BotFactory_INSTANCE (*_instance)();
                miraicore_kref_net_mamoe_mirai_Bot (*newBot)(miraicore_kref_net_mamoe_mirai_BotFactory_INSTANCE thiz, miraicore_KLong qq, miraicore_kref_kotlin_ByteArray passwordMd5, miraicore_kref_net_mamoe_mirai_utils_BotConfiguration configuration);
                miraicore_kref_net_mamoe_mirai_Bot (*newBot_)(miraicore_kref_net_mamoe_mirai_BotFactory_INSTANCE thiz, miraicore_KLong qq, miraicore_kref_kotlin_ByteArray passwordMd5, miraicore_kref_kotlin_Function1 configuration);
                miraicore_kref_net_mamoe_mirai_Bot (*newBot__)(miraicore_kref_net_mamoe_mirai_BotFactory_INSTANCE thiz, miraicore_KLong qq, const char* password, miraicore_kref_net_mamoe_mirai_utils_BotConfiguration configuration);
                miraicore_kref_net_mamoe_mirai_Bot (*newBot___)(miraicore_kref_net_mamoe_mirai_BotFactory_INSTANCE thiz, miraicore_KLong qq, const char* password, miraicore_kref_kotlin_Function1 configuration);
              } INSTANCE;
            } BotFactory;
            struct {
              miraicore_KType* (*_type)(void);
              miraicore_kref_net_mamoe_mirai_BotFactory (*get_BotFactory)(miraicore_kref_net_mamoe_mirai_IMirai thiz);
              miraicore_kref_net_mamoe_mirai_utils_FileCacheStrategy (*get_FileCacheStrategy)(miraicore_kref_net_mamoe_mirai_IMirai thiz);
              void (*set_FileCacheStrategy)(miraicore_kref_net_mamoe_mirai_IMirai thiz, miraicore_kref_net_mamoe_mirai_utils_FileCacheStrategy set);
              miraicore_KLong (*calculateGroupCodeByGroupUin)(miraicore_kref_net_mamoe_mirai_IMirai thiz, miraicore_KLong groupUin);
              miraicore_KLong (*calculateGroupUinByGroupCode)(miraicore_kref_net_mamoe_mirai_IMirai thiz, miraicore_KLong groupCode);
              miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource (*constructMessageSource)(miraicore_kref_net_mamoe_mirai_IMirai thiz, miraicore_KLong botId, miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind kind, miraicore_KLong fromId, miraicore_KLong targetId, miraicore_kref_kotlin_IntArray ids, miraicore_KInt time, miraicore_kref_kotlin_IntArray internalIds, miraicore_kref_net_mamoe_mirai_message_data_MessageChain originalMessage);
              miraicore_kref_net_mamoe_mirai_message_data_FileMessage (*createFileMessage)(miraicore_kref_net_mamoe_mirai_IMirai thiz, const char* id, miraicore_KInt internalId, const char* name, miraicore_KLong size);
              miraicore_kref_net_mamoe_mirai_message_data_Image (*createImage)(miraicore_kref_net_mamoe_mirai_IMirai thiz, const char* imageId);
              miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage (*createUnsupportedMessage)(miraicore_kref_net_mamoe_mirai_IMirai thiz, miraicore_kref_kotlin_ByteArray struct_);
              miraicore_KLong (*getUin)(miraicore_kref_net_mamoe_mirai_IMirai thiz, miraicore_kref_net_mamoe_mirai_contact_ContactOrBot contactOrBot);
            } IMirai;
            struct {
              miraicore_KType* (*_type)(void);
              miraicore_kref_net_mamoe_mirai_contact_Friend (*newFriend)(miraicore_kref_net_mamoe_mirai_LowLevelApiAccessor thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_net_mamoe_mirai_data_FriendInfo friendInfo);
              miraicore_kref_net_mamoe_mirai_contact_Stranger (*newStranger)(miraicore_kref_net_mamoe_mirai_LowLevelApiAccessor thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_net_mamoe_mirai_data_StrangerInfo strangerInfo);
            } LowLevelApiAccessor;
            struct {
              miraicore_KInt (*get_botMuteRemaining)(miraicore_kref_net_mamoe_mirai_contact_BotIsBeingMutedException thiz);
              const char* (*get_deviceKind)(miraicore_kref_net_mamoe_mirai_contact_OtherClient thiz);
              const char* (*get_deviceName)(miraicore_kref_net_mamoe_mirai_contact_OtherClient thiz);
              miraicore_KBoolean (*get_isBotMuted)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
              miraicore_KBoolean (*get_isFriend)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              miraicore_KBoolean (*get_isMuted)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz);
              miraicore_KBoolean (*get_isStranger)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              const char* (*get_nameCardOrNick)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              const char* (*get_nameCardOrNick_)(miraicore_kref_net_mamoe_mirai_contact_User thiz);
              const char* (*get_nameCardOrNick__)(miraicore_kref_net_mamoe_mirai_contact_UserOrBot thiz);
              miraicore_kref_net_mamoe_mirai_contact_Platform (*get_platform)(miraicore_kref_net_mamoe_mirai_contact_OtherClient thiz);
              const char* (*get_remarkOrNameCard)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              const char* (*get_remarkOrNameCardOrNick)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              const char* (*get_remarkOrNick)(miraicore_kref_net_mamoe_mirai_contact_User thiz);
              miraicore_kref_net_mamoe_mirai_contact_Friend (*asFriend)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              miraicore_kref_net_mamoe_mirai_contact_Friend (*asFriend_)(miraicore_kref_net_mamoe_mirai_contact_Stranger thiz);
              miraicore_kref_net_mamoe_mirai_contact_Friend (*asFriendOrNull)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              miraicore_kref_net_mamoe_mirai_contact_Friend (*asFriendOrNull_)(miraicore_kref_net_mamoe_mirai_contact_Stranger thiz);
              miraicore_kref_net_mamoe_mirai_contact_Stranger (*asStranger)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              miraicore_kref_net_mamoe_mirai_contact_Stranger (*asStrangerOrNull)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              void (*checkBotPermission)(miraicore_kref_net_mamoe_mirai_contact_Group thiz, miraicore_kref_net_mamoe_mirai_contact_MemberPermission required, miraicore_kref_kotlin_Function0 lazyMessage);
              miraicore_kref_net_mamoe_mirai_contact_NormalMember (*getMember)(miraicore_kref_net_mamoe_mirai_contact_Group thiz, miraicore_KLong id);
              miraicore_kref_net_mamoe_mirai_contact_NormalMember (*getMemberOrFail)(miraicore_kref_net_mamoe_mirai_contact_Group thiz, miraicore_KLong id);
              miraicore_KBoolean (*isAdministrator)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              miraicore_KBoolean (*isAdministrator_)(miraicore_kref_net_mamoe_mirai_contact_MemberPermission thiz);
              miraicore_KBoolean (*isOperator)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              miraicore_KBoolean (*isOperator_)(miraicore_kref_net_mamoe_mirai_contact_MemberPermission thiz);
              miraicore_KBoolean (*isOwner)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              miraicore_KBoolean (*isOwner_)(miraicore_kref_net_mamoe_mirai_contact_MemberPermission thiz);
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_anonymousId)(miraicore_kref_net_mamoe_mirai_contact_AnonymousMember thiz);
                miraicore_kref_net_mamoe_mirai_message_action_MemberNudge (*nudge)(miraicore_kref_net_mamoe_mirai_contact_AnonymousMember thiz);
              } AnonymousMember;
              struct {
                miraicore_KType* (*_type)(void);
              } AudioSupported;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get_size)(miraicore_kref_net_mamoe_mirai_contact_AvatarSpec thiz);
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_AvatarSpec (*get)(); /* enum entry for SMALLEST. */
                } SMALLEST;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_AvatarSpec (*get)(); /* enum entry for SMALL. */
                } SMALL;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_AvatarSpec (*get)(); /* enum entry for MEDIUM. */
                } MEDIUM;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_AvatarSpec (*get)(); /* enum entry for LARGE. */
                } LARGE;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_AvatarSpec (*get)(); /* enum entry for LARGEST. */
                } LARGEST;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_AvatarSpec (*get)(); /* enum entry for ORIGINAL. */
                } ORIGINAL;
              } AvatarSpec;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_contact_BotIsBeingMutedException (*BotIsBeingMutedException)(miraicore_kref_net_mamoe_mirai_contact_Group target);
                miraicore_kref_net_mamoe_mirai_contact_BotIsBeingMutedException (*BotIsBeingMutedException_)(miraicore_kref_net_mamoe_mirai_contact_Group target, miraicore_kref_net_mamoe_mirai_message_data_Message originalMessage);
                const char* (*get_message)(miraicore_kref_net_mamoe_mirai_contact_BotIsBeingMutedException thiz);
                miraicore_kref_net_mamoe_mirai_contact_Group (*get_target)(miraicore_kref_net_mamoe_mirai_contact_BotIsBeingMutedException thiz);
              } BotIsBeingMutedException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get_id)(miraicore_kref_net_mamoe_mirai_contact_ClientKind thiz);
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for ANDROID_PAD. */
                } ANDROID_PAD;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for AOL_CHAOJIHUIYUAN. */
                } AOL_CHAOJIHUIYUAN;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for AOL_HUIYUAN. */
                } AOL_HUIYUAN;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for AOL_SQQ. */
                } AOL_SQQ;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for CAR. */
                } CAR;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for HRTX_IPHONE. */
                } HRTX_IPHONE;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for HRTX_PC. */
                } HRTX_PC;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MC_3G. */
                } MC_3G;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MISRO_MSG. */
                } MISRO_MSG;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_ANDROID. */
                } MOBILE_ANDROID;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_ANDROID_NEW. */
                } MOBILE_ANDROID_NEW;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_HD. */
                } MOBILE_HD;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_HD_NEW. */
                } MOBILE_HD_NEW;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_IPAD. */
                } MOBILE_IPAD;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_IPAD_NEW. */
                } MOBILE_IPAD_NEW;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_IPHONE. */
                } MOBILE_IPHONE;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_OTHER. */
                } MOBILE_OTHER;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_PC_QQ. */
                } MOBILE_PC_QQ;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_PC_TIM. */
                } MOBILE_PC_TIM;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for MOBILE_WINPHONE_NEW. */
                } MOBILE_WINPHONE_NEW;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for QQ_FORELDER. */
                } QQ_FORELDER;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for QQ_SERVICE. */
                } QQ_SERVICE;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for TV_QQ. */
                } TV_QQ;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for WIN8. */
                } WIN8;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(); /* enum entry for WINPHONE. */
                } WINPHONE;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get)(miraicore_kref_net_mamoe_mirai_contact_ClientKind_Companion thiz, miraicore_KInt id);
                } Companion;
              } ClientKind;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_contact_Contact thiz);
                miraicore_KLong (*get_id)(miraicore_kref_net_mamoe_mirai_contact_Contact thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_Contact_Companion (*_instance)();
                } Companion;
              } Contact;
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_avatarUrl)(miraicore_kref_net_mamoe_mirai_contact_ContactOrBot thiz);
                miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_contact_ContactOrBot thiz);
                miraicore_KLong (*get_id)(miraicore_kref_net_mamoe_mirai_contact_ContactOrBot thiz);
                const char* (*avatarUrl)(miraicore_kref_net_mamoe_mirai_contact_ContactOrBot thiz, miraicore_kref_net_mamoe_mirai_contact_AvatarSpec spec);
              } ContactOrBot;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_contact_file_RemoteFiles (*get_files)(miraicore_kref_net_mamoe_mirai_contact_FileSupported thiz);
              } FileSupported;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_message_action_FriendNudge (*nudge)(miraicore_kref_net_mamoe_mirai_contact_Friend thiz);
              } Friend;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_contact_announcement_Announcements (*get_announcements)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                const char* (*get_avatarUrl)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_botAsMember)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                miraicore_KInt (*get_botMuteRemaining)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get_botPermission)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                miraicore_KLong (*get_id)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                miraicore_kref_net_mamoe_mirai_contact_ContactList (*get_members)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                const char* (*get_name)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                void (*set_name)(miraicore_kref_net_mamoe_mirai_contact_Group thiz, const char* set);
                miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_owner)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                miraicore_kref_net_mamoe_mirai_contact_GroupSettings (*get_settings)(miraicore_kref_net_mamoe_mirai_contact_Group thiz);
                const char* (*avatarUrl)(miraicore_kref_net_mamoe_mirai_contact_Group thiz, miraicore_kref_net_mamoe_mirai_contact_AvatarSpec spec);
                miraicore_KBoolean (*contains)(miraicore_kref_net_mamoe_mirai_contact_Group thiz, miraicore_KLong id);
                miraicore_KBoolean (*contains_)(miraicore_kref_net_mamoe_mirai_contact_Group thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get)(miraicore_kref_net_mamoe_mirai_contact_Group thiz, miraicore_KLong id);
                miraicore_kref_net_mamoe_mirai_contact_NormalMember (*getOrFail)(miraicore_kref_net_mamoe_mirai_contact_Group thiz, miraicore_KLong id);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_Group_Companion (*_instance)();
                } Companion;
              } Group;
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_entranceAnnouncement)(miraicore_kref_net_mamoe_mirai_contact_GroupSettings thiz);
                void (*set_entranceAnnouncement)(miraicore_kref_net_mamoe_mirai_contact_GroupSettings thiz, const char* set);
                miraicore_KBoolean (*get_isAllowMemberInvite)(miraicore_kref_net_mamoe_mirai_contact_GroupSettings thiz);
                void (*set_isAllowMemberInvite)(miraicore_kref_net_mamoe_mirai_contact_GroupSettings thiz, miraicore_KBoolean set);
                miraicore_KBoolean (*get_isAnonymousChatEnabled)(miraicore_kref_net_mamoe_mirai_contact_GroupSettings thiz);
                void (*set_isAnonymousChatEnabled)(miraicore_kref_net_mamoe_mirai_contact_GroupSettings thiz, miraicore_KBoolean set);
                miraicore_KBoolean (*get_isAutoApproveEnabled)(miraicore_kref_net_mamoe_mirai_contact_GroupSettings thiz);
                miraicore_KBoolean (*get_isMuteAll)(miraicore_kref_net_mamoe_mirai_contact_GroupSettings thiz);
                void (*set_isMuteAll)(miraicore_kref_net_mamoe_mirai_contact_GroupSettings thiz, miraicore_KBoolean set);
              } GroupSettings;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
                const char* (*get_nameCard)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
                miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get_permission)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
                const char* (*get_specialTitle)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
                miraicore_kref_net_mamoe_mirai_message_action_MemberNudge (*nudge)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
              } Member;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get_level)(miraicore_kref_net_mamoe_mirai_contact_MemberPermission thiz);
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get)(); /* enum entry for MEMBER. */
                } MEMBER;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get)(); /* enum entry for ADMINISTRATOR. */
                } ADMINISTRATOR;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get)(); /* enum entry for OWNER. */
                } OWNER;
              } MemberPermission;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_contact_MessageTooLargeException (*MessageTooLargeException)(miraicore_kref_net_mamoe_mirai_contact_Contact target, miraicore_kref_net_mamoe_mirai_message_data_Message originalMessage, miraicore_kref_net_mamoe_mirai_message_data_Message messageAfterEvent, const char* exceptionMessage);
                const char* (*get_message)(miraicore_kref_net_mamoe_mirai_contact_MessageTooLargeException thiz);
                miraicore_kref_net_mamoe_mirai_message_data_Message (*get_messageAfterEvent)(miraicore_kref_net_mamoe_mirai_contact_MessageTooLargeException thiz);
                miraicore_kref_net_mamoe_mirai_contact_Contact (*get_target)(miraicore_kref_net_mamoe_mirai_contact_MessageTooLargeException thiz);
              } MessageTooLargeException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KBoolean (*get_isMuted)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz);
                miraicore_KInt (*get_joinTimestamp)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz);
                miraicore_KInt (*get_lastSpeakTimestamp)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz);
                miraicore_KInt (*get_muteTimeRemaining)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz);
                const char* (*get_nameCard)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz);
                void (*set_nameCard)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz, const char* set);
                const char* (*get_specialTitle)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz);
                void (*set_specialTitle)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz, const char* set);
                miraicore_kref_net_mamoe_mirai_message_action_MemberNudge (*nudge)(miraicore_kref_net_mamoe_mirai_contact_NormalMember thiz);
              } NormalMember;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_contact_OtherClient thiz);
                miraicore_KLong (*get_id)(miraicore_kref_net_mamoe_mirai_contact_OtherClient thiz);
                miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo (*get_info)(miraicore_kref_net_mamoe_mirai_contact_OtherClient thiz);
              } OtherClient;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo (*OtherClientInfo)(miraicore_KInt appId, miraicore_kref_net_mamoe_mirai_contact_Platform platform, const char* deviceName, const char* deviceKind);
                miraicore_KInt (*get_appId)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
                const char* (*get_deviceKind)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
                const char* (*get_deviceName)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
                miraicore_kref_net_mamoe_mirai_contact_Platform (*get_platform)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
                miraicore_KInt (*component1)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
                miraicore_kref_net_mamoe_mirai_contact_Platform (*component2)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
                const char* (*component3)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
                const char* (*component4)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
                miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo (*copy)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz, miraicore_KInt appId, miraicore_kref_net_mamoe_mirai_contact_Platform platform, const char* deviceName, const char* deviceKind);
                miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz, miraicore_kref_kotlin_Any other);
                miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
                const char* (*toString)(miraicore_kref_net_mamoe_mirai_contact_OtherClientInfo thiz);
              } OtherClientInfo;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_contact_PermissionDeniedException (*PermissionDeniedException)();
                miraicore_kref_net_mamoe_mirai_contact_PermissionDeniedException (*PermissionDeniedException_)(const char* message);
              } PermissionDeniedException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get_platformId)(miraicore_kref_net_mamoe_mirai_contact_Platform thiz);
                miraicore_KInt (*get_terminalId)(miraicore_kref_net_mamoe_mirai_contact_Platform thiz);
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_Platform (*get)(); /* enum entry for IOS. */
                } IOS;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_Platform (*get)(); /* enum entry for MOBILE. */
                } MOBILE;
                struct {
                  miraicore_kref_net_mamoe_mirai_contact_Platform (*get)(); /* enum entry for WINDOWS. */
                } WINDOWS;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_Platform_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_contact_Platform (*getByTerminalId)(miraicore_kref_net_mamoe_mirai_contact_Platform_Companion thiz, miraicore_KInt terminalId);
                } Companion;
              } Platform;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException (*SendMessageFailedException)(miraicore_kref_net_mamoe_mirai_contact_Contact target, miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason reason, miraicore_kref_net_mamoe_mirai_message_data_Message originalMessage);
                miraicore_kref_net_mamoe_mirai_message_data_Message (*get_originalMessage)(miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException thiz);
                miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason (*get_reason)(miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException thiz);
                miraicore_kref_net_mamoe_mirai_contact_Contact (*get_target)(miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason (*get)(); /* enum entry for MESSAGE_TOO_LARGE. */
                  } MESSAGE_TOO_LARGE;
                  struct {
                    miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason (*get)(); /* enum entry for BOT_MUTED. */
                  } BOT_MUTED;
                  struct {
                    miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason (*get)(); /* enum entry for GROUP_CHAT_LIMITED. */
                  } GROUP_CHAT_LIMITED;
                  struct {
                    miraicore_kref_net_mamoe_mirai_contact_SendMessageFailedException_Reason (*get)(); /* enum entry for AT_ALL_LIMITED. */
                  } AT_ALL_LIMITED;
                } Reason;
              } SendMessageFailedException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge (*nudge)(miraicore_kref_net_mamoe_mirai_contact_Stranger thiz);
              } Stranger;
              struct {
                miraicore_KType* (*_type)(void);
              } TempUser;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KLong (*get_id)(miraicore_kref_net_mamoe_mirai_contact_User thiz);
                const char* (*get_remark)(miraicore_kref_net_mamoe_mirai_contact_User thiz);
                miraicore_kref_net_mamoe_mirai_message_action_UserNudge (*nudge)(miraicore_kref_net_mamoe_mirai_contact_User thiz);
              } User;
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_nick)(miraicore_kref_net_mamoe_mirai_contact_UserOrBot thiz);
                miraicore_kref_net_mamoe_mirai_message_action_Nudge (*nudge)(miraicore_kref_net_mamoe_mirai_contact_UserOrBot thiz);
              } UserOrBot;
              struct {
                miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_contact_announcement_OnlineAnnouncement thiz);
                miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement (*OfflineAnnouncement_new2)(const char* content, miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters parameters);
                miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement (*OfflineAnnouncement_new3)(const char* content, miraicore_kref_kotlin_Function1 parameters);
                miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement (*OfflineAnnouncement_new)(miraicore_kref_net_mamoe_mirai_contact_announcement_Announcement from);
                miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters (*buildAnnouncementParameters)(miraicore_kref_kotlin_Function1 builderAction);
                miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement (*toOffline)(miraicore_kref_net_mamoe_mirai_contact_announcement_Announcement thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  const char* (*get_content)(miraicore_kref_net_mamoe_mirai_contact_announcement_Announcement thiz);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters (*get_parameters)(miraicore_kref_net_mamoe_mirai_contact_announcement_Announcement thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_Announcement_Companion (*_instance)();
                  } Companion;
                } Announcement;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage (*AnnouncementImage)(miraicore_KInt seen1, const char* id, miraicore_KInt height, miraicore_KInt width, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_KInt (*get_height)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage thiz);
                  const char* (*get_id)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage thiz);
                  miraicore_KInt (*get_width)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage thiz);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage (*deserialize)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_Companion (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_Companion thiz);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage (*create)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_Companion thiz, const char* id, miraicore_KInt height, miraicore_KInt width);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage_Companion thiz);
                  } Companion;
                } AnnouncementImage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters (*AnnouncementParameters)(miraicore_KInt seen1, miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage image, miraicore_KBoolean sendToNewMember, miraicore_KBoolean isPinned, miraicore_KBoolean showEditCard, miraicore_KBoolean showPopup, miraicore_KBoolean requireConfirmation, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage (*get_image)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz);
                  miraicore_KBoolean (*get_isPinned)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz);
                  miraicore_KBoolean (*get_requireConfirmation)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz);
                  miraicore_KBoolean (*get_sendToNewMember)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz);
                  miraicore_KBoolean (*get_showEditCard)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz);
                  miraicore_KBoolean (*get_showPopup)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder (*builder)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters (*deserialize)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_Companion (*_instance)();
                    miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters (*get_DEFAULT)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_Companion thiz);
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters_Companion thiz);
                  } Companion;
                } AnnouncementParameters;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder (*AnnouncementParametersBuilder)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters prototype);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage (*get_image)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz);
                  void (*set_image)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage set);
                  miraicore_KBoolean (*get_isPinned)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz);
                  void (*set_isPinned)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean set);
                  miraicore_KBoolean (*get_requireConfirmation)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz);
                  void (*set_requireConfirmation)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean set);
                  miraicore_KBoolean (*get_sendToNewMember)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz);
                  void (*set_sendToNewMember)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean set);
                  miraicore_KBoolean (*get_showEditCard)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz);
                  void (*set_showEditCard)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean set);
                  miraicore_KBoolean (*get_showPopup)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz);
                  void (*set_showPopup)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean set);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters (*build)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder (*image)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementImage image);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder (*isPinned)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean isPinned);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder (*requireConfirmation)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean requireConfirmation);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder (*sendToNewMember)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean sendToNewMember);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder (*showEditCard)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean isShowEditCard);
                  miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder (*showPopup)(miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParametersBuilder thiz, miraicore_KBoolean showPopup);
                } AnnouncementParametersBuilder;
                struct {
                  miraicore_KType* (*_type)(void);
                } Announcements;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement_Companion (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement_Companion thiz);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement (*create)(miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement_Companion thiz, const char* content, miraicore_kref_net_mamoe_mirai_contact_announcement_AnnouncementParameters parameters);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement (*create_)(miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement_Companion thiz, const char* content, miraicore_kref_kotlin_Function1 parameters);
                    miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement (*from)(miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement_Companion thiz, miraicore_kref_net_mamoe_mirai_contact_announcement_Announcement announcement);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_contact_announcement_OfflineAnnouncement_Companion thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                  } Companion;
                } OfflineAnnouncement;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_KBoolean (*get_allConfirmed)(miraicore_kref_net_mamoe_mirai_contact_announcement_OnlineAnnouncement thiz);
                  miraicore_KInt (*get_confirmedMembersCount)(miraicore_kref_net_mamoe_mirai_contact_announcement_OnlineAnnouncement thiz);
                  const char* (*get_fid)(miraicore_kref_net_mamoe_mirai_contact_announcement_OnlineAnnouncement thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_contact_announcement_OnlineAnnouncement thiz);
                  miraicore_KLong (*get_publicationTime)(miraicore_kref_net_mamoe_mirai_contact_announcement_OnlineAnnouncement thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_sender)(miraicore_kref_net_mamoe_mirai_contact_announcement_OnlineAnnouncement thiz);
                  miraicore_KLong (*get_senderId)(miraicore_kref_net_mamoe_mirai_contact_announcement_OnlineAnnouncement thiz);
                } OnlineAnnouncement;
              } announcement;
              struct {
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_KLong (*get_expiryTime)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFile thiz);
                  miraicore_kref_kotlin_ByteArray (*get_md5)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFile thiz);
                  miraicore_kref_kotlin_ByteArray (*get_sha1)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFile thiz);
                  miraicore_KLong (*get_size)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFile thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_FileMessage (*toMessage)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFile thiz);
                } AbsoluteFile;
                struct {
                  miraicore_KType* (*_type)(void);
                  const char* (*get_absolutePath)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  miraicore_kref_net_mamoe_mirai_contact_FileSupported (*get_contact)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  const char* (*get_id)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  miraicore_KBoolean (*get_isFile)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  miraicore_KBoolean (*get_isFolder)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  miraicore_KLong (*get_lastModifiedTime)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  const char* (*get_name)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFolder (*get_parent)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  miraicore_KLong (*get_uploadTime)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  miraicore_KLong (*get_uploaderId)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder_Companion (*_instance)();
                    const char* (*get_extension)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder_Companion thiz, miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz1);
                    const char* (*get_nameWithoutExtension)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder_Companion thiz, miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFileFolder thiz1);
                  } Companion;
                } AbsoluteFileFolder;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_KInt (*get_contentsCount)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFolder thiz);
                  miraicore_KBoolean (*isEmpty)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFolder thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFolder_Companion (*_instance)();
                    const char* (*get_ROOT_FOLDER_ID)(miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFolder_Companion thiz);
                  } Companion;
                } AbsoluteFolder;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_FileSupported (*get_contact)(miraicore_kref_net_mamoe_mirai_contact_file_RemoteFiles thiz);
                  miraicore_kref_net_mamoe_mirai_contact_file_AbsoluteFolder (*get_root)(miraicore_kref_net_mamoe_mirai_contact_file_RemoteFiles thiz);
                } RemoteFiles;
              } file;
              struct {
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessage thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*get_contact)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessage thiz);
                  miraicore_kref_kotlin_IntArray (*get_ids)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessage thiz);
                  miraicore_kref_kotlin_IntArray (*get_internalIds)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessage thiz);
                  miraicore_KLong (*get_sender)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessage thiz);
                  miraicore_KLong (*get_target)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessage thiz);
                  miraicore_KLong (*get_time)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessage thiz);
                } RoamingMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter (*and_)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter thiz, miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter other);
                  miraicore_KBoolean (*invoke)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter thiz, miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessage roamingMessage);
                  miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter (*not_)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter thiz);
                  miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter (*or_)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter thiz, miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter other);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter_Companion (*_instance)();
                    miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter (*get_ANY)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter_Companion thiz);
                    miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter (*get_RECEIVED)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter_Companion thiz);
                    miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter (*get_SENT)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessageFilter_Companion thiz);
                  } Companion;
                } RoamingMessageFilter;
                struct {
                  miraicore_KType* (*_type)(void);
                } RoamingMessages;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingMessages (*get_roamingMessages)(miraicore_kref_net_mamoe_mirai_contact_roaming_RoamingSupported thiz);
                } RoamingSupported;
              } roaming;
            } contact;
            struct {
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_nick)(miraicore_kref_net_mamoe_mirai_data_FriendInfo thiz);
                const char* (*get_remark)(miraicore_kref_net_mamoe_mirai_data_FriendInfo thiz);
                void (*set_remark)(miraicore_kref_net_mamoe_mirai_data_FriendInfo thiz, const char* set);
                miraicore_KLong (*get_uin)(miraicore_kref_net_mamoe_mirai_data_FriendInfo thiz);
              } FriendInfo;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_data_FriendInfoImpl (*FriendInfoImpl)(miraicore_KLong uin, const char* nick, const char* remark);
                const char* (*get_nick)(miraicore_kref_net_mamoe_mirai_data_FriendInfoImpl thiz);
                void (*set_nick)(miraicore_kref_net_mamoe_mirai_data_FriendInfoImpl thiz, const char* set);
                const char* (*get_remark)(miraicore_kref_net_mamoe_mirai_data_FriendInfoImpl thiz);
                void (*set_remark)(miraicore_kref_net_mamoe_mirai_data_FriendInfoImpl thiz, const char* set);
                miraicore_KLong (*get_uin)(miraicore_kref_net_mamoe_mirai_data_FriendInfoImpl thiz);
              } FriendInfoImpl;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_data_GroupActiveData (*GroupActiveData)(miraicore_KInt seen1, miraicore_kref_kotlin_Int ec, const char* msg, miraicore_kref_kotlin_Int errCode, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo info, miraicore_kref_kotlin_Int role, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                miraicore_kref_net_mamoe_mirai_data_GroupActiveData (*GroupActiveData_)(miraicore_kref_kotlin_Int ec, const char* msg, miraicore_kref_kotlin_Int errCode, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo info, miraicore_kref_kotlin_Int role);
                miraicore_kref_kotlin_Int (*get_ec)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                miraicore_kref_kotlin_Int (*get_errCode)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo (*get_info)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                const char* (*get_msg)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                miraicore_kref_kotlin_Int (*get_role)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                miraicore_kref_kotlin_Int (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                const char* (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                miraicore_kref_kotlin_Int (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                miraicore_kref_kotlin_Int (*component5)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupActiveData (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz, miraicore_kref_kotlin_Int ec, const char* msg, miraicore_kref_kotlin_Int errCode, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo info, miraicore_kref_kotlin_Int role);
                miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz, miraicore_kref_kotlin_Any other);
                miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupActiveData_$serializer (*_instance)();
                  miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_$serializer thiz);
                  miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_$serializer thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupActiveData (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupActiveData value);
                } $serializer;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupActiveData_Companion (*_instance)();
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_Companion thiz);
                } Companion;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo (*GInfo)(miraicore_KInt seen1, miraicore_kref_kotlin_collections_List actNum, miraicore_kref_kotlin_Int createTime, miraicore_kref_kotlin_collections_List exitNum, miraicore_kref_kotlin_collections_List joinNum, miraicore_kref_kotlin_collections_List memNum, miraicore_kref_kotlin_collections_List mostAct, miraicore_kref_kotlin_collections_List sentences, miraicore_kref_kotlin_Int gc, const char* gn, const char* gowner, miraicore_kref_kotlin_Int isEnd, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo (*GInfo_)(miraicore_kref_kotlin_collections_List actNum, miraicore_kref_kotlin_Int createTime, miraicore_kref_kotlin_collections_List exitNum, miraicore_kref_kotlin_collections_List joinNum, miraicore_kref_kotlin_collections_List memNum, miraicore_kref_kotlin_collections_List mostAct, miraicore_kref_kotlin_collections_List sentences, miraicore_kref_kotlin_Int gc, const char* gn, const char* gowner, miraicore_kref_kotlin_Int isEnd);
                  miraicore_kref_kotlin_collections_List (*get_actNum)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_Int (*get_createTime)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*get_exitNum)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_Int (*get_gc)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  const char* (*get_gn)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  const char* (*get_gowner)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_Int (*get_isEnd)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*get_joinNum)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*get_memNum)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*get_mostAct)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*get_sentences)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  const char* (*component10)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_Int (*component11)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_Int (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*component5)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*component6)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_collections_List (*component7)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_kotlin_Int (*component8)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  const char* (*component9)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz, miraicore_kref_kotlin_collections_List actNum, miraicore_kref_kotlin_Int createTime, miraicore_kref_kotlin_collections_List exitNum, miraicore_kref_kotlin_collections_List joinNum, miraicore_kref_kotlin_collections_List memNum, miraicore_kref_kotlin_collections_List mostAct, miraicore_kref_kotlin_collections_List sentences, miraicore_kref_kotlin_Int gc, const char* gn, const char* gowner, miraicore_kref_kotlin_Int isEnd);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_Companion thiz);
                  } Companion;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum (*GActNum)(miraicore_KInt seen1, const char* date, miraicore_kref_kotlin_Int num, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum (*GActNum_)(const char* date, miraicore_kref_kotlin_Int num);
                    const char* (*get_date)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum thiz);
                    miraicore_kref_kotlin_Int (*get_num)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum thiz);
                    const char* (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum thiz);
                    miraicore_kref_kotlin_Int (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum thiz, const char* date, miraicore_kref_kotlin_Int num);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum_$serializer (*_instance)();
                      miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum_$serializer thiz);
                      miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum_$serializer thiz);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum value);
                    } $serializer;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum_Companion (*_instance)();
                      miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GActNum_Companion thiz);
                    } Companion;
                  } GActNum;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum (*GExitNum)(miraicore_KInt seen1, const char* date, miraicore_kref_kotlin_Int num, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum (*GExitNum_)(const char* date, miraicore_kref_kotlin_Int num);
                    const char* (*get_date)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum thiz);
                    miraicore_kref_kotlin_Int (*get_num)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum thiz);
                    const char* (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum thiz);
                    miraicore_kref_kotlin_Int (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum thiz, const char* date, miraicore_kref_kotlin_Int num);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum_$serializer (*_instance)();
                      miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum_$serializer thiz);
                      miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum_$serializer thiz);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum value);
                    } $serializer;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum_Companion (*_instance)();
                      miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GExitNum_Companion thiz);
                    } Companion;
                  } GExitNum;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum (*GJoinNum)(miraicore_KInt seen1, const char* date, miraicore_kref_kotlin_Int num, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum (*GJoinNum_)(const char* date, miraicore_kref_kotlin_Int num);
                    const char* (*get_date)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum thiz);
                    miraicore_kref_kotlin_Int (*get_num)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum thiz);
                    const char* (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum thiz);
                    miraicore_kref_kotlin_Int (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum thiz, const char* date, miraicore_kref_kotlin_Int num);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum_$serializer (*_instance)();
                      miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum_$serializer thiz);
                      miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum_$serializer thiz);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum value);
                    } $serializer;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum_Companion (*_instance)();
                      miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GJoinNum_Companion thiz);
                    } Companion;
                  } GJoinNum;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum (*GMemNum)(miraicore_KInt seen1, const char* date, miraicore_kref_kotlin_Int num, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum (*GMemNum_)(const char* date, miraicore_kref_kotlin_Int num);
                    const char* (*get_date)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum thiz);
                    miraicore_kref_kotlin_Int (*get_num)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum thiz);
                    const char* (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum thiz);
                    miraicore_kref_kotlin_Int (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum thiz, const char* date, miraicore_kref_kotlin_Int num);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum_$serializer (*_instance)();
                      miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum_$serializer thiz);
                      miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum_$serializer thiz);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum value);
                    } $serializer;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum_Companion (*_instance)();
                      miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMemNum_Companion thiz);
                    } Companion;
                  } GMemNum;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct (*GMostAct)(miraicore_KInt seen1, const char* name, miraicore_kref_kotlin_Int sentencesNum, miraicore_kref_kotlin_Int sta, miraicore_kref_kotlin_Long uin, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct (*GMostAct_)(const char* name, miraicore_kref_kotlin_Int sentencesNum, miraicore_kref_kotlin_Int sta, miraicore_kref_kotlin_Long uin);
                    const char* (*get_name)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    miraicore_kref_kotlin_Int (*get_sentencesNum)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    miraicore_kref_kotlin_Int (*get_sta)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    miraicore_kref_kotlin_Long (*get_uin)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    const char* (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    miraicore_kref_kotlin_Int (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    miraicore_kref_kotlin_Int (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    miraicore_kref_kotlin_Long (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz, const char* name, miraicore_kref_kotlin_Int sentencesNum, miraicore_kref_kotlin_Int sta, miraicore_kref_kotlin_Long uin);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct_$serializer (*_instance)();
                      miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct_$serializer thiz);
                      miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct_$serializer thiz);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct value);
                    } $serializer;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct_Companion (*_instance)();
                      miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GMostAct_Companion thiz);
                    } Companion;
                  } GMostAct;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence (*GSentence)(miraicore_KInt seen1, const char* date, miraicore_kref_kotlin_Int num, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence (*GSentence_)(const char* date, miraicore_kref_kotlin_Int num);
                    const char* (*get_date)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence thiz);
                    miraicore_kref_kotlin_Int (*get_num)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence thiz);
                    const char* (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence thiz);
                    miraicore_kref_kotlin_Int (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence thiz, const char* date, miraicore_kref_kotlin_Int num);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence_$serializer (*_instance)();
                      miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence_$serializer thiz);
                      miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence_$serializer thiz);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence value);
                    } $serializer;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence_Companion (*_instance)();
                      miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupActiveData_GInfo_GSentence_Companion thiz);
                    } Companion;
                  } GSentence;
                } GInfo;
              } GroupActiveData;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_data_GroupHonorListData (*GroupHonorListData)(miraicore_KInt seen1, const char* gc, miraicore_kref_net_mamoe_mirai_data_GroupHonorType type, const char* uin, miraicore_kref_kotlin_collections_List talkativeList, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative currentTalkative, miraicore_kref_kotlin_collections_List actorList, miraicore_kref_kotlin_collections_List legendList, miraicore_kref_kotlin_collections_List newbieList, miraicore_kref_kotlin_collections_List strongNewbieList, miraicore_kref_kotlin_collections_List emotionList, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName levelName, miraicore_kref_kotlin_collections_List manageList, miraicore_kref_kotlin_collections_List exclusiveList, miraicore_kref_kotlin_collections_Map activeObj, miraicore_kref_kotlin_collections_Map showActiveObj, const char* myTitle, miraicore_kref_kotlin_Int myIndex, const char* myAvatar, miraicore_kref_kotlin_Boolean hasServerError, miraicore_kref_kotlin_collections_List hwExcellentList, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                miraicore_kref_net_mamoe_mirai_data_GroupHonorListData (*GroupHonorListData_)(const char* gc, miraicore_kref_net_mamoe_mirai_data_GroupHonorType type, const char* uin, miraicore_kref_kotlin_collections_List talkativeList, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative currentTalkative, miraicore_kref_kotlin_collections_List actorList, miraicore_kref_kotlin_collections_List legendList, miraicore_kref_kotlin_collections_List newbieList, miraicore_kref_kotlin_collections_List strongNewbieList, miraicore_kref_kotlin_collections_List emotionList, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName levelName, miraicore_kref_kotlin_collections_List manageList, miraicore_kref_kotlin_collections_List exclusiveList, miraicore_kref_kotlin_collections_Map activeObj, miraicore_kref_kotlin_collections_Map showActiveObj, const char* myTitle, miraicore_kref_kotlin_Int myIndex, const char* myAvatar, miraicore_kref_kotlin_Boolean hasServerError, miraicore_kref_kotlin_collections_List hwExcellentList);
                miraicore_kref_kotlin_collections_List (*get_acceptLanguages)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_Map (*get_activeObj)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*get_actorList)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative (*get_currentTalkative)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*get_emotionList)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*get_exclusiveList)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                const char* (*get_gc)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_Boolean (*get_hasServerError)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*get_hwExcellentList)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*get_legendList)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName (*get_levelName)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*get_manageList)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                const char* (*get_myAvatar)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_Int (*get_myIndex)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                const char* (*get_myTitle)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*get_newbieList)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_Map (*get_showActiveObj)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*get_strongNewbieList)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*get_talkativeList)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get_type)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                const char* (*get_uin)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                const char* (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*component10)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName (*component11)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*component12)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*component13)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_Map (*component14)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_Map (*component15)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                const char* (*component16)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_Int (*component17)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                const char* (*component18)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_Boolean (*component19)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*component20)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                const char* (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative (*component5)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*component6)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*component7)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*component8)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_kotlin_collections_List (*component9)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                miraicore_kref_net_mamoe_mirai_data_GroupHonorListData (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz, const char* gc, miraicore_kref_net_mamoe_mirai_data_GroupHonorType type, const char* uin, miraicore_kref_kotlin_collections_List talkativeList, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative currentTalkative, miraicore_kref_kotlin_collections_List actorList, miraicore_kref_kotlin_collections_List legendList, miraicore_kref_kotlin_collections_List newbieList, miraicore_kref_kotlin_collections_List strongNewbieList, miraicore_kref_kotlin_collections_List emotionList, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName levelName, miraicore_kref_kotlin_collections_List manageList, miraicore_kref_kotlin_collections_List exclusiveList, miraicore_kref_kotlin_collections_Map activeObj, miraicore_kref_kotlin_collections_Map showActiveObj, const char* myTitle, miraicore_kref_kotlin_Int myIndex, const char* myAvatar, miraicore_kref_kotlin_Boolean hasServerError, miraicore_kref_kotlin_collections_List hwExcellentList);
                miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz, miraicore_kref_kotlin_Any other);
                miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_$serializer (*_instance)();
                  miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_$serializer thiz);
                  miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_$serializer thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData value);
                } $serializer;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor (*Actor)(miraicore_KInt seen1, miraicore_kref_kotlin_Long uin, const char* avatar, const char* name, const char* desc, const char* btnText, const char* text, miraicore_kref_kotlin_Int icon, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor (*Actor_)(miraicore_kref_kotlin_Long uin, const char* avatar, const char* name, const char* desc, const char* btnText, const char* text, miraicore_kref_kotlin_Int icon);
                  const char* (*get_avatar)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*get_btnText)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*get_desc)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  miraicore_kref_kotlin_Int (*get_icon)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*get_name)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*get_text)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  miraicore_kref_kotlin_Long (*get_uin)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  miraicore_kref_kotlin_Long (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*component5)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*component6)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  miraicore_kref_kotlin_Int (*component7)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz, miraicore_kref_kotlin_Long uin, const char* avatar, const char* name, const char* desc, const char* btnText, const char* text, miraicore_kref_kotlin_Int icon);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Actor_Companion thiz);
                  } Companion;
                } Actor;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Companion (*_instance)();
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Companion thiz);
                } Companion;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative (*CurrentTalkative)(miraicore_KInt seen1, miraicore_kref_kotlin_Long uin, miraicore_kref_kotlin_Int dayCount, const char* avatar, miraicore_kref_kotlin_Int avatarSize, const char* nick, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative (*CurrentTalkative_)(miraicore_kref_kotlin_Long uin, miraicore_kref_kotlin_Int dayCount, const char* avatar, miraicore_kref_kotlin_Int avatarSize, const char* nick);
                  const char* (*get_avatar)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  miraicore_kref_kotlin_Int (*get_avatarSize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  miraicore_kref_kotlin_Int (*get_dayCount)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  const char* (*get_nick)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  miraicore_kref_kotlin_Long (*get_uin)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  miraicore_kref_kotlin_Long (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  miraicore_kref_kotlin_Int (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  miraicore_kref_kotlin_Int (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  const char* (*component5)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz, miraicore_kref_kotlin_Long uin, miraicore_kref_kotlin_Int dayCount, const char* avatar, miraicore_kref_kotlin_Int avatarSize, const char* nick);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_CurrentTalkative_Companion thiz);
                  } Companion;
                } CurrentTalkative;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_GroupHonorTypeSerializer (*_instance)();
                  miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_GroupHonorTypeSerializer thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_GroupHonorTypeSerializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_GroupHonorTypeSerializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupHonorType value);
                } GroupHonorTypeSerializer;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language (*Language)(const char* code, const char* script, const char* region, miraicore_kref_kotlin_Double quality);
                  const char* (*get_code)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                  miraicore_kref_kotlin_Double (*get_quality)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                  const char* (*get_region)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                  const char* (*get_script)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                  const char* (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                  miraicore_kref_kotlin_Double (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz, const char* code, const char* script, const char* region, miraicore_kref_kotlin_Double quality);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Language thiz);
                } Language;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName (*LevelName)(miraicore_KInt seen1, const char* lv1, const char* lv2, const char* lv3, const char* lv4, const char* lv5, const char* lv6, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName (*LevelName_)(const char* lv1, const char* lv2, const char* lv3, const char* lv4, const char* lv5, const char* lv6);
                  const char* (*get_lv1)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*get_lv2)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*get_lv3)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*get_lv4)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*get_lv5)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*get_lv6)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*component5)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*component6)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz, const char* lv1, const char* lv2, const char* lv3, const char* lv4, const char* lv5, const char* lv6);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_LevelName_Companion thiz);
                  } Companion;
                } LevelName;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag (*Tag)(miraicore_KInt seen1, miraicore_kref_kotlin_Long uin, const char* avatar, const char* name, const char* btnText, const char* text, const char* tag, const char* tagColor, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag (*Tag_)(miraicore_kref_kotlin_Long uin, const char* avatar, const char* name, const char* btnText, const char* text, const char* tag, const char* tagColor);
                  const char* (*get_avatar)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*get_btnText)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*get_name)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*get_tag)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*get_tagColor)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*get_text)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  miraicore_kref_kotlin_Long (*get_uin)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  miraicore_kref_kotlin_Long (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*component5)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*component6)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*component7)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz, miraicore_kref_kotlin_Long uin, const char* avatar, const char* name, const char* btnText, const char* text, const char* tag, const char* tagColor);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Tag_Companion thiz);
                  } Companion;
                } Tag;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative (*Talkative)(miraicore_KInt seen1, miraicore_kref_kotlin_Long uin, const char* avatar, const char* name, const char* desc, const char* btnText, const char* text, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative (*Talkative_)(miraicore_kref_kotlin_Long uin, const char* avatar, const char* name, const char* desc, const char* btnText, const char* text);
                  const char* (*get_avatar)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*get_btnText)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*get_desc)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*get_name)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*get_text)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  miraicore_kref_kotlin_Long (*get_uin)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  miraicore_kref_kotlin_Long (*component1)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*component4)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*component5)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*component6)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative (*copy)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz, miraicore_kref_kotlin_Long uin, const char* avatar, const char* name, const char* desc, const char* btnText, const char* text);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative (*deserialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_GroupHonorListData_Talkative_Companion thiz);
                  } Companion;
                } Talkative;
              } GroupHonorListData;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get_value)(miraicore_kref_net_mamoe_mirai_data_GroupHonorType thiz);
                struct {
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get)(); /* enum entry for TALKATIVE. */
                } TALKATIVE;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get)(); /* enum entry for PERFORMER. */
                } PERFORMER;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get)(); /* enum entry for LEGEND. */
                } LEGEND;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get)(); /* enum entry for STRONG_NEWBIE. */
                } STRONG_NEWBIE;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get)(); /* enum entry for EMOTION. */
                } EMOTION;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get)(); /* enum entry for ACTIVE. */
                } ACTIVE;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get)(); /* enum entry for EXCLUSIVE. */
                } EXCLUSIVE;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get)(); /* enum entry for MANAGE. */
                } MANAGE;
              } GroupHonorType;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KBoolean (*get_allowAnonymousChat)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                miraicore_KBoolean (*get_allowMemberInvite)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                miraicore_KBoolean (*get_autoApprove)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                miraicore_KInt (*get_botMuteTimestamp)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                miraicore_KBoolean (*get_confessTalk)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                miraicore_KLong (*get_groupCode)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                const char* (*get_memo)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                miraicore_KBoolean (*get_muteAll)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                const char* (*get_name)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                miraicore_KLong (*get_owner)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
                miraicore_KLong (*get_uin)(miraicore_kref_net_mamoe_mirai_data_GroupInfo thiz);
              } GroupInfo;
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_anonymousId)(miraicore_kref_net_mamoe_mirai_data_MemberInfo thiz);
                miraicore_KBoolean (*get_isOfficialBot)(miraicore_kref_net_mamoe_mirai_data_MemberInfo thiz);
                miraicore_KInt (*get_joinTimestamp)(miraicore_kref_net_mamoe_mirai_data_MemberInfo thiz);
                miraicore_KInt (*get_lastSpeakTimestamp)(miraicore_kref_net_mamoe_mirai_data_MemberInfo thiz);
                miraicore_KInt (*get_muteTimestamp)(miraicore_kref_net_mamoe_mirai_data_MemberInfo thiz);
                const char* (*get_nameCard)(miraicore_kref_net_mamoe_mirai_data_MemberInfo thiz);
                miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get_permission)(miraicore_kref_net_mamoe_mirai_data_MemberInfo thiz);
                const char* (*get_specialTitle)(miraicore_kref_net_mamoe_mirai_data_MemberInfo thiz);
              } MemberInfo;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get_id)(miraicore_kref_net_mamoe_mirai_data_OnlineStatus thiz);
                struct {
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*get)(); /* enum entry for ONLINE. */
                } ONLINE;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*get)(); /* enum entry for OFFLINE. */
                } OFFLINE;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*get)(); /* enum entry for AWAY. */
                } AWAY;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*get)(); /* enum entry for INVISIBLE. */
                } INVISIBLE;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*get)(); /* enum entry for BUSY. */
                } BUSY;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*get)(); /* enum entry for Q_ME. */
                } Q_ME;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*get)(); /* enum entry for DND. */
                } DND;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*get)(); /* enum entry for RECEIVE_OFFLINE_MESSAGE. */
                } RECEIVE_OFFLINE_MESSAGE;
                struct {
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*get)(); /* enum entry for UNKNOWN. */
                } UNKNOWN;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*ofId)(miraicore_kref_net_mamoe_mirai_data_OnlineStatus_Companion thiz, miraicore_KInt id);
                  miraicore_kref_net_mamoe_mirai_data_OnlineStatus (*ofIdOrNull)(miraicore_kref_net_mamoe_mirai_data_OnlineStatus_Companion thiz, miraicore_KInt id);
                } Companion;
              } OnlineStatus;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_data_RequestEventData (*RequestEventData)(miraicore_KInt seen1, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                miraicore_kref_net_mamoe_mirai_data_RequestEventData (*RequestEventData_)();
                miraicore_KLong (*get_eventId)(miraicore_kref_net_mamoe_mirai_data_RequestEventData thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest (*BotInvitedJoinGroupRequest)(miraicore_KInt seen1, miraicore_KLong eventId, miraicore_KLong invitor, const char* invitorNick, miraicore_KLong groupId, const char* groupName, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest (*BotInvitedJoinGroupRequest_)(miraicore_KLong eventId, miraicore_KLong invitor, const char* invitorNick, miraicore_KLong groupId, const char* groupName);
                  miraicore_KLong (*get_eventId)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest thiz);
                  miraicore_KLong (*get_groupId)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest thiz);
                  const char* (*get_groupName)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest thiz);
                  miraicore_KLong (*get_invitor)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest thiz);
                  const char* (*get_invitorNick)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest (*deserialize)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest_Companion thiz);
                  } Companion;
                } BotInvitedJoinGroupRequest;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_Factory (*_instance)();
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_Factory thiz);
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_Factory thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_BotInvitedJoinGroupRequest (*toRequestEventData)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_Factory thiz, miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz1);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest (*toRequestEventData_)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_Factory thiz, miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz1);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest (*toRequestEventData__)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_Factory thiz, miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz1);
                } Factory;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest (*MemberJoinRequest)(miraicore_KInt seen1, miraicore_KLong eventId, miraicore_KLong requester, const char* requesterNick, miraicore_KLong groupId, const char* groupName, miraicore_KLong invitor, const char* message, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest (*MemberJoinRequest_)(miraicore_KLong eventId, miraicore_KLong requester, const char* requesterNick, miraicore_KLong groupId, const char* groupName, miraicore_KLong invitor, const char* message);
                  miraicore_KLong (*get_eventId)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest thiz);
                  miraicore_KLong (*get_groupId)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest thiz);
                  const char* (*get_groupName)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest thiz);
                  miraicore_KLong (*get_invitor)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest thiz);
                  const char* (*get_message)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest thiz);
                  miraicore_KLong (*get_requester)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest thiz);
                  const char* (*get_requesterNick)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest (*deserialize)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_MemberJoinRequest_Companion thiz);
                  } Companion;
                } MemberJoinRequest;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest (*NewFriendRequest)(miraicore_KInt seen1, miraicore_KLong eventId, miraicore_KLong requester, const char* requesterNick, miraicore_KLong fromGroupId, const char* message, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest (*NewFriendRequest_)(miraicore_KLong eventId, miraicore_KLong requester, const char* requesterNick, miraicore_KLong fromGroupId, const char* message);
                  miraicore_KLong (*get_eventId)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest thiz);
                  miraicore_KLong (*get_fromGroupId)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest thiz);
                  const char* (*get_message)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest thiz);
                  miraicore_KLong (*get_requester)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest thiz);
                  const char* (*get_requesterNick)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest (*deserialize)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_data_RequestEventData_NewFriendRequest_Companion thiz);
                  } Companion;
                } NewFriendRequest;
              } RequestEventData;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KLong (*get_fromGroup)(miraicore_kref_net_mamoe_mirai_data_StrangerInfo thiz);
                const char* (*get_nick)(miraicore_kref_net_mamoe_mirai_data_StrangerInfo thiz);
                miraicore_KLong (*get_uin)(miraicore_kref_net_mamoe_mirai_data_StrangerInfo thiz);
              } StrangerInfo;
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_nick)(miraicore_kref_net_mamoe_mirai_data_UserInfo thiz);
                const char* (*get_remark)(miraicore_kref_net_mamoe_mirai_data_UserInfo thiz);
                miraicore_KLong (*get_uin)(miraicore_kref_net_mamoe_mirai_data_UserInfo thiz);
              } UserInfo;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get_age)(miraicore_kref_net_mamoe_mirai_data_UserProfile thiz);
                const char* (*get_email)(miraicore_kref_net_mamoe_mirai_data_UserProfile thiz);
                const char* (*get_nickname)(miraicore_kref_net_mamoe_mirai_data_UserProfile thiz);
                miraicore_KInt (*get_qLevel)(miraicore_kref_net_mamoe_mirai_data_UserProfile thiz);
                miraicore_kref_net_mamoe_mirai_data_UserProfile_Sex (*get_sex)(miraicore_kref_net_mamoe_mirai_data_UserProfile thiz);
                const char* (*get_sign)(miraicore_kref_net_mamoe_mirai_data_UserProfile thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_kref_net_mamoe_mirai_data_UserProfile_Sex (*get)(); /* enum entry for MALE. */
                  } MALE;
                  struct {
                    miraicore_kref_net_mamoe_mirai_data_UserProfile_Sex (*get)(); /* enum entry for FEMALE. */
                  } FEMALE;
                  struct {
                    miraicore_kref_net_mamoe_mirai_data_UserProfile_Sex (*get)(); /* enum entry for UNKNOWN. */
                  } UNKNOWN;
                } Sex;
              } UserProfile;
            } data;
            struct {
              miraicore_KBoolean (*get_EventDisabled)();
              void (*set_EventDisabled)(miraicore_KBoolean set);
              miraicore_kref_net_mamoe_mirai_event_EventChannel (*globalEventChannel)(miraicore_kref_kotlinx_coroutines_CoroutineScope thiz, miraicore_kref_kotlin_coroutines_CoroutineContext coroutineContext);
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_event_AbstractEvent (*AbstractEvent)();
                miraicore_KBoolean (*get__intercepted)(miraicore_kref_net_mamoe_mirai_event_AbstractEvent thiz);
                void (*set__intercepted)(miraicore_kref_net_mamoe_mirai_event_AbstractEvent thiz, miraicore_KBoolean set);
                miraicore_kref_kotlinx_coroutines_sync_Mutex (*get_broadCastLock)(miraicore_kref_net_mamoe_mirai_event_AbstractEvent thiz);
                miraicore_KBoolean (*get_isCancelled)(miraicore_kref_net_mamoe_mirai_event_AbstractEvent thiz);
                miraicore_KBoolean (*get_isIntercepted)(miraicore_kref_net_mamoe_mirai_event_AbstractEvent thiz);
                void (*cancel)(miraicore_kref_net_mamoe_mirai_event_AbstractEvent thiz);
                void (*intercept)(miraicore_kref_net_mamoe_mirai_event_AbstractEvent thiz);
              } AbstractEvent;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KBoolean (*get_shouldBroadcast)(miraicore_kref_net_mamoe_mirai_event_BroadcastControllable thiz);
              } BroadcastControllable;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KBoolean (*get_isCancelled)(miraicore_kref_net_mamoe_mirai_event_CancellableEvent thiz);
                void (*cancel)(miraicore_kref_net_mamoe_mirai_event_CancellableEvent thiz);
              } CancellableEvent;
              struct {
                miraicore_KType* (*_type)(void);
                struct {
                  miraicore_kref_net_mamoe_mirai_event_ConcurrencyKind (*get)(); /* enum entry for CONCURRENT. */
                } CONCURRENT;
                struct {
                  miraicore_kref_net_mamoe_mirai_event_ConcurrencyKind (*get)(); /* enum entry for LOCKED. */
                } LOCKED;
              } ConcurrencyKind;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KBoolean (*get_isIntercepted)(miraicore_kref_net_mamoe_mirai_event_Event thiz);
                void (*intercept)(miraicore_kref_net_mamoe_mirai_event_Event thiz);
              } Event;
              struct {
                miraicore_KType* (*_type)(void);
                struct {
                  miraicore_kref_net_mamoe_mirai_event_EventPriority (*get)(); /* enum entry for HIGHEST. */
                } HIGHEST;
                struct {
                  miraicore_kref_net_mamoe_mirai_event_EventPriority (*get)(); /* enum entry for HIGH. */
                } HIGH;
                struct {
                  miraicore_kref_net_mamoe_mirai_event_EventPriority (*get)(); /* enum entry for NORMAL. */
                } NORMAL;
                struct {
                  miraicore_kref_net_mamoe_mirai_event_EventPriority (*get)(); /* enum entry for LOW. */
                } LOW;
                struct {
                  miraicore_kref_net_mamoe_mirai_event_EventPriority (*get)(); /* enum entry for LOWEST. */
                } LOWEST;
                struct {
                  miraicore_kref_net_mamoe_mirai_event_EventPriority (*get)(); /* enum entry for MONITOR. */
                } MONITOR;
              } EventPriority;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_event_ExceptionInEventChannelFilterException (*ExceptionInEventChannelFilterException)(miraicore_kref_net_mamoe_mirai_event_Event event, miraicore_kref_net_mamoe_mirai_event_EventChannel eventChannel, const char* message, miraicore_kref_kotlin_Throwable cause);
                miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_event_ExceptionInEventChannelFilterException thiz);
                miraicore_kref_net_mamoe_mirai_event_Event (*get_event)(miraicore_kref_net_mamoe_mirai_event_ExceptionInEventChannelFilterException thiz);
                miraicore_kref_net_mamoe_mirai_event_EventChannel (*get_eventChannel)(miraicore_kref_net_mamoe_mirai_event_ExceptionInEventChannelFilterException thiz);
                const char* (*get_message)(miraicore_kref_net_mamoe_mirai_event_ExceptionInEventChannelFilterException thiz);
              } ExceptionInEventChannelFilterException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_event_GlobalEventChannel (*_instance)();
                miraicore_kref_kotlinx_coroutines_flow_Flow (*asFlow)(miraicore_kref_net_mamoe_mirai_event_GlobalEventChannel thiz);
                miraicore_kref_net_mamoe_mirai_event_EventChannel (*context)(miraicore_kref_net_mamoe_mirai_event_GlobalEventChannel thiz, miraicore_kref_kotlin_Array coroutineContexts);
              } GlobalEventChannel;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_event_EventChannel (*getInstance)(miraicore_kref_net_mamoe_mirai_event_InternalGlobalEventChannelProvider thiz);
              } InternalGlobalEventChannelProvider;
              struct {
                miraicore_KType* (*_type)(void);
                struct {
                  miraicore_kref_net_mamoe_mirai_event_ListeningStatus (*get)(); /* enum entry for LISTENING. */
                } LISTENING;
                struct {
                  miraicore_kref_net_mamoe_mirai_event_ListeningStatus (*get)(); /* enum entry for STOPPED. */
                } STOPPED;
              } ListeningStatus;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_event_MessageSelectionTimeoutException (*MessageSelectionTimeoutException)();
              } MessageSelectionTimeoutException;
              struct {
                miraicore_KBoolean (*get_isByBot)(miraicore_kref_net_mamoe_mirai_event_events_GroupOperableEvent thiz);
                miraicore_KBoolean (*get_isByBot_)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent thiz);
                miraicore_KBoolean (*get_isByBot__)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                miraicore_KBoolean (*get_isFailure)(miraicore_kref_net_mamoe_mirai_event_events_MessagePostSendEvent thiz);
                miraicore_KBoolean (*get_isSuccess)(miraicore_kref_net_mamoe_mirai_event_events_MessagePostSendEvent thiz);
                miraicore_kref_net_mamoe_mirai_contact_Member (*get_operatorOrBot)(miraicore_kref_net_mamoe_mirai_event_events_GroupOperableEvent thiz);
                miraicore_kref_kotlin_Any (*get_result)(miraicore_kref_net_mamoe_mirai_event_events_MessagePostSendEvent thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageSource (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_MessagePostSendEvent thiz);
                miraicore_kref_kotlin_Any (*get_sourceResult)(miraicore_kref_net_mamoe_mirai_event_events_MessagePostSendEvent thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_AbstractMessageEvent (*AbstractMessageEvent)();
                } AbstractMessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent (*BeforeImageUploadEvent)(miraicore_kref_net_mamoe_mirai_contact_Contact target, miraicore_kref_net_mamoe_mirai_utils_ExternalResource source);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent thiz);
                  miraicore_kref_net_mamoe_mirai_utils_ExternalResource (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent thiz);
                  miraicore_kref_net_mamoe_mirai_utils_ExternalResource (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Contact target, miraicore_kref_net_mamoe_mirai_utils_ExternalResource source);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BeforeImageUploadEvent thiz);
                } BeforeImageUploadEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                } BotActiveEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotAvatarChangedEvent (*BotAvatarChangedEvent)(miraicore_kref_net_mamoe_mirai_Bot bot);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotAvatarChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotAvatarChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_BotAvatarChangedEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotAvatarChangedEvent thiz, miraicore_kref_net_mamoe_mirai_Bot bot);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotAvatarChangedEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotAvatarChangedEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotAvatarChangedEvent thiz);
                } BotAvatarChangedEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotEvent thiz);
                } BotEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent (*BotGroupPermissionChangeEvent)(miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_MemberPermission origin, miraicore_kref_net_mamoe_mirai_contact_MemberPermission new_);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*component3)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_MemberPermission origin, miraicore_kref_net_mamoe_mirai_contact_MemberPermission new_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotGroupPermissionChangeEvent thiz);
                } BotGroupPermissionChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent (*BotInvitedJoinGroupRequestEvent)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong eventId, miraicore_KLong invitorId, miraicore_KLong groupId, const char* groupName, const char* invitorNick);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  miraicore_KLong (*get_eventId)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  miraicore_KLong (*get_groupId)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  const char* (*get_groupName)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_invitor)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  miraicore_KLong (*get_invitorId)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  const char* (*get_invitorNick)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  miraicore_KLong (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  miraicore_KLong (*component3)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  miraicore_KLong (*component4)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  const char* (*component5)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  const char* (*component6)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong eventId, miraicore_KLong invitorId, miraicore_KLong groupId, const char* groupName, const char* invitorNick);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotInvitedJoinGroupRequestEvent thiz);
                } BotInvitedJoinGroupRequestEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent (*BotJoinGroupEvent)();
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Active (*Active)(miraicore_kref_net_mamoe_mirai_contact_Group group);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Active thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Active thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Active (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Active thiz, miraicore_kref_net_mamoe_mirai_contact_Group group);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Active thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Active thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Active thiz);
                  } Active;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite (*Invite)(miraicore_kref_net_mamoe_mirai_contact_NormalMember invitor);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_invitor)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember invitor);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Invite thiz);
                  } Invite;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Retrieve (*Retrieve)(miraicore_kref_net_mamoe_mirai_contact_Group group);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Retrieve thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Retrieve thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Retrieve (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Retrieve thiz, miraicore_kref_net_mamoe_mirai_contact_Group group);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Retrieve thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Retrieve thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotJoinGroupEvent_Retrieve thiz);
                  } Retrieve;
                } BotJoinGroupEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent (*BotLeaveEvent)();
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Active (*Active)(miraicore_kref_net_mamoe_mirai_contact_Group group);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Active thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Active thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Active (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Active thiz, miraicore_kref_net_mamoe_mirai_contact_Group group);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Active thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Active thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Active thiz);
                  } Active;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband (*Disband)(miraicore_kref_net_mamoe_mirai_contact_Group group);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband thiz, miraicore_kref_net_mamoe_mirai_contact_Group group);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Disband thiz);
                  } Disband;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick (*Kick)(miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                    miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotLeaveEvent_Kick thiz);
                  } Kick;
                } BotLeaveEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent (*BotMuteEvent)(miraicore_KInt durationSeconds, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_KInt (*get_durationSeconds)(miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent thiz);
                  miraicore_KInt (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent thiz, miraicore_KInt durationSeconds, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotMuteEvent thiz);
                } BotMuteEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent (*BotNickChangedEvent)(miraicore_kref_net_mamoe_mirai_Bot bot, const char* from, const char* to);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz);
                  const char* (*get_from)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz);
                  const char* (*get_to)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz, miraicore_kref_net_mamoe_mirai_Bot bot, const char* from, const char* to);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotNickChangedEvent thiz);
                } BotNickChangedEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent (*BotOfflineEvent)();
                  miraicore_KBoolean (*get_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active (*Active)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                    miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active thiz);
                    miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active thiz);
                    miraicore_KBoolean (*get_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active thiz);
                    miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active thiz);
                    miraicore_kref_kotlin_Throwable (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Active thiz);
                  } Active;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_CauseAware thiz);
                  } CauseAware;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped (*Dropped)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                    miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz);
                    miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz);
                    miraicore_KBoolean (*get_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz);
                    void (*set_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz, miraicore_KBoolean set);
                    miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz);
                    miraicore_kref_kotlin_Throwable (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Dropped thiz);
                  } Dropped;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force (*Force)(miraicore_kref_net_mamoe_mirai_Bot bot, const char* title, const char* message);
                    miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz);
                    const char* (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz);
                    miraicore_KBoolean (*get_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz);
                    void (*set_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz, miraicore_KBoolean set);
                    const char* (*get_title)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz);
                    miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz);
                    const char* (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz);
                    const char* (*component3)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz, miraicore_kref_net_mamoe_mirai_Bot bot, const char* title, const char* message);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_Force thiz);
                  } Force;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline (*MsfOffline)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                    miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz);
                    miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz);
                    miraicore_KBoolean (*get_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz);
                    void (*set_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz, miraicore_KBoolean set);
                    miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz);
                    miraicore_kref_kotlin_Throwable (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_MsfOffline thiz);
                  } MsfOffline;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect (*RequireReconnect)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                    miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz);
                    miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz);
                    miraicore_KBoolean (*get_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz);
                    void (*set_reconnect)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz, miraicore_KBoolean set);
                    miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz);
                    miraicore_kref_kotlin_Throwable (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotOfflineEvent_RequireReconnect thiz);
                  } RequireReconnect;
                } BotOfflineEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotOnlineEvent (*BotOnlineEvent)(miraicore_kref_net_mamoe_mirai_Bot bot);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotOnlineEvent thiz);
                  miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotOnlineEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_BotOnlineEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotOnlineEvent thiz, miraicore_kref_net_mamoe_mirai_Bot bot);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotOnlineEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotOnlineEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotOnlineEvent thiz);
                } BotOnlineEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                } BotPassiveEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent (*BotReloginEvent)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent thiz);
                  miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent thiz);
                  miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent thiz);
                  miraicore_kref_kotlin_Throwable (*component2)(miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_Throwable cause);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotReloginEvent thiz);
                } BotReloginEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent (*BotUnmuteEvent)(miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_BotUnmuteEvent thiz);
                } BotUnmuteEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_EventCancelledException (*EventCancelledException)();
                  miraicore_kref_net_mamoe_mirai_event_events_EventCancelledException (*EventCancelledException_)(const char* message);
                  miraicore_kref_net_mamoe_mirai_event_events_EventCancelledException (*EventCancelledException__)(const char* message, miraicore_kref_kotlin_Throwable cause);
                  miraicore_kref_net_mamoe_mirai_event_events_EventCancelledException (*EventCancelledException___)(miraicore_kref_kotlin_Throwable cause);
                } EventCancelledException;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendAddEvent (*FriendAddEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend friend_);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_FriendAddEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*component1)(miraicore_kref_net_mamoe_mirai_event_events_FriendAddEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendAddEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_FriendAddEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Friend friend_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_FriendAddEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_FriendAddEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_FriendAddEvent thiz);
                } FriendAddEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendAvatarChangedEvent (*FriendAvatarChangedEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend friend_);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_FriendAvatarChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*component1)(miraicore_kref_net_mamoe_mirai_event_events_FriendAvatarChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendAvatarChangedEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_FriendAvatarChangedEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Friend friend_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_FriendAvatarChangedEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_FriendAvatarChangedEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_FriendAvatarChangedEvent thiz);
                } FriendAvatarChangedEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendDeleteEvent (*FriendDeleteEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend friend_);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_FriendDeleteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*component1)(miraicore_kref_net_mamoe_mirai_event_events_FriendDeleteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendDeleteEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_FriendDeleteEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Friend friend_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_FriendDeleteEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_FriendDeleteEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_FriendDeleteEvent thiz);
                } FriendDeleteEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_FriendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_FriendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_user)(miraicore_kref_net_mamoe_mirai_event_events_FriendEvent thiz);
                } FriendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent (*FriendInputStatusChangedEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend friend_, miraicore_KBoolean inputting);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent thiz);
                  miraicore_KBoolean (*get_inputting)(miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*component1)(miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent thiz);
                  miraicore_KBoolean (*component2)(miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Friend friend_, miraicore_KBoolean inputting);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_FriendInputStatusChangedEvent thiz);
                } FriendInputStatusChangedEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent (*FriendMessageEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend sender, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageEvent thiz);
                } FriendMessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent (*FriendMessagePostSendEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend target, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_kotlin_Throwable exception, miraicore_kref_net_mamoe_mirai_message_MessageReceipt receipt);
                  miraicore_kref_kotlin_Throwable (*get_exception)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_MessageReceipt (*get_receipt)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*component1)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*component2)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                  miraicore_kref_kotlin_Throwable (*component3)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_MessageReceipt (*component4)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Friend target, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_kotlin_Throwable exception, miraicore_kref_net_mamoe_mirai_message_MessageReceipt receipt);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePostSendEvent thiz);
                } FriendMessagePostSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent (*FriendMessagePreSendEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend target, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent thiz);
                  void (*set_message)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_message_data_Message set);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*component1)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*component2)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Friend target, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessagePreSendEvent thiz);
                } FriendMessagePreSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent (*FriendMessageSyncEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend sender, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_FriendMessageSyncEvent thiz);
                } FriendMessageSyncEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent (*FriendNickChangedEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend friend_, const char* from, const char* to);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz);
                  const char* (*get_from)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz);
                  const char* (*get_to)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*component1)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Friend friend_, const char* from, const char* to);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_FriendNickChangedEvent thiz);
                } FriendNickChangedEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent (*FriendRemarkChangeEvent)(miraicore_kref_net_mamoe_mirai_contact_Friend friend_, const char* oldRemark, const char* newRemark);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz);
                  const char* (*get_newRemark)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz);
                  const char* (*get_oldRemark)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*component1)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Friend friend_, const char* oldRemark, const char* newRemark);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_FriendRemarkChangeEvent thiz);
                } FriendRemarkChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent (*GroupAllowAnonymousChatEvent)(miraicore_KBoolean origin, miraicore_KBoolean new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                  miraicore_KBoolean (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                  miraicore_KBoolean (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                  miraicore_KBoolean (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                  miraicore_KBoolean (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component3)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component4)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz, miraicore_KBoolean origin, miraicore_KBoolean new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowAnonymousChatEvent thiz);
                } GroupAllowAnonymousChatEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent (*GroupAllowConfessTalkEvent)(miraicore_KBoolean origin, miraicore_KBoolean new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_KBoolean isByBot);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                  miraicore_KBoolean (*get_isByBot)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                  miraicore_KBoolean (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                  miraicore_KBoolean (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                  miraicore_KBoolean (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                  miraicore_KBoolean (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component3)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                  miraicore_KBoolean (*component4)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz, miraicore_KBoolean origin, miraicore_KBoolean new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_KBoolean isByBot);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowConfessTalkEvent thiz);
                } GroupAllowConfessTalkEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent (*GroupAllowMemberInviteEvent)(miraicore_KBoolean origin, miraicore_KBoolean new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                  miraicore_KBoolean (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                  miraicore_KBoolean (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                  miraicore_KBoolean (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                  miraicore_KBoolean (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component3)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component4)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz, miraicore_KBoolean origin, miraicore_KBoolean new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupAllowMemberInviteEvent thiz);
                } GroupAllowMemberInviteEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupAwareMessageEvent thiz);
                } GroupAwareMessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent (*GroupEntranceAnnouncementChangeEvent)(const char* origin, const char* new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                  const char* (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                  const char* (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                  const char* (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component3)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component4)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz, const char* origin, const char* new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupEntranceAnnouncementChangeEvent thiz);
                } GroupEntranceAnnouncementChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_GroupEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupEvent thiz);
                } GroupEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupMemberEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_GroupMemberEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_user)(miraicore_kref_net_mamoe_mirai_event_events_GroupMemberEvent thiz);
                } GroupMemberEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent (*GroupMessageEvent)(const char* senderName, miraicore_kref_net_mamoe_mirai_contact_MemberPermission permission, miraicore_kref_net_mamoe_mirai_contact_Member sender, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get_permission)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageEvent thiz);
                } GroupMessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent (*GroupMessagePostSendEvent)(miraicore_kref_net_mamoe_mirai_contact_Group target, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_kotlin_Throwable exception, miraicore_kref_net_mamoe_mirai_message_MessageReceipt receipt);
                  miraicore_kref_kotlin_Throwable (*get_exception)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_MessageReceipt (*get_receipt)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                  miraicore_kref_kotlin_Throwable (*component3)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_MessageReceipt (*component4)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Group target, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_kotlin_Throwable exception, miraicore_kref_net_mamoe_mirai_message_MessageReceipt receipt);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePostSendEvent thiz);
                } GroupMessagePostSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent (*GroupMessagePreSendEvent)(miraicore_kref_net_mamoe_mirai_contact_Group target, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent thiz);
                  void (*set_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_message_data_Message set);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Group target, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessagePreSendEvent thiz);
                } GroupMessagePreSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent (*GroupMessageSyncEvent)(miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_net_mamoe_mirai_contact_Member sender, const char* senderName, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupMessageSyncEvent thiz);
                } GroupMessageSyncEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent (*GroupMuteAllEvent)(miraicore_KBoolean origin, miraicore_KBoolean new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                  miraicore_KBoolean (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                  miraicore_KBoolean (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                  miraicore_KBoolean (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                  miraicore_KBoolean (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component3)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component4)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz, miraicore_KBoolean origin, miraicore_KBoolean new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupMuteAllEvent thiz);
                } GroupMuteAllEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent (*GroupNameChangeEvent)(const char* origin, const char* new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                  const char* (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                  const char* (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                  const char* (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component3)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component4)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz, const char* origin, const char* new_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupNameChangeEvent thiz);
                } GroupNameChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_GroupOperableEvent thiz);
                } GroupOperableEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent (*GroupTalkativeChangeEvent)(miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember now, miraicore_kref_net_mamoe_mirai_contact_NormalMember previous);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_now)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_previous)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component3)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember now, miraicore_kref_net_mamoe_mirai_contact_NormalMember previous);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupTalkativeChangeEvent thiz);
                } GroupTalkativeChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent (*GroupTempMessageEvent)(miraicore_kref_net_mamoe_mirai_contact_NormalMember sender, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageEvent thiz);
                } GroupTempMessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent (*GroupTempMessagePostSendEvent)(miraicore_kref_net_mamoe_mirai_contact_NormalMember target, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_kotlin_Throwable exception, miraicore_kref_net_mamoe_mirai_message_MessageReceipt receipt);
                  miraicore_kref_kotlin_Throwable (*get_exception)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_MessageReceipt (*get_receipt)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  miraicore_kref_kotlin_Throwable (*component3)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_MessageReceipt (*component4)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember target, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_kotlin_Throwable exception, miraicore_kref_net_mamoe_mirai_message_MessageReceipt receipt);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePostSendEvent thiz);
                } GroupTempMessagePostSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent (*GroupTempMessagePreSendEvent)(miraicore_kref_net_mamoe_mirai_contact_NormalMember target, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz);
                  void (*set_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_message_data_Message set);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*component2)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember target, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessagePreSendEvent thiz);
                } GroupTempMessagePreSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent (*GroupTempMessageSyncEvent)(miraicore_kref_net_mamoe_mirai_contact_NormalMember sender, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_GroupTempMessageSyncEvent thiz);
                } GroupTempMessageSyncEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent (*ImageUploadEvent)();
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent thiz);
                  miraicore_kref_net_mamoe_mirai_utils_ExternalResource (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed (*Failed)(miraicore_kref_net_mamoe_mirai_contact_Contact target, miraicore_kref_net_mamoe_mirai_utils_ExternalResource source, miraicore_KInt errno, const char* message);
                    miraicore_KInt (*get_errno)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                    const char* (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                    miraicore_kref_net_mamoe_mirai_utils_ExternalResource (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Contact (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Contact (*component1)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                    miraicore_kref_net_mamoe_mirai_utils_ExternalResource (*component2)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                    miraicore_KInt (*component3)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                    const char* (*component4)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed (*copy)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz, miraicore_kref_net_mamoe_mirai_contact_Contact target, miraicore_kref_net_mamoe_mirai_utils_ExternalResource source, miraicore_KInt errno, const char* message);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Failed thiz);
                  } Failed;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed (*Succeed)(miraicore_kref_net_mamoe_mirai_contact_Contact target, miraicore_kref_net_mamoe_mirai_utils_ExternalResource source, miraicore_kref_net_mamoe_mirai_message_data_Image image);
                    miraicore_kref_net_mamoe_mirai_message_data_Image (*get_image)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz);
                    miraicore_kref_net_mamoe_mirai_utils_ExternalResource (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Contact (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Contact (*component1)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz);
                    miraicore_kref_net_mamoe_mirai_utils_ExternalResource (*component2)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_Image (*component3)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed (*copy)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz, miraicore_kref_net_mamoe_mirai_contact_Contact target, miraicore_kref_net_mamoe_mirai_utils_ExternalResource source, miraicore_kref_net_mamoe_mirai_message_data_Image image);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_ImageUploadEvent_Succeed thiz);
                  } Succeed;
                } ImageUploadEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent (*MemberCardChangeEvent)(const char* origin, const char* new_, miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz);
                  const char* (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz);
                  const char* (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz);
                  const char* (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component3)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz, const char* origin, const char* new_, miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberCardChangeEvent thiz);
                } MemberCardChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent (*MemberHonorChangeEvent)();
                  miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get_honorType)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve (*Achieve)(miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_data_GroupHonorType honorType);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get_honorType)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_data_GroupHonorType honorType);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Achieve thiz);
                  } Achieve;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose (*Lose)(miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_data_GroupHonorType honorType);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*get_honorType)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose thiz);
                    miraicore_kref_net_mamoe_mirai_data_GroupHonorType (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_data_GroupHonorType honorType);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberHonorChangeEvent_Lose thiz);
                  } Lose;
                } MemberHonorChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent (*MemberJoinEvent)(miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Active (*Active)(miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Active thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Active thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Active (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Active thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Active thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Active thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Active thiz);
                  } Active;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite (*Invite)(miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_contact_NormalMember invitor);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_invitor)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_contact_NormalMember invitor);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Invite thiz);
                  } Invite;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Retrieve (*Retrieve)(miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Retrieve thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Retrieve thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Retrieve (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Retrieve thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Retrieve thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Retrieve thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinEvent_Retrieve thiz);
                  } Retrieve;
                } MemberJoinEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent (*MemberJoinRequestEvent)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong eventId, const char* message, miraicore_KLong fromId, miraicore_KLong groupId, const char* groupName, const char* fromNick);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent (*MemberJoinRequestEvent_)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong eventId, const char* message, miraicore_KLong fromId, miraicore_KLong groupId, const char* groupName, const char* fromNick, miraicore_kref_kotlin_Long invitorId);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_KLong (*get_eventId)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_KLong (*get_fromId)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  const char* (*get_fromNick)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_KLong (*get_groupId)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  const char* (*get_groupName)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_invitor)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_kref_kotlin_Long (*get_invitorId)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  const char* (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_KLong (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_KLong (*component4)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_KLong (*component5)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  const char* (*component6)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  const char* (*component7)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_kref_kotlin_Long (*component8)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong eventId, const char* message, miraicore_KLong fromId, miraicore_KLong groupId, const char* groupName, const char* fromNick);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent (*copy_)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong eventId, const char* message, miraicore_KLong fromId, miraicore_KLong groupId, const char* groupName, const char* fromNick, miraicore_kref_kotlin_Long invitorId);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberJoinRequestEvent thiz);
                } MemberJoinRequestEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent (*MemberLeaveEvent)();
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick (*Kick)(miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Kick thiz);
                  } Kick;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Quit (*Quit)(miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Quit thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Quit thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Quit (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Quit thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember member);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Quit thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Quit thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberLeaveEvent_Quit thiz);
                  } Quit;
                } MemberLeaveEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent (*MemberMuteEvent)(miraicore_kref_net_mamoe_mirai_contact_Member member, miraicore_KInt durationSeconds, miraicore_kref_net_mamoe_mirai_contact_Member operator_);
                  miraicore_KInt (*get_durationSeconds)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz);
                  miraicore_KInt (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*component3)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Member member, miraicore_KInt durationSeconds, miraicore_kref_net_mamoe_mirai_contact_Member operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberMuteEvent thiz);
                } MemberMuteEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent (*MemberPermissionChangeEvent)(miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_contact_MemberPermission origin, miraicore_kref_net_mamoe_mirai_contact_MemberPermission new_);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_MemberPermission (*component3)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_contact_MemberPermission origin, miraicore_kref_net_mamoe_mirai_contact_MemberPermission new_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberPermissionChangeEvent thiz);
                } MemberPermissionChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent (*MemberSpecialTitleChangeEvent)(const char* origin, const char* new_, miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                  const char* (*get_new)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                  const char* (*get_origin)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                  const char* (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component3)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component4)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz, const char* origin, const char* new_, miraicore_kref_net_mamoe_mirai_contact_NormalMember member, miraicore_kref_net_mamoe_mirai_contact_NormalMember operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberSpecialTitleChangeEvent thiz);
                } MemberSpecialTitleChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent (*MemberUnmuteEvent)(miraicore_kref_net_mamoe_mirai_contact_Member member, miraicore_kref_net_mamoe_mirai_contact_Member operator_);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_member)(miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Member member, miraicore_kref_net_mamoe_mirai_contact_Member operator_);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MemberUnmuteEvent thiz);
                } MemberUnmuteEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_MessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_MessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_User (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_MessageEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_MessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_MessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_MessageEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_MessageEvent thiz);
                } MessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MessagePreSendEvent (*MessagePreSendEvent)();
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_MessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_MessagePreSendEvent thiz);
                  void (*set_message)(miraicore_kref_net_mamoe_mirai_event_events_MessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_message_data_Message set);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_MessagePreSendEvent thiz);
                } MessagePreSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent (*MessageRecallEvent)();
                  miraicore_kref_net_mamoe_mirai_contact_UserOrBot (*get_author)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent thiz);
                  miraicore_KLong (*get_authorId)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent thiz);
                  miraicore_kref_kotlin_IntArray (*get_messageIds)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent thiz);
                  miraicore_kref_kotlin_IntArray (*get_messageInternalIds)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent thiz);
                  miraicore_KInt (*get_messageTime)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall (*FriendRecall)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_IntArray messageIds, miraicore_kref_kotlin_IntArray messageInternalIds, miraicore_KInt messageTime, miraicore_KLong operatorId, miraicore_kref_net_mamoe_mirai_contact_Friend operator_);
                    miraicore_kref_net_mamoe_mirai_contact_Friend (*get_author)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_KLong (*get_authorId)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_kref_kotlin_IntArray (*get_messageIds)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_kref_kotlin_IntArray (*get_messageInternalIds)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_KInt (*get_messageTime)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Friend (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_KLong (*get_operatorId)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_kref_kotlin_IntArray (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_kref_kotlin_IntArray (*component3)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_KInt (*component4)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_KLong (*component5)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Friend (*component6)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_kref_kotlin_IntArray messageIds, miraicore_kref_kotlin_IntArray messageInternalIds, miraicore_KInt messageTime, miraicore_KLong operatorId, miraicore_kref_net_mamoe_mirai_contact_Friend operator_);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_FriendRecall thiz);
                  } FriendRecall;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall (*GroupRecall)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong authorId, miraicore_kref_kotlin_IntArray messageIds, miraicore_kref_kotlin_IntArray messageInternalIds, miraicore_KInt messageTime, miraicore_kref_net_mamoe_mirai_contact_Member operator_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember author);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_author)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_KLong (*get_authorId)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_kotlin_IntArray (*get_messageIds)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_kotlin_IntArray (*get_messageInternalIds)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_KInt (*get_messageTime)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Member (*get_operator)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_KLong (*component2)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_kotlin_IntArray (*component3)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_kotlin_IntArray (*component4)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_KInt (*component5)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Member (*component6)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Group (*component7)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component8)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall (*copy)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong authorId, miraicore_kref_kotlin_IntArray messageIds, miraicore_kref_kotlin_IntArray messageInternalIds, miraicore_KInt messageTime, miraicore_kref_net_mamoe_mirai_contact_Member operator_, miraicore_kref_net_mamoe_mirai_contact_Group group, miraicore_kref_net_mamoe_mirai_contact_NormalMember author);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_MessageRecallEvent_GroupRecall thiz);
                  } GroupRecall;
                } MessageRecallEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                } MessageSyncEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent (*NewFriendRequestEvent)(miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong eventId, const char* message, miraicore_KLong fromId, miraicore_KLong fromGroupId, const char* fromNick);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  miraicore_KLong (*get_eventId)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_fromGroup)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  miraicore_KLong (*get_fromGroupId)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  miraicore_KLong (*get_fromId)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  const char* (*get_fromNick)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  const char* (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  miraicore_KLong (*component2)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  miraicore_KLong (*component4)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  miraicore_KLong (*component5)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  const char* (*component6)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz, miraicore_kref_net_mamoe_mirai_Bot bot, miraicore_KLong eventId, const char* message, miraicore_KLong fromId, miraicore_KLong fromGroupId, const char* fromNick);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_NewFriendRequestEvent thiz);
                } NewFriendRequestEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent (*NudgeEvent)(miraicore_kref_net_mamoe_mirai_contact_UserOrBot from, miraicore_kref_net_mamoe_mirai_contact_UserOrBot target, miraicore_kref_net_mamoe_mirai_contact_Contact subject, const char* action, const char* suffix);
                  const char* (*get_action)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_UserOrBot (*get_from)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  const char* (*get_suffix)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_UserOrBot (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_UserOrBot (*component1)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_UserOrBot (*component2)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*component3)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  const char* (*component4)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  const char* (*component5)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz, miraicore_kref_net_mamoe_mirai_contact_UserOrBot from, miraicore_kref_net_mamoe_mirai_contact_UserOrBot target, miraicore_kref_net_mamoe_mirai_contact_Contact subject, const char* action, const char* suffix);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_NudgeEvent thiz);
                } NudgeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_OtherClient (*get_client)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientEvent thiz);
                } OtherClientEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent (*OtherClientMessageEvent)(miraicore_kref_net_mamoe_mirai_contact_OtherClient client, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_OtherClient (*get_client)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_User (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_OtherClient (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientMessageEvent thiz);
                } OtherClientMessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_OtherClientOfflineEvent (*OtherClientOfflineEvent)(miraicore_kref_net_mamoe_mirai_contact_OtherClient client);
                  miraicore_kref_net_mamoe_mirai_contact_OtherClient (*get_client)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOfflineEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_OtherClient (*component1)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOfflineEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_OtherClientOfflineEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOfflineEvent thiz, miraicore_kref_net_mamoe_mirai_contact_OtherClient client);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOfflineEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOfflineEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOfflineEvent thiz);
                } OtherClientOfflineEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent (*OtherClientOnlineEvent)(miraicore_kref_net_mamoe_mirai_contact_OtherClient client, miraicore_kref_net_mamoe_mirai_contact_ClientKind kind);
                  miraicore_kref_net_mamoe_mirai_contact_OtherClient (*get_client)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*get_kind)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_OtherClient (*component1)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_ClientKind (*component2)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent thiz, miraicore_kref_net_mamoe_mirai_contact_OtherClient client, miraicore_kref_net_mamoe_mirai_contact_ClientKind kind);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_OtherClientOnlineEvent thiz);
                } OtherClientOnlineEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_StrangerAddEvent (*StrangerAddEvent)(miraicore_kref_net_mamoe_mirai_contact_Stranger stranger);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_stranger)(miraicore_kref_net_mamoe_mirai_event_events_StrangerAddEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*component1)(miraicore_kref_net_mamoe_mirai_event_events_StrangerAddEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_StrangerAddEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_StrangerAddEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Stranger stranger);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_StrangerAddEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_StrangerAddEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_StrangerAddEvent thiz);
                } StrangerAddEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_StrangerEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_stranger)(miraicore_kref_net_mamoe_mirai_event_events_StrangerEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_user)(miraicore_kref_net_mamoe_mirai_event_events_StrangerEvent thiz);
                } StrangerEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent (*StrangerMessageEvent)(miraicore_kref_net_mamoe_mirai_contact_Stranger sender, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_stranger)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageEvent thiz);
                } StrangerMessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent (*StrangerMessagePostSendEvent)(miraicore_kref_net_mamoe_mirai_contact_Stranger target, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_kotlin_Throwable exception, miraicore_kref_net_mamoe_mirai_message_MessageReceipt receipt);
                  miraicore_kref_kotlin_Throwable (*get_exception)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_MessageReceipt (*get_receipt)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*component1)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*component2)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                  miraicore_kref_kotlin_Throwable (*component3)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_MessageReceipt (*component4)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Stranger target, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_kotlin_Throwable exception, miraicore_kref_net_mamoe_mirai_message_MessageReceipt receipt);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePostSendEvent thiz);
                } StrangerMessagePostSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent (*StrangerMessagePreSendEvent)(miraicore_kref_net_mamoe_mirai_contact_Stranger target, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent thiz);
                  void (*set_message)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_message_data_Message set);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*component1)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*component2)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent (*copy)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Stranger target, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessagePreSendEvent thiz);
                } StrangerMessagePreSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent (*StrangerMessageSyncEvent)(miraicore_kref_net_mamoe_mirai_contact_Stranger sender, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent thiz);
                  const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger (*get_source)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_stranger)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_StrangerMessageSyncEvent thiz);
                } StrangerMessageSyncEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_StrangerRelationChangeEvent (*StrangerRelationChangeEvent)(miraicore_kref_net_mamoe_mirai_contact_Stranger stranger);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_stranger)(miraicore_kref_net_mamoe_mirai_event_events_StrangerRelationChangeEvent thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_StrangerRelationChangeEvent_Deleted (*Deleted)(miraicore_kref_net_mamoe_mirai_contact_Stranger stranger);
                  } Deleted;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_event_events_StrangerRelationChangeEvent_Friended (*Friended)(miraicore_kref_net_mamoe_mirai_contact_Stranger stranger, miraicore_kref_net_mamoe_mirai_contact_Friend friend_);
                    miraicore_kref_net_mamoe_mirai_contact_Friend (*get_friend)(miraicore_kref_net_mamoe_mirai_event_events_StrangerRelationChangeEvent_Friended thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_stranger)(miraicore_kref_net_mamoe_mirai_event_events_StrangerRelationChangeEvent_Friended thiz);
                  } Friended;
                } StrangerRelationChangeEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_TempMessageEvent (*TempMessageEvent)(miraicore_kref_net_mamoe_mirai_contact_NormalMember sender, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_TempMessageEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_sender)(miraicore_kref_net_mamoe_mirai_event_events_TempMessageEvent thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_event_events_TempMessageEvent thiz);
                } TempMessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_TempMessagePostSendEvent (*TempMessagePostSendEvent)(miraicore_kref_net_mamoe_mirai_contact_Member target, miraicore_kref_net_mamoe_mirai_message_data_MessageChain message, miraicore_kref_kotlin_Throwable exception, miraicore_kref_net_mamoe_mirai_message_MessageReceipt receipt);
                  miraicore_kref_kotlin_Throwable (*get_exception)(miraicore_kref_net_mamoe_mirai_event_events_TempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_TempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_TempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_MessageReceipt (*get_receipt)(miraicore_kref_net_mamoe_mirai_event_events_TempMessagePostSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_TempMessagePostSendEvent thiz);
                } TempMessagePostSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_TempMessagePreSendEvent (*TempMessagePreSendEvent)(miraicore_kref_net_mamoe_mirai_contact_Member target, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_event_events_TempMessagePreSendEvent thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*get_message)(miraicore_kref_net_mamoe_mirai_event_events_TempMessagePreSendEvent thiz);
                  void (*set_message)(miraicore_kref_net_mamoe_mirai_event_events_TempMessagePreSendEvent thiz, miraicore_kref_net_mamoe_mirai_message_data_Message set);
                  miraicore_kref_net_mamoe_mirai_contact_Member (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_TempMessagePreSendEvent thiz);
                } TempMessagePreSendEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_User (*get_user)(miraicore_kref_net_mamoe_mirai_event_events_UserEvent thiz);
                } UserEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_contact_User (*get_subject)(miraicore_kref_net_mamoe_mirai_event_events_UserMessageEvent thiz);
                } UserMessageEvent;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_event_events_UserMessagePreSendEvent (*UserMessagePreSendEvent)();
                  miraicore_kref_net_mamoe_mirai_contact_User (*get_target)(miraicore_kref_net_mamoe_mirai_event_events_UserMessagePreSendEvent thiz);
                } UserMessagePreSendEvent;
              } events;
            } event;
            struct {
              void (*initMirai)();
              struct {
                struct {
                  miraicore_KType* (*_type)(void);
                } VerboseEvent;
              } event;
              struct {
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_internal_message_MessageSourceSerializerImpl (*MessageSourceSerializerImpl)(const char* serialName);
                  miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_internal_message_MessageSourceSerializerImpl thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSource (*deserialize)(miraicore_kref_net_mamoe_mirai_internal_message_MessageSourceSerializerImpl thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(miraicore_kref_net_mamoe_mirai_internal_message_MessageSourceSerializerImpl thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_MessageSource value);
                } MessageSourceSerializerImpl;
              } message;
              struct {
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_KType* (*_type)(void);
                  } NoEventLog;
                  struct {
                    miraicore_KType* (*_type)(void);
                  } NoLog;
                } Packet;
              } network;
            } internal;
            struct {
              miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_message_MessageReceipt thiz);
              miraicore_kref_kotlin_IntArray (*get_sourceIds)(miraicore_kref_net_mamoe_mirai_message_MessageReceipt thiz);
              miraicore_kref_kotlin_IntArray (*get_sourceInternalIds)(miraicore_kref_net_mamoe_mirai_message_MessageReceipt thiz);
              miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_sourceMessage)(miraicore_kref_net_mamoe_mirai_message_MessageReceipt thiz);
              miraicore_KInt (*get_sourceTime)(miraicore_kref_net_mamoe_mirai_message_MessageReceipt thiz);
              miraicore_KBoolean (*isContextIdenticalWith)(miraicore_kref_net_mamoe_mirai_event_events_MessageEvent thiz, miraicore_kref_net_mamoe_mirai_event_events_MessageEvent another);
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_kotlinx_serialization_modules_SerializersModule (*get_serializersModule)(miraicore_kref_net_mamoe_mirai_message_MessageSerializers thiz);
                void (*registerSerializers)(miraicore_kref_net_mamoe_mirai_message_MessageSerializers thiz, miraicore_kref_kotlinx_serialization_modules_SerializersModule serializersModule);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_MessageSerializers_INSTANCE (*_instance)();
                  miraicore_kref_kotlinx_serialization_modules_SerializersModule (*get_serializersModule)(miraicore_kref_net_mamoe_mirai_message_MessageSerializers_INSTANCE thiz);
                  void (*registerSerializers)(miraicore_kref_net_mamoe_mirai_message_MessageSerializers_INSTANCE thiz, miraicore_kref_kotlinx_serialization_modules_SerializersModule serializersModule);
                } INSTANCE;
              } MessageSerializers;
              struct {
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_kotlinx_coroutines_Deferred (*get_exception)(miraicore_kref_net_mamoe_mirai_message_action_AsyncRecallResult thiz);
                  miraicore_kref_kotlinx_coroutines_Deferred (*get_isSuccess)(miraicore_kref_net_mamoe_mirai_message_action_AsyncRecallResult thiz);
                } AsyncRecallResult;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_action_BotNudge (*BotNudge)(miraicore_kref_net_mamoe_mirai_Bot target);
                  miraicore_kref_net_mamoe_mirai_Bot (*get_target)(miraicore_kref_net_mamoe_mirai_message_action_BotNudge thiz);
                  miraicore_kref_net_mamoe_mirai_Bot (*component1)(miraicore_kref_net_mamoe_mirai_message_action_BotNudge thiz);
                  miraicore_kref_net_mamoe_mirai_message_action_BotNudge (*copy)(miraicore_kref_net_mamoe_mirai_message_action_BotNudge thiz, miraicore_kref_net_mamoe_mirai_Bot target);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_action_BotNudge thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_action_BotNudge thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_action_BotNudge thiz);
                } BotNudge;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_action_FriendNudge (*FriendNudge)(miraicore_kref_net_mamoe_mirai_contact_Friend target);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*get_target)(miraicore_kref_net_mamoe_mirai_message_action_FriendNudge thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Friend (*component1)(miraicore_kref_net_mamoe_mirai_message_action_FriendNudge thiz);
                  miraicore_kref_net_mamoe_mirai_message_action_FriendNudge (*copy)(miraicore_kref_net_mamoe_mirai_message_action_FriendNudge thiz, miraicore_kref_net_mamoe_mirai_contact_Friend target);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_action_FriendNudge thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_action_FriendNudge thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_action_FriendNudge thiz);
                } FriendNudge;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_action_MemberNudge (*MemberNudge)(miraicore_kref_net_mamoe_mirai_contact_NormalMember target);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*get_target)(miraicore_kref_net_mamoe_mirai_message_action_MemberNudge thiz);
                  miraicore_kref_net_mamoe_mirai_contact_NormalMember (*component1)(miraicore_kref_net_mamoe_mirai_message_action_MemberNudge thiz);
                  miraicore_kref_net_mamoe_mirai_message_action_MemberNudge (*copy)(miraicore_kref_net_mamoe_mirai_message_action_MemberNudge thiz, miraicore_kref_net_mamoe_mirai_contact_NormalMember target);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_action_MemberNudge thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_action_MemberNudge thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_action_MemberNudge thiz);
                } MemberNudge;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_action_Nudge (*Nudge)();
                  miraicore_kref_net_mamoe_mirai_contact_UserOrBot (*get_target)(miraicore_kref_net_mamoe_mirai_message_action_Nudge thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_action_Nudge_Companion (*_instance)();
                  } Companion;
                } Nudge;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge (*StrangerNudge)(miraicore_kref_net_mamoe_mirai_contact_Stranger target);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_target)(miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Stranger (*component1)(miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge thiz);
                  miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge (*copy)(miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge thiz, miraicore_kref_net_mamoe_mirai_contact_Stranger target);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_action_StrangerNudge thiz);
                } StrangerNudge;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_action_UserNudge (*UserNudge)();
                  miraicore_kref_net_mamoe_mirai_contact_UserOrBot (*get_target)(miraicore_kref_net_mamoe_mirai_message_action_UserNudge thiz);
                } UserNudge;
              } action;
              struct {
                struct {
                  miraicore_KType* (*_type)(void);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_code_CodableMessage thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  const char* (*serializeToMiraiCode)(miraicore_kref_net_mamoe_mirai_message_code_CodableMessage thiz);
                } CodableMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_code_MiraiCode (*_instance)();
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*deserializeMiraiCode)(miraicore_kref_net_mamoe_mirai_message_code_MiraiCode thiz, const char* code, miraicore_kref_net_mamoe_mirai_contact_Contact contact);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*deserializeMiraiCode_)(miraicore_kref_net_mamoe_mirai_message_code_MiraiCode thiz, const char* thiz1, miraicore_kref_net_mamoe_mirai_contact_Contact contact);
                  const char* (*serializeToMiraiCode)(miraicore_kref_net_mamoe_mirai_message_code_MiraiCode thiz, miraicore_kref_kotlin_Array thiz1);
                  const char* (*serializeToMiraiCode_)(miraicore_kref_net_mamoe_mirai_message_code_MiraiCode thiz, miraicore_kref_kotlin_collections_Iterable thiz1);
                  const char* (*serializeToMiraiCode__)(miraicore_kref_net_mamoe_mirai_message_code_MiraiCode thiz, miraicore_kref_kotlin_collections_Iterator thiz1);
                  const char* (*serializeToMiraiCode___)(miraicore_kref_net_mamoe_mirai_message_code_MiraiCode thiz, miraicore_kref_kotlin_sequences_Sequence thiz1);
                  const char* (*serializeToMiraiCode____)(miraicore_kref_net_mamoe_mirai_message_code_MiraiCode thiz, miraicore_kref_net_mamoe_mirai_message_code_CodableMessage thiz1);
                } MiraiCode;
              } code;
              struct {
                miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_kref_net_mamoe_mirai_Bot (*get_bot_)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                miraicore_kref_net_mamoe_mirai_Bot (*get_botOrNull)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                const char* (*get_content)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz);
                miraicore_kref_kotlin_IntArray (*get_ids)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_kref_kotlin_IntArray (*get_internalId)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind (*get_kind)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind (*get_kind_)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource thiz);
                miraicore_KLong (*get_lengthDuration)(miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio thiz);
                miraicore_kref_kotlin_ByteArray (*get_md5)(miraicore_kref_net_mamoe_mirai_message_data_Image thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageSource (*get_source)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageSource (*get_sourceOrNull)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_topmostKey)(miraicore_kref_net_mamoe_mirai_message_data_MessageKey thiz);
                miraicore_kref_net_mamoe_mirai_message_data_At (*At_new)(miraicore_kref_net_mamoe_mirai_contact_UserOrBot user);
                miraicore_kref_net_mamoe_mirai_message_data_FileMessage (*FileMessage_new)(const char* id, miraicore_KInt internalId, const char* name, miraicore_KLong size);
                miraicore_kref_net_mamoe_mirai_message_data_FlashImage (*FlashImage_new)(const char* imageId);
                miraicore_kref_net_mamoe_mirai_message_data_Image (*Image_new)(const char* imageId);
                miraicore_kref_net_mamoe_mirai_message_data_Image (*Image_new2)(const char* imageId, miraicore_kref_kotlin_Function1 builderAction);
                miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio (*OfflineAudio_new)(const char* filename, miraicore_kref_kotlin_ByteArray fileMd5, miraicore_KLong fileSize, miraicore_kref_net_mamoe_mirai_message_data_AudioCodec codec, miraicore_kref_kotlin_ByteArray extraData);
                miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio (*OfflineAudio_new2)(miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio onlineAudio);
                miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage (*UnsupportedMessage_new)(miraicore_kref_kotlin_ByteArray struct_);
                miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*buildForwardMessage)(miraicore_kref_net_mamoe_mirai_contact_Contact context, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy displayStrategy, miraicore_kref_kotlin_Function1 block);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*buildMessageChain)(miraicore_KInt initialSize, miraicore_kref_kotlin_Function1 block);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*buildMessageChain_)(miraicore_kref_kotlin_Function1 block);
                miraicore_kref_net_mamoe_mirai_message_data_ServiceMessage (*buildXmlMessage)(miraicore_KInt serviceId, miraicore_kref_kotlin_Function1 block);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*emptyMessageChain)();
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*messageChainOf)(miraicore_kref_kotlin_Array messages);
                miraicore_kref_net_mamoe_mirai_message_data_At (*at)(miraicore_kref_net_mamoe_mirai_contact_Member thiz);
                miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*buildForwardMessage_)(miraicore_kref_net_mamoe_mirai_event_events_MessageEvent thiz, miraicore_kref_net_mamoe_mirai_contact_Contact context, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy displayStrategy, miraicore_kref_kotlin_Function1 block);
                miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource (*buildMessageSource)(miraicore_kref_net_mamoe_mirai_Bot thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind kind, miraicore_kref_kotlin_Function1 block);
                miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource (*buildMessageSource_)(miraicore_kref_net_mamoe_mirai_IMirai thiz, miraicore_KLong botId, miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind kind, miraicore_kref_kotlin_Function1 block);
                miraicore_kref_kotlin_collections_List (*contentsList)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_kref_kotlin_sequences_Sequence (*contentsSequence)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource (*copyAmend)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz, miraicore_kref_kotlin_Function1 block);
                miraicore_kref_net_mamoe_mirai_message_data_FlashImage (*flash)(miraicore_kref_net_mamoe_mirai_message_data_Image thiz);
                miraicore_KBoolean (*isContentBlank)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz);
                miraicore_KBoolean (*isContentEmpty)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz);
                miraicore_KBoolean (*isInstance)(miraicore_kref_net_mamoe_mirai_message_data_MessageKey thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage message);
                miraicore_kref_kotlin_collections_List (*metadataList)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_kref_kotlin_sequences_Sequence (*metadataSequence)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*repeat)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_KInt count);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*times)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_KInt count);
                miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*toForwardMessage)(miraicore_kref_kotlin_collections_Iterable thiz, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy displayStrategy);
                miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*toForwardMessage_)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_KLong senderId, const char* senderName, miraicore_KInt time, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy displayStrategy);
                miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*toForwardMessage__)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_net_mamoe_mirai_contact_User sender, miraicore_KInt time, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy displayStrategy);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*toMessageChain)(miraicore_kref_kotlin_Array thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*toMessageChain_)(miraicore_kref_kotlin_collections_Iterable thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*toMessageChain__)(miraicore_kref_kotlin_collections_Iterator thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*toMessageChain___)(miraicore_kref_kotlin_sequences_Sequence thiz);
                miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*toMessageChain____)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz);
                miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource (*toOffline)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource thiz);
                miraicore_kref_net_mamoe_mirai_message_data_PlainText (*toPlainText)(const char* thiz);
                miraicore_kref_net_mamoe_mirai_message_data_Voice (*toVoice)(miraicore_kref_net_mamoe_mirai_message_data_Audio thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_AbstractServiceMessage (*AbstractServiceMessage)(miraicore_KInt seen1, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_AbstractServiceMessage (*AbstractServiceMessage_)();
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_AbstractServiceMessage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_AbstractServiceMessage_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_AbstractServiceMessage_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_message_data_AbstractServiceMessage_Companion thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                  } Companion;
                } AbstractServiceMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_At (*At)(miraicore_KInt seen1, miraicore_KLong target, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_At (*At_)(miraicore_KLong target);
                  miraicore_KLong (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_At thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_At thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  miraicore_KLong (*component1)(miraicore_kref_net_mamoe_mirai_message_data_At thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_At thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_At (*copy)(miraicore_kref_net_mamoe_mirai_message_data_At thiz, miraicore_KLong target);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_At thiz, miraicore_kref_kotlin_Any other);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*followedBy)(miraicore_kref_net_mamoe_mirai_message_data_At thiz, miraicore_kref_net_mamoe_mirai_message_data_Message tail);
                  const char* (*getDisplay)(miraicore_kref_net_mamoe_mirai_message_data_At thiz, miraicore_kref_net_mamoe_mirai_contact_Group group);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_At thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_At thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_At_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_At_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_At_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_At (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_At_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_At_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_At value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_At_Companion (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_At_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_At_Companion thiz);
                  } Companion;
                } At;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_AtAll (*_instance)();
                  const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz);
                  const char* (*get_display)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz, miraicore_kref_kotlin_Any other);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*followedBy)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz, miraicore_kref_net_mamoe_mirai_message_data_Message tail);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz);
                  const char* (*serializeToMiraiCode)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz);
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz);
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_AtAll thiz);
                } AtAll;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_AudioCodec (*get_codec)(miraicore_kref_net_mamoe_mirai_message_data_Audio thiz);
                  miraicore_kref_kotlin_ByteArray (*get_extraData)(miraicore_kref_net_mamoe_mirai_message_data_Audio thiz);
                  miraicore_kref_kotlin_ByteArray (*get_fileMd5)(miraicore_kref_net_mamoe_mirai_message_data_Audio thiz);
                  miraicore_KLong (*get_fileSize)(miraicore_kref_net_mamoe_mirai_message_data_Audio thiz);
                  const char* (*get_filename)(miraicore_kref_net_mamoe_mirai_message_data_Audio thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_Audio thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_Audio thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Audio_Key (*_instance)();
                  } Key;
                } Audio;
                struct {
                  miraicore_KType* (*_type)(void);
                  const char* (*get_formatName)(miraicore_kref_net_mamoe_mirai_message_data_AudioCodec thiz);
                  miraicore_KInt (*get_id)(miraicore_kref_net_mamoe_mirai_message_data_AudioCodec thiz);
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_AudioCodec (*get)(); /* enum entry for AMR. */
                  } AMR;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_AudioCodec (*get)(); /* enum entry for SILK. */
                  } SILK;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_AudioCodec_Companion (*_instance)();
                    miraicore_kref_net_mamoe_mirai_message_data_AudioCodec (*fromFormatName)(miraicore_kref_net_mamoe_mirai_message_data_AudioCodec_Companion thiz, const char* formatName);
                    miraicore_kref_net_mamoe_mirai_message_data_AudioCodec (*fromFormatNameOrNull)(miraicore_kref_net_mamoe_mirai_message_data_AudioCodec_Companion thiz, const char* formatName);
                    miraicore_kref_net_mamoe_mirai_message_data_AudioCodec (*fromId)(miraicore_kref_net_mamoe_mirai_message_data_AudioCodec_Companion thiz, miraicore_KInt id);
                    miraicore_kref_net_mamoe_mirai_message_data_AudioCodec (*fromIdOrNull)(miraicore_kref_net_mamoe_mirai_message_data_AudioCodec_Companion thiz, miraicore_KInt id);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_AudioCodec_Companion thiz);
                  } Companion;
                } AudioCodec;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage (*CombinedMessage)(miraicore_kref_net_mamoe_mirai_message_data_Message element, miraicore_kref_net_mamoe_mirai_message_data_Message tail, miraicore_KBoolean hasConstrainSingle);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*get_element)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz);
                  miraicore_KBoolean (*get_hasConstrainSingle)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz);
                  miraicore_KInt (*get_size)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Message (*get_tail)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz);
                  miraicore_KBoolean (*contains)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_KBoolean (*containsAll)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz, miraicore_kref_kotlin_collections_Collection elements);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_SingleMessage (*get)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz, miraicore_KInt index);
                  miraicore_KInt (*indexOf)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_KBoolean (*isEmpty)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz);
                  miraicore_kref_kotlin_collections_Iterator (*iterator)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz);
                  miraicore_KInt (*lastIndexOf)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_kref_kotlin_collections_ListIterator (*listIterator)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz);
                  miraicore_kref_kotlin_collections_ListIterator (*listIterator_)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz, miraicore_KInt index);
                  miraicore_kref_kotlin_collections_List (*subList)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz, miraicore_KInt fromIndex, miraicore_KInt toIndex);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_CombinedMessage thiz);
                } CombinedMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_ConstrainSingle thiz);
                } ConstrainSingle;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_CustomMessage (*CustomMessage)(miraicore_KInt seen1, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_CustomMessage (*CustomMessage_)();
                  miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Factory (*getFactory)(miraicore_kref_net_mamoe_mirai_message_data_CustomMessage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion (*_instance)();
                    miraicore_kref_net_mamoe_mirai_message_data_CustomMessage (*load)(miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion thiz, miraicore_kref_io_ktor_utils_io_core_ByteReadPacket fullData);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion_CustomMessageFullDataDeserializeInternalException (*CustomMessageFullDataDeserializeInternalException)(miraicore_kref_kotlin_Throwable cause);
                    } CustomMessageFullDataDeserializeInternalException;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion_CustomMessageFullDataDeserializeUserException (*CustomMessageFullDataDeserializeUserException)(miraicore_kref_kotlin_ByteArray body, miraicore_kref_kotlin_Throwable cause);
                      miraicore_kref_kotlin_ByteArray (*get_body)(miraicore_kref_net_mamoe_mirai_message_data_CustomMessage_Companion_CustomMessageFullDataDeserializeUserException thiz);
                    } CustomMessageFullDataDeserializeUserException;
                  } Companion;
                } CustomMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_CustomMessageMetadata (*CustomMessageMetadata)(miraicore_KInt seen1, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_CustomMessageMetadata (*CustomMessageMetadata_)();
                  miraicore_kref_kotlin_ByteArray (*customToString)(miraicore_kref_net_mamoe_mirai_message_data_CustomMessageMetadata thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_CustomMessageMetadata thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_CustomMessageMetadata_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_CustomMessageMetadata_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_message_data_CustomMessageMetadata_Companion thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                  } Companion;
                } CustomMessageMetadata;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_Dice (*Dice)(miraicore_KInt seen1, miraicore_KInt value, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_Dice (*Dice_)(miraicore_KInt value);
                  miraicore_KInt (*get_id)(miraicore_kref_net_mamoe_mirai_message_data_Dice thiz);
                  const char* (*get_name)(miraicore_kref_net_mamoe_mirai_message_data_Dice thiz);
                  miraicore_KInt (*get_value)(miraicore_kref_net_mamoe_mirai_message_data_Dice thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_Dice thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  miraicore_KInt (*component1)(miraicore_kref_net_mamoe_mirai_message_data_Dice thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Dice (*copy)(miraicore_kref_net_mamoe_mirai_message_data_Dice thiz, miraicore_KInt value);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_Dice thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_Dice thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_Dice thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Dice_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_Dice_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_Dice_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_Dice (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_Dice_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_Dice_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_Dice value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Dice_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_Dice_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_Dice (*random)(miraicore_kref_net_mamoe_mirai_message_data_Dice_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_Dice_Key thiz);
                  } Key;
                } Dice;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain (*_instance)();
                  miraicore_KBoolean (*get_hasConstrainSingle)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz);
                  miraicore_KInt (*get_size)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  miraicore_KBoolean (*contains)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_KBoolean (*containsAll)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz, miraicore_kref_kotlin_collections_Collection elements);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_SingleMessage (*get)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz, miraicore_KInt index);
                  miraicore_KInt (*indexOf)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_KBoolean (*isEmpty)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz);
                  miraicore_kref_kotlin_collections_Iterator (*iterator)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz);
                  miraicore_KInt (*lastIndexOf)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_kref_kotlin_collections_ListIterator (*listIterator)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz);
                  miraicore_kref_kotlin_collections_ListIterator (*listIterator_)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz, miraicore_KInt index);
                  const char* (*serializeToMiraiCode)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz);
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz);
                  miraicore_kref_kotlin_collections_List (*subList)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz, miraicore_KInt fromIndex, miraicore_KInt toIndex);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_EmptyMessageChain thiz);
                } EmptyMessageChain;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_Face (*Face)(miraicore_KInt seen1, miraicore_KInt id, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_Face (*Face_)(miraicore_KInt id);
                  miraicore_KInt (*get_id)(miraicore_kref_net_mamoe_mirai_message_data_Face thiz);
                  const char* (*get_name)(miraicore_kref_net_mamoe_mirai_message_data_Face thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_Face thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  miraicore_KInt (*component1)(miraicore_kref_net_mamoe_mirai_message_data_Face thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_Face thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Face (*copy)(miraicore_kref_net_mamoe_mirai_message_data_Face thiz, miraicore_KInt id);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_Face thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_Face thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_Face thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Face_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_Face_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_Face_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_Face (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_Face_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_Face_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_Face value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Face_Companion (*_instance)();
                    miraicore_KInt (*get_AI_NI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_AI_QING)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_AI_XIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_AN_ZHONG_GUAN_CHA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_AO_MAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BAI_TUO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BAI_XIE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BAI_YAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BANG_BANG_TANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BAN_ZHUAN_ZHONG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BAO_BAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BAO_JI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BAO_JIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BAO_QUAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BIAN_BIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BIAN_PAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BIAN_XING)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BIAO_LEI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BI_SHI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BI_XIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BI_ZUI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BO_BO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_BU_KAI_XIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CAI_DAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CAI_GOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CANG_SANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CA_HAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CENG_YI_CENG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHAN_DOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHAO_FENG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHAO_PIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHA_JIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHE_YI_CHE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHI_GUA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHI_TANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_CHONG_BAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DAN_GAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DA_CALL)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DA_KU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DA_LIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DA_XIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DENG_LONG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DE_YI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DIAN_ZAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DIAO_XIE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_DING_GUA_GUA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_E)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_FAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_FA_DAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_FA_DOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_FA_NU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_FEI_JI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_FEI_WEN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_FEN_DOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_FO_XI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_GAN_BEI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_GAN_GA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_GONG_XI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_GOU_YIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_GU_ZHANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HAI_PA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HAI_XIU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HAN_XIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HAO_BANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HAO_SHAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HA_QIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HENG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HE_CAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HE_HE_DA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HE_NAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HE_XIE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HONG_BAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HONG_BAO_BAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HUAI_XIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HUA_CHI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HUI_SHOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HUI_TOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_HU_LIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JIA_YOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JIA_YOU_BAO_BAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JIA_YOU_BI_SHENG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JIE_WU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JING_DAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JING_KONG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JING_LI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JING_XI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JING_YA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JI_DONG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JI_E)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JI_ZHANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JU_HUA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_JU_JUE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KAI_QIANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KA_FEI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KEN_TOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KE_AI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KE_DAO_LE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KE_LIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KE_TOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KOU_BI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KOU_ZHAO_HU_TI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KUAI_KU_LE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KUANG_XIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KUN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_KU_LOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_K_GE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_K歌)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LAN_QIU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LAO_SE_PI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LA_JIAO_JIANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LA_YAN_JING)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LEI_BEN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LENG_HAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LENG_MO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LIAO_YI_LIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LIU_HAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LIU_LEI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_LI_WU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_MAI_MENG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_MANG_DAO_FEI_QI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_MEI_GUI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_MIAN_WU_BIAO_QING)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_MIAO_MIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_MO_GUI_XIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_MO_JIN_LI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_MO_YU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_NAN_GUO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_NAO_KUO_TENG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_NA_DAO_HONG_BAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_NIU_A)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_NIU_QI_CHONG_TIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_NO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_O)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_OK)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_OU_HUO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_O_YO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PAI_SHOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PAI_TOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PAI_ZHUO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PANG_SAN_JIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PEN_LIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PEN_XIE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PIAO_CHONG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PIE_ZUI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PING_PANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_PI_JIU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QIAO_DA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QIAO_KAI_XIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QIA_YI_QIA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QING)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QING_ZHU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QIN_QIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QIU_DA_LE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QIU_HONG_BAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QI_DAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QI_DAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_QUAN_TOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_RANG_WO_KANG_KANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_RENG_GOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SAO_RAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHAN_DIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHAN_LIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHENG_LI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHENG_RI_KUAI_LE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHI_AI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHOU_QIANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHUAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHUAI_TOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHUANG_XI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SHUI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_SONG_HUA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TAI_NAN_LE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TAI_YANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TIAN_YI_TIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TIAO_PI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TIAO_SHENG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TIAO_TIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TOU_KAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TOU_TU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TOU_XIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TOU_ZHUANG_JI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TUO_LIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_TUO_SAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WANG_WANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WEI_QU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WEI_XIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WEN_HAO_LIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WO_BU_KAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WO_MEI_SHI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WO_SHOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WO_SUAN_LE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WO_ZUI_MEI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WU_LIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WU_LIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WU_NAI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_WU_YAN_XIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIAN_QI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIAN_WEN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIAO_JIU_JIE)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIAO_KU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIAO_YANG_ER)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIE_HONG_BAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIE_YAN_XIAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIN_NIAN_YAN_HUA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XIN_SUI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XI_GUA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_XU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YANG_TUO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YIN_XIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YI_WEN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YONG_BAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YOU_BAI_NIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YOU_HENG_HENG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YOU_LING)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YOU_QIN_QIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YOU_TAI_JI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YOU_XIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YUAN_BAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YUAN_LIANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YUE_LIANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_YUN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZAI_JIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHA_DAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHA_YAN_JING)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHENG_YAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHEN_HAO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHEN_JING)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHE_MO)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHOU_MA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHUAI_ZHA_TIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHUAN_QUAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHUA_KUANG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZHU_TOU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZI_XI_FEN_XI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZI_YA)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZUO_BAI_NIAN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZUO_HENG_HENG)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZUO_QIN_QIN)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZUO_TAI_JI)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_ZU_QIU)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_doge)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_emm)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_kref_kotlin_Array (*get_names)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_不)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_不开心)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_乒乓)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_亲亲)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_仔细分析)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_佛系)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_便便)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_偷看)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_偷笑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_傲慢)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_元宝)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_再见)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_冷汗)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_冷漠)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_凋谢)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_击掌)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_刀)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_加油)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_加油必胜)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_加油抱抱)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_勾引)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_卖萌)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_原谅)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_双喜)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_发呆)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_发怒)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_发抖)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_变形)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_口罩护体)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_可怜)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_可爱)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_右亲亲)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_右哼哼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_右太极)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_右拜年)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_吃)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_吃瓜)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_吃糖)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_吐)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_吓)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_呃)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_呲牙)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_呵呵哒)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_咒骂)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_咖啡)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_哈欠)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_哦)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_哦哟)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_哼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_啃头)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_啤酒)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_啵啵)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_喝奶)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_喝彩)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_喵喵)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_喷脸)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_喷血)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_嗑到了)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_嘘)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_嘲讽)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_回头)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_困)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_坏笑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_大哭)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_大笑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_太南了)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_太阳)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_头撞击)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_头秃)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_奋斗)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_好)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_好棒)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_好闪)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_委屈)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_嫌弃)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_害怕)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_害羞)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_小样儿)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_小纠结)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_尴尬)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_崇拜)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_左亲亲)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_左哼哼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_左太极)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_左拜年)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_差劲)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_干杯)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_幽灵)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_庆祝)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_开枪)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_得意)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_微笑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_心碎)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_忙到飞起)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_快哭了)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_怄火)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_恭喜)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_悠闲)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_惊呆)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_惊喜)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_惊恐)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_惊讶)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_憨笑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_我不看)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_我最美)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_我没事)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_我酸了)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_扇脸)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_手枪)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_打call)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_打脸)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_扔狗)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_托脸)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_托腮)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_扯一扯)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_抓狂)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_折磨)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_抠鼻)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_抱抱)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_抱拳)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拍头)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拍手)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拍桌)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拒绝)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拜托)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拜谢)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拥抱)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拳头)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拽炸天)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_拿到红包)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_挥手)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_捂脸)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_掐一掐)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_握手)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_搬砖中)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_摸锦鲤)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_摸鱼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_撇嘴)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_撩一撩)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_擦汗)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_敬礼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_敲开心)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_敲打)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_斜眼笑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_新年烟花)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_无奈)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_无眼笑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_无聊)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_晕)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_暗中观察)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_暴击)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_月亮)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_期待)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_棒棒糖)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_比心)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_求红包)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_汗)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_汪汪)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_沧桑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_河蟹)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_泪奔)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_流汗)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_流泪)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_激动)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_灯笼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_炸弹)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_点赞)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_爆筋)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_爱你)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_爱心)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_爱情)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_牛啊)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_牛气冲天)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_狂笑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_猪头)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_献吻)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_玫瑰)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_瓢虫)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_生日快乐)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_甩头)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_疑问)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_白眼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_真好)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_眨眼睛)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_睁眼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_睡)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_磕头)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_示爱)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_礼物)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_祈祷)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_笑哭)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_篮球)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_糊脸)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_糗大了)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_红包)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_红包包)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_羊驼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_老色痞)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_胖三斤)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_胜利)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_脑阔疼)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_舔一舔)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_色)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_花痴)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_茶)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_药)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_菊花)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_菜刀)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_菜狗)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_蛋)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_蛋糕)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_街舞)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_衰)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_西瓜)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_让我康康)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_请)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_调皮)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_谢红包)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_赞)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_足球)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_跳绳)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_跳跳)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_踩)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_蹭一蹭)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_转圈)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_辣椒酱)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_辣眼睛)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_送花)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_鄙视)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_酷)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_钞票)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_闪电)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_闭嘴)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_问号脸)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_阴险)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_难过)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_震惊)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_面无表情)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_鞭炮)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_顶呱呱)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_颤抖)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_飙泪)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_飞吻)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_飞机)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_饥饿)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_饭)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_骚扰)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_骷髅)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_魔鬼笑)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_KInt (*get_鼓掌)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_Face_Companion thiz);
                  } Companion;
                } Face;
                struct {
                  miraicore_KType* (*_type)(void);
                  const char* (*get_id)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage thiz);
                  miraicore_KInt (*get_internalId)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Key (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage thiz);
                  const char* (*get_name)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage thiz);
                  miraicore_KLong (*get_size)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_FileMessage (*create)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Key thiz, const char* id, miraicore_KInt internalId, const char* name, miraicore_KLong size);
                  } Key;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_FileMessage (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_FileMessage_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_FileMessage value);
                  } Serializer;
                } FileMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_FlashImage (*FlashImage)(miraicore_KInt seen1, miraicore_kref_net_mamoe_mirai_message_data_Image image, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_FlashImage (*FlashImage_)(miraicore_kref_net_mamoe_mirai_message_data_Image image);
                  miraicore_kref_net_mamoe_mirai_message_data_Image (*get_image)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  miraicore_kref_net_mamoe_mirai_message_data_Image (*component1)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_FlashImage (*copy)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz, miraicore_kref_net_mamoe_mirai_message_data_Image image);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz);
                  const char* (*serializeToMiraiCode)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_FlashImage_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_FlashImage (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_FlashImage value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_FlashImage_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_FlashImage (*from)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage_Key thiz, const char* imageId);
                    miraicore_kref_net_mamoe_mirai_message_data_FlashImage (*from_)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage_Key thiz, miraicore_kref_net_mamoe_mirai_message_data_Image image);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_FlashImage_Key thiz);
                  } Key;
                } FlashImage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*ForwardMessage)(miraicore_KInt seen1, miraicore_kref_kotlin_collections_List preview, const char* title, const char* brief, const char* source, const char* summary, miraicore_kref_kotlin_collections_List nodeList, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*ForwardMessage_)(miraicore_kref_kotlin_collections_List preview, const char* title, const char* brief, const char* source, const char* summary, miraicore_kref_kotlin_collections_List nodeList);
                  const char* (*get_brief)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  miraicore_kref_kotlin_collections_List (*get_nodeList)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  miraicore_kref_kotlin_collections_List (*get_preview)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  const char* (*get_source)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  const char* (*get_summary)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  const char* (*get_title)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  miraicore_kref_kotlin_collections_List (*component1)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  const char* (*component4)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  const char* (*component5)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  miraicore_kref_kotlin_collections_List (*component6)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*copy)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz, miraicore_kref_kotlin_collections_List preview, const char* title, const char* brief, const char* source, const char* summary, miraicore_kref_kotlin_collections_List nodeList);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    const char* (*generateBrief)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy thiz, miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage forward);
                    miraicore_kref_kotlin_collections_List (*generatePreview)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy thiz, miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage forward);
                    const char* (*generateSource)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy thiz, miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage forward);
                    const char* (*generateSummary)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy thiz, miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage forward);
                    const char* (*generateTitle)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy thiz, miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage forward);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy_Default (*_instance)();
                    } Default;
                  } DisplayStrategy;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_messageChain)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode thiz);
                    miraicore_KLong (*get_senderId)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode thiz);
                    const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode thiz);
                    miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode thiz);
                  } INode;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Key thiz);
                  } Key;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node (*Node)(miraicore_KLong senderId, miraicore_KInt time, const char* senderName, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node (*Node_)(miraicore_KInt seen1, miraicore_KLong senderId, miraicore_KInt time, const char* senderName, miraicore_kref_net_mamoe_mirai_message_data_MessageChain messageChain, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node (*Node__)(miraicore_KLong senderId, miraicore_KInt time, const char* senderName, miraicore_kref_net_mamoe_mirai_message_data_MessageChain messageChain);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_messageChain)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    miraicore_KLong (*get_senderId)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    miraicore_KLong (*component1)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    miraicore_KInt (*component2)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    const char* (*component3)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*component4)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node (*copy)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz, miraicore_KLong senderId, miraicore_KInt time, const char* senderName, miraicore_kref_net_mamoe_mirai_message_data_MessageChain messageChain);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node_$serializer (*_instance)();
                      miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node_$serializer thiz);
                      miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node_$serializer thiz);
                      miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node value);
                    } $serializer;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node_Companion (*_instance)();
                      miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_Node_Companion thiz);
                    } Companion;
                  } Node;
                } ForwardMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*ForwardMessageBuilder)(miraicore_kref_net_mamoe_mirai_contact_Contact context);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*ForwardMessageBuilder_)(miraicore_kref_net_mamoe_mirai_contact_Contact context, miraicore_KInt initialSize);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*get_context)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  miraicore_KInt (*get_currentTime)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  void (*set_currentTime)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt set);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy (*get_displayStrategy)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  void (*set_displayStrategy)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy set);
                  miraicore_KInt (*get_size)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  void (*add)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt index, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode element);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*add_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KLong senderId, const char* senderName, miraicore_KInt time, miraicore_kref_kotlin_Function1 builderAction);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*add__)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KLong senderId, const char* senderName, miraicore_kref_net_mamoe_mirai_message_data_Message message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*add___)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_User sender, miraicore_kref_net_mamoe_mirai_message_data_Message message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*add____)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_UserOrBot sender, miraicore_KInt time, miraicore_kref_kotlin_Function1 builderAction);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*add_____)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_UserOrBot sender, miraicore_kref_net_mamoe_mirai_message_data_Message message, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*add______)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_event_events_MessageEvent event);
                  miraicore_KBoolean (*add_______)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode element);
                  miraicore_KBoolean (*addAll)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt index, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_KBoolean (*addAll_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*build)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  void (*clear)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  miraicore_KBoolean (*contains)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode element);
                  miraicore_KBoolean (*containsAll)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode (*get)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt index);
                  miraicore_KInt (*indexOf)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode element);
                  miraicore_KBoolean (*isEmpty)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  miraicore_kref_kotlin_collections_MutableIterator (*iterator)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  miraicore_KInt (*lastIndexOf)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode element);
                  miraicore_kref_kotlin_collections_MutableListIterator (*listIterator)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  miraicore_kref_kotlin_collections_MutableListIterator (*listIterator_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt index);
                  miraicore_KBoolean (*remove)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode element);
                  miraicore_KBoolean (*removeAll)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode (*removeAt)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt index);
                  miraicore_KBoolean (*retainAll)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode (*set)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt index, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_INode element);
                  miraicore_kref_kotlin_collections_MutableList (*subList)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt fromIndex, miraicore_KInt toIndex);
                  miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage (*toRawForwardMessage)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*at)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt thiz1, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*at_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KLong thiz1, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*at__)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_User thiz1, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*at___)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_UserOrBot thiz1, miraicore_KInt time);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*named)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt thiz1, const char* name);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*named_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KLong thiz1, const char* name);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*named__)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_User thiz1, const char* name);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*named___)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_UserOrBot thiz1, const char* name);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt thiz1, miraicore_kref_kotlin_Function1 chain);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt thiz1, const char* message);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says__)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KInt thiz1, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says___)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KLong thiz1, miraicore_kref_kotlin_Function1 chain);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says____)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KLong thiz1, const char* message);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says_____)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_KLong thiz1, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says______)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_Bot thiz1, miraicore_kref_kotlin_Function1 chain);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says_______)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_Bot thiz1, const char* message);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says________)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_Bot thiz1, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says_________)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_User thiz1, miraicore_kref_kotlin_Function1 chain);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says__________)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_User thiz1, const char* message);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says___________)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_User thiz1, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says____________)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_UserOrBot thiz1, miraicore_kref_kotlin_Function1 chain);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says_____________)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_UserOrBot thiz1, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_messageChain)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz);
                    void (*set_messageChain)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageChain set);
                    miraicore_KLong (*get_senderId)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz);
                    void (*set_senderId)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_KLong set);
                    const char* (*get_senderName)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz);
                    void (*set_senderName)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, const char* set);
                    miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz);
                    void (*set_time)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_KInt set);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*at)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_KInt time);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*message)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, const char* message);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*message_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*named)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, const char* name);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_kref_kotlin_Function1 chain);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, const char* message);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder (*says__)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*sender)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_kref_net_mamoe_mirai_contact_User user);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*sender_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_kref_net_mamoe_mirai_contact_UserOrBot user);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*senderId)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_KInt id);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*senderId_)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_KLong id);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*senderName)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, const char* name);
                    miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode (*time)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz, miraicore_KInt time);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_ForwardMessageBuilder_BuilderNode thiz);
                  } BuilderNode;
                } ForwardMessageBuilder;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_HummerMessage_Key (*_instance)();
                  } Key;
                } HummerMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_KInt (*get_height)(miraicore_kref_net_mamoe_mirai_message_data_Image thiz);
                  const char* (*get_imageId)(miraicore_kref_net_mamoe_mirai_message_data_Image thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_ImageType (*get_imageType)(miraicore_kref_net_mamoe_mirai_message_data_Image thiz);
                  miraicore_KBoolean (*get_isEmoji)(miraicore_kref_net_mamoe_mirai_message_data_Image thiz);
                  miraicore_kref_kotlin_ByteArray (*get_md5)(miraicore_kref_net_mamoe_mirai_message_data_Image thiz);
                  miraicore_KLong (*get_size)(miraicore_kref_net_mamoe_mirai_message_data_Image thiz);
                  miraicore_KInt (*get_width)(miraicore_kref_net_mamoe_mirai_message_data_Image thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Image_AsStringSerializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_Image_AsStringSerializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_Image (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_Image_AsStringSerializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_Image_AsStringSerializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_Image value);
                  } AsStringSerializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_KInt (*get_height)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz);
                    void (*set_height)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz, miraicore_KInt set);
                    const char* (*get_imageId)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz);
                    void (*set_imageId)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz, const char* set);
                    miraicore_KBoolean (*get_isEmoji)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz);
                    void (*set_isEmoji)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz, miraicore_KBoolean set);
                    miraicore_KLong (*get_size)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz);
                    void (*set_size)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz, miraicore_KLong set);
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*get_type)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz);
                    void (*set_type)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz, miraicore_kref_net_mamoe_mirai_message_data_ImageType set);
                    miraicore_KInt (*get_width)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz);
                    void (*set_width)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz, miraicore_KInt set);
                    miraicore_kref_net_mamoe_mirai_message_data_Image (*build)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_Image_Builder_Companion (*_instance)();
                      miraicore_kref_net_mamoe_mirai_message_data_Image_Builder (*newBuilder)(miraicore_kref_net_mamoe_mirai_message_data_Image_Builder_Companion thiz, const char* imageId);
                    } Companion;
                  } Builder;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Image_FallbackSerializer (*FallbackSerializer)(const char* serialName);
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_Image_FallbackSerializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_Image (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_Image_FallbackSerializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_Image_FallbackSerializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_Image value);
                  } FallbackSerializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Image_Key (*_instance)();
                    miraicore_kref_kotlin_text_Regex (*get_IMAGE_ID_REGEX)(miraicore_kref_net_mamoe_mirai_message_data_Image_Key thiz);
                    miraicore_kref_kotlin_text_Regex (*get_IMAGE_RESOURCE_ID_REGEX_1)(miraicore_kref_net_mamoe_mirai_message_data_Image_Key thiz);
                    miraicore_kref_kotlin_text_Regex (*get_IMAGE_RESOURCE_ID_REGEX_2)(miraicore_kref_net_mamoe_mirai_message_data_Image_Key thiz);
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_Image_Key thiz);
                    miraicore_kref_kotlin_ByteArray (*calculateImageMd5ByImageId)(miraicore_kref_net_mamoe_mirai_message_data_Image_Key thiz, const char* imageId);
                    miraicore_kref_net_mamoe_mirai_message_data_Image (*fromId)(miraicore_kref_net_mamoe_mirai_message_data_Image_Key thiz, const char* imageId);
                    miraicore_kref_net_mamoe_mirai_message_data_Image_Builder (*newBuilder)(miraicore_kref_net_mamoe_mirai_message_data_Image_Key thiz, const char* imageId);
                  } Key;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Image_Serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_Image_Serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_Image (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_Image_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_Image_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_Image value);
                  } Serializer;
                } Image;
                struct {
                  miraicore_KType* (*_type)(void);
                  const char* (*get_formatName)(miraicore_kref_net_mamoe_mirai_message_data_ImageType thiz);
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*get)(); /* enum entry for PNG. */
                  } PNG;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*get)(); /* enum entry for BMP. */
                  } BMP;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*get)(); /* enum entry for JPG. */
                  } JPG;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*get)(); /* enum entry for GIF. */
                  } GIF;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*get)(); /* enum entry for APNG. */
                  } APNG;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*get)(); /* enum entry for UNKNOWN. */
                  } UNKNOWN;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_ImageType_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_ImageType_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_ImageType_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_ImageType_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_ImageType value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType_Companion (*_instance)();
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*match)(miraicore_kref_net_mamoe_mirai_message_data_ImageType_Companion thiz, const char* str);
                    miraicore_kref_net_mamoe_mirai_message_data_ImageType (*matchOrNull)(miraicore_kref_net_mamoe_mirai_message_data_ImageType_Companion thiz, const char* str);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_ImageType_Companion thiz);
                  } Companion;
                } ImageType;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_Image (*createImage)(miraicore_kref_net_mamoe_mirai_message_data_InternalImageProtocol thiz, const char* imageId, miraicore_KLong size, miraicore_kref_net_mamoe_mirai_message_data_ImageType type, miraicore_KInt width, miraicore_KInt height, miraicore_KBoolean isEmoji);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_InternalImageProtocol_Companion (*_instance)();
                    miraicore_kref_net_mamoe_mirai_message_data_InternalImageProtocol (*get_instance)(miraicore_kref_net_mamoe_mirai_message_data_InternalImageProtocol_Companion thiz);
                  } Companion;
                } InternalImageProtocol;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_LightApp (*LightApp)(miraicore_KInt seen1, const char* content, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_LightApp (*LightApp_)(const char* content);
                  const char* (*get_content)(miraicore_kref_net_mamoe_mirai_message_data_LightApp thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_LightApp thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  const char* (*component1)(miraicore_kref_net_mamoe_mirai_message_data_LightApp thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_LightApp (*copy)(miraicore_kref_net_mamoe_mirai_message_data_LightApp thiz, const char* content);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_LightApp thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_LightApp thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_LightApp thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_LightApp_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_LightApp_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_LightApp_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_LightApp (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_LightApp_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_LightApp_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_LightApp value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_LightApp_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_LightApp_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_LightApp_Key thiz);
                  } Key;
                } LightApp;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_KInt (*get_id)(miraicore_kref_net_mamoe_mirai_message_data_MarketFace thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_MarketFace thiz);
                  const char* (*get_name)(miraicore_kref_net_mamoe_mirai_message_data_MarketFace thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_MarketFace thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MarketFace_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_MarketFace_Key thiz);
                  } Key;
                } MarketFace;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_KBoolean (*contentEquals)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, const char* another, miraicore_KBoolean ignoreCase);
                  miraicore_KBoolean (*contentEquals_)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_net_mamoe_mirai_message_data_Message another, miraicore_KBoolean ignoreCase);
                  miraicore_KBoolean (*contentEquals__)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_net_mamoe_mirai_message_data_Message another, miraicore_KBoolean ignoreCase, miraicore_KBoolean strict);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*followedBy)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_net_mamoe_mirai_message_data_Message tail);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*plus)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_kotlin_Array another);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*plus_)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_kotlin_CharSequence another);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*plus__)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, const char* another);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*plus___)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_kotlin_collections_Iterable another);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*plus____)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_kotlin_collections_Iterable another);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*plus_____)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_kotlin_sequences_Sequence another);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*plus______)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_net_mamoe_mirai_message_data_Message another);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*plus_______)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageChain another);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*plus________)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage another);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Message_Companion (*_instance)();
                  } Companion;
                } Message;
                struct {
                  miraicore_KType* (*_type)(void);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion (*_instance)();
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*deserializeFromJsonString)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion thiz, const char* string, miraicore_kref_kotlinx_serialization_json_Json json);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*deserializeFromMiraiCode)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz1, const char* miraiCode, miraicore_kref_net_mamoe_mirai_contact_Contact contact);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*deserializeJsonToMessageChain)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion thiz, const char* thiz1);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*deserializeJsonToMessageChain_)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion thiz, const char* thiz1, miraicore_kref_kotlinx_serialization_json_Json json);
                    const char* (*serializeToJsonString)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz1, miraicore_kref_kotlinx_serialization_json_Json json);
                    const char* (*serializeToString)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Companion thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz1, miraicore_kref_kotlinx_serialization_StringFormat format);
                  } Companion;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_MessageChain value);
                  } Serializer;
                } MessageChain;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder (*MessageChainBuilder)();
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder (*MessageChainBuilder_)(miraicore_KInt initialSize);
                  miraicore_KInt (*get_size)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz);
                  void (*add)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_KInt index, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  void (*add_)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, const char* plain);
                  miraicore_KBoolean (*add__)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_Message element);
                  miraicore_KBoolean (*add___)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_KBoolean (*addAll)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_KInt index, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_KBoolean (*addAll_)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_KBoolean (*addAll__)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_kotlin_collections_Iterable elements);
                  miraicore_KBoolean (*addAll___)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_kotlin_collections_Iterable elements);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder (*append)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_KChar value);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder (*append_)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_kotlin_CharSequence value);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder (*append__)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_kotlin_CharSequence value, miraicore_KInt startIndex, miraicore_KInt endIndex);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder (*append___)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder (*append____)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage message);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*asMessageChain)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*build)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz);
                  void (*clear)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz);
                  miraicore_KBoolean (*contains)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_KBoolean (*containsAll)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder (*copy)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_SingleMessage (*get)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_KInt index);
                  miraicore_KInt (*indexOf)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_KBoolean (*isEmpty)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz);
                  miraicore_kref_kotlin_collections_MutableIterator (*iterator)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz);
                  miraicore_KInt (*lastIndexOf)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_kref_kotlin_collections_MutableListIterator (*listIterator)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz);
                  miraicore_kref_kotlin_collections_MutableListIterator (*listIterator_)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_KInt index);
                  void (*plusAssign)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_kotlin_CharSequence charSequence);
                  void (*plusAssign_)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, const char* plain);
                  void (*plusAssign__)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  void (*plusAssign___)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage message);
                  miraicore_KBoolean (*remove)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_KBoolean (*removeAll)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_kref_net_mamoe_mirai_message_data_SingleMessage (*removeAt)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_KInt index);
                  miraicore_KBoolean (*retainAll)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_kotlin_collections_Collection elements);
                  miraicore_kref_net_mamoe_mirai_message_data_SingleMessage (*set)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_KInt index, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage element);
                  miraicore_kref_kotlin_collections_MutableList (*subList)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_KInt fromIndex, miraicore_KInt toIndex);
                  void (*unaryPlus)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, const char* thiz1);
                  void (*unaryPlus_)(miraicore_kref_net_mamoe_mirai_message_data_MessageChainBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_Message thiz1);
                } MessageChainBuilder;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageContent_Key (*_instance)();
                  } Key;
                } MessageContent;
                struct {
                  miraicore_KType* (*_type)(void);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_MessageMetadata thiz);
                } MessageMetadata;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin (*MessageOrigin)(miraicore_KInt seen1, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage origin, const char* resourceId, miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind kind, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin (*MessageOrigin_)(miraicore_kref_net_mamoe_mirai_message_data_SingleMessage origin, const char* resourceId, miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind kind);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_Key (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind (*get_kind)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_SingleMessage (*get_origin)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin thiz);
                  const char* (*get_resourceId)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin thiz);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_MessageOrigin_Key thiz);
                  } Key;
                } MessageOrigin;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind (*get)(); /* enum entry for LONG. */
                  } LONG;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind (*get)(); /* enum entry for FORWARD. */
                  } FORWARD;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind (*get)(); /* enum entry for MUSIC_SHARE. */
                  } MUSIC_SHARE;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_MessageOriginKind_Companion thiz);
                  } Companion;
                } MessageOriginKind;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSource (*MessageSource)();
                  miraicore_KLong (*get_botId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  miraicore_KLong (*get_fromId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  miraicore_kref_kotlin_IntArray (*get_ids)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  miraicore_kref_kotlin_IntArray (*get_internalIds)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  miraicore_KBoolean (*get_isOriginalMessageInitialized)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_originalMessage)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  miraicore_KLong (*get_targetId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_QuoteReply (*quote)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Key thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz1);
                    miraicore_kref_net_mamoe_mirai_message_data_QuoteReply (*quote_)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Key thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz1);
                    miraicore_kref_net_mamoe_mirai_message_action_AsyncRecallResult (*recallIn)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Key thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageChain thiz1, miraicore_KLong millis);
                    miraicore_kref_net_mamoe_mirai_message_action_AsyncRecallResult (*recallIn_)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Key thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSource thiz1, miraicore_KLong millis);
                  } Key;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSource (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_MessageSource value);
                  } Serializer;
                } MessageSource;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender (*MessageSourceAmender)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource origin);
                  miraicore_KLong (*get_fromId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz);
                  void (*set_fromId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz, miraicore_KLong set);
                  miraicore_kref_kotlin_IntArray (*get_ids)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz);
                  void (*set_ids)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz, miraicore_kref_kotlin_IntArray set);
                  miraicore_kref_kotlin_IntArray (*get_internalIds)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz);
                  void (*set_internalIds)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz, miraicore_kref_kotlin_IntArray set);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind (*get_kind)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz);
                  void (*set_kind)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind set);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageChain (*get_originalMessage)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz);
                  void (*set_originalMessage)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageChain set);
                  miraicore_KLong (*get_targetId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz);
                  void (*set_targetId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz, miraicore_KLong set);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz);
                  void (*set_time)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceAmender thiz, miraicore_KInt set);
                } MessageSourceAmender;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*MessageSourceBuilder)();
                  miraicore_KLong (*get_fromId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz);
                  void (*set_fromId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_KLong set);
                  miraicore_kref_kotlin_IntArray (*get_ids)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz);
                  void (*set_ids)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_kotlin_IntArray set);
                  miraicore_kref_kotlin_IntArray (*get_internalIds)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz);
                  void (*set_internalIds)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_kotlin_IntArray set);
                  miraicore_KLong (*get_targetId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz);
                  void (*set_targetId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_KLong set);
                  miraicore_KInt (*get_time)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz);
                  void (*set_time)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_KInt set);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*allFrom)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSource source);
                  miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource (*build)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_KLong botId, miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind kind);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*clearMessages)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*id)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_kotlin_IntArray value);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*id_)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSource from);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*internalId)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_kotlin_IntArray value);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*internalId_)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSource from);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*messages)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_kotlin_Array message);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*messages_)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_kotlin_collections_Iterable messages);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*messages__)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_kotlin_Function1 block);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*messagesFrom)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSource source);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*metadata)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSource from);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*sender)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_KLong uin);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*sender_)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_ContactOrBot sender);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*setSenderAndTarget)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_ContactOrBot sender, miraicore_kref_net_mamoe_mirai_contact_ContactOrBot target);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*target)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_KLong uin);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*target_)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_net_mamoe_mirai_contact_ContactOrBot target);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*time)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_KInt value);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder (*time_)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceBuilder thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSource from);
                } MessageSourceBuilder;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind (*get)(); /* enum entry for GROUP. */
                  } GROUP;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind (*get)(); /* enum entry for FRIEND. */
                  } FRIEND;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind (*get)(); /* enum entry for TEMP. */
                  } TEMP;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind (*get)(); /* enum entry for STRANGER. */
                  } STRANGER;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind_Companion thiz);
                  } Companion;
                } MessageSourceKind;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_KLong (*get_appId)(miraicore_kref_net_mamoe_mirai_message_data_MusicKind thiz);
                  const char* (*get_packageName)(miraicore_kref_net_mamoe_mirai_message_data_MusicKind thiz);
                  miraicore_KInt (*get_platform)(miraicore_kref_net_mamoe_mirai_message_data_MusicKind thiz);
                  const char* (*get_sdkVersion)(miraicore_kref_net_mamoe_mirai_message_data_MusicKind thiz);
                  const char* (*get_signature)(miraicore_kref_net_mamoe_mirai_message_data_MusicKind thiz);
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MusicKind (*get)(); /* enum entry for NeteaseCloudMusic. */
                  } NeteaseCloudMusic;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MusicKind (*get)(); /* enum entry for QQMusic. */
                  } QQMusic;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MusicKind (*get)(); /* enum entry for MiguMusic. */
                  } MiguMusic;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MusicKind (*get)(); /* enum entry for KugouMusic. */
                  } KugouMusic;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_MusicKind (*get)(); /* enum entry for KuwoMusic. */
                  } KuwoMusic;
                } MusicKind;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_MusicShare (*MusicShare)(miraicore_kref_net_mamoe_mirai_message_data_MusicKind kind, const char* title, const char* summary, const char* jumpUrl, const char* pictureUrl, const char* musicUrl);
                  miraicore_kref_net_mamoe_mirai_message_data_MusicShare (*MusicShare_)(miraicore_KInt seen1, miraicore_kref_net_mamoe_mirai_message_data_MusicKind kind, const char* title, const char* summary, const char* jumpUrl, const char* pictureUrl, const char* musicUrl, const char* brief, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_MusicShare (*MusicShare__)(miraicore_kref_net_mamoe_mirai_message_data_MusicKind kind, const char* title, const char* summary, const char* jumpUrl, const char* pictureUrl, const char* musicUrl, const char* brief);
                  const char* (*get_brief)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*get_jumpUrl)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MusicKind (*get_kind)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*get_musicUrl)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*get_pictureUrl)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*get_summary)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*get_title)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  miraicore_kref_net_mamoe_mirai_message_data_MusicKind (*component1)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*component2)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*component3)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*component4)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*component5)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*component6)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*component7)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MusicShare (*copy)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz, miraicore_kref_net_mamoe_mirai_message_data_MusicKind kind, const char* title, const char* summary, const char* jumpUrl, const char* pictureUrl, const char* musicUrl, const char* brief);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MusicShare_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_MusicShare (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_MusicShare value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_MusicShare_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_MusicShare_Key thiz);
                  } Key;
                } MusicShare;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio (*create)(miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Factory thiz, const char* filename, miraicore_kref_kotlin_ByteArray fileMd5, miraicore_KLong fileSize, miraicore_kref_net_mamoe_mirai_message_data_AudioCodec codec, miraicore_kref_kotlin_ByteArray extraData);
                    miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio (*from)(miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Factory thiz, miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio onlineAudio);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Factory_INSTANCE (*_instance)();
                      miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio (*create)(miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Factory_INSTANCE thiz, const char* filename, miraicore_kref_kotlin_ByteArray fileMd5, miraicore_KLong fileSize, miraicore_kref_net_mamoe_mirai_message_data_AudioCodec codec, miraicore_kref_kotlin_ByteArray extraData);
                      miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio (*from)(miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Factory_INSTANCE thiz, miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio onlineAudio);
                    } INSTANCE;
                  } Factory;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_OfflineAudio_Key thiz);
                  } Key;
                } OfflineAudio;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource (*OfflineMessageSource)();
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSourceKind (*get_kind)(miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_OfflineMessageSource_Key (*_instance)();
                  } Key;
                } OfflineMessageSource;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_KLong (*get_length)(miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio thiz);
                  const char* (*get_urlForDownload)(miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_OnlineAudio_Key thiz);
                  } Key;
                } OnlineAudio;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource (*OnlineMessageSource)();
                  miraicore_kref_net_mamoe_mirai_Bot (*get_bot)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource thiz);
                  miraicore_KLong (*get_botId)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource thiz);
                  miraicore_kref_net_mamoe_mirai_contact_ContactOrBot (*get_sender)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource thiz);
                  miraicore_kref_net_mamoe_mirai_contact_Contact (*get_subject)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource thiz);
                  miraicore_kref_net_mamoe_mirai_contact_ContactOrBot (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming (*Incoming)();
                    miraicore_KLong (*get_fromId)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming thiz);
                    miraicore_kref_net_mamoe_mirai_contact_User (*get_sender)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming thiz);
                    miraicore_KLong (*get_targetId)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend (*FromFriend)();
                      miraicore_kref_net_mamoe_mirai_contact_Friend (*get_sender)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Friend (*get_subject)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend thiz);
                      miraicore_kref_net_mamoe_mirai_Bot (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend thiz);
                      const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend thiz);
                      struct {
                        miraicore_KType* (*_type)(void);
                        miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromFriend_Key (*_instance)();
                      } Key;
                    } FromFriend;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup (*FromGroup)();
                      miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Member (*get_sender)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Group (*get_subject)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Group (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup thiz);
                      const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup thiz);
                      struct {
                        miraicore_KType* (*_type)(void);
                        miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromGroup_Key (*_instance)();
                      } Key;
                    } FromGroup;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger (*FromStranger)();
                      miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_sender)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_subject)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger thiz);
                      miraicore_kref_net_mamoe_mirai_Bot (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger thiz);
                      const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger thiz);
                      struct {
                        miraicore_KType* (*_type)(void);
                        miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromStranger_Key (*_instance)();
                      } Key;
                    } FromStranger;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp (*FromTemp)();
                      miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Member (*get_sender)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Member (*get_subject)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp thiz);
                      miraicore_kref_net_mamoe_mirai_Bot (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp thiz);
                      const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp thiz);
                      struct {
                        miraicore_KType* (*_type)(void);
                        miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_FromTemp_Key (*_instance)();
                      } Key;
                    } FromTemp;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Incoming_Key (*_instance)();
                    } Key;
                  } Incoming;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Key (*_instance)();
                  } Key;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing (*Outgoing)();
                    miraicore_KLong (*get_fromId)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing thiz);
                    miraicore_kref_net_mamoe_mirai_Bot (*get_sender)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing thiz);
                    miraicore_kref_net_mamoe_mirai_contact_Contact (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing thiz);
                    miraicore_KLong (*get_targetId)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_Key (*_instance)();
                    } Key;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToFriend (*ToFriend)();
                      miraicore_kref_net_mamoe_mirai_contact_Friend (*get_subject)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToFriend thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Friend (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToFriend thiz);
                      const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToFriend thiz);
                      struct {
                        miraicore_KType* (*_type)(void);
                        miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToFriend_Key (*_instance)();
                      } Key;
                    } ToFriend;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToGroup (*ToGroup)();
                      miraicore_kref_net_mamoe_mirai_contact_Group (*get_subject)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToGroup thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Group (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToGroup thiz);
                      const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToGroup thiz);
                      struct {
                        miraicore_KType* (*_type)(void);
                        miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToGroup_Key (*_instance)();
                      } Key;
                    } ToGroup;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToStranger (*ToStranger)();
                      miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_subject)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToStranger thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Stranger (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToStranger thiz);
                      const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToStranger thiz);
                      struct {
                        miraicore_KType* (*_type)(void);
                        miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToStranger_Key (*_instance)();
                      } Key;
                    } ToStranger;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToTemp (*ToTemp)();
                      miraicore_kref_net_mamoe_mirai_contact_Group (*get_group)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToTemp thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Member (*get_subject)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToTemp thiz);
                      miraicore_kref_net_mamoe_mirai_contact_Member (*get_target)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToTemp thiz);
                      const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToTemp thiz);
                      struct {
                        miraicore_KType* (*_type)(void);
                        miraicore_kref_net_mamoe_mirai_message_data_OnlineMessageSource_Outgoing_ToTemp_Key (*_instance)();
                      } Key;
                    } ToTemp;
                  } Outgoing;
                } OnlineMessageSource;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_PlainText (*PlainText)(miraicore_kref_kotlin_CharSequence charSequence);
                  miraicore_kref_net_mamoe_mirai_message_data_PlainText (*PlainText_)(miraicore_KInt seen1, const char* content, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_PlainText (*PlainText__)(const char* content);
                  const char* (*get_content)(miraicore_kref_net_mamoe_mirai_message_data_PlainText thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_PlainText thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  const char* (*component1)(miraicore_kref_net_mamoe_mirai_message_data_PlainText thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_PlainText thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_PlainText (*copy)(miraicore_kref_net_mamoe_mirai_message_data_PlainText thiz, const char* content);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_PlainText thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_PlainText thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_PlainText thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_PlainText_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_PlainText_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_PlainText_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PlainText (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_PlainText_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_PlainText_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_PlainText value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_PlainText_Companion (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_PlainText_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_PlainText_Companion thiz);
                  } Companion;
                } PlainText;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*PokeMessage)(miraicore_KInt seen1, const char* name, miraicore_KInt pokeType, miraicore_KInt id, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*PokeMessage_)(const char* name, miraicore_KInt pokeType, miraicore_KInt id);
                  miraicore_KInt (*get_id)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  const char* (*get_name)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  miraicore_KInt (*get_pokeType)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  const char* (*component1)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  miraicore_KInt (*component2)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  miraicore_KInt (*component3)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*copy)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz, const char* name, miraicore_KInt pokeType, miraicore_KInt id);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_PokeMessage value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key (*_instance)();
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_BaoBeiQiu)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_BiXin)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_ChuoYiChuo)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_DianZan)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_FangDaZhao)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_GouYin)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_JieYin)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_LiuLiuLiu)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_QiaoMen)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_RangNiPi)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_Rose)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_ShouLei)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_SuiPing)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_XinSui)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_ZhaoHuanShu)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_PokeMessage (*get_ZhuaYiXia)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_kotlin_Array (*get_values)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_PokeMessage_Key thiz);
                  } Key;
                } PokeMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_PttMessage (*PttMessage)(miraicore_KInt seen1, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_PttMessage (*PttMessage_)();
                  const char* (*get_fileName)(miraicore_kref_net_mamoe_mirai_message_data_PttMessage thiz);
                  miraicore_KLong (*get_fileSize)(miraicore_kref_net_mamoe_mirai_message_data_PttMessage thiz);
                  miraicore_kref_kotlin_ByteArray (*get_md5)(miraicore_kref_net_mamoe_mirai_message_data_PttMessage thiz);
                  miraicore_kref_kotlin_Any (*get_pttInternalInstance)(miraicore_kref_net_mamoe_mirai_message_data_PttMessage thiz);
                  void (*set_pttInternalInstance)(miraicore_kref_net_mamoe_mirai_message_data_PttMessage thiz, miraicore_kref_kotlin_Any set);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_PttMessage_Key (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_PttMessage_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_message_data_PttMessage_Key thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                  } Key;
                } PttMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_QuoteReply (*QuoteReply)(miraicore_kref_net_mamoe_mirai_message_data_MessageChain sourceMessage);
                  miraicore_kref_net_mamoe_mirai_message_data_QuoteReply (*QuoteReply_)(miraicore_KInt seen1, miraicore_kref_net_mamoe_mirai_message_data_MessageSource source, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_QuoteReply (*QuoteReply__)(miraicore_kref_net_mamoe_mirai_message_data_MessageSource source);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSource (*get_source)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageSource (*component1)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_QuoteReply (*copy)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply thiz, miraicore_kref_net_mamoe_mirai_message_data_MessageSource source);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_QuoteReply (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_QuoteReply value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_QuoteReply_Key thiz);
                  } Key;
                } QuoteReply;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage (*RawForwardMessage)(miraicore_KInt seen1, miraicore_kref_kotlin_collections_List nodeList, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage (*RawForwardMessage_)(miraicore_kref_kotlin_collections_List nodeList);
                  miraicore_kref_kotlin_collections_List (*get_nodeList)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage thiz);
                  miraicore_kref_kotlin_collections_List (*component1)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage (*copy)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage thiz, miraicore_kref_kotlin_collections_List nodeList);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage (*render)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage thiz, miraicore_kref_net_mamoe_mirai_message_data_ForwardMessage_DisplayStrategy displayStrategy);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_RawForwardMessage_Companion thiz);
                  } Companion;
                } RawForwardMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  const char* (*get_content)(miraicore_kref_net_mamoe_mirai_message_data_RichMessage thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_RichMessage thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_RichMessage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_RichMessage_Key (*_instance)();
                    miraicore_kref_net_mamoe_mirai_message_data_ServiceMessage (*share)(miraicore_kref_net_mamoe_mirai_message_data_RichMessage_Key thiz, const char* url, const char* title, const char* content, const char* coverUrl);
                  } Key;
                } RichMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind (*get)(); /* enum entry for LONG. */
                  } LONG;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind (*get)(); /* enum entry for FORWARD. */
                  } FORWARD;
                  struct {
                    miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind (*get)(); /* enum entry for MUSIC_SHARE. */
                  } MUSIC_SHARE;
                } RichMessageKind;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin (*RichMessageOrigin)(miraicore_KInt seen1, miraicore_kref_net_mamoe_mirai_message_data_RichMessage origin, const char* resourceId, miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind kind, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin (*RichMessageOrigin_)(miraicore_kref_net_mamoe_mirai_message_data_RichMessage origin, const char* resourceId, miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind kind);
                  miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_Key (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_RichMessageKind (*get_kind)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_RichMessage (*get_origin)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin thiz);
                  const char* (*get_resourceId)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin thiz);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_RichMessageOrigin_Key thiz);
                  } Key;
                } RichMessageOrigin;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_KInt (*get_serviceId)(miraicore_kref_net_mamoe_mirai_message_data_ServiceMessage thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_ServiceMessage thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_ServiceMessage_Key (*_instance)();
                  } Key;
                } ServiceMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_ShowImageFlag (*_instance)();
                  const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_ShowImageFlag thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_ShowImageFlag (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_ShowImageFlag thiz);
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_ShowImageFlag thiz);
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_message_data_ShowImageFlag thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_ShowImageFlag thiz);
                } ShowImageFlag;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage (*SimpleServiceMessage)(miraicore_KInt seen1, miraicore_KInt serviceId, const char* content, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage (*SimpleServiceMessage_)(miraicore_KInt serviceId, const char* content);
                  const char* (*get_content)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage thiz);
                  miraicore_KInt (*get_serviceId)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage thiz);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_Companion (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_Companion thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_SimpleServiceMessage_Companion thiz);
                  } Companion;
                } SimpleServiceMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_SingleMessage_Serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_SingleMessage_Serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_SingleMessage (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_SingleMessage_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_SingleMessage_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_SingleMessage value);
                  } Serializer;
                } SingleMessage;
                struct {
                  void (*acceptChildren)(miraicore_kref_net_mamoe_mirai_message_data_Message thiz, miraicore_kref_net_mamoe_mirai_message_data_visitor_MessageVisitor visitor);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_visitor_MessageVisitorUnit (*MessageVisitorUnit)();
                    void (*visitMessage)(miraicore_kref_net_mamoe_mirai_message_data_visitor_MessageVisitorUnit thiz, miraicore_kref_net_mamoe_mirai_message_data_Message message);
                  } MessageVisitorUnit;
                } visitor;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_kotlin_ByteArray (*get_struct)(miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage_Companion (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage_Companion thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage (*create)(miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage_Companion thiz, miraicore_kref_kotlin_ByteArray struct_);
                  } Companion;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage_Serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage_Serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage_Serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_UnsupportedMessage value);
                  } Serializer;
                } UnsupportedMessage;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_VipFace (*VipFace)(miraicore_KInt seen1, miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind kind, miraicore_KInt count, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_VipFace (*VipFace_)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind kind, miraicore_KInt count);
                  miraicore_KInt (*get_count)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_MessageKey (*get_key)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_kind)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz);
                  void (*appendMiraiCodeTo)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz, miraicore_kref_kotlin_text_StringBuilder builder);
                  miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*component1)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz);
                  miraicore_KInt (*component2)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_VipFace (*copy)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz, miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind kind, miraicore_KInt count);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_VipFace thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_VipFace value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key (*_instance)();
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_AiXin)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_BianBian)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_ChaoPiao)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_DianZan)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_HaHa)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_LiuLian)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_LueLueLue)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_PingDiGuo)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_QinQin)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_YaoWan)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_ZhaDan)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*get_ZhuTou)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_kotlin_Array (*get_values)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Key thiz);
                  } Key;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*Kind)(miraicore_KInt seen1, miraicore_KInt id, const char* name, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*Kind_)(miraicore_KInt id, const char* name);
                    miraicore_KInt (*get_id)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind thiz);
                    const char* (*get_name)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind thiz);
                    miraicore_KInt (*component1)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind thiz);
                    const char* (*component2)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*copy)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind thiz, miraicore_KInt id, const char* name);
                    miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind thiz, miraicore_kref_kotlin_Any other);
                    miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind thiz);
                    const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind thiz);
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind_$serializer (*_instance)();
                      miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind_$serializer thiz);
                      miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind_$serializer thiz);
                      miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                      void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind value);
                    } $serializer;
                    struct {
                      miraicore_KType* (*_type)(void);
                      miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind_Companion (*_instance)();
                      miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_VipFace_Kind_Companion thiz);
                    } Companion;
                  } Kind;
                } VipFace;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_Voice (*Voice)(miraicore_KInt seen1, const char* fileName, miraicore_kref_kotlin_ByteArray md5, miraicore_KLong fileSize, miraicore_KInt _codec, const char* _url, const char* _stringValue, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_message_data_Voice (*Voice_)(const char* fileName, miraicore_kref_kotlin_ByteArray md5, miraicore_KLong fileSize, miraicore_KInt _codec, const char* _url);
                  miraicore_KInt (*get__codec)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz);
                  const char* (*get_fileName)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz);
                  miraicore_KLong (*get_fileSize)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz);
                  miraicore_kref_kotlin_ByteArray (*get_md5)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz);
                  const char* (*get_url)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz);
                  const char* (*contentToString)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz);
                  miraicore_kref_net_mamoe_mirai_message_data_Audio (*toAudio)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz);
                  const char* (*toString)(miraicore_kref_net_mamoe_mirai_message_data_Voice thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Voice_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_message_data_Voice_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_message_data_Voice_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_Voice (*deserialize)(miraicore_kref_net_mamoe_mirai_message_data_Voice_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_message_data_Voice_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_message_data_Voice value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_message_data_Voice_Key (*_instance)();
                    const char* (*get_SERIAL_NAME)(miraicore_kref_net_mamoe_mirai_message_data_Voice_Key thiz);
                    miraicore_kref_net_mamoe_mirai_message_data_Voice (*fromAudio)(miraicore_kref_net_mamoe_mirai_message_data_Voice_Key thiz, miraicore_kref_net_mamoe_mirai_message_data_Audio audio);
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_message_data_Voice_Key thiz);
                  } Key;
                } Voice;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder (*XmlMessageBuilder)(miraicore_KInt templateId, miraicore_KInt serviceId, const char* action, const char* actionData, const char* brief, miraicore_KInt flag, const char* url, const char* sourceName, const char* sourceIconURL);
                  const char* (*get_action)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  void (*set_action)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, const char* set);
                  const char* (*get_actionData)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  void (*set_actionData)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, const char* set);
                  const char* (*get_brief)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  void (*set_brief)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, const char* set);
                  miraicore_KInt (*get_flag)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  void (*set_flag)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, miraicore_KInt set);
                  miraicore_KInt (*get_serviceId)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  void (*set_serviceId)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, miraicore_KInt set);
                  const char* (*get_sourceIconURL)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  void (*set_sourceIconURL)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, const char* set);
                  const char* (*get_sourceName)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  void (*set_sourceName)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, const char* set);
                  miraicore_KInt (*get_templateId)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  void (*set_templateId)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, miraicore_KInt set);
                  const char* (*get_text)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  const char* (*get_url)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz);
                  void (*set_url)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, const char* set);
                  void (*item)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, miraicore_KInt bg, miraicore_KInt layout, miraicore_kref_kotlin_Function1 block);
                  void (*source)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder thiz, const char* name, const char* iconURL);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_KInt (*get_bg)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder_ItemBuilder thiz);
                    void (*set_bg)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder_ItemBuilder thiz, miraicore_KInt set);
                    miraicore_KInt (*get_layout)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder_ItemBuilder thiz);
                    void (*set_layout)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder_ItemBuilder thiz, miraicore_KInt set);
                    const char* (*get_text)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder_ItemBuilder thiz);
                    void (*picture)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder_ItemBuilder thiz, const char* coverUrl);
                    void (*summary)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder_ItemBuilder thiz, const char* text, const char* color);
                    void (*title)(miraicore_kref_net_mamoe_mirai_message_data_XmlMessageBuilder_ItemBuilder thiz, const char* text, miraicore_KInt size, const char* color);
                  } ItemBuilder;
                } XmlMessageBuilder;
              } data;
            } message;
            struct {
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_network_CustomLoginFailedException (*CustomLoginFailedException)(miraicore_KBoolean killBot);
                miraicore_kref_net_mamoe_mirai_network_CustomLoginFailedException (*CustomLoginFailedException_)(miraicore_KBoolean killBot, const char* message);
                miraicore_kref_net_mamoe_mirai_network_CustomLoginFailedException (*CustomLoginFailedException__)(miraicore_KBoolean killBot, const char* message, miraicore_kref_kotlin_Throwable cause);
                miraicore_kref_net_mamoe_mirai_network_CustomLoginFailedException (*CustomLoginFailedException___)(miraicore_KBoolean killBot, miraicore_kref_kotlin_Throwable cause);
              } CustomLoginFailedException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_network_ForceOfflineException (*ForceOfflineException)(const char* message, miraicore_kref_kotlin_Throwable cause);
                miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_network_ForceOfflineException thiz);
                const char* (*get_message)(miraicore_kref_net_mamoe_mirai_network_ForceOfflineException thiz);
              } ForceOfflineException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_network_LoginFailedException (*LoginFailedException)(miraicore_KBoolean killBot, const char* message, miraicore_kref_kotlin_Throwable cause);
                miraicore_KBoolean (*get_killBot)(miraicore_kref_net_mamoe_mirai_network_LoginFailedException thiz);
              } LoginFailedException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_network_NoServerAvailableException (*NoServerAvailableException)(miraicore_kref_kotlin_Throwable cause);
                miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_network_NoServerAvailableException thiz);
              } NoServerAvailableException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_network_NoStandardInputForCaptchaException (*NoStandardInputForCaptchaException)(miraicore_kref_kotlin_Throwable cause);
                miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_network_NoStandardInputForCaptchaException thiz);
              } NoStandardInputForCaptchaException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_network_RetryLaterException (*RetryLaterException)(miraicore_kref_kotlin_Throwable cause);
                miraicore_kref_kotlin_Throwable (*get_cause)(miraicore_kref_net_mamoe_mirai_network_RetryLaterException thiz);
              } RetryLaterException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_network_UnsupportedSMSLoginException (*UnsupportedSMSLoginException)(const char* message);
              } UnsupportedSMSLoginException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_network_UnsupportedSliderCaptchaException (*UnsupportedSliderCaptchaException)(const char* message);
              } UnsupportedSliderCaptchaException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_network_WrongPasswordException (*WrongPasswordException)(const char* message);
              } WrongPasswordException;
            } network;
            struct {
              struct {
                miraicore_KType* (*_type)(void);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_spi_AudioToSilkService_Companion (*_instance)();
                  void (*setService)(miraicore_kref_net_mamoe_mirai_spi_AudioToSilkService_Companion thiz, miraicore_kref_net_mamoe_mirai_spi_AudioToSilkService service);
                } Companion;
              } AudioToSilkService;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get_priority)(miraicore_kref_net_mamoe_mirai_spi_BaseService thiz);
              } BaseService;
            } spi;
            struct {
              miraicore_kref_net_mamoe_mirai_utils_BotConfiguration (*BotConfiguration_new2)(miraicore_kref_kotlin_Function1 block);
              void (*debug)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message);
              void (*debug_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message, miraicore_kref_kotlin_Throwable e);
              void (*error)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message);
              void (*error_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message, miraicore_kref_kotlin_Throwable e);
              miraicore_kref_kotlin_ByteArray (*generateDeviceInfoData)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
              void (*info)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message);
              void (*info_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message, miraicore_kref_kotlin_Throwable e);
              void (*verbose)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message);
              void (*verbose_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message, miraicore_kref_kotlin_Throwable e);
              void (*warning)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message);
              void (*warning_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Function0 message, miraicore_kref_kotlin_Throwable e);
              miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch (*withSwitch)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_KBoolean default_);
              miraicore_KInt (*get_COUNT_BYTES_USED_FOR_DETECTING_FILE_TYPE)();
              miraicore_kref_kotlin_ByteArray (*get_DECRYPTER_16_ZERO)();
              miraicore_KInt (*get_DEFAULT_BUFFER_SIZE)();
              miraicore_kref_kotlin_ByteArray (*get_EMPTY_BYTE_ARRAY)();
              miraicore_kref_kotlin_collections_MutableMap (*get_FILE_TYPES)();
              miraicore_kref_kotlin_ByteArray (*get_KEY_16_ZEROS)();
              void* (*get_NULL_PTR)();
              miraicore_KLong (*get_ZLIB_BUFFER_SIZE)();
              void (*set_ZLIB_BUFFER_SIZE)(miraicore_KLong set);
              miraicore_KInt (*get_chineseLength)(miraicore_KChar thiz);
              const char* (*get_coroutineName)(miraicore_kref_kotlin_coroutines_CoroutineContext thiz);
              miraicore_KLong (*get_daysToMillis)(miraicore_KInt thiz);
              miraicore_KLong (*get_daysToSeconds)(miraicore_KInt thiz);
              miraicore_KLong (*get_hoursToMillis)(miraicore_KInt thiz);
              miraicore_KLong (*get_hoursToSeconds)(miraicore_KInt thiz);
              miraicore_KLong (*get_millisToSeconds)(miraicore_KInt thiz);
              miraicore_KLong (*get_minutesToMillis)(miraicore_KInt thiz);
              miraicore_KLong (*get_minutesToSeconds)(miraicore_KInt thiz);
              miraicore_KLong (*get_monthsToMillis)(miraicore_KInt thiz);
              miraicore_KLong (*get_monthsToSeconds)(miraicore_KInt thiz);
              miraicore_KLong (*get_secondsToMillis)(miraicore_KInt thiz);
              miraicore_KLong (*get_weeksToMillis)(miraicore_KInt thiz);
              miraicore_KLong (*get_weeksToSeconds)(miraicore_KInt thiz);
              miraicore_kref_io_ktor_utils_io_core_Input (*DeflateInput)(miraicore_kref_io_ktor_utils_io_core_Input source);
              miraicore_kref_io_ktor_utils_io_core_Input (*GzipCompressionInput)(miraicore_kref_io_ktor_utils_io_core_Input source);
              miraicore_kref_io_ktor_utils_io_core_Input (*GzipDecompressionInput)(miraicore_kref_io_ktor_utils_io_core_Input source);
              miraicore_kref_io_ktor_utils_io_core_Input (*InflateInput)(miraicore_kref_io_ktor_utils_io_core_Input source);
              void (*assertUnreachable)(const char* hint);
              miraicore_KInt (*availableProcessors)();
              miraicore_kref_net_mamoe_mirai_utils_MutableTypeSafeMap (*buildTypeSafeMap)(miraicore_kref_kotlin_Function1 block);
              miraicore_kref_net_mamoe_mirai_utils_MutableTypeSafeMap (*createMutableTypeSafeMap)();
              miraicore_kref_net_mamoe_mirai_utils_MutableTypeSafeMap (*createMutableTypeSafeMap_)(miraicore_kref_kotlin_collections_Map map);
              miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap (*createTypeSafeMap)();
              const char* (*currentTimeFormatted)(const char* format);
              miraicore_KLong (*currentTimeMillis)();
              miraicore_KLong (*currentTimeSeconds)();
              const char* (*generateImageId)(miraicore_kref_kotlin_ByteArray md5, const char* format);
              const char* (*generateImageIdFromResourceId)(const char* resourceId, const char* format);
              const char* (*generateUUID)(miraicore_kref_kotlin_ByteArray md5);
              const char* (*generateUUID_)(const char* md5String);
              const char* (*getFileType)(miraicore_kref_kotlin_ByteArray fileHeader);
              miraicore_kref_kotlin_ByteArray (*getRandomByteArray)(miraicore_KInt length, miraicore_kref_kotlin_random_Random random);
              const char* (*getRandomIntString)(miraicore_KInt length, miraicore_kref_kotlin_random_Random random);
              const char* (*getRandomString)(miraicore_KInt length, miraicore_kref_kotlin_Array charRanges, miraicore_kref_kotlin_random_Random random);
              const char* (*getRandomString_)(miraicore_KInt length, miraicore_kref_kotlin_random_Random random);
              const char* (*getRandomString__)(miraicore_KInt length, miraicore_kref_kotlin_ranges_CharRange charRange, miraicore_kref_kotlin_random_Random random);
              miraicore_KInt (*getRandomUnsignedInt)();
              miraicore_KBoolean (*isSameClass)(miraicore_kref_kotlin_Any object1, miraicore_kref_kotlin_Any object2);
              const char* (*localIpAddress)();
              miraicore_KLong (*measureTimeMillis)(miraicore_kref_kotlin_Function0 block);
              void (*setSystemProp)(const char* name, const char* value);
              miraicore_KBoolean (*systemProp)(const char* name, miraicore_KBoolean default_);
              miraicore_KLong (*systemProp_)(const char* name, miraicore_KLong default_);
              const char* (*systemProp__)(const char* name, const char* default_);
              miraicore_kref_kotlin_collections_MutableMap (*_readTLVMap)(miraicore_kref_io_ktor_utils_io_core_Input thiz, miraicore_KBoolean expectingEOF, miraicore_KInt tagSize, miraicore_KBoolean suppressDuplication);
              miraicore_kref_kotlin_collections_MutableMap (*_readTLVMap_)(miraicore_kref_io_ktor_utils_io_core_Input thiz, miraicore_KInt tagSize, miraicore_KBoolean suppressDuplication);
              miraicore_kref_kotlin_coroutines_CoroutineContext (*addNameHierarchically)(miraicore_kref_kotlin_coroutines_CoroutineContext thiz, const char* name);
              miraicore_kref_kotlin_coroutines_CoroutineContext (*addNameIfAbsent)(miraicore_kref_kotlin_coroutines_CoroutineContext thiz, miraicore_kref_kotlin_Function0 name);
              miraicore_kref_net_mamoe_mirai_utils_Clock (*adjusted)(miraicore_kref_net_mamoe_mirai_utils_Clock thiz, miraicore_KLong diffMillis);
              const char* (*capitalize)(const char* thiz);
              miraicore_kref_kotlin_sequences_Sequence (*causes)(miraicore_kref_kotlin_Throwable thiz, miraicore_KInt maxDepth);
              void (*check)(miraicore_kref_net_mamoe_mirai_utils_DeserializationFailure thiz);
              void (*check_)(miraicore_kref_net_mamoe_mirai_utils_FailureResponse thiz);
              void (*checkOffsetAndLength)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt offset, miraicore_KInt length);
              miraicore_kref_kotlinx_coroutines_CoroutineScope (*childScope)(miraicore_kref_kotlin_coroutines_CoroutineContext thiz, const char* name, miraicore_kref_kotlin_coroutines_CoroutineContext context);
              miraicore_kref_kotlinx_coroutines_CoroutineScope (*childScope_)(miraicore_kref_kotlin_coroutines_CoroutineContext thiz, miraicore_kref_kotlin_coroutines_CoroutineContext coroutineContext);
              miraicore_kref_kotlinx_coroutines_CoroutineScope (*childScope__)(miraicore_kref_kotlinx_coroutines_CoroutineScope thiz, const char* name, miraicore_kref_kotlin_coroutines_CoroutineContext context);
              miraicore_kref_kotlinx_coroutines_CoroutineScope (*childScope___)(miraicore_kref_kotlinx_coroutines_CoroutineScope thiz, miraicore_kref_kotlin_coroutines_CoroutineContext coroutineContext);
              miraicore_kref_kotlin_coroutines_CoroutineContext (*childScopeContext)(miraicore_kref_kotlin_coroutines_CoroutineContext thiz, const char* name, miraicore_kref_kotlin_coroutines_CoroutineContext context);
              miraicore_kref_kotlin_coroutines_CoroutineContext (*childScopeContext_)(miraicore_kref_kotlin_coroutines_CoroutineContext thiz, miraicore_kref_kotlin_coroutines_CoroutineContext coroutineContext);
              miraicore_kref_kotlin_coroutines_CoroutineContext (*childScopeContext__)(miraicore_kref_kotlinx_coroutines_CoroutineScope thiz, const char* name, miraicore_kref_kotlin_coroutines_CoroutineContext context);
              miraicore_KInt (*chineseLength)(miraicore_kref_kotlin_CharSequence thiz, miraicore_KInt upTo);
              miraicore_KLong (*concatAsLong)(miraicore_KInt thiz, miraicore_KInt i2);
              miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*copy)(miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor thiz, const char* newName);
              miraicore_KInt (*countHexBytes)(const char* thiz);
              void (*createFileIfNotExists)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
              miraicore_kref_kotlin_ByteArray (*decodeBase64)(const char* thiz);
              const char* (*decodeHtmlEscape)(const char* thiz);
              miraicore_kref_kotlin_ByteArray (*deflate)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt offset, miraicore_KInt length);
              miraicore_kref_kotlin_ByteArray (*deflateAllAvailable)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              miraicore_kref_io_ktor_utils_io_core_Input (*deflateInput)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              miraicore_KBoolean (*deleteRecursively)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
              const char* (*dropEmoji)(const char* thiz);
              const char* (*encodeBase64)(miraicore_kref_kotlin_ByteArray thiz);
              miraicore_kref_kotlin_Throwable (*findCause)(miraicore_kref_kotlin_Throwable thiz, miraicore_KInt maxDepth, miraicore_kref_kotlin_Function1 filter);
              miraicore_kref_kotlin_Throwable (*findCauseOrSelf)(miraicore_kref_kotlin_Throwable thiz, miraicore_KInt maxDepth, miraicore_kref_kotlin_Function1 filter);
              const char* (*fixToUHex)(miraicore_KByte thiz);
              const char* (*fixToUHex_)(miraicore_KUByte thiz);
              miraicore_KBoolean (*flag)(miraicore_KInt thiz, miraicore_KUInt flag);
              miraicore_KBoolean (*flag_)(miraicore_KUInt thiz, miraicore_KInt flag);
              miraicore_KBoolean (*flag__)(miraicore_KUInt thiz, miraicore_KUInt flag);
              miraicore_KBoolean (*flag___)(miraicore_KULong thiz, miraicore_KULong flag);
              miraicore_KBoolean (*flag____)(miraicore_KUShort thiz, miraicore_KUShort flag);
              const char* (*get)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt rangeStart, miraicore_KInt rangeEnd);
              miraicore_kref_kotlin_ByteArray (*getOrFail)(miraicore_kref_kotlin_collections_MutableMap thiz, miraicore_KInt tag);
              miraicore_kref_kotlin_ByteArray (*getOrFail_)(miraicore_kref_kotlin_collections_MutableMap thiz, miraicore_KInt tag, miraicore_kref_kotlin_Function1 lazyMessage);
              miraicore_kref_kotlin_Throwable (*getRootCause)(miraicore_kref_kotlin_Throwable thiz, miraicore_KInt maxDepth);
              miraicore_kref_kotlin_ByteArray (*gzip)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt offset, miraicore_KInt length);
              miraicore_kref_kotlin_ByteArray (*gzipAllAvailable)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              miraicore_kref_io_ktor_utils_io_core_Input (*gzipDecompressionInput)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              miraicore_kref_kotlin_ByteArray (*hexToBytes)(const char* thiz);
              miraicore_kref_kotlin_ByteArray (*hexToUBytes)(const char* thiz);
              miraicore_kref_kotlinx_coroutines_CoroutineName (*hierarchicalName)(miraicore_kref_kotlin_coroutines_CoroutineContext thiz, const char* name);
              miraicore_kref_kotlinx_coroutines_CoroutineName (*hierarchicalName_)(miraicore_kref_kotlinx_coroutines_CoroutineScope thiz, const char* name);
              miraicore_kref_kotlin_ByteArray (*inflate)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt offset, miraicore_KInt length);
              miraicore_kref_kotlin_ByteArray (*inflateAllAvailable)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              miraicore_kref_io_ktor_utils_io_core_Input (*inflateInput)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              miraicore_kref_kotlinx_coroutines_Job (*launchWithPermit)(miraicore_kref_kotlinx_coroutines_CoroutineScope thiz, miraicore_kref_kotlinx_coroutines_sync_Semaphore semaphore, miraicore_kref_kotlin_coroutines_CoroutineContext coroutineContext, miraicore_kref_kotlin_coroutines_SuspendFunction0 block);
              miraicore_kref_kotlin_ByteArray (*md5)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt offset, miraicore_KInt length);
              miraicore_kref_kotlin_ByteArray (*md5_)(const char* thiz);
              const char* (*millisToHumanReadableString)(miraicore_KInt thiz);
              const char* (*millisToHumanReadableString_)(miraicore_KLong thiz);
              miraicore_kref_kotlin_coroutines_CoroutineContext (*newCoroutineContextWithSupervisorJob)(miraicore_kref_kotlin_coroutines_CoroutineContext thiz, const char* name);
              miraicore_KByte (*parseFromHexChunk)(miraicore_kref_kotlin_Byte_Companion thiz, miraicore_KChar char1, miraicore_KChar char2);
              miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap (*plus)(miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap thiz, miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap other);
              const char* (*readAllText)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              miraicore_kref_kotlin_ByteArray (*readBytes)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
              miraicore_kref_io_ktor_utils_io_core_ByteReadPacket (*readPacketExact)(miraicore_kref_io_ktor_utils_io_core_ByteReadPacket thiz, miraicore_KInt n);
              const char* (*readString)(miraicore_kref_io_ktor_utils_io_core_Input thiz, miraicore_KByte length, miraicore_kref_io_ktor_utils_io_charsets_Charset charset);
              const char* (*readString_)(miraicore_kref_io_ktor_utils_io_core_Input thiz, miraicore_KInt length, miraicore_kref_io_ktor_utils_io_charsets_Charset charset);
              const char* (*readString__)(miraicore_kref_io_ktor_utils_io_core_Input thiz, miraicore_KLong length, miraicore_kref_io_ktor_utils_io_charsets_Charset charset);
              const char* (*readString___)(miraicore_kref_io_ktor_utils_io_core_Input thiz, miraicore_KShort length, miraicore_kref_io_ktor_utils_io_charsets_Charset charset);
              const char* (*readString____)(miraicore_kref_io_ktor_utils_io_core_Input thiz, miraicore_KUShort length, miraicore_kref_io_ktor_utils_io_charsets_Charset charset);
              const char* (*readText)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
              miraicore_kref_kotlin_ByteArray (*readUShortLVByteArray)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              const char* (*readUShortLVString)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*resolveCreateFile)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz, const char* relative);
              miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*resolveCreateFile_)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz, miraicore_kref_net_mamoe_mirai_utils_MiraiFile relative);
              miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*resolveMkdir)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz, const char* relative);
              miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*resolveMkdir_)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz, miraicore_kref_net_mamoe_mirai_utils_MiraiFile relative);
              miraicore_kref_kotlin_ByteArray (*sha1)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt offset, miraicore_KInt length);
              miraicore_kref_kotlin_ByteArray (*sha1_)(const char* thiz);
              miraicore_KInt (*sumUpTo)(miraicore_kref_kotlin_CharSequence thiz, miraicore_KInt upTo, miraicore_kref_kotlin_Function1 selector);
              void (*takeElementsFrom)(miraicore_kref_kotlinx_serialization_descriptors_ClassSerialDescriptorBuilder thiz, miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor descriptor);
              miraicore_kref_kotlin_ByteArray (*toByteArray)(miraicore_KInt thiz);
              miraicore_kref_kotlin_ByteArray (*toByteArray_)(miraicore_KLong thiz);
              miraicore_kref_kotlin_ByteArray (*toByteArray__)(miraicore_KShort thiz);
              miraicore_kref_kotlin_ByteArray (*toByteArray___)(miraicore_KUInt thiz);
              miraicore_kref_kotlin_ByteArray (*toByteArray____)(miraicore_KUShort thiz);
              const char* (*toDebugString)(miraicore_kref_kotlin_Any thiz, const char* prop, miraicore_KBoolean default_);
              const char* (*toHumanReadableString)(miraicore_KLong thiz);
              miraicore_KInt (*toInt)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt offset);
              miraicore_KInt (*toIntOrFail)(miraicore_KLong thiz);
              miraicore_KInt (*toIntUnsigned)(miraicore_KByte thiz);
              miraicore_KInt (*toIntUnsigned_)(miraicore_KShort thiz);
              miraicore_KLong (*toLongUnsigned)(miraicore_KInt thiz);
              miraicore_KLong (*toLongUnsigned_)(miraicore_KLong thiz);
              miraicore_kref_net_mamoe_mirai_utils_MutableTypeSafeMap (*toMutableTypeSafeMap)(miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap thiz);
              miraicore_kref_io_ktor_utils_io_core_ByteReadPacket (*toReadPacket)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt offset, miraicore_KInt length, miraicore_kref_kotlin_Function1 release);
              const char* (*toUHexString)(miraicore_KByte thiz);
              const char* (*toUHexString_)(miraicore_kref_kotlin_ByteArray thiz, const char* separator, miraicore_KInt offset, miraicore_KInt length);
              const char* (*toUHexString__)(miraicore_KInt thiz, const char* separator);
              const char* (*toUHexString___)(miraicore_KLong thiz, const char* separator);
              const char* (*toUHexString____)(miraicore_KShort thiz, const char* separator);
              const char* (*toUHexString_____)(miraicore_KUByte thiz);
              const char* (*toUHexString______)(miraicore_kref_kotlin_ByteArray thiz, const char* separator, miraicore_KInt offset, miraicore_KInt length);
              const char* (*toUHexString_______)(miraicore_KUInt thiz, const char* separator);
              const char* (*toUHexString________)(miraicore_KULong thiz, const char* separator);
              const char* (*toUHexString_________)(miraicore_KUShort thiz, const char* separator);
              miraicore_KUInt (*toUInt)(miraicore_kref_kotlin_ByteArray thiz);
              miraicore_KUShort (*toUShort)(miraicore_kref_kotlin_ByteArray thiz);
              miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*touch)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
              const char* (*truncated)(const char* thiz, miraicore_KInt length, const char* truncated);
              miraicore_kref_kotlin_ByteArray (*ungzip)(miraicore_kref_kotlin_ByteArray thiz, miraicore_KInt offset, miraicore_KInt length);
              miraicore_kref_kotlin_ByteArray (*ungzipAllAvailable)(miraicore_kref_io_ktor_utils_io_core_Input thiz);
              miraicore_kref_kotlin_Throwable (*unwrapCancellationException)(miraicore_kref_kotlin_Throwable thiz);
              miraicore_kref_io_ktor_utils_io_errors_IOException (*wrapIO)(miraicore_kref_io_ktor_utils_io_errors_PosixException thiz);
              void (*writeBytes)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz, miraicore_kref_kotlin_ByteArray data);
              void (*writeText)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz, const char* text);
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_BotConfiguration (*BotConfiguration)();
                miraicore_KBoolean (*get_autoReconnectOnForceOffline)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_autoReconnectOnForceOffline)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KBoolean set);
                miraicore_kref_kotlin_Function1 (*get_botLoggerSupplier)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_botLoggerSupplier)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_kref_kotlin_Function1 set);
                const char* (*get_cacheDir)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_cacheDir)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, const char* set);
                miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache (*get_contactListCache)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_contactListCache)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache set);
                miraicore_KBoolean (*get_convertLineSeparator)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_convertLineSeparator)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KBoolean set);
                miraicore_kref_kotlin_Function1 (*get_deviceInfo)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_deviceInfo)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_kref_kotlin_Function1 set);
                miraicore_KLong (*get_firstReconnectDelayMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_firstReconnectDelayMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KLong set);
                miraicore_KLong (*get_heartbeatPeriodMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_heartbeatPeriodMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KLong set);
                miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_HeartbeatStrategy (*get_heartbeatStrategy)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_heartbeatStrategy)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_HeartbeatStrategy set);
                miraicore_KLong (*get_heartbeatTimeoutMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_heartbeatTimeoutMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KLong set);
                miraicore_KInt (*get_highwayUploadCoroutineCount)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_highwayUploadCoroutineCount)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KInt set);
                miraicore_KBoolean (*get_isShowingVerboseEventLog)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_isShowingVerboseEventLog)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KBoolean set);
                miraicore_KBoolean (*get_loginCacheEnabled)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_loginCacheEnabled)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KBoolean set);
                miraicore_kref_net_mamoe_mirai_utils_LoginSolver (*get_loginSolver)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_loginSolver)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_kref_net_mamoe_mirai_utils_LoginSolver set);
                miraicore_kref_kotlin_Function1 (*get_networkLoggerSupplier)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_networkLoggerSupplier)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_kref_kotlin_Function1 set);
                miraicore_kref_kotlin_coroutines_CoroutineContext (*get_parentCoroutineContext)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_parentCoroutineContext)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_kref_kotlin_coroutines_CoroutineContext set);
                miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol (*get_protocol)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_protocol)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol set);
                miraicore_KLong (*get_reconnectPeriodMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_reconnectPeriodMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KLong set);
                miraicore_KInt (*get_reconnectionRetryTimes)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_reconnectionRetryTimes)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KInt set);
                miraicore_KLong (*get_statHeartbeatPeriodMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_statHeartbeatPeriodMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_KLong set);
                const char* (*get_workingDir)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*set_workingDir)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, const char* set);
                void (*autoReconnectOnForceOffline)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*contactListCache)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, miraicore_kref_kotlin_Function1 action);
                miraicore_kref_net_mamoe_mirai_utils_BotConfiguration (*copy)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*disableAccountSecretes)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*disableContactCache)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*enableContactCache)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*fileBasedDeviceInfo)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, const char* filepath);
                void (*loadDeviceInfoJson)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz, const char* json);
                void (*noBotLog)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*noNetworkLog)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                void (*randomDeviceInfo)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_utils_BotConfiguration (*get_Default)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_Companion thiz);
                } Companion;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache (*ContactListCache)();
                  miraicore_KBoolean (*get_friendListCacheEnabled)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache thiz);
                  void (*set_friendListCacheEnabled)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache thiz, miraicore_KBoolean set);
                  miraicore_KBoolean (*get_groupMemberListCacheEnabled)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache thiz);
                  void (*set_groupMemberListCacheEnabled)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache thiz, miraicore_KBoolean set);
                  miraicore_KLong (*get_saveInterval)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache thiz);
                  void (*set_saveInterval)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache thiz, miraicore_KLong v);
                  miraicore_KLong (*get_saveIntervalMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache thiz);
                  void (*set_saveIntervalMillis)(miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_ContactListCache thiz, miraicore_KLong set);
                } ContactListCache;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_HeartbeatStrategy (*get)(); /* enum entry for STAT_HB. */
                  } STAT_HB;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_HeartbeatStrategy (*get)(); /* enum entry for REGISTER. */
                  } REGISTER;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_HeartbeatStrategy (*get)(); /* enum entry for NONE. */
                  } NONE;
                } HeartbeatStrategy;
                struct {
                  miraicore_KType* (*_type)(void);
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol (*get)(); /* enum entry for ANDROID_PHONE. */
                  } ANDROID_PHONE;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol (*get)(); /* enum entry for ANDROID_PAD. */
                  } ANDROID_PAD;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol (*get)(); /* enum entry for ANDROID_WATCH. */
                  } ANDROID_WATCH;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol (*get)(); /* enum entry for IPAD. */
                  } IPAD;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_BotConfiguration_MiraiProtocol (*get)(); /* enum entry for MACOS. */
                  } MACOS;
                } MiraiProtocol;
              } BotConfiguration;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_DeviceInfo (*DeviceInfo)(miraicore_KInt seen1, miraicore_kref_kotlin_ByteArray display, miraicore_kref_kotlin_ByteArray product, miraicore_kref_kotlin_ByteArray device, miraicore_kref_kotlin_ByteArray board, miraicore_kref_kotlin_ByteArray brand, miraicore_kref_kotlin_ByteArray model, miraicore_kref_kotlin_ByteArray bootloader, miraicore_kref_kotlin_ByteArray fingerprint, miraicore_kref_kotlin_ByteArray bootId, miraicore_kref_kotlin_ByteArray procVersion, miraicore_kref_kotlin_ByteArray baseBand, miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version version, miraicore_kref_kotlin_ByteArray simInfo, miraicore_kref_kotlin_ByteArray osType, miraicore_kref_kotlin_ByteArray macAddress, miraicore_kref_kotlin_ByteArray wifiBSSID, miraicore_kref_kotlin_ByteArray wifiSSID, miraicore_kref_kotlin_ByteArray imsiMd5, const char* imei, miraicore_kref_kotlin_ByteArray apn, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                miraicore_kref_net_mamoe_mirai_utils_DeviceInfo (*DeviceInfo_)(miraicore_kref_kotlin_ByteArray display, miraicore_kref_kotlin_ByteArray product, miraicore_kref_kotlin_ByteArray device, miraicore_kref_kotlin_ByteArray board, miraicore_kref_kotlin_ByteArray brand, miraicore_kref_kotlin_ByteArray model, miraicore_kref_kotlin_ByteArray bootloader, miraicore_kref_kotlin_ByteArray fingerprint, miraicore_kref_kotlin_ByteArray bootId, miraicore_kref_kotlin_ByteArray procVersion, miraicore_kref_kotlin_ByteArray baseBand, miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version version, miraicore_kref_kotlin_ByteArray simInfo, miraicore_kref_kotlin_ByteArray osType, miraicore_kref_kotlin_ByteArray macAddress, miraicore_kref_kotlin_ByteArray wifiBSSID, miraicore_kref_kotlin_ByteArray wifiSSID, miraicore_kref_kotlin_ByteArray imsiMd5, const char* imei, miraicore_kref_kotlin_ByteArray apn);
                miraicore_kref_kotlin_ByteArray (*get_androidId)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_apn)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_baseBand)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_board)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_bootId)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_bootloader)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_brand)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_device)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_display)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_fingerprint)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_guid)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                const char* (*get_imei)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_imsiMd5)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_ipAddress)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_macAddress)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_model)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_osType)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_procVersion)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_product)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_simInfo)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version (*get_version)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_wifiBSSID)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_kref_kotlin_ByteArray (*get_wifiSSID)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz, miraicore_kref_kotlin_Any other);
                miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_$serializer (*_instance)();
                  miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_$serializer thiz);
                  miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_$serializer thiz);
                  miraicore_kref_net_mamoe_mirai_utils_DeviceInfo (*deserialize)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                  void (*serialize)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_utils_DeviceInfo value);
                } $serializer;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_utils_DeviceInfo (*random)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Companion thiz);
                  miraicore_kref_net_mamoe_mirai_utils_DeviceInfo (*random_)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Companion thiz, miraicore_kref_kotlin_random_Random random);
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Companion thiz);
                } Companion;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version (*Version)(miraicore_KInt seen1, miraicore_kref_kotlin_ByteArray incremental, miraicore_kref_kotlin_ByteArray release, miraicore_kref_kotlin_ByteArray codename, miraicore_KInt sdk, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                  miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version (*Version_)(miraicore_kref_kotlin_ByteArray incremental, miraicore_kref_kotlin_ByteArray release, miraicore_kref_kotlin_ByteArray codename, miraicore_KInt sdk);
                  miraicore_kref_kotlin_ByteArray (*get_codename)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version thiz);
                  miraicore_kref_kotlin_ByteArray (*get_incremental)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version thiz);
                  miraicore_kref_kotlin_ByteArray (*get_release)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version thiz);
                  miraicore_KInt (*get_sdk)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version thiz);
                  miraicore_KBoolean (*equals)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version thiz, miraicore_kref_kotlin_Any other);
                  miraicore_KInt (*hashCode)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version thiz);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version_$serializer (*_instance)();
                    miraicore_kref_kotlinx_serialization_descriptors_SerialDescriptor (*get_descriptor)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version_$serializer thiz);
                    miraicore_kref_kotlin_Array (*childSerializers)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version_$serializer thiz);
                    miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version (*deserialize)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Decoder decoder);
                    void (*serialize)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version_$serializer thiz, miraicore_kref_kotlinx_serialization_encoding_Encoder encoder, miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version value);
                  } $serializer;
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version_Companion (*_instance)();
                    miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_utils_DeviceInfo_Version_Companion thiz);
                  } Companion;
                } Version;
              } DeviceInfo;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_kotlinx_coroutines_Deferred (*get_closed)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                const char* (*get_formatName)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                miraicore_KBoolean (*get_isAutoClose)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                miraicore_kref_kotlin_ByteArray (*get_md5)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                miraicore_kref_kotlin_Any (*get_origin)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                miraicore_kref_kotlin_ByteArray (*get_sha1)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                miraicore_KLong (*get_size)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                const char* (*calculateResourceId)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                miraicore_kref_io_ktor_utils_io_core_Input (*input)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                miraicore_kref_net_mamoe_mirai_utils_ExternalResource (*toAutoCloseable)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_ExternalResource_Companion (*_instance)();
                  const char* (*get_DEFAULT_FORMAT_NAME)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource_Companion thiz);
                  miraicore_kref_net_mamoe_mirai_utils_ExternalResource (*toExternalResource)(miraicore_kref_net_mamoe_mirai_utils_ExternalResource_Companion thiz, miraicore_kref_kotlin_ByteArray thiz1, const char* formatName);
                } Companion;
              } ExternalResource;
              struct {
                miraicore_KType* (*_type)(void);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_FileCacheStrategy_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_utils_FileCacheStrategy (*get_PlatformDefault)(miraicore_kref_net_mamoe_mirai_utils_FileCacheStrategy_Companion thiz);
                } Companion;
              } FileCacheStrategy;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_LoginSolver (*LoginSolver)();
                miraicore_KBoolean (*get_isSliderCaptchaSupported)(miraicore_kref_net_mamoe_mirai_utils_LoginSolver thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_LoginSolver_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_utils_LoginSolver (*get_Default)(miraicore_kref_net_mamoe_mirai_utils_LoginSolver_Companion thiz);
                  miraicore_kref_net_mamoe_mirai_utils_LoginSolver (*getDefault)(miraicore_kref_net_mamoe_mirai_utils_LoginSolver_Companion thiz);
                } Companion;
              } LoginSolver;
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_identity)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz);
                miraicore_KBoolean (*get_isDebugEnabled)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz);
                miraicore_KBoolean (*get_isEnabled)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz);
                miraicore_KBoolean (*get_isErrorEnabled)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz);
                miraicore_KBoolean (*get_isInfoEnabled)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz);
                miraicore_KBoolean (*get_isVerboseEnabled)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz);
                miraicore_KBoolean (*get_isWarningEnabled)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz);
                void (*call)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority priority, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*debug)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message);
                void (*debug_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*debug__)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Throwable e);
                void (*error)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message);
                void (*error_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*error__)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Throwable e);
                void (*info)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message);
                void (*info_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*info__)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Throwable e);
                void (*verbose)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message);
                void (*verbose_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*verbose__)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Throwable e);
                void (*warning)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message);
                void (*warning_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*warning__)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger thiz, miraicore_kref_kotlin_Throwable e);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_MiraiLogger_Companion (*_instance)();
                } Companion;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_MiraiLogger (*create)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger_Factory thiz, miraicore_kref_kotlin_reflect_KClass requester);
                  miraicore_kref_net_mamoe_mirai_utils_MiraiLogger (*create_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger_Factory thiz, miraicore_kref_kotlin_reflect_KClass requester, const char* identity);
                  struct {
                    miraicore_KType* (*_type)(void);
                    miraicore_kref_net_mamoe_mirai_utils_MiraiLogger_Factory_INSTANCE (*_instance)();
                    miraicore_kref_net_mamoe_mirai_utils_MiraiLogger (*create)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger_Factory_INSTANCE thiz, miraicore_kref_kotlin_reflect_KClass requester);
                    miraicore_kref_net_mamoe_mirai_utils_MiraiLogger (*create_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLogger_Factory_INSTANCE thiz, miraicore_kref_kotlin_reflect_KClass requester, const char* identity);
                  } INSTANCE;
                } Factory;
              } MiraiLogger;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase (*MiraiLoggerPlatformBase)();
                miraicore_KBoolean (*get_isEnabled)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz);
                void (*debug)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*debug_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*debug0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*debug0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*error)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*error_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*error0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*error0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*info)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*info_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*info0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*info0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*verbose)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*verbose_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*verbose0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*verbose0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*warning)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*warning_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*warning0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message);
                void (*warning0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerPlatformBase thiz, const char* message, miraicore_kref_kotlin_Throwable e);
              } MiraiLoggerPlatformBase;
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_identity)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz);
                miraicore_KBoolean (*get_isEnabled)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz);
                void (*debug0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message);
                void (*debug0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*disable)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz);
                void (*enable)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz);
                void (*error0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message);
                void (*error0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*info0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message);
                void (*info0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*verbose0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message);
                void (*verbose0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*warning0)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message);
                void (*warning0_)(miraicore_kref_net_mamoe_mirai_utils_MiraiLoggerWithSwitch thiz, const char* message, miraicore_kref_kotlin_Throwable e);
              } MiraiLoggerWithSwitch;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_OverFileSizeMaxException (*OverFileSizeMaxException)();
              } OverFileSizeMaxException;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_PlatformLogger (*PlatformLogger)(const char* identity);
                const char* (*get_identity)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz);
                miraicore_KBoolean (*get_isDebugEnabled)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz);
                miraicore_KBoolean (*get_isEnabled)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz);
                miraicore_KBoolean (*get_isErrorEnabled)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz);
                miraicore_KBoolean (*get_isInfoEnabled)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz);
                miraicore_KBoolean (*get_isVerboseEnabled)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz);
                miraicore_KBoolean (*get_isWarningEnabled)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz);
                void (*debug0)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*error0)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*info0)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*verbose0)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*warning0)(miraicore_kref_net_mamoe_mirai_utils_PlatformLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
              } PlatformLogger;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_SilentLogger (*_instance)();
                const char* (*get_identity)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz);
                miraicore_KBoolean (*get_isDebugEnabled)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz);
                miraicore_KBoolean (*get_isEnabled)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz);
                miraicore_KBoolean (*get_isErrorEnabled)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz);
                miraicore_KBoolean (*get_isInfoEnabled)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz);
                miraicore_KBoolean (*get_isVerboseEnabled)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz);
                miraicore_KBoolean (*get_isWarningEnabled)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz);
                void (*debug0)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message);
                void (*debug0_)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*error0)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message);
                void (*error0_)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*info0)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message);
                void (*info0_)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*verbose0)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message);
                void (*verbose0_)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*warning0)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message);
                void (*warning0_)(miraicore_kref_net_mamoe_mirai_utils_SilentLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
              } SilentLogger;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_SimpleLogger (*SimpleLogger)(const char* identity, miraicore_kref_kotlin_Function3 logger);
                const char* (*get_identity)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz);
                miraicore_kref_kotlin_Function3 (*get_logger)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz);
                void (*debug0)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message);
                void (*debug0_)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*error0)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message);
                void (*error0_)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*info0)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message);
                void (*info0_)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*verbose0)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message);
                void (*verbose0_)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                void (*warning0)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message);
                void (*warning0_)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger thiz, const char* message, miraicore_kref_kotlin_Throwable e);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_utils_SimpleLogger (*invoke)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_Companion thiz, miraicore_kref_kotlin_Function2 logger);
                  miraicore_kref_net_mamoe_mirai_utils_SimpleLogger (*invoke_)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_Companion thiz, miraicore_kref_kotlin_Function3 logger);
                  miraicore_kref_net_mamoe_mirai_utils_SimpleLogger (*invoke__)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_Companion thiz, const char* identity, miraicore_kref_kotlin_Function2 logger);
                } Companion;
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_kotlin_Function3 (*get_correspondingFunction)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority thiz);
                  const char* (*get_nameAligned)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority thiz);
                  const char* (*get_simpleName)(miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority thiz);
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority (*get)(); /* enum entry for VERBOSE. */
                  } VERBOSE;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority (*get)(); /* enum entry for DEBUG. */
                  } DEBUG;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority (*get)(); /* enum entry for INFO. */
                  } INFO;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority (*get)(); /* enum entry for WARNING. */
                  } WARNING;
                  struct {
                    miraicore_kref_net_mamoe_mirai_utils_SimpleLogger_LogPriority (*get)(); /* enum entry for ERROR. */
                  } ERROR;
                } LogPriority;
              } SimpleLogger;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_AdjustedClock (*AdjustedClock)(miraicore_kref_net_mamoe_mirai_utils_Clock clock, miraicore_KLong diffMillis);
                miraicore_KLong (*currentTimeMillis)(miraicore_kref_net_mamoe_mirai_utils_AdjustedClock thiz);
                miraicore_KLong (*currentTimeSeconds)(miraicore_kref_net_mamoe_mirai_utils_AdjustedClock thiz);
              } AdjustedClock;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_ByteArrayPool (*_instance)();
                miraicore_KInt (*get_BUFFER_SIZE)(miraicore_kref_net_mamoe_mirai_utils_ByteArrayPool thiz);
                void (*checkBufferSize)(miraicore_kref_net_mamoe_mirai_utils_ByteArrayPool thiz, miraicore_KInt size);
                void (*checkBufferSize_)(miraicore_kref_net_mamoe_mirai_utils_ByteArrayPool thiz, miraicore_KLong size);
                miraicore_kref_kotlin_ByteArray (*clearInstance)(miraicore_kref_net_mamoe_mirai_utils_ByteArrayPool thiz, miraicore_kref_kotlin_ByteArray instance);
                miraicore_kref_kotlin_ByteArray (*produceInstance)(miraicore_kref_net_mamoe_mirai_utils_ByteArrayPool thiz);
              } ByteArrayPool;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get__errorCode)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponse thiz);
                const char* (*get__errorMessage)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponse thiz);
              } CheckableResponse;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA (*CheckableResponseA)(miraicore_KInt seen1, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA (*CheckableResponseA_)();
                miraicore_KInt (*get__errorCode)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA thiz);
                const char* (*get__errorMessage)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA thiz);
                miraicore_KInt (*get_errorCode)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA thiz);
                const char* (*get_errorMessage)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA_Companion (*_instance)();
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA_Companion thiz);
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseA_Companion thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                } Companion;
              } CheckableResponseA;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB (*CheckableResponseB)(miraicore_KInt seen1, miraicore_kref_kotlinx_serialization_internal_SerializationConstructorMarker serializationConstructorMarker);
                miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB (*CheckableResponseB_)();
                miraicore_KInt (*get__errorCode)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB thiz);
                const char* (*get__errorMessage)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB thiz);
                const char* (*get_errmsg)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB thiz);
                miraicore_KInt (*get_result)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB_Companion (*_instance)();
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB_Companion thiz);
                  miraicore_kref_kotlinx_serialization_KSerializer (*serializer_)(miraicore_kref_net_mamoe_mirai_utils_CheckableResponseB_Companion thiz, miraicore_kref_kotlin_Array typeParamsSerializers);
                } Companion;
              } CheckableResponseB;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KLong (*currentTimeMillis)(miraicore_kref_net_mamoe_mirai_utils_Clock thiz);
                miraicore_KLong (*currentTimeSeconds)(miraicore_kref_net_mamoe_mirai_utils_Clock thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_Clock_SystemDefault (*_instance)();
                  miraicore_KLong (*currentTimeMillis)(miraicore_kref_net_mamoe_mirai_utils_Clock_SystemDefault thiz);
                  miraicore_KLong (*currentTimeSeconds)(miraicore_kref_net_mamoe_mirai_utils_Clock_SystemDefault thiz);
                } SystemDefault;
              } Clock;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_DeserializationFailure (*DeserializationFailure)(miraicore_kref_kotlin_reflect_KType structType, const char* json, miraicore_kref_kotlin_Throwable exception);
                miraicore_KInt (*get_errorCode)(miraicore_kref_net_mamoe_mirai_utils_DeserializationFailure thiz);
                const char* (*get_errorMessage)(miraicore_kref_net_mamoe_mirai_utils_DeserializationFailure thiz);
                miraicore_kref_kotlin_Throwable (*get_exception)(miraicore_kref_net_mamoe_mirai_utils_DeserializationFailure thiz);
                const char* (*get_json)(miraicore_kref_net_mamoe_mirai_utils_DeserializationFailure thiz);
                miraicore_kref_kotlin_Exception (*createException)(miraicore_kref_net_mamoe_mirai_utils_DeserializationFailure thiz);
              } DeserializationFailure;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector (*ExceptionCollector)();
                miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector (*ExceptionCollector_)(miraicore_kref_kotlin_Throwable initial);
                miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector (*ExceptionCollector__)(miraicore_kref_kotlin_Array initials);
                void (*addSuppressed)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz, miraicore_kref_kotlin_Throwable receiver, miraicore_kref_kotlin_Throwable e);
                miraicore_kref_kotlin_sequences_Sequence (*asSequence)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz);
                void (*beforeCollect)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz, miraicore_kref_kotlin_Throwable throwable);
                miraicore_KBoolean (*collect)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz, miraicore_kref_kotlin_Throwable e);
                miraicore_KBoolean (*collectException)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz, miraicore_kref_kotlin_Throwable e);
                miraicore_kref_kotlin_Throwable (*collectGet)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz, miraicore_kref_kotlin_Throwable e);
                void (*collectThrow)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz, miraicore_kref_kotlin_Throwable exception);
                void (*dispose)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz);
                miraicore_kref_kotlin_Throwable (*getLast)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz);
                void (*throwLast)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector_Companion (*_instance)();
                  miraicore_kref_kotlin_Throwable (*compressExceptions)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector_Companion thiz, miraicore_kref_kotlin_Array exceptions);
                  miraicore_kref_kotlin_Throwable (*compressExceptions_)(miraicore_kref_net_mamoe_mirai_utils_ExceptionCollector_Companion thiz, miraicore_kref_kotlin_Throwable exception, miraicore_kref_kotlin_Array exceptions);
                } Companion;
              } ExceptionCollector;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_FailureResponse (*FailureResponse)(miraicore_KInt errorCode, const char* errorMessage);
                miraicore_KInt (*get_errorCode)(miraicore_kref_net_mamoe_mirai_utils_FailureResponse thiz);
                const char* (*get_errorMessage)(miraicore_kref_net_mamoe_mirai_utils_FailureResponse thiz);
                miraicore_kref_kotlin_Exception (*createException)(miraicore_kref_net_mamoe_mirai_utils_FailureResponse thiz);
              } FailureResponse;
              struct {
                miraicore_KType* (*_type)(void);
              } JsonStruct;
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*get_absolutePath)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_KBoolean (*get_isDirectory)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_KBoolean (*get_isFile)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_KLong (*get_length)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                const char* (*get_name)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*get_parent)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                const char* (*get_path)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_KBoolean (*createNewFile)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_KBoolean (*delete_)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_KBoolean (*exists)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_kref_io_ktor_utils_io_core_Input (*input)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_KBoolean (*mkdir)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_KBoolean (*mkdirs)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_kref_io_ktor_utils_io_core_Output (*output)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz);
                miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*resolve)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz, const char* path);
                miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*resolve_)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile thiz, miraicore_kref_net_mamoe_mirai_utils_MiraiFile file);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_MiraiFile_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*create)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile_Companion thiz, const char* path);
                  miraicore_kref_net_mamoe_mirai_utils_MiraiFile (*getWorkingDir)(miraicore_kref_net_mamoe_mirai_utils_MiraiFile_Companion thiz);
                } Companion;
              } MiraiFile;
              struct {
                miraicore_KType* (*_type)(void);
                void (*setAll)(miraicore_kref_net_mamoe_mirai_utils_MutableTypeSafeMap thiz, miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap other);
              } MutableTypeSafeMap;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock (*ResourceAccessLock)();
                miraicore_KInt (*currentStatus)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                miraicore_KBoolean (*lockIfNotUsing)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                void (*release)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                void (*setDisposed)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                void (*setInitialized)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                void (*setLocked)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                void (*setUninitialized)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                const char* (*toString)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                miraicore_KBoolean (*tryDispose)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                miraicore_KBoolean (*tryInitialize)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                miraicore_KBoolean (*tryUse)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                void (*unlock)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock_Companion (*_instance)();
                  miraicore_KInt (*get_INITIALIZED)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock_Companion thiz);
                  miraicore_KInt (*get_LOCKED)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock_Companion thiz);
                  miraicore_KInt (*get_UNINITIALIZED)(miraicore_kref_net_mamoe_mirai_utils_ResourceAccessLock_Companion thiz);
                } Companion;
              } ResourceAccessLock;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_kref_net_mamoe_mirai_utils_Services (*_instance)();
                miraicore_kref_kotlin_Any (*firstImplementationOrNull)(miraicore_kref_net_mamoe_mirai_utils_Services thiz, const char* baseClass);
                miraicore_kref_kotlin_collections_List (*implementations)(miraicore_kref_net_mamoe_mirai_utils_Services thiz, const char* baseClass);
                const char* (*print)(miraicore_kref_net_mamoe_mirai_utils_Services thiz);
                void (*register_)(miraicore_kref_net_mamoe_mirai_utils_Services thiz, const char* baseClass, const char* implementationClass, miraicore_kref_kotlin_Function0 implementation);
              } Services;
              struct {
                miraicore_KType* (*_type)(void);
                const char* (*toString)(miraicore_kref_net_mamoe_mirai_utils_Symbol thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_Symbol_Companion (*_instance)();
                  miraicore_kref_kotlin_Any (*invoke)(miraicore_kref_net_mamoe_mirai_utils_Symbol_Companion thiz, const char* name);
                } Companion;
              } Symbol;
              struct {
                miraicore_KType* (*_type)(void);
                miraicore_KInt (*get_size)(miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap thiz);
                miraicore_kref_kotlin_collections_Map (*toMap)(miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap thiz);
                miraicore_kref_kotlin_collections_Map (*toMapBoxed)(miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap thiz);
                struct {
                  miraicore_KType* (*_type)(void);
                  miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap_Companion (*_instance)();
                  miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap (*get_EMPTY)(miraicore_kref_net_mamoe_mirai_utils_TypeSafeMap_Companion thiz);
                } Companion;
              } TypeSafeMap;
            } utils;
          } mirai;
        } mamoe;
      } net;
    } root;
  } kotlin;
} miraicore_ExportedSymbols;
extern miraicore_ExportedSymbols* miraicore_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_MIRAICORE_H */
