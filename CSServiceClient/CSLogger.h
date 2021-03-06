/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock, NSMutableArray, NSMutableDictionary, NSString;

@interface CSLogger : NSObject
{
    NSMutableArray *queuedMessages;
    NSConditionLock *queueLock;
    BOOL configChanged;
    NSString *logFilePath;
    NSMutableDictionary *logFiles;
    BOOL stderrEnabled;
    id logFileOpenHookBlock;
    int _logLevel;
    int _maxRolledLogs;
    NSString *_applicationName;
    NSString *_logFacility;
    long long _maxSize;
}

+ (void)setLogFileOpenHook:(id)arg1;
+ (void)disableStderrLogging;
+ (void)enableStderrLogging;
+ (void)setDefaultLogLevel:(int)arg1;
+ (void)setLogFacility:(id)arg1;
+ (void)setApplicationName:(id)arg1;
+ (void)setDefaultLogfile:(id)arg1;
+ (void)releaseCurrentInstance;
+ (id)currentInstance;
+ (void)initialize;
@property int maxRolledLogs; // @synthesize maxRolledLogs=_maxRolledLogs;
@property long long maxSize; // @synthesize maxSize=_maxSize;
@property int logLevel; // @synthesize logLevel=_logLevel;
@property(copy, nonatomic) NSString *logFacility; // @synthesize logFacility=_logFacility;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
- (void).cxx_destruct;
- (void)logMessage:(id)arg1 inFile:(const char *)arg2 andLine:(int)arg3 atLevel:(int)arg4;
- (void)setLogFileOpenHook:(id)arg1;
- (void)disableStderrLogging;
- (void)enableStderrLogging;
- (void)removeAuxLogfile:(id)arg1;
- (void)_removeLogFile:(id)arg1 mustLock:(BOOL)arg2;
- (void)addAuxLogfile:(id)arg1;
- (void)_addLogFile:(id)arg1 mustLock:(BOOL)arg2 errnop:(int *)arg3;
- (void)_removeLogFile:(id)arg1;
- (int)_addLogFile:(id)arg1;
- (void)setDefaultLogLevel:(int)arg1;
- (void)setLogfile:(id)arg1;
- (id)logfile;
- (void)changeConfigInBlock:(id)arg1;
- (id)init;
- (struct __aslclient *)rollLogs:(struct __aslclient *)arg1;
- (void)loggerThread:(id)arg1;
- (void)close:(struct __aslclient *)arg1;
- (struct __aslclient *)open;

@end

