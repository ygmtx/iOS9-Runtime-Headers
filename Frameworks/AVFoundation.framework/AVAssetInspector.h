/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (nonatomic, readonly) NSData *SHA1Digest;
@property (nonatomic, readonly) NSArray *alternateTrackGroups;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) BOOL canContainFragments;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (getter=isCompatibleWithAirPlayVideo, nonatomic, readonly) BOOL compatibleWithAirPlayVideo;
@property (getter=isCompatibleWithSavedPhotosAlbum, nonatomic, readonly) BOOL compatibleWithSavedPhotosAlbum;
@property (getter=isComposable, nonatomic, readonly) BOOL composable;
@property (nonatomic, readonly) BOOL containsFragments;
@property (nonatomic, readonly) AVMetadataItem *creationDate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExportable, nonatomic, readonly) BOOL exportable;
@property (nonatomic, readonly) NSString *identifyingTagClass;
@property (nonatomic, readonly) NSString *lyrics;
@property (getter=_mediaSelectionGroupDictionaries, nonatomic, readonly) NSArray *mediaSelectionGroupDictionaries;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } naturalSize;
@property (nonatomic, readonly) int naturalTimeScale;
@property (getter=isPlayable, nonatomic, readonly) BOOL playable;
@property (nonatomic, readonly) float preferredRate;
@property (nonatomic, readonly) float preferredSoundCheckVolumeNormalization;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } preferredTransform;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) id propertyListForProxy;
@property (nonatomic, readonly) BOOL providesPreciseDurationAndTiming;
@property (getter=isReadable, nonatomic, readonly) BOOL readable;
@property (nonatomic, readonly) long trackCount;
@property (nonatomic, readonly) NSArray *trackIDs;
@property (nonatomic, readonly) NSDictionary *trackReferences;

- (id)SHA1Digest;
- (id)_mediaSelectionGroupDictionaries;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (id)commonMetadata;
- (BOOL)containsFragments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (BOOL)hasProtectedContent;
- (id)identifyingTagClass;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (id)lyrics;
- (id)makePropertyListForProxyWithOptions:(id)arg1;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (BOOL)providesPreciseDurationAndTiming;
- (long)trackCount;
- (id)trackIDs;
- (id)trackReferences;

@end
