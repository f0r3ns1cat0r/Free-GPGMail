//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <MailCore/NSObject-Protocol.h>

@class NSString;

@protocol ECMIMECharset <NSObject>
@property(readonly, nonatomic) BOOL canBeUsedForOutgoingMessages;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *charsetName;
@property(readonly) unsigned long long encoding;
@end
