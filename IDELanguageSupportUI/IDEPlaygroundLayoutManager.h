/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutManager.h"

@class DVTMutableRangeArray, IDEPlaygroundTextView, NSArray;

@interface IDEPlaygroundLayoutManager : DVTLayoutManager
{
    DVTMutableRangeArray *_sectionCharRanges;
}

- (void).cxx_destruct;
- (void)textStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (void)removeSectionWithCharacterRange:(struct _NSRange)arg1;
- (void)addSectionWithCharacterRange:(struct _NSRange)arg1;
@property(copy) NSArray *sectionCharacterRanges;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) IDEPlaygroundTextView *firstTextView; // @dynamic firstTextView;
@property(readonly) IDEPlaygroundTextView *textViewForBeginningOfSelection; // @dynamic textViewForBeginningOfSelection;

@end
