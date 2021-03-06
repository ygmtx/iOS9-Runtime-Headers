/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIUserDictionaryTransaction : NSObject <NSSecureCoding> {
    TIUserDictionaryEntryValue * _valueToDelete;
    TIUserDictionaryEntryValue * _valueToInsert;
}

@property (nonatomic, retain) TIUserDictionaryEntryValue *valueToDelete;
@property (nonatomic, retain) TIUserDictionaryEntryValue *valueToInsert;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValueToDelete:(id)arg1;
- (void)setValueToInsert:(id)arg1;
- (id)valueToDelete;
- (id)valueToInsert;

@end
