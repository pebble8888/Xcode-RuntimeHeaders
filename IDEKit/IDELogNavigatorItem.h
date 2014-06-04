/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h"

@class DVTDocumentLocation, DVTFileDataType, IDEBot, IDEEntityIdentifier, IDEFileReference, IDEWorkspace, NSArray, NSImage, NSString;

@interface IDELogNavigatorItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    BOOL _updatingItems;
    IDEBot *_bot;
    id _botNavigable;
    IDEEntityIdentifier *_entityIdentifier;
    NSArray *_items;
    IDEWorkspace *_workspace;
    NSString *_name;
    NSImage *_image;
    id _updateBlock;
    NSArray *_cachedItems;
    NSArray *_observationTokens;
}

+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingNavigableItem_progressValue;
+ (id)keyPathsForValuesAffectingNavigableItem_contentDocumentLocation;
+ (id)keyPathsForValuesAffectingNavigableItem_documentType;
+ (id)keyPathsForValuesAffectingNavigableItem_image;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
+ (void)initialize;
@property(retain, nonatomic) NSArray *observationTokens; // @synthesize observationTokens=_observationTokens;
@property(nonatomic) BOOL updatingItems; // @synthesize updatingItems=_updatingItems;
@property(retain, nonatomic) NSArray *cachedItems; // @synthesize cachedItems=_cachedItems;
@property(copy) id updateBlock; // @synthesize updateBlock=_updateBlock;
@property(copy) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) IDEEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(retain, nonatomic) id botNavigable; // @synthesize botNavigable=_botNavigable;
@property(retain, nonatomic) IDEBot *bot; // @synthesize bot=_bot;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (BOOL)isEqualToIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly, nonatomic) long long navigableItem_progressValue; // @dynamic navigableItem_progressValue;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation; // @dynamic navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType; // @dynamic navigableItem_documentType;
@property(readonly) NSImage *navigableItem_image; // @dynamic navigableItem_image;
@property(readonly) NSString *navigableItem_name; // @dynamic navigableItem_name;
- (void)_configureBotObservationTokens;
- (void)_configureBotNavigableObservationTokens;
- (void)_updateItemsUsingSchemeLogRecords;
- (void)update;
- (id)initWithName:(id)arg1 image:(id)arg2 workspace:(id)arg3 activityLogUpdateBlock:(id)arg4;
- (id)initWithEntityIdentifier:(id)arg1 workspace:(id)arg2;
- (id)initWithBotNavigable:(id)arg1;
- (id)initWithBot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end
