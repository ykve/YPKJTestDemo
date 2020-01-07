// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

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
@class ReadInfo;
@class RecvMsg;
@class Session;
GPB_ENUM_FWD_DECLARE(Error);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum SegmentType

typedef GPB_ENUM(SegmentType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SegmentType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /** 字体信息 */
  SegmentType_SegmentTypeFont = 0,

  /** 普通文本消息 */
  SegmentType_SegmentTypeText = 1,

  /** html内容 */
  SegmentType_SegmentTypeHtml = 2,

  /** 表情 */
  SegmentType_SegmentTypeEmoji = 3,

  /** 链接 */
  SegmentType_SegmentTypeLink = 4,

  /** 文件 */
  SegmentType_SegmentTypeFile = 5,

  /** 图片 */
  SegmentType_SegmentTypeImage = 6,

  /** 语音 */
  SegmentType_SegmentTypeAudio = 7,

  /** 通知类 */
  SegmentType_SegmentTypeNofitiction = 8,

  /** 发红包 */
  SegmentType_SegmentTypeSendRedpacket = 9,

  /** 广播结算红包 */
  SegmentType_SegmentTypeSettleRedpacket = 10,

  /** 单人结算红包 */
  SegmentType_SegmentTypeSingleSettleRedpacket = 11,

  /** 红包状态 */
  SegmentType_SegmentTypeRedpacketStatus = 12,

  /** 小视频 */
  SegmentType_SegmentTypeVideo = 13,

  /** 快捷回复 */
  SegmentType_SegmentTypeFastReply = 14,

  /** 自动回复 */
  SegmentType_SegmentTypeAutoReply = 15,

  /** 发转账 */
  SegmentType_SegmentTypeSendTransfer = 16,
};

GPBEnumDescriptor *SegmentType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SegmentType_IsValidValue(int32_t value);

#pragma mark - Enum SessionType

/**
 * 会话类型
 * 1, 3, 4, 7, 8: 成员永久在里面
 * 2, 5, 6: 退出房间就移除成员
 **/
typedef GPB_ENUM(SessionType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SessionType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  SessionType_None = 0,

  /** 单人会话 */
  SessionType_Single = 1,

  /** 多人游戏 */
  SessionType_MultiGame = 2,

  /** 多人普通聊天 */
  SessionType_MultiGeneral = 3,

  /** 俱乐部大厅 */
  SessionType_ClubHall = 4,

  /** 大联盟 */
  SessionType_BigAlliance = 5,

  /** 系统房间 */
  SessionType_SystemRoom = 6,

  /** 客服A */
  SessionType_Kefu = 7,

  /** 盈商客服 */
  SessionType_BusinessKefu = 8,
};

GPBEnumDescriptor *SessionType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SessionType_IsValidValue(int32_t value);

#pragma mark - Enum PlayType

/** 玩法类型 */
typedef GPB_ENUM(PlayType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  PlayType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  PlayType_PtNone = 0,

  /** 单雷 */
  PlayType_PtSingleMime = 1,

  /** 禁抢场 */
  PlayType_PtMultiMime = 2,

  /** 牛牛 不翻倍 */
  PlayType_PtNnNoTimes = 3,

  /** 牛牛翻倍 */
  PlayType_PtNnTimes = 4,

  /** 普通群红包 */
  PlayType_PtGroupNormal = 5,

  /** 私人红包 */
  PlayType_PtPersonal = 6,

  /** 红包接力系 */
  PlayType_PtRelay = 7,

  /** 大联盟 */
  PlayType_PtAlliance = 8,

  /** 红包福利 */
  PlayType_PtWelfare = 9,

  /** lucky */
  PlayType_PtLucky = 10,
};

GPBEnumDescriptor *PlayType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL PlayType_IsValidValue(int32_t value);

#pragma mark - MsgRoot

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
@interface MsgRoot : GPBRootObject
@end

#pragma mark - FontSegment

typedef GPB_ENUM(FontSegment_FieldNumber) {
  FontSegment_FieldNumber_FontName = 1,
  FontSegment_FieldNumber_FontSize = 2,
  FontSegment_FieldNumber_FontColor = 3,
  FontSegment_FieldNumber_FontStyle = 4,
};

/**
 * 带字体的文本段
 **/
@interface FontSegment : GPBMessage

/** 字体名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *fontName;

/** 字体大小 */
@property(nonatomic, readwrite) int64_t fontSize;

/** 字体颜色 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *fontColor;

/** 字段样式 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *fontStyle;

@end

#pragma mark - TextSegment

typedef GPB_ENUM(TextSegment_FieldNumber) {
  TextSegment_FieldNumber_Text = 1,
};

/**
 * 普通的文本段
 **/
@interface TextSegment : GPBMessage

/** 文本内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *text;

@end

#pragma mark - HtmlSegment

typedef GPB_ENUM(HtmlSegment_FieldNumber) {
  HtmlSegment_FieldNumber_Html = 1,
};

/**
 * Html段
 **/
@interface HtmlSegment : GPBMessage

/** HTML内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *html;

@end

#pragma mark - EmojiSegment

typedef GPB_ENUM(EmojiSegment_FieldNumber) {
  EmojiSegment_FieldNumber_Emoji = 1,
};

/**
 * 表情段
 **/
@interface EmojiSegment : GPBMessage

/** 表情 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *emoji;

@end

#pragma mark - LinkSegment

typedef GPB_ENUM(LinkSegment_FieldNumber) {
  LinkSegment_FieldNumber_LinkType = 1,
  LinkSegment_FieldNumber_Title = 2,
  LinkSegment_FieldNumber_URL = 3,
};

/**
 * 连接段
 **/
@interface LinkSegment : GPBMessage

/** 连接类型 */
@property(nonatomic, readwrite) int32_t linkType;

/** 标题 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/** URL */
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

@end

#pragma mark - FileSegment

typedef GPB_ENUM(FileSegment_FieldNumber) {
  FileSegment_FieldNumber_Name = 1,
  FileSegment_FieldNumber_Size = 2,
  FileSegment_FieldNumber_Id_p = 3,
  FileSegment_FieldNumber_URL = 4,
};

/**
 * 文件段
 **/
@interface FileSegment : GPBMessage

/** 文件名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/** 文件大小 */
@property(nonatomic, readwrite) int32_t size;

/** 文件ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** URL */
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

@end

#pragma mark - ImageSegment

typedef GPB_ENUM(ImageSegment_FieldNumber) {
  ImageSegment_FieldNumber_Name = 1,
  ImageSegment_FieldNumber_Size = 2,
  ImageSegment_FieldNumber_Id_p = 3,
  ImageSegment_FieldNumber_Height = 4,
  ImageSegment_FieldNumber_Width = 5,
  ImageSegment_FieldNumber_URL = 6,
  ImageSegment_FieldNumber_Thumbnail = 7,
  ImageSegment_FieldNumber_MimeType = 8,
};

/**
 * 图片段
 **/
@interface ImageSegment : GPBMessage

/** 图片名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/** 图片大小 */
@property(nonatomic, readwrite) int32_t size;

/** 图片ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 高度 */
@property(nonatomic, readwrite) int32_t height;

/** 宽度 */
@property(nonatomic, readwrite) int32_t width;

/** URL */
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

/** 缩略图 */
@property(nonatomic, readwrite, copy, null_resettable) NSData *thumbnail;

/** 图片类型 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *mimeType;

@end

#pragma mark - AudioSegment

typedef GPB_ENUM(AudioSegment_FieldNumber) {
  AudioSegment_FieldNumber_Name = 1,
  AudioSegment_FieldNumber_Size = 2,
  AudioSegment_FieldNumber_Id_p = 3,
  AudioSegment_FieldNumber_Time = 4,
  AudioSegment_FieldNumber_URL = 5,
};

/**
 * 语音段
 **/
@interface AudioSegment : GPBMessage

/** 语音名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/** 语音大小 */
@property(nonatomic, readwrite) int32_t size;

/** 语音ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 语音时间 */
@property(nonatomic, readwrite) int32_t time;

/** URL */
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

@end

#pragma mark - VideoSegment

typedef GPB_ENUM(VideoSegment_FieldNumber) {
  VideoSegment_FieldNumber_Name = 1,
  VideoSegment_FieldNumber_Size = 2,
  VideoSegment_FieldNumber_Id_p = 3,
  VideoSegment_FieldNumber_Time = 4,
  VideoSegment_FieldNumber_Thumbnail = 5,
  VideoSegment_FieldNumber_URL = 6,
};

/**
 * 视频段
 **/
@interface VideoSegment : GPBMessage

/** 视频名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

/** 视频大小 */
@property(nonatomic, readwrite) int32_t size;

/** 视频ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 视频时间 */
@property(nonatomic, readwrite) int32_t time;

/** 缩略图 */
@property(nonatomic, readwrite, copy, null_resettable) NSData *thumbnail;

/** URL */
@property(nonatomic, readwrite, copy, null_resettable) NSString *URL;

@end

#pragma mark - SendRedPacketSegment

typedef GPB_ENUM(SendRedPacketSegment_FieldNumber) {
  SendRedPacketSegment_FieldNumber_Id_p = 1,
  SendRedPacketSegment_FieldNumber_RedpacketType = 2,
  SendRedPacketSegment_FieldNumber_Sender = 3,
  SendRedPacketSegment_FieldNumber_Create = 4,
  SendRedPacketSegment_FieldNumber_Expire = 5,
  SendRedPacketSegment_FieldNumber_Mime = 6,
  SendRedPacketSegment_FieldNumber_Title = 7,
  SendRedPacketSegment_FieldNumber_SendTime = 8,
  SendRedPacketSegment_FieldNumber_Total = 9,
  SendRedPacketSegment_FieldNumber_Remain = 10,
};

/**
 * 发红包
 **/
@interface SendRedPacketSegment : GPBMessage

/** 红包ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 红包类型, 1: 单雷, 2: 禁抢, 3: 牛牛不翻倍, 4: 牛牛翻倍, 5: 普通群红包, 7: 红包接力, 9: 福利群红包, 10: luckys红包 */
@property(nonatomic, readwrite) int32_t redpacketType;

/** 发送者 */
@property(nonatomic, readwrite) uint64_t sender;

/** 创建时间 */
@property(nonatomic, readwrite) int64_t create;

/** 过期时间 */
@property(nonatomic, readwrite) int64_t expire;

/** 雷号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *mime;

/** 标题 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/** 发送时间 */
@property(nonatomic, readwrite) int64_t sendTime;

/** 总红包数 */
@property(nonatomic, readwrite) int32_t total;

/** 红包剩余数 */
@property(nonatomic, readwrite) int32_t remain;

@end

#pragma mark - SettleRedPacketSegment

typedef GPB_ENUM(SettleRedPacketSegment_FieldNumber) {
  SettleRedPacketSegment_FieldNumber_Id_p = 1,
  SettleRedPacketSegment_FieldNumber_Type = 2,
  SettleRedPacketSegment_FieldNumber_Data_p = 3,
  SettleRedPacketSegment_FieldNumber_Receiver = 4,
};

/**
 * 结算红包
 **/
@interface SettleRedPacketSegment : GPBMessage

/** 红包ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 红包类型, 1: 禁抢, 2: 牛牛 */
@property(nonatomic, readwrite) int32_t type;

/** 保存Json，由客户端和红包服务定义 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *data_p;

/** 接收者 */
@property(nonatomic, readwrite) uint64_t receiver;

@end

#pragma mark - SingleSettleRedPacketSegment

typedef GPB_ENUM(SingleSettleRedPacketSegment_FieldNumber) {
  SingleSettleRedPacketSegment_FieldNumber_Id_p = 1,
  SingleSettleRedPacketSegment_FieldNumber_SendTime = 2,
  SingleSettleRedPacketSegment_FieldNumber_SenderName = 3,
  SingleSettleRedPacketSegment_FieldNumber_GrabNum = 4,
  SingleSettleRedPacketSegment_FieldNumber_LoseNum = 5,
  SingleSettleRedPacketSegment_FieldNumber_GotMime = 6,
  SingleSettleRedPacketSegment_FieldNumber_Receiver = 7,
};

/**
 * 单人结算红包
 **/
@interface SingleSettleRedPacketSegment : GPBMessage

/** 红包ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 发送时间 */
@property(nonatomic, readwrite) int64_t sendTime;

/** 发包者 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *senderName;

/** 抢包金额 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *grabNum;

/** 赔付金额 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *loseNum;

/** 是否中雷 */
@property(nonatomic, readwrite) BOOL gotMime;

/** 接收者 */
@property(nonatomic, readwrite) uint64_t receiver;

@end

#pragma mark - RedPacketStatusSegment

typedef GPB_ENUM(RedPacketStatusSegment_FieldNumber) {
  RedPacketStatusSegment_FieldNumber_Id_p = 1,
  RedPacketStatusSegment_FieldNumber_Total = 2,
  RedPacketStatusSegment_FieldNumber_Remain = 3,
};

/**
 * 结算状态(收到此协议,可以不用发确认协议)
 **/
@interface RedPacketStatusSegment : GPBMessage

/** 红包ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 总红包数 */
@property(nonatomic, readwrite) int32_t total;

/** 红包剩余数 */
@property(nonatomic, readwrite) int32_t remain;

@end

#pragma mark - FastReplySegment

typedef GPB_ENUM(FastReplySegment_FieldNumber) {
  FastReplySegment_FieldNumber_Id_p = 1,
  FastReplySegment_FieldNumber_Text = 2,
};

/**
 * 快捷回复(盈商客服使用)
 **/
@interface FastReplySegment : GPBMessage

/** 快捷回复ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 快捷回复内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *text;

@end

#pragma mark - AutoReplySegment

typedef GPB_ENUM(AutoReplySegment_FieldNumber) {
  AutoReplySegment_FieldNumber_Id_p = 1,
  AutoReplySegment_FieldNumber_Text = 2,
};

/**
 * 自动回复(系统客服使用)
 **/
@interface AutoReplySegment : GPBMessage

/** 自动回复ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 自动回复内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *text;

@end

#pragma mark - SendTransferSegment

typedef GPB_ENUM(SendTransferSegment_FieldNumber) {
  SendTransferSegment_FieldNumber_Id_p = 1,
  SendTransferSegment_FieldNumber_Sender = 3,
  SendTransferSegment_FieldNumber_Create = 4,
  SendTransferSegment_FieldNumber_Expire = 5,
  SendTransferSegment_FieldNumber_Title = 7,
  SendTransferSegment_FieldNumber_SendTime = 8,
  SendTransferSegment_FieldNumber_Total = 9,
};

/**
 * 发转账
 **/
@interface SendTransferSegment : GPBMessage

/** 转账ID */
@property(nonatomic, readwrite, copy, null_resettable) NSString *id_p;

/** 发送者 */
@property(nonatomic, readwrite) uint64_t sender;

/** 创建时间 */
@property(nonatomic, readwrite) int64_t create;

/** 过期时间 */
@property(nonatomic, readwrite) int64_t expire;

/** 标题 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/** 发送时间 */
@property(nonatomic, readwrite) int64_t sendTime;

/** 转账金额 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *total;

@end

#pragma mark - Content

typedef GPB_ENUM(Content_FieldNumber) {
  Content_FieldNumber_SegmentType = 1,
  Content_FieldNumber_Data_p = 2,
};

/**
 * 内容段
 **/
@interface Content : GPBMessage

/** 段类型 */
@property(nonatomic, readwrite) SegmentType segmentType;

/** 段内容 */
@property(nonatomic, readwrite, copy, null_resettable) NSData *data_p;

@end

/**
 * Fetches the raw value of a @c Content's @c segmentType property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t Content_SegmentType_RawValue(Content *message);
/**
 * Sets the raw value of an @c Content's @c segmentType property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetContent_SegmentType_RawValue(Content *message, int32_t value);

#pragma mark - CSendMessage

typedef GPB_ENUM(CSendMessage_FieldNumber) {
  CSendMessage_FieldNumber_SessionId = 1,
  CSendMessage_FieldNumber_Sender = 2,
  CSendMessage_FieldNumber_SendTime = 3,
  CSendMessage_FieldNumber_Content = 4,
};

/**
 * 发送请求
 **/
@interface CSendMessage : GPBMessage

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

@end

#pragma mark - SSendMessage

typedef GPB_ENUM(SSendMessage_FieldNumber) {
  SSendMessage_FieldNumber_Result = 1,
  SSendMessage_FieldNumber_MaxMsgId = 2,
  SSendMessage_FieldNumber_SessionId = 3,
  SSendMessage_FieldNumber_SendTime = 4,
};

/**
 * 发送请求确认
 **/
@interface SSendMessage : GPBMessage

/** 错误码 */
@property(nonatomic, readwrite) enum Error result;

/** 消息最大MsgId */
@property(nonatomic, readwrite) uint64_t maxMsgId;

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 发送时间 */
@property(nonatomic, readwrite) int64_t sendTime;

@end

/**
 * Fetches the raw value of a @c SSendMessage's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SSendMessage_Result_RawValue(SSendMessage *message);
/**
 * Sets the raw value of an @c SSendMessage's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSSendMessage_Result_RawValue(SSendMessage *message, int32_t value);

#pragma mark - SNotifyNewMessage

typedef GPB_ENUM(SNotifyNewMessage_FieldNumber) {
  SNotifyNewMessage_FieldNumber_MsgsArray = 1,
};

/**
 * 新消息通知
 **/
@interface SNotifyNewMessage : GPBMessage

/** 消息内容列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Message*> *msgsArray;
/** The number of items in @c msgsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgsArray_Count;

@end

#pragma mark - Message

typedef GPB_ENUM(Message_FieldNumber) {
  Message_FieldNumber_SessionId = 1,
  Message_FieldNumber_SessionType = 2,
  Message_FieldNumber_SessionVer = 3,
  Message_FieldNumber_MsgId = 4,
  Message_FieldNumber_Sender = 5,
  Message_FieldNumber_SendTime = 6,
  Message_FieldNumber_Content = 7,
  Message_FieldNumber_SenderName = 8,
  Message_FieldNumber_SenderAvatar = 9,
};

@interface Message : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 会话类型 */
@property(nonatomic, readwrite) int32_t sessionType;

/** 会话修改版本号 */
@property(nonatomic, readwrite) uint32_t sessionVer;

/** 消息ID */
@property(nonatomic, readwrite) uint64_t msgId;

/** 发送者 */
@property(nonatomic, readwrite) uint64_t sender;

/** 发送时间 */
@property(nonatomic, readwrite) int64_t sendTime;

/** 发送的内容段 */
@property(nonatomic, readwrite, strong, null_resettable) Content *content;
/** Test to see if @c content has been set. */
@property(nonatomic, readwrite) BOOL hasContent;

/** 发送者名称 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *senderName;

/** 发送者头像 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *senderAvatar;

@end

#pragma mark - CMessageList

typedef GPB_ENUM(CMessageList_FieldNumber) {
  CMessageList_FieldNumber_SessionId = 1,
  CMessageList_FieldNumber_From = 2,
  CMessageList_FieldNumber_To = 3,
};

/**
 * 拉取消息
 **/
@interface CMessageList : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 开始msgId */
@property(nonatomic, readwrite) uint64_t from;

/** 结束msgId */
@property(nonatomic, readwrite) uint64_t to;

@end

#pragma mark - SMessageList

typedef GPB_ENUM(SMessageList_FieldNumber) {
  SMessageList_FieldNumber_Result = 1,
  SMessageList_FieldNumber_MsgsArray = 2,
};

@interface SMessageList : GPBMessage

/** 错误码 */
@property(nonatomic, readwrite) enum Error result;

/** 离线消息列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Message*> *msgsArray;
/** The number of items in @c msgsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgsArray_Count;

@end

/**
 * Fetches the raw value of a @c SMessageList's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SMessageList_Result_RawValue(SMessageList *message);
/**
 * Sets the raw value of an @c SMessageList's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSMessageList_Result_RawValue(SMessageList *message, int32_t value);

#pragma mark - CUnReadSessionList

typedef GPB_ENUM(CUnReadSessionList_FieldNumber) {
  CUnReadSessionList_FieldNumber_UserId = 1,
};

/**
 * 获取未读会话列表
 **/
@interface CUnReadSessionList : GPBMessage

/** 用户ID */
@property(nonatomic, readwrite) uint64_t userId;

@end

#pragma mark - SUnReadSessionList

typedef GPB_ENUM(SUnReadSessionList_FieldNumber) {
  SUnReadSessionList_FieldNumber_Result = 1,
  SUnReadSessionList_FieldNumber_SessionsArray = 2,
};

@interface SUnReadSessionList : GPBMessage

/** 错误码 */
@property(nonatomic, readwrite) enum Error result;

/** 会话列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Session*> *sessionsArray;
/** The number of items in @c sessionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger sessionsArray_Count;

@end

/**
 * Fetches the raw value of a @c SUnReadSessionList's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SUnReadSessionList_Result_RawValue(SUnReadSessionList *message);
/**
 * Sets the raw value of an @c SUnReadSessionList's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSUnReadSessionList_Result_RawValue(SUnReadSessionList *message, int32_t value);

#pragma mark - Session

typedef GPB_ENUM(Session_FieldNumber) {
  Session_FieldNumber_SessionId = 1,
  Session_FieldNumber_SessionType = 2,
  Session_FieldNumber_IsGroup = 3,
  Session_FieldNumber_MaxMsgId = 4,
  Session_FieldNumber_ActiveTime = 5,
  Session_FieldNumber_SessionVer = 6,
  Session_FieldNumber_Title = 7,
  Session_FieldNumber_Initiator = 8,
  Session_FieldNumber_LastReadMsgId = 9,
  Session_FieldNumber_FirstMsgId = 10,
  Session_FieldNumber_Visibility = 11,
  Session_FieldNumber_CanSpeak = 12,
  Session_FieldNumber_UnReadNum = 13,
};

@interface Session : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 会话类型 */
@property(nonatomic, readwrite) int32_t sessionType;

/** 是否为群 */
@property(nonatomic, readwrite) BOOL isGroup;

/** 最大的消息ID */
@property(nonatomic, readwrite) uint64_t maxMsgId;

/** 活动时间 */
@property(nonatomic, readwrite) int64_t activeTime;

/** 会话版本号 */
@property(nonatomic, readwrite) uint64_t sessionVer;

/** 标题 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

/** 创建者 */
@property(nonatomic, readwrite) uint64_t initiator;

/** 最后读的MsgId */
@property(nonatomic, readwrite) uint64_t lastReadMsgId;

/** 第一条MsgId */
@property(nonatomic, readwrite) uint64_t firstMsgId;

/** 是否可见 */
@property(nonatomic, readwrite) BOOL visibility;

/** 是否能说话 */
@property(nonatomic, readwrite) BOOL canSpeak;

/** 未读的数量 */
@property(nonatomic, readwrite) int32_t unReadNum;

@end

#pragma mark - CMessageLastList

typedef GPB_ENUM(CMessageLastList_FieldNumber) {
  CMessageLastList_FieldNumber_SessionId = 1,
  CMessageLastList_FieldNumber_From = 2,
  CMessageLastList_FieldNumber_Count = 3,
};

/**
 * 拉取最后n条消息
 **/
@interface CMessageLastList : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 开始msgId, 为0时: 从最后拉消息 */
@property(nonatomic, readwrite) uint64_t from;

/** 总数量 */
@property(nonatomic, readwrite) int32_t count;

@end

#pragma mark - SMessageLastList

typedef GPB_ENUM(SMessageLastList_FieldNumber) {
  SMessageLastList_FieldNumber_Result = 1,
  SMessageLastList_FieldNumber_MsgsArray = 2,
};

@interface SMessageLastList : GPBMessage

/** 错误码 */
@property(nonatomic, readwrite) enum Error result;

/** 消息列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Message*> *msgsArray;
/** The number of items in @c msgsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgsArray_Count;

@end

/**
 * Fetches the raw value of a @c SMessageLastList's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SMessageLastList_Result_RawValue(SMessageLastList *message);
/**
 * Sets the raw value of an @c SMessageLastList's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSMessageLastList_Result_RawValue(SMessageLastList *message, int32_t value);

#pragma mark - RecvMsg

typedef GPB_ENUM(RecvMsg_FieldNumber) {
  RecvMsg_FieldNumber_SessionId = 2,
  RecvMsg_FieldNumber_MsgId = 3,
};

/**
 * 接收消息确认
 **/
@interface RecvMsg : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 消息ID */
@property(nonatomic, readwrite) uint64_t msgId;

@end

#pragma mark - CRecvMessage

typedef GPB_ENUM(CRecvMessage_FieldNumber) {
  CRecvMessage_FieldNumber_UserId = 1,
  CRecvMessage_FieldNumber_RecvMsgArray = 2,
};

@interface CRecvMessage : GPBMessage

/** 用户ID */
@property(nonatomic, readwrite) uint64_t userId;

/** 已读信息列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<RecvMsg*> *recvMsgArray;
/** The number of items in @c recvMsgArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger recvMsgArray_Count;

@end

#pragma mark - SRecvMessage

typedef GPB_ENUM(SRecvMessage_FieldNumber) {
  SRecvMessage_FieldNumber_UserId = 1,
  SRecvMessage_FieldNumber_RecvMsgArray = 2,
};

@interface SRecvMessage : GPBMessage

/** 用户ID */
@property(nonatomic, readwrite) uint64_t userId;

/** 已确认信息列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<RecvMsg*> *recvMsgArray;
/** The number of items in @c recvMsgArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger recvMsgArray_Count;

@end

#pragma mark - CDelMessage

typedef GPB_ENUM(CDelMessage_FieldNumber) {
  CDelMessage_FieldNumber_SessionId = 1,
  CDelMessage_FieldNumber_MsgIdArray = 2,
};

/**
 * 删除消息
 **/
@interface CDelMessage : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 消息ID */
@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Array *msgIdArray;
/** The number of items in @c msgIdArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgIdArray_Count;

@end

#pragma mark - SDelMessage

typedef GPB_ENUM(SDelMessage_FieldNumber) {
  SDelMessage_FieldNumber_Result = 1,
  SDelMessage_FieldNumber_SessionId = 2,
  SDelMessage_FieldNumber_MsgIdArray = 3,
};

@interface SDelMessage : GPBMessage

/** 错误码 */
@property(nonatomic, readwrite) enum Error result;

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 消息ID */
@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Array *msgIdArray;
/** The number of items in @c msgIdArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgIdArray_Count;

@end

/**
 * Fetches the raw value of a @c SDelMessage's @c result property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SDelMessage_Result_RawValue(SDelMessage *message);
/**
 * Sets the raw value of an @c SDelMessage's @c result property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSDelMessage_Result_RawValue(SDelMessage *message, int32_t value);

#pragma mark - CDelMessageAck

typedef GPB_ENUM(CDelMessageAck_FieldNumber) {
  CDelMessageAck_FieldNumber_SessionId = 1,
  CDelMessageAck_FieldNumber_MsgIdArray = 2,
};

@interface CDelMessageAck : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 确认已删除的消息ID列表 */
@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Array *msgIdArray;
/** The number of items in @c msgIdArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgIdArray_Count;

@end

#pragma mark - CInputMessage

typedef GPB_ENUM(CInputMessage_FieldNumber) {
  CInputMessage_FieldNumber_SessionId = 1,
};

/**
 * 输入中
 **/
@interface CInputMessage : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

@end

#pragma mark - SInputMessage

typedef GPB_ENUM(SInputMessage_FieldNumber) {
  SInputMessage_FieldNumber_SessionId = 1,
  SInputMessage_FieldNumber_UserId = 2,
};

@interface SInputMessage : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 用户ID */
@property(nonatomic, readwrite) uint64_t userId;

@end

#pragma mark - ReadInfo

typedef GPB_ENUM(ReadInfo_FieldNumber) {
  ReadInfo_FieldNumber_Sender = 1,
  ReadInfo_FieldNumber_MsgId = 2,
};

/**
 * 已读消息
 **/
@interface ReadInfo : GPBMessage

/** 发送者ID, 读了谁的用户ID */
@property(nonatomic, readwrite) uint64_t sender;

/** 已读的消息ID */
@property(nonatomic, readwrite) uint64_t msgId;

@end

#pragma mark - CReadMessage

typedef GPB_ENUM(CReadMessage_FieldNumber) {
  CReadMessage_FieldNumber_SessionId = 1,
  CReadMessage_FieldNumber_ReadInfoArray = 2,
};

@interface CReadMessage : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 已读信息列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<ReadInfo*> *readInfoArray;
/** The number of items in @c readInfoArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger readInfoArray_Count;

@end

#pragma mark - SReadMessage

typedef GPB_ENUM(SReadMessage_FieldNumber) {
  SReadMessage_FieldNumber_SessionId = 1,
  SReadMessage_FieldNumber_MsgIdsArray = 2,
};

@interface SReadMessage : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 已读的消息ID列表 */
@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Array *msgIdsArray;
/** The number of items in @c msgIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgIdsArray_Count;

@end

#pragma mark - SKefuReadMessage

typedef GPB_ENUM(SKefuReadMessage_FieldNumber) {
  SKefuReadMessage_FieldNumber_SessionId = 1,
  SKefuReadMessage_FieldNumber_MsgIdsArray = 2,
  SKefuReadMessage_FieldNumber_KefuId = 3,
};

/**
 * 客服已读消息
 **/
@interface SKefuReadMessage : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 已读的消息ID列表 */
@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Array *msgIdsArray;
/** The number of items in @c msgIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgIdsArray_Count;

/** 客服ID */
@property(nonatomic, readwrite) uint64_t kefuId;

@end

#pragma mark - CReadMessageAck

typedef GPB_ENUM(CReadMessageAck_FieldNumber) {
  CReadMessageAck_FieldNumber_SessionId = 1,
  CReadMessageAck_FieldNumber_MsgIdsArray = 2,
};

@interface CReadMessageAck : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 已确认的消息ID列表 */
@property(nonatomic, readwrite, strong, null_resettable) GPBUInt64Array *msgIdsArray;
/** The number of items in @c msgIdsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgIdsArray_Count;

@end

#pragma mark - CLeaveKefuSession

typedef GPB_ENUM(CLeaveKefuSession_FieldNumber) {
  CLeaveKefuSession_FieldNumber_SessionId = 1,
};

/**
 * 离开客服会话
 **/
@interface CLeaveKefuSession : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

@end

#pragma mark - CKefuQueueInfo

typedef GPB_ENUM(CKefuQueueInfo_FieldNumber) {
  CKefuQueueInfo_FieldNumber_SessionId = 1,
};

/**
 * 推送排队号
 **/
@interface CKefuQueueInfo : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

@end

#pragma mark - SKefuQueueInfo

typedef GPB_ENUM(SKefuQueueInfo_FieldNumber) {
  SKefuQueueInfo_FieldNumber_SessionId = 1,
  SKefuQueueInfo_FieldNumber_QueueNum = 2,
};

@interface SKefuQueueInfo : GPBMessage

/** 会话ID */
@property(nonatomic, readwrite) uint64_t sessionId;

/** 排队号 */
@property(nonatomic, readwrite) int32_t queueNum;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
