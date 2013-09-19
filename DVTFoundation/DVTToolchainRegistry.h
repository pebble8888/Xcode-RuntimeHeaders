/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration-Protocol.h"

@class DVTMutableOrderedDictionary, DVTReaderWriterLock, DVTSearchPath;

@interface DVTToolchainRegistry : NSObject <NSFastEnumeration>
{
    DVTSearchPath *_searchPath;
    DVTMutableOrderedDictionary *_identsToToolchains;
    DVTReaderWriterLock *_lock;
}

+ (id)defaultRegistry;
@property(readonly) DVTReaderWriterLock *lock; // @synthesize lock=_lock;
@property(readonly) DVTMutableOrderedDictionary *identsToToolchains; // @synthesize identsToToolchains=_identsToToolchains;
@property(readonly) DVTSearchPath *searchPath; // @synthesize searchPath=_searchPath;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (BOOL)scanSearchPathAndRegisterToolchains:(id *)arg1;
- (id)allRegisteredToolchains;
- (id)defaultToolchain;
- (id)toolchainForIdentifier:(id)arg1;
- (BOOL)registerToolchain:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithSearchPath:(id)arg1;

@end
