/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSetChanges : NSMutableSet <NSCopying, NSFastEnumeration>

@property (readonly) unsigned int changeCount;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)_isToManyChangeInformation;
- (int)_toManyPropertyType;
- (void)addChange:(id)arg1;
- (unsigned int)changeCount;
- (void)enumerateChanges:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateChangesUsingBlock:(id /* block */)arg1;

// NSSetChanges (NSSetChangeActions)

- (void)addObject:(id)arg1;
- (void)applyChangesToSet:(id)arg1;
- (void)removeObject:(id)arg1;

@end