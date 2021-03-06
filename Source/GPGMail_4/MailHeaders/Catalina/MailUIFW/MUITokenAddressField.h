//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSTokenField.h>

@class MUITokenAddressTextView, NSView;

@interface MUITokenAddressField : NSTokenField
{
    MUITokenAddressTextView *_addressTextView;
    NSView *_parentAddressField;
}

+ (Class)cellClass;
@property(nonatomic) __weak NSView *parentAddressField; // @synthesize parentAddressField=_parentAddressField;
//- (void).cxx_destruct;
- (id)accessibilityParent;
- (id)designatedFocusRingView;
- (struct CGSize)intrinsicContentSize;
- (void)setFrameSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double minimumHeight;
- (void)refreshField;
- (id)_addressTextView;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (unsigned long long)textView:(id)arg1 dragOperationForDraggingInfo:(id)arg2 type:(id)arg3;
- (id)tokenFieldCell:(id)arg1 shouldUseReadablePasteboardTypes:(id)arg2;
- (id)tokenFieldCell:(id)arg1 shouldUseDraggingPasteboardTypes:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;

@end

