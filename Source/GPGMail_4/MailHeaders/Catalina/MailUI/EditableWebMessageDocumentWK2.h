//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EditableWebMessageDocument.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface EditableWebMessageDocumentWK2 : EditableWebMessageDocument
{
    NSMutableArray *_wkAttachments;
    NSMutableDictionary *_attachmentURLsByIdentifier;
}

//- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *attachmentInfoByURL;
- (void)useAttachmentForURL:(id)arg1 whenAttachmentWithIdentifierIsInserted:(id)arg2;
- (void)didRemoveAttachment:(id)arg1;
- (void)didInsertAttachment:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *wkAttachments;
- (id)attachmentElementEnumeratorWithOptions:(unsigned long long)arg1;
- (id)attachments;
- (id)initForDisplay:(BOOL)arg1;

@end
