// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kefu.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class Content;
@class Message;
@class QueueInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum SpeakOptType

typedef GPB_ENUM(SpeakOptType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SpeakOptType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /** 禁言 */
  SpeakOptType_SotNoSpeak = 0,

  /** 不禁言 */
  SpeakOptType_SotSpeak = 1,
};

GPBEnumDescriptor *SpeakOptType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SpeakOptType_IsValidValue(int32_t value);

#pragma mark - KefuRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface KefuRoot : GPBRootObject
@end

#pragma mark - SMirrorKefuSendMessage

typedef GPB_ENUM(SMirrorKefuSendMessage_FieldNumber) {
  SMirrorKefuSendMessage_FieldNumber_SessionId = 1,
  SMirrorKefuSendMessage_FieldNumber_Sender = 2,
  SMirrorKefuSendMessage_FieldNumber_SendTime = 3,
  SMirrorKefuSendMessage_FieldNumber_Content = 4,
  SMirrorKefuSendMessage_FieldNumber_MaxMsgId = 5,
};

/**
 * 镜像发送请求(只有总客服收到协议)
 **/
@interface SMirrorKefuSendMessage : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 发送者 */
@property(nonatomic, readwrite) uint64_t sender;

/** 发送时间 */
@property(nonatomic, readwrite) int64_t sendTime;

/** 发送的内容段 */
@property(nonatomic, readwrite, strong, null_resettable) Content *content;
/** Test to see if @c content has been set. */
@property(nonatomic, readwrite) BOOL hasContent;

/** 消息最大MsgId */
@property(nonatomic, readwrite) uint64_t maxMsgId;

@end

#pragma mark - SNotifyKefuNewMessage

typedef GPB_ENUM(SNotifyKefuNewMessage_FieldNumber) {
  SNotifyKefuNewMessage_FieldNumber_MsgsArray = 1,
  SNotifyKefuNewMessage_FieldNumber_KefuId = 2,
};

/**
 * 新消息通知(客服收接新消息)
 **/
@interface SNotifyKefuNewMessage : GPBMessage

/** 消息内容列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Message*> *msgsArray;
/** The number of items in @c msgsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgsArray_Count;

/** 客服ID */
@property(nonatomic, readwrite) uint64_t kefuId;

@end

#pragma mark - CRealTimeDisplay

typedef GPB_ENUM(CRealTimeDisplay_FieldNumber) {
  CRealTimeDisplay_FieldNumber_SessionId = 1,
  CRealTimeDisplay_FieldNumber_Content = 2,
  CRealTimeDisplay_FieldNumber_Sender = 3,
};

/**
 * 实时显示输入内容(只有客服才有权限)
 **/
@interface CRealTimeDisplay : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

/** 发送者 */
@property(nonatomic, readwrite) uint64_t sender;

@end

#pragma mark - SRealTimeDisplay

typedef GPB_ENUM(SRealTimeDisplay_FieldNumber) {
  SRealTimeDisplay_FieldNumber_SessionId = 1,
  SRealTimeDisplay_FieldNumber_Content = 2,
  SRealTimeDisplay_FieldNumber_KefuId = 3,
  SRealTimeDisplay_FieldNumber_Sender = 4,
};

@interface SRealTimeDisplay : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *content;

/** 客服ID */
@property(nonatomic, readwrite) uint64_t kefuId;

/** 发送者 */
@property(nonatomic, readwrite) uint64_t sender;

@end

#pragma mark - CClientIpInfo

typedef GPB_ENUM(CClientIpInfo_FieldNumber) {
  CClientIpInfo_FieldNumber_UserId = 1,
  CClientIpInfo_FieldNumber_SessionId = 2,
};

/**
 * 获取玩家IP信息(只有客服才有权限)
 **/
@interface CClientIpInfo : GPBMessage

/** 用户ID */
@property(nonatomic, readwrite) uint64_t userId;

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

@end

#pragma mark - SClientIpInfo

typedef GPB_ENUM(SClientIpInfo_FieldNumber) {
  SClientIpInfo_FieldNumber_UserId = 1,
  SClientIpInfo_FieldNumber_SessionId = 2,
  SClientIpInfo_FieldNumber_Ip = 3,
  SClientIpInfo_FieldNumber_Address = 4,
  SClientIpInfo_FieldNumber_Lnt = 5,
  SClientIpInfo_FieldNumber_Lat = 6,
  SClientIpInfo_FieldNumber_IsPublicIp = 7,
};

@interface SClientIpInfo : GPBMessage

/** 用户ID */
@property(nonatomic, readwrite) uint64_t userId;

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** IP地址 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *ip;

/** 地址 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *address;

/** 经度 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *lnt;

/** 纬度 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *lat;

/** 是否为公网IP */
@property(nonatomic, readwrite) BOOL isPublicIp;

@end

#pragma mark - CNoSpeakKefuSession

typedef GPB_ENUM(CNoSpeakKefuSession_FieldNumber) {
  CNoSpeakKefuSession_FieldNumber_SessionId = 1,
  CNoSpeakKefuSession_FieldNumber_OptType = 2,
};

/**
 * 禁言客服会话
 **/
@interface CNoSpeakKefuSession : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 操作类型 */
@property(nonatomic, readwrite) SpeakOptType optType;

@end

/**
 * Fetches the raw value of a @c CNoSpeakKefuSession's @c optType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t CNoSpeakKefuSession_OptType_RawValue(CNoSpeakKefuSession *message);
/**
 * Sets the raw value of an @c CNoSpeakKefuSession's @c optType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetCNoSpeakKefuSession_OptType_RawValue(CNoSpeakKefuSession *message, int32_t value);

#pragma mark - SNoSpeakKefuSession

typedef GPB_ENUM(SNoSpeakKefuSession_FieldNumber) {
  SNoSpeakKefuSession_FieldNumber_SessionId = 1,
  SNoSpeakKefuSession_FieldNumber_OptType = 2,
  SNoSpeakKefuSession_FieldNumber_Cd = 3,
};

@interface SNoSpeakKefuSession : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 操作类型 */
@property(nonatomic, readwrite) SpeakOptType optType;

/** 倒计时(秒) */
@property(nonatomic, readwrite) int32_t cd;

@end

/**
 * Fetches the raw value of a @c SNoSpeakKefuSession's @c optType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SNoSpeakKefuSession_OptType_RawValue(SNoSpeakKefuSession *message);
/**
 * Sets the raw value of an @c SNoSpeakKefuSession's @c optType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSNoSpeakKefuSession_OptType_RawValue(SNoSpeakKefuSession *message, int32_t value);

#pragma mark - CDisconnectKefuSession

typedef GPB_ENUM(CDisconnectKefuSession_FieldNumber) {
  CDisconnectKefuSession_FieldNumber_SessionId = 1,
};

/**
 * 断开客服会话
 **/
@interface CDisconnectKefuSession : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

@end

#pragma mark - SDisconnectKefuSession

typedef GPB_ENUM(SDisconnectKefuSession_FieldNumber) {
  SDisconnectKefuSession_FieldNumber_SessionId = 1,
};

@interface SDisconnectKefuSession : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

@end

#pragma mark - QueueInfo

typedef GPB_ENUM(QueueInfo_FieldNumber) {
  QueueInfo_FieldNumber_SessionId = 1,
  QueueInfo_FieldNumber_UserId = 2,
  QueueInfo_FieldNumber_QueueNum = 3,
};

/**
 * 排队信息
 **/
@interface QueueInfo : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 用户ID */
@property(nonatomic, readwrite) uint64_t userId;

/** 排队号, 0: 聊天中, >0: 排队中 */
@property(nonatomic, readwrite) int32_t queueNum;

@end

#pragma mark - SUserQueueInfo

typedef GPB_ENUM(SUserQueueInfo_FieldNumber) {
  SUserQueueInfo_FieldNumber_QueueInfoArray = 1,
};

/**
 * 获取排队信息
 **/
@interface SUserQueueInfo : GPBMessage

/** 会话排队列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<QueueInfo*> *queueInfoArray;
/** The number of items in @c queueInfoArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger queueInfoArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
