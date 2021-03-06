/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTCancellable-Protocol.h"

@interface _DVTAsynchronousRequest : NSObject <DVTCancellable>
{
    long long _type;
    id _block;
}

+ (id)_scheduledRequestWithOrder:(long long)arg1 modes:(id)arg2 block:(id)arg3;
+ (id)_scheduledRequestWithDelay:(double)arg1 block:(id)arg2;
+ (id)_scheduledRequestWithDelay:(double)arg1 modes:(id)arg2 block:(id)arg3;
- (void).cxx_destruct;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)_invokeBlock:(id)arg1;
- (id)_initWithBlock:(id)arg1 type:(void)arg2;

@end

