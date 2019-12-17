// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kefu.proto

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

#import "Kefu.pbobjc.h"
#import "Msg.pbobjc.h"
// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

#pragma mark - KefuRoot

@implementation KefuRoot

// No extensions in the file and none of the imports (direct or indirect)
// defined extensions, so no need to generate +extensionRegistry.

@end

#pragma mark - KefuRoot_FileDescriptor

static GPBFileDescriptor *KefuRoot_FileDescriptor(void) {
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

#pragma mark - Enum SpeakOptType

GPBEnumDescriptor *SpeakOptType_EnumDescriptor(void) {
  static _Atomic(GPBEnumDescriptor*) descriptor = nil;
  if (!descriptor) {
    static const char *valueNames =
        "SotNoSpeak\000SotSpeak\000";
    static const int32_t values[] = {
        SpeakOptType_SotNoSpeak,
        SpeakOptType_SotSpeak,
    };
    static const char *extraTextFormatInfo = "\002\000\n\000\001\010\000";
    GPBEnumDescriptor *worker =
        [GPBEnumDescriptor allocDescriptorForName:GPBNSStringifySymbol(SpeakOptType)
                                       valueNames:valueNames
                                           values:values
                                            count:(uint32_t)(sizeof(values) / sizeof(int32_t))
                                     enumVerifier:SpeakOptType_IsValidValue
                              extraTextFormatInfo:extraTextFormatInfo];
    GPBEnumDescriptor *expected = nil;
    if (!atomic_compare_exchange_strong(&descriptor, &expected, worker)) {
      [worker release];
    }
  }
  return descriptor;
}

BOOL SpeakOptType_IsValidValue(int32_t value__) {
  switch (value__) {
    case SpeakOptType_SotNoSpeak:
    case SpeakOptType_SotSpeak:
      return YES;
    default:
      return NO;
  }
}

#pragma mark - SMirrorKefuSendMessage

@implementation SMirrorKefuSendMessage

@dynamic sessionId;
@dynamic sender;
@dynamic sendTime;
@dynamic hasContent, content;
@dynamic maxMsgId;

typedef struct SMirrorKefuSendMessage__storage_ {
  uint32_t _has_storage_[1];
  Content *content;
  uint64_t sessionId;
  uint64_t sender;
  int64_t sendTime;
  uint64_t maxMsgId;
} SMirrorKefuSendMessage__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = SMirrorKefuSendMessage_FieldNumber_SessionId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SMirrorKefuSendMessage__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "sender",
        .dataTypeSpecific.className = NULL,
        .number = SMirrorKefuSendMessage_FieldNumber_Sender,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(SMirrorKefuSendMessage__storage_, sender),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "sendTime",
        .dataTypeSpecific.className = NULL,
        .number = SMirrorKefuSendMessage_FieldNumber_SendTime,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(SMirrorKefuSendMessage__storage_, sendTime),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeInt64,
      },
      {
        .name = "content",
        .dataTypeSpecific.className = GPBStringifySymbol(Content),
        .number = SMirrorKefuSendMessage_FieldNumber_Content,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(SMirrorKefuSendMessage__storage_, content),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "maxMsgId",
        .dataTypeSpecific.className = NULL,
        .number = SMirrorKefuSendMessage_FieldNumber_MaxMsgId,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(SMirrorKefuSendMessage__storage_, maxMsgId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SMirrorKefuSendMessage class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SMirrorKefuSendMessage__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - SNotifyKefuNewMessage

@implementation SNotifyKefuNewMessage

@dynamic msgsArray, msgsArray_Count;
@dynamic kefuId;

typedef struct SNotifyKefuNewMessage__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *msgsArray;
  uint64_t kefuId;
} SNotifyKefuNewMessage__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "msgsArray",
        .dataTypeSpecific.className = GPBStringifySymbol(Message),
        .number = SNotifyKefuNewMessage_FieldNumber_MsgsArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(SNotifyKefuNewMessage__storage_, msgsArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
      {
        .name = "kefuId",
        .dataTypeSpecific.className = NULL,
        .number = SNotifyKefuNewMessage_FieldNumber_KefuId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SNotifyKefuNewMessage__storage_, kefuId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SNotifyKefuNewMessage class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SNotifyKefuNewMessage__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - CRealTimeDisplay

@implementation CRealTimeDisplay

@dynamic sessionId;
@dynamic content;
@dynamic sender;

typedef struct CRealTimeDisplay__storage_ {
  uint32_t _has_storage_[1];
  NSString *content;
  uint64_t sessionId;
  uint64_t sender;
} CRealTimeDisplay__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = CRealTimeDisplay_FieldNumber_SessionId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(CRealTimeDisplay__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "content",
        .dataTypeSpecific.className = NULL,
        .number = CRealTimeDisplay_FieldNumber_Content,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(CRealTimeDisplay__storage_, content),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "sender",
        .dataTypeSpecific.className = NULL,
        .number = CRealTimeDisplay_FieldNumber_Sender,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(CRealTimeDisplay__storage_, sender),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[CRealTimeDisplay class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(CRealTimeDisplay__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - SRealTimeDisplay

@implementation SRealTimeDisplay

@dynamic sessionId;
@dynamic content;
@dynamic kefuId;
@dynamic sender;

typedef struct SRealTimeDisplay__storage_ {
  uint32_t _has_storage_[1];
  NSString *content;
  uint64_t sessionId;
  uint64_t kefuId;
  uint64_t sender;
} SRealTimeDisplay__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = SRealTimeDisplay_FieldNumber_SessionId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SRealTimeDisplay__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "content",
        .dataTypeSpecific.className = NULL,
        .number = SRealTimeDisplay_FieldNumber_Content,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(SRealTimeDisplay__storage_, content),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "kefuId",
        .dataTypeSpecific.className = NULL,
        .number = SRealTimeDisplay_FieldNumber_KefuId,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(SRealTimeDisplay__storage_, kefuId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "sender",
        .dataTypeSpecific.className = NULL,
        .number = SRealTimeDisplay_FieldNumber_Sender,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(SRealTimeDisplay__storage_, sender),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SRealTimeDisplay class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SRealTimeDisplay__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - CClientIpInfo

@implementation CClientIpInfo

@dynamic userId;
@dynamic sessionId;

typedef struct CClientIpInfo__storage_ {
  uint32_t _has_storage_[1];
  uint64_t userId;
  uint64_t sessionId;
} CClientIpInfo__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "userId",
        .dataTypeSpecific.className = NULL,
        .number = CClientIpInfo_FieldNumber_UserId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(CClientIpInfo__storage_, userId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = CClientIpInfo_FieldNumber_SessionId,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(CClientIpInfo__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[CClientIpInfo class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(CClientIpInfo__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - SClientIpInfo

@implementation SClientIpInfo

@dynamic userId;
@dynamic sessionId;
@dynamic ip;
@dynamic address;
@dynamic lnt;
@dynamic lat;
@dynamic isPublicIp;

typedef struct SClientIpInfo__storage_ {
  uint32_t _has_storage_[1];
  NSString *ip;
  NSString *address;
  NSString *lnt;
  NSString *lat;
  uint64_t userId;
  uint64_t sessionId;
} SClientIpInfo__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "userId",
        .dataTypeSpecific.className = NULL,
        .number = SClientIpInfo_FieldNumber_UserId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SClientIpInfo__storage_, userId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = SClientIpInfo_FieldNumber_SessionId,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(SClientIpInfo__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "ip",
        .dataTypeSpecific.className = NULL,
        .number = SClientIpInfo_FieldNumber_Ip,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(SClientIpInfo__storage_, ip),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "address",
        .dataTypeSpecific.className = NULL,
        .number = SClientIpInfo_FieldNumber_Address,
        .hasIndex = 3,
        .offset = (uint32_t)offsetof(SClientIpInfo__storage_, address),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "lnt",
        .dataTypeSpecific.className = NULL,
        .number = SClientIpInfo_FieldNumber_Lnt,
        .hasIndex = 4,
        .offset = (uint32_t)offsetof(SClientIpInfo__storage_, lnt),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "lat",
        .dataTypeSpecific.className = NULL,
        .number = SClientIpInfo_FieldNumber_Lat,
        .hasIndex = 5,
        .offset = (uint32_t)offsetof(SClientIpInfo__storage_, lat),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeString,
      },
      {
        .name = "isPublicIp",
        .dataTypeSpecific.className = NULL,
        .number = SClientIpInfo_FieldNumber_IsPublicIp,
        .hasIndex = 6,
        .offset = 7,  // Stored in _has_storage_ to save space.
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeBool,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SClientIpInfo class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SClientIpInfo__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - CNoSpeakKefuSession

@implementation CNoSpeakKefuSession

@dynamic sessionId;
@dynamic optType;

typedef struct CNoSpeakKefuSession__storage_ {
  uint32_t _has_storage_[1];
  SpeakOptType optType;
  uint64_t sessionId;
} CNoSpeakKefuSession__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = CNoSpeakKefuSession_FieldNumber_SessionId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(CNoSpeakKefuSession__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "optType",
        .dataTypeSpecific.enumDescFunc = SpeakOptType_EnumDescriptor,
        .number = CNoSpeakKefuSession_FieldNumber_OptType,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(CNoSpeakKefuSession__storage_, optType),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[CNoSpeakKefuSession class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(CNoSpeakKefuSession__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

int32_t CNoSpeakKefuSession_OptType_RawValue(CNoSpeakKefuSession *message) {
  GPBDescriptor *descriptor = [CNoSpeakKefuSession descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:CNoSpeakKefuSession_FieldNumber_OptType];
  return GPBGetMessageInt32Field(message, field);
}

void SetCNoSpeakKefuSession_OptType_RawValue(CNoSpeakKefuSession *message, int32_t value) {
  GPBDescriptor *descriptor = [CNoSpeakKefuSession descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:CNoSpeakKefuSession_FieldNumber_OptType];
  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);
}

#pragma mark - SNoSpeakKefuSession

@implementation SNoSpeakKefuSession

@dynamic sessionId;
@dynamic optType;
@dynamic cd;

typedef struct SNoSpeakKefuSession__storage_ {
  uint32_t _has_storage_[1];
  SpeakOptType optType;
  int32_t cd;
  uint64_t sessionId;
} SNoSpeakKefuSession__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = SNoSpeakKefuSession_FieldNumber_SessionId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SNoSpeakKefuSession__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "optType",
        .dataTypeSpecific.enumDescFunc = SpeakOptType_EnumDescriptor,
        .number = SNoSpeakKefuSession_FieldNumber_OptType,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(SNoSpeakKefuSession__storage_, optType),
        .flags = (GPBFieldFlags)(GPBFieldOptional | GPBFieldHasEnumDescriptor),
        .dataType = GPBDataTypeEnum,
      },
      {
        .name = "cd",
        .dataTypeSpecific.className = NULL,
        .number = SNoSpeakKefuSession_FieldNumber_Cd,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(SNoSpeakKefuSession__storage_, cd),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SNoSpeakKefuSession class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SNoSpeakKefuSession__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

int32_t SNoSpeakKefuSession_OptType_RawValue(SNoSpeakKefuSession *message) {
  GPBDescriptor *descriptor = [SNoSpeakKefuSession descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:SNoSpeakKefuSession_FieldNumber_OptType];
  return GPBGetMessageInt32Field(message, field);
}

void SetSNoSpeakKefuSession_OptType_RawValue(SNoSpeakKefuSession *message, int32_t value) {
  GPBDescriptor *descriptor = [SNoSpeakKefuSession descriptor];
  GPBFieldDescriptor *field = [descriptor fieldWithNumber:SNoSpeakKefuSession_FieldNumber_OptType];
  GPBSetInt32IvarWithFieldInternal(message, field, value, descriptor.file.syntax);
}

#pragma mark - CDisconnectKefuSession

@implementation CDisconnectKefuSession

@dynamic sessionId;

typedef struct CDisconnectKefuSession__storage_ {
  uint32_t _has_storage_[1];
  uint64_t sessionId;
} CDisconnectKefuSession__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = CDisconnectKefuSession_FieldNumber_SessionId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(CDisconnectKefuSession__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[CDisconnectKefuSession class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(CDisconnectKefuSession__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - SDisconnectKefuSession

@implementation SDisconnectKefuSession

@dynamic sessionId;

typedef struct SDisconnectKefuSession__storage_ {
  uint32_t _has_storage_[1];
  uint64_t sessionId;
} SDisconnectKefuSession__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = SDisconnectKefuSession_FieldNumber_SessionId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(SDisconnectKefuSession__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SDisconnectKefuSession class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SDisconnectKefuSession__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - QueueInfo

@implementation QueueInfo

@dynamic sessionId;
@dynamic userId;
@dynamic queueNum;

typedef struct QueueInfo__storage_ {
  uint32_t _has_storage_[1];
  int32_t queueNum;
  uint64_t sessionId;
  uint64_t userId;
} QueueInfo__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "sessionId",
        .dataTypeSpecific.className = NULL,
        .number = QueueInfo_FieldNumber_SessionId,
        .hasIndex = 0,
        .offset = (uint32_t)offsetof(QueueInfo__storage_, sessionId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "userId",
        .dataTypeSpecific.className = NULL,
        .number = QueueInfo_FieldNumber_UserId,
        .hasIndex = 1,
        .offset = (uint32_t)offsetof(QueueInfo__storage_, userId),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeUInt64,
      },
      {
        .name = "queueNum",
        .dataTypeSpecific.className = NULL,
        .number = QueueInfo_FieldNumber_QueueNum,
        .hasIndex = 2,
        .offset = (uint32_t)offsetof(QueueInfo__storage_, queueNum),
        .flags = GPBFieldOptional,
        .dataType = GPBDataTypeInt32,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[QueueInfo class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(QueueInfo__storage_)
                                         flags:GPBDescriptorInitializationFlag_None];
    #if defined(DEBUG) && DEBUG
      NSAssert(descriptor == nil, @"Startup recursed!");
    #endif  // DEBUG
    descriptor = localDescriptor;
  }
  return descriptor;
}

@end

#pragma mark - SUserQueueInfo

@implementation SUserQueueInfo

@dynamic queueInfoArray, queueInfoArray_Count;

typedef struct SUserQueueInfo__storage_ {
  uint32_t _has_storage_[1];
  NSMutableArray *queueInfoArray;
} SUserQueueInfo__storage_;

// This method is threadsafe because it is initially called
// in +initialize for each subclass.
+ (GPBDescriptor *)descriptor {
  static GPBDescriptor *descriptor = nil;
  if (!descriptor) {
    static GPBMessageFieldDescription fields[] = {
      {
        .name = "queueInfoArray",
        .dataTypeSpecific.className = GPBStringifySymbol(QueueInfo),
        .number = SUserQueueInfo_FieldNumber_QueueInfoArray,
        .hasIndex = GPBNoHasBit,
        .offset = (uint32_t)offsetof(SUserQueueInfo__storage_, queueInfoArray),
        .flags = GPBFieldRepeated,
        .dataType = GPBDataTypeMessage,
      },
    };
    GPBDescriptor *localDescriptor =
        [GPBDescriptor allocDescriptorForClass:[SUserQueueInfo class]
                                     rootClass:[KefuRoot class]
                                          file:KefuRoot_FileDescriptor()
                                        fields:fields
                                    fieldCount:(uint32_t)(sizeof(fields) / sizeof(GPBMessageFieldDescription))
                                   storageSize:sizeof(SUserQueueInfo__storage_)
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