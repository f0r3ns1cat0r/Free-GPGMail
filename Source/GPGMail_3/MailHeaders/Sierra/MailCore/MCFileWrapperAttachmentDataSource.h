//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCAttachmentDataSource-Protocol.h"

@class MCFileWrapper, NSString;

@interface MCFileWrapperAttachmentDataSource : NSObject <MCAttachmentDataSource>
{
    MCFileWrapper *_fileWrapper;	// 8 = 0x8
}

@property(retain, nonatomic) MCFileWrapper *fileWrapper; // @synthesize fileWrapper=_fileWrapper;
//- (void).cxx_destruct;	// IMP=0x000000000002f3e3
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL canResultsBeCached;
@property(readonly, nonatomic) BOOL dataIsLocallyAvailable;
- (id)approximateSizeForAccessLevel:(long long)arg1;	// IMP=0x000000000002ef1b
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002eeb9
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002edbd
- (id)init;	// IMP=0x000000000002ecee
- (id)initWithFileWrapper:(id)arg1;	// IMP=0x000000000002ec76

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

