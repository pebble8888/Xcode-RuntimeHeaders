/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPanel.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDEFilePickerView, NSArray, NSPredicate, NSString, NSURL, NSWindow;

@interface IDEFilePickerPanel : NSPanel <DVTInvalidation>
{
    IDEFilePickerView *_filePickerView;
    id _completionHandler;
    NSWindow *_attachedToWindow;
    NSArray *_urls;
    NSURL *_directoryURL;
    NSArray *_allowedFileTypesForAddOther;
}

+ (void)initialize;
+ (id)filePickerPanel;
@property(copy) NSArray *allowedFileTypesForAddOther; // @synthesize allowedFileTypesForAddOther=_allowedFileTypesForAddOther;
@property(copy) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void).cxx_destruct;
- (void)hideProgressIndicator;
- (void)showProgressIndicator;
@property(retain) id <IDEFilePickerViewDelegate> delegate;
@property(nonatomic) unsigned long long pickingStyle;
@property(copy) NSPredicate *selectableNavigableItemFilter;
@property(copy) NSPredicate *allowedNavigableItemFilter;
@property(readonly) NSArray *URLs;
@property(retain) NSArray *items;
@property BOOL canChooseGroups;
@property BOOL allowsMultipleSelection;
@property(copy) NSArray *expandedItems;
@property(copy) NSArray *rootItems;
@property(copy) NSString *message;
@property BOOL showsAddOtherButton;
@property(copy) NSString *cancelButtonTitle;
@property(copy) NSString *addOtherButtonTitle;
@property(copy) NSString *addButtonTitle;
- (void)addOther:(id)arg1;
- (void)cancel:(id)arg1;
- (void)add:(id)arg1;
- (void)_pickingEndedWithReturnCode:(long long)arg1;
- (void)filePickerSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(id)arg2;
- (void)primitiveInvalidate;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
