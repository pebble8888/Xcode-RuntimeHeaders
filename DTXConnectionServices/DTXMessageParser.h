/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface DTXMessageParser : NSObject
{
    const char *_parsingBuffer;
    unsigned long long _parsingBufferUsed;
    unsigned long long _parsingBufferSize;
    struct dispatch_queue_s *_parsingQueue;
    NSMutableDictionary *_fragmentedBuffersByIdentifier;
    struct dispatch_semaphore_s *_hasMoreDataSem;
    struct dispatch_semaphore_s *_wantsMoreDataSem;
    unsigned long long _desiredSize;
    BOOL _eof;
}

- (void)parsingComplete;
- (void)parseIncomingBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (const void *)waitForMoreData:(unsigned long long)arg1 incrementalBuffer:(const void **)arg2;
- (id)parseMessage;
- (void)dealloc;
- (id)initWithMessageHandler:(id)arg1;

@end

