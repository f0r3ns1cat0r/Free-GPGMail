//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MessageSelection, MessageWebDocumentView, PrintingProgressPanelWindowController;

@interface PrintingManager : NSObject
{
    BOOL _wasCancelled;	// 8 = 0x8
    MessageSelection *_selection;	// 16 = 0x10
    MessageWebDocumentView *_webDocumentView;	// 24 = 0x18
    PrintingManager *_activeDispatcher;	// 32 = 0x20
    PrintingProgressPanelWindowController *_progressPanelController;	// 40 = 0x28
    double _progressMaxValue;	// 48 = 0x30
    double _progressValue;	// 56 = 0x38
    double _progressIncrement;	// 64 = 0x40
}

+ (void)exportSelectionAsPDF:(id)arg1;	// IMP=0x0000000100278ce1
+ (void)printSelection:(id)arg1;	// IMP=0x0000000100278c66
@property(nonatomic) double progressIncrement; // @synthesize progressIncrement=_progressIncrement;
@property double progressValue; // @synthesize progressValue=_progressValue;
@property(nonatomic) double progressMaxValue; // @synthesize progressMaxValue=_progressMaxValue;
@property(retain, nonatomic) PrintingProgressPanelWindowController *progressPanelController; // @synthesize progressPanelController=_progressPanelController;
@property(retain, nonatomic) PrintingManager *activeDispatcher; // @synthesize activeDispatcher=_activeDispatcher;
@property(nonatomic) BOOL wasCancelled; // @synthesize wasCancelled=_wasCancelled;
@property(retain, nonatomic) MessageWebDocumentView *webDocumentView; // @synthesize webDocumentView=_webDocumentView;
@property(retain, nonatomic) MessageSelection *selection; // @synthesize selection=_selection;
- (void).cxx_destruct;	// IMP=0x000000010027993e
- (void)_showProgressPanel;	// IMP=0x000000010027959f
- (void)_generatePrintingHTMLForEnumeratedConversationMembers:(id)arg1 HTMLStorage:(id)arg2 attachmentStorage:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001002790b3
- (id)init;	// IMP=0x0000000100278fe4
- (id)initWithSelection:(id)arg1;	// IMP=0x0000000100278d5c

@end

