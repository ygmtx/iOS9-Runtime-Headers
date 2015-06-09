/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItem : NSObject {
    struct AVItemPrivate { id x1; double x2; float x3; float x4; float x5; unsigned int x6; BOOL x7; BOOL x8; id x9; long long x10; long long x11; BOOL x12; id x13; BOOL x14; BOOL x15; id x16; struct OpaqueFigThread {} *x17; struct OpaqueCMByteStream {} *x18; int x19; id x20; } * _priv;
}

+ (id)avItem;
+ (id)avItemWithPath:(id)arg1 error:(id*)arg2;

- (int)_instantiateItem;
- (id)attributeForKey:(id)arg1;
- (long)beginDownloading;
- (void)cancelDownload;
- (id)chapterImageForImageID:(int)arg1;
- (void)dealloc;
- (float)downloadProgress;
- (long)downloadStatus;
- (void*)downloadThread;
- (double)duration;
- (int)eqPreset;
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)arg1 toEndTime:(double)arg2 maxCount:(int)arg3;
- (id)formatDetailsForTracks;
- (id)init;
- (id)initWithError:(id*)arg1;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)nextThumbnailTimesStartingAt:(double)arg1 minimumInterval:(double)arg2 forwards:(BOOL)arg3 maxCount:(int)arg4;
- (id)path;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setEQPreset:(int)arg1;
- (BOOL)setPath:(id)arg1 error:(id*)arg2;
- (void)setVolume:(float)arg1;
- (void)stopDownload;
- (id)url;
- (id)urlFromPath:(id)arg1;
- (float)volume;

// AVItem (AVItemLogging)

- (id)accessLog;
- (id)errorLog;

@end