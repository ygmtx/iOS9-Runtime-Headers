/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSCache : NSObject {
    id  _delegate;
    void * _private;
    void * _reserved;
}

@property unsigned int countLimit;
@property <NSCacheDelegate> *delegate;
@property BOOL evictsObjectsWithDiscardedContent;
@property (copy) NSString *name;
@property unsigned int totalCostLimit;

- (id)allObjects;
- (unsigned int)countLimit;
- (void)dealloc;
- (id)delegate;
- (BOOL)evictsObjectsWhenApplicationEntersBackground;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)finalize;
- (id)init;
- (unsigned int)minimumObjectCount;
- (id)name;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setCountLimit:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(BOOL)arg1;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1;
- (void)setMinimumObjectCount:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned int)arg3;
- (void)setTotalCostLimit:(unsigned int)arg1;
- (unsigned int)totalCostLimit;

@end