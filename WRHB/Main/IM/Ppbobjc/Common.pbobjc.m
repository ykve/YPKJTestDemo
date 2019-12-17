// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <protobuf/GPBProtocolBuffers_RuntimeSupport.h>
#else
 #import "GPBProtocolBuffers_RuntimeSupport.h"
#endif

#import <stdatomic.h>

#import "Common.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - CommonRoot

@implementation CommonRoot

// No extensions in the file and no imports, so no need to generate
// +extensionRegistry.

@end

#pragma mark - CommonRoot_FileDescriptor

static GPBFileDescriptor *CommonRoot_FileDescriptor(void) {
  // This is called by +initialize so there is no need to worry
  // about thread safety of the singleton.
  static GPBFileDescriptor *descriptor = NULL;
  if (!descriptor) {
    GPB_DEBUG_CHECK_RUNTIME_VERSIONS();
    descriptor = [[GPBFileDescriptor alloc] initWithPackage:@"fpb"
                                                     syntax:GPBFileSyntaxProto3];
  }
  return descriptor;
}

#pragma mark - Enum Cmd

GPBEnumDescriptor *Cmd_EnumDescriptor(void) {
  static _Atomic(GPBEnumDescriptor*) descriptor = nil;
  if (!descriptor) {
    static const char *valueNames =
        "CmsgHello\000SmsgHello\000CmsgLogin\000SmsgLogin\000"
        "SmsgKickOut\000CmsgSendMessage\000SmsgSendMess"
        "age\000CmsgStateUser\000SmsgStateUser\000CmsgSetU"
        "serState\000SmsgSetUserState\000CmsgRecvMessag"
        "e\000SmsgRecvMessage\000CmsgDelMessage\000SmsgDel"
        "Message\000CmsgInputMessage\000SmsgInputMessag"
        "e\000CmsgMessageList\000SmsgMessageList\000CmsgUn"
        "ReadSessionList\000SmsgUnReadSessionList\000Cm"
        "sgMessageLastList\000SmsgMessageLastList\000Cm"
        "sgReadMessage\000SmsgReadMessage\000CmsgReadMe"
        "ssageAck\000CmsgRealTimeDisplay\000SmsgRealTim"
        "eDisplay\000CmsgClientIpInfo\000SmsgClientIpIn"
        "fo\000CmsgLeaveKefuSession\000CmsgKefuQueueInf"
        "o\000SmsgKefuQueueInfo\000CmsgNoSpeakKefuSessi"
        "on\000SmsgNoSpeakKefuSession\000CmsgDisconnect"
        "KefuSession\000SmsgDisconnectKefuSession\000Sm"
        "sgMirrorKefuSendMessage\000SmsgUserQueueInf"
        "o\000CmsgDelMessageAck\000SmsgNotifyStateChang"
        "e\000SmsgNotifyNewMessage\000SmsgNotifySession"
        "Add\000SmsgNotifySessionDel\000SmsgNotifySessi"
        "onUpdate\000SmsgNotifySessionMemberAdd\000Smsg"
        "NotifySessionMemberDel\000SmsgNotifyAddFrie"
        "nds\000SmsgNotifyAnnouncement\000SmsgNotifyUse"
        "rInfoUpdate\000SmsgNotifySessionMemberInfoU"
        "pdate\000SmsgNotifyPush\000CmsgNotifyAck\000";
    static const int32_t values[] = {
        Cmd_CmsgHello,
        Cmd_SmsgHello,
        Cmd_CmsgLogin,
        Cmd_SmsgLogin,
        Cmd_SmsgKickOut,
        Cmd_CmsgSendMessage,
        Cmd_SmsgSendMessage,
        Cmd_CmsgStateUser,
        Cmd_SmsgStateUser,
        Cmd_CmsgSetUserState,
        Cmd_SmsgSetUserState,
        Cmd_CmsgRecvMessage,
        Cmd_SmsgRecvMessage,
        Cmd_CmsgDelMessage,
        Cmd_SmsgDelMessage,
        Cmd_CmsgInputMessage,
        Cmd_SmsgInputMessage,
        Cmd_CmsgMessageList,
        Cmd_SmsgMessageList,
        Cmd_CmsgUnReadSessionList,
        Cmd_SmsgUnReadSessionList,
        Cmd_CmsgMessageLastList,
        Cmd_SmsgMessageLastList,
        Cmd_CmsgReadMessage,
        Cmd_SmsgReadMessage,
        Cmd_CmsgReadMessageAck,
        Cmd_CmsgRealTimeDisplay,
        Cmd_SmsgRealTimeDisplay,
        Cmd_CmsgClientIpInfo,
        Cmd_SmsgClientIpInfo,
        Cmd_CmsgLeaveKefuSession,
        Cmd_CmsgKefuQueueInfo,
        Cmd_SmsgKefuQueueInfo,
        Cmd_CmsgNoSpeakKefuSession,
        Cmd_SmsgNoSpeakKefuSession,
        Cmd_CmsgDisconnectKefuSession,
        Cmd_SmsgDisconnectKefuSession,
        Cmd_SmsgMirrorKefuSendMessage,
        Cmd_SmsgUserQueueInfo,
        Cmd_CmsgDelMessageAck,
        Cmd_SmsgNotifyStateChange,
        Cmd_SmsgNotifyNewMessage,
        Cmd_SmsgNotifySessionAdd,
        Cmd_SmsgNotifySessionDel,
        Cmd_SmsgNotifySessionUpdate,
        Cmd_SmsgNotifySessionMemberAdd,
        Cmd_SmsgNotifySessionMemberDel,
        Cmd_SmsgNotifyAddFriends,
        Cmd_SmsgNotifyAnnouncement,
        Cmd_SmsgNotifyUserInfoUpdate,
        Cmd_SmsgNotifySessionMemberInfoUpdate,
        Cmd_SmsgNotifyPush,
        Cmd_CmsgNotifyAck,
    };
    static const char *extraTextFormatInfo = "5\000b\007\000\001b\007\000\002b\007\000\003b\007\000\004b\t\000\005b\r\000\006b\r\000\007b\013\000\010b\013\000\tb\016\000\nb\016\000\013b\r\000\014b\r\000\rb\014\000\016b\014\000\017b\016\000\020b\016\000\021b\r\000\022b\r\000\023b\023\000\024b\023\000\025b\021\000\026b\021\000\027b\r\000\030b\r\000\031b\020\000\032b\021\000\033b\021\000\034b\016\000\035b\016\000\036b\022\000\037b\017\000 b\017\000!b\024\000\"b\024\000#b\027\000$b\027\000%b\027\000&b\017\000\'b\017\000(b\023\000)b\022\000*b\022\000+b\022\000,b\025\000-b\030\000.b\030\000/b\022\0000b\024\0001b\026\0002b\037\0003b\014\0004b\013\000";
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(Cmd)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:Cmd_IsValidValue
                              extraTextFormatInfo:extraTextFormatInfo];
    GPBEnumDescriptor *expected = nil;
    if (!atomic_compare_exchange_strong(&descriptor, &expected, worker)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL Cmd_IsValidValue(int32_t value__) {
  switch (value__) {
    case Cmd_CmsgHello:
    case Cmd_SmsgHello:
    case Cmd_CmsgLogin:
    case Cmd_SmsgLogin:
    case Cmd_SmsgKickOut:
    case Cmd_CmsgSendMessage:
    case Cmd_SmsgSendMessage:
    case Cmd_CmsgStateUser:
    case Cmd_SmsgStateUser:
    case Cmd_CmsgSetUserState:
    case Cmd_SmsgSetUserState:
    case Cmd_CmsgRecvMessage:
    case Cmd_SmsgRecvMessage:
    case Cmd_CmsgDelMessage:
    case Cmd_SmsgDelMessage:
    case Cmd_CmsgInputMessage:
    case Cmd_SmsgInputMessage:
    case Cmd_CmsgMessageList:
    case Cmd_SmsgMessageList:
    case Cmd_CmsgUnReadSessionList:
    case Cmd_SmsgUnReadSessionList:
    case Cmd_CmsgMessageLastList:
    case Cmd_SmsgMessageLastList:
    case Cmd_CmsgReadMessage:
    case Cmd_SmsgReadMessage:
    case Cmd_CmsgReadMessageAck:
    case Cmd_CmsgRealTimeDisplay:
    case Cmd_SmsgRealTimeDisplay:
    case Cmd_CmsgClientIpInfo:
    case Cmd_SmsgClientIpInfo:
    case Cmd_CmsgLeaveKefuSession:
    case Cmd_CmsgKefuQueueInfo:
    case Cmd_SmsgKefuQueueInfo:
    case Cmd_CmsgNoSpeakKefuSession:
    case Cmd_SmsgNoSpeakKefuSession:
    case Cmd_CmsgDisconnectKefuSession:
    case Cmd_SmsgDisconnectKefuSession:
    case Cmd_SmsgMirrorKefuSendMessage:
    case Cmd_SmsgUserQueueInfo:
    case Cmd_CmsgDelMessageAck:
    case Cmd_SmsgNotifyStateChange:
    case Cmd_SmsgNotifyNewMessage:
    case Cmd_SmsgNotifySessionAdd:
    case Cmd_SmsgNotifySessionDel:
    case Cmd_SmsgNotifySessionUpdate:
    case Cmd_SmsgNotifySessionMemberAdd:
    case Cmd_SmsgNotifySessionMemberDel:
    case Cmd_SmsgNotifyAddFriends:
    case Cmd_SmsgNotifyAnnouncement:
    case Cmd_SmsgNotifyUserInfoUpdate:
    case Cmd_SmsgNotifySessionMemberInfoUpdate:
    case Cmd_SmsgNotifyPush:
    case Cmd_CmsgNotifyAck:
      return YES;
    default:
      return NO;
  }
}

#pragma mark - MyPacket

@implementation MyPacket

@dynamic cmd;
@dynamic uid;
@dynamic reqId;
@dynamic extend;

typedef struct MyPacket__storage_ {
  uint32_t _has_storage_[1];
  Cmd cmd;
  NSString *reqId;
  NSData *extend;
  uint64_t uid;
} MyPacket__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "cmd",
        .dataTypeSpecific.enumDescFunc = Cmd_EnumDescriptor,
        .number = MyPacket_FieldNumber_Cmd,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(MyPacket__storage_, cmd),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "uid",
        .dataTypeSpecific.className = NULL,
        .number = MyPacket_FieldNumber_Uid,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(MyPacket__storage_, uid),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "reqId",
        .dataTypeSpecific.className = NULL,
        .number = MyPacket_FieldNumber_ReqId,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(MyPacket__storage_, reqId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "extend",
        .dataTypeSpecific.className = NULL,
        .number = MyPacket_FieldNumber_Extend,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(MyPacket__storage_, extend),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeBytes,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[MyPacket class]
                                     rootClass:[CommonRoot class]
                                          file:CommonRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(MyPacket__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

int32_t MyPacket_Cmd_RawValue(MyPacket *message) {
  GPBDescriptor *descriptor = [MyPacket descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:MyPacket_FieldNumber_Cmd];
  return GPBGetMessageInt32Field(message, field);
}

void SetMyPacket_Cmd_RawValue(MyPacket *message, int32_t value) {
  GPBDescriptor *descriptor = [MyPacket descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:MyPacket_FieldNumber_Cmd];
  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);
}

#pragma mark - CHello

@implementation CHello

@dynamic clientTime;

typedef struct CHello__storage_ {
  uint32_t _has_storage_[1];
  uint32_t clientTime;
} CHello__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "clientTime",
        .dataTypeSpecific.className = NULL,
        .number = CHello_FieldNumber_ClientTime,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(CHello__storage_, clientTime),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[CHello class]
                                     rootClass:[CommonRoot class]
                                          file:CommonRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(CHello__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - SHello

@implementation SHello

@dynamic interval;
@dynamic serverTime;

typedef struct SHello__storage_ {
  uint32_t _has_storage_[1];
  uint32_t interval;
  uint32_t serverTime;
} SHello__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "interval",
        .dataTypeSpecific.className = NULL,
        .number = SHello_FieldNumber_Interval,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SHello__storage_, interval),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt32,
      },
      {
        .name = "serverTime",
        .dataTypeSpecific.className = NULL,
        .number = SHello_FieldNumber_ServerTime,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(SHello__storage_, serverTime),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SHello class]
                                     rootClass:[CommonRoot class]
                                          file:CommonRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SHello__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end


#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)