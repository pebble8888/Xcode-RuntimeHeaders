/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDEGaugeDataQueryCoordinator, NSSet, NSString;

@interface IDEGaugeDataQuery : NSObject <DVTInvalidation>
{
    BOOL _isSuspended;
    IDEGaugeDataQueryCoordinator *_queryCoordinator;
    NSSet *_observedAttributes;
    id _resultDictHandler;
}

+ (void)initialize;
@property(nonatomic) BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(copy, nonatomic) id resultDictHandler; // @synthesize resultDictHandler=_resultDictHandler;
@property(copy, nonatomic) NSSet *observedAttributes; // @synthesize observedAttributes=_observedAttributes;
@property(retain) IDEGaugeDataQueryCoordinator *queryCoordinator; // @synthesize queryCoordinator=_queryCoordinator;
- (void).cxx_destruct;
- (void)handleResultDict:(id)arg1;
- (void)primitiveInvalidate;
- (id)initForProcessWithPID:(id)arg1 onDevice:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
