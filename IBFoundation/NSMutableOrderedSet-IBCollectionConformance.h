/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableOrderedSet.h"

#import "IBMutableOrderedCollection-Protocol.h"

@interface NSMutableOrderedSet (IBCollectionConformance) <IBMutableOrderedCollection>
- (id)ib_dequeue;
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparisonSelector:(SEL)arg2;
- (void)ib_addObjectToSortedCollectionUsingBinarySearch:(id)arg1 comparator:(id)arg2;
- (void)ib_addObjectIfNonNil:(id)arg1;
- (void)ib_appendObjects:(id)arg1;
@end
