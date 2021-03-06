/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSFileLogger : NSObject <BSLogging> {
    <BSFileLoggerDelegate> * _delegate;
    BOOL  _enabledByPreference;
    NSMutableSet * _enabledCategories;
    NSString * _logPath;
    NSDateFormatter * _memoryLogDateFormatter;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _recentLogs;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BSFileLoggerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int level;
@property (nonatomic, readonly) unsigned int logDestinations;
@property (nonatomic, readonly) NSString *logPath;
@property (nonatomic, readonly) NSString *logPreferenceDomain;
@property (nonatomic, readonly) NSString *logPreferenceName;
@property (nonatomic, readonly) int maxLogCount;
@property (nonatomic, readonly) unsigned int maxLogLinesInMemory;
@property (nonatomic, readonly) int maxLogSize;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) BOOL shouldEnableOnInternalBuilds;
@property (readonly) Class superclass;

// BSFileLogger (null)

- (void)_appendLogForLevel:(int)arg1 category:(id)arg2 withFormat:(id)arg3 arguments:(char *)arg4;
- (void)_disableLogCategory:(id)arg1;
- (void)_enableLogCategory:(id)arg1;
- (void)_queue_appendLogForLevel:(int)arg1 category:(id)arg2 withFormat:(id)arg3 arguments:(char *)arg4;
- (BOOL)_queue_isEnabledForCategory:(id)arg1;
- (void)_reloadFromDefaultsDictionary:(id)arg1;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setLevel:(int)arg1;
- (void)_setLevel:(int)arg1 fromDefaults:(BOOL)arg2;
- (id)composedLogForCategory:(id)arg1 destination:(unsigned int)arg2 format:(id)arg3 arguments:(char *)arg4;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)isEnabledForCategory:(id)arg1;
- (int)level;
- (unsigned int)logDestinations;
- (id)logPath;
- (id)logPreferenceDomain;
- (id)logPreferenceName;
- (id)logPrefixForCategory:(id)arg1 destination:(unsigned int)arg2;
- (void)logWithFormat:(id)arg1;
- (void)logWithFormat:(id)arg1 arguments:(char *)arg2;
- (id)loggerForCatagory:(id)arg1;
- (int)maxLogCount;
- (unsigned int)maxLogLinesInMemory;
- (int)maxLogSize;
- (id)name;
- (id)queue;
- (id)recentLogs;
- (void)reloadFromDefaults;
- (BOOL)saveRecentLogsToTemporaryPath:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldEnableOnInternalBuilds;
- (void)willBeginLoggingToPath:(id)arg1;

@end
