/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBFoundation/IBICMultipartImageRepSlot.h>

@class IBICIdiom, IBICScale, IBICSubtype;

@interface IBICImageSetRepSlot : IBICMultipartImageRepSlot
{
    IBICIdiom *_idiom;
    IBICSubtype *_subtype;
    IBICScale *_scale;
}

+ (id)defaultSlot;
+ (id)slotWithIdiom:(id)arg1 subtype:(id)arg2 scale:(id)arg3;
+ (id)orderedComponentClasses;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICSubtype *subtype; // @synthesize subtype=_subtype;
@property(readonly) IBICIdiom *idiom; // @synthesize idiom=_idiom;
- (void).cxx_destruct;
- (id)suggestedRepNameForMultipartImageSetName:(id)arg1;
- (id)detailAreaKey;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayNameDefiningItem;
- (void)captureComponents;

@end
