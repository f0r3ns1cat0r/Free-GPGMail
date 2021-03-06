//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "WebFrameLoadDelegate.h"
#import "WebResourceLoadDelegate.h"

@class ComposeBackEnd, EditableWebMessageDocument, EditingMessageWebView, NSMutableArray, NSMutableDictionary, NSString, NSTimer, Stationery;

@interface StationeryController : NSObject <WebFrameLoadDelegate, WebResourceLoadDelegate>
{
    Stationery *_stationery;	// 8 = 0x8
    BOOL _stationeryLoaded;	// 16 = 0x10
    NSString *_currentColor;	// 24 = 0x18
    ComposeBackEnd *_composeBackEnd;	// 32 = 0x20
    NSMutableDictionary *_fontElementsWithColors;	// 40 = 0x28
    NSMutableArray *_colorsThatHaveBeenDisplayed;	// 48 = 0x30
    BOOL _isLoadingStationery;	// 56 = 0x38
    BOOL _isChangingStationeryColor;	// 57 = 0x39
    BOOL _isLoadingResources;	// 58 = 0x3a
    BOOL _shouldAnimateTransitions;	// 59 = 0x3b
    EditingMessageWebView *_webView;	// 64 = 0x40
    double _letterTopMargin;	// 72 = 0x48
    double _letterWidth;	// 80 = 0x50
    id <WebResourceLoadDelegate> _savedResourceLoadDelegate;	// 88 = 0x58
    id <WebFrameLoadDelegate> _savedFrameLoadDelegate;	// 96 = 0x60
    long long _numberOfResourcesNotYetLoaded;	// 104 = 0x68
    EditableWebMessageDocument *_messageDocument;	// 112 = 0x70
    NSTimer *_flushWindowTimer;	// 120 = 0x78
}

@property(retain, nonatomic) NSTimer *flushWindowTimer; // @synthesize flushWindowTimer=_flushWindowTimer;
@property(retain, nonatomic) EditableWebMessageDocument *messageDocument; // @synthesize messageDocument=_messageDocument;
@property(nonatomic) BOOL shouldAnimateTransitions; // @synthesize shouldAnimateTransitions=_shouldAnimateTransitions;
@property(nonatomic) BOOL isLoadingResources; // @synthesize isLoadingResources=_isLoadingResources;
@property(nonatomic) BOOL isChangingStationeryColor; // @synthesize isChangingStationeryColor=_isChangingStationeryColor;
@property(nonatomic) BOOL isLoadingStationery; // @synthesize isLoadingStationery=_isLoadingStationery;
@property(nonatomic) long long numberOfResourcesNotYetLoaded; // @synthesize numberOfResourcesNotYetLoaded=_numberOfResourcesNotYetLoaded;
@property(retain, nonatomic) id <WebFrameLoadDelegate> savedFrameLoadDelegate; // @synthesize savedFrameLoadDelegate=_savedFrameLoadDelegate;
@property(retain, nonatomic) id <WebResourceLoadDelegate> savedResourceLoadDelegate; // @synthesize savedResourceLoadDelegate=_savedResourceLoadDelegate;
@property(nonatomic) double letterWidth; // @synthesize letterWidth=_letterWidth;
@property(nonatomic) double letterTopMargin; // @synthesize letterTopMargin=_letterTopMargin;
@property(retain, nonatomic) EditingMessageWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;	// IMP=0x00000001002c63a3
- (id)stationeryFromCurrentMessageError:(id *)arg1;	// IMP=0x00000001002c53c2
- (void)changeStationeryColor:(id)arg1;	// IMP=0x00000001002c3d64
- (void)userClickedOnStationeryBackground:(id)arg1;	// IMP=0x00000001002c3ba8
- (void)_webViewDidFinishLoadingAllResources;	// IMP=0x00000001002c3753
- (void)_timerDidFire:(id)arg1;	// IMP=0x00000001002c3741
- (void)webView:(id)arg1 didLoadResourceFromMemoryCache:(id)arg2 response:(id)arg3 length:(long long)arg4 fromDataSource:(id)arg5;	// IMP=0x00000001002c35f5
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;	// IMP=0x00000001002c3487
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;	// IMP=0x00000001002c3419
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000001002c3321
- (void)_finishLoadingStationery;	// IMP=0x00000001002c0ca2
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000001002c0c90
- (void)loadStationery:(id)arg1;	// IMP=0x00000001002bf914
- (void)showColorOptions;	// IMP=0x00000001002bf840
@property(copy, nonatomic) NSString *color;
@property(nonatomic) BOOL stationeryLoaded;
@property(retain, nonatomic) Stationery *stationery;
@property(nonatomic) __weak ComposeBackEnd *composeBackEnd;
@property(readonly, nonatomic) BOOL isUpdatingWebView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

