/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class IDEBotSupportingEditor, NSArray;

@protocol IDEBotSupportingEditorHostedViewController <NSObject>
+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
@property(readonly) NSArray *currentSelectedItems;
@property(readonly) NSArray *currentSelectedDocumentLocations;
@property(retain, nonatomic) IDEBotSupportingEditor *botSupportingEditor;
- (void)selectDocumentLocations:(id)arg1;
@end
