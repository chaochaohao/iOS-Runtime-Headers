/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUCellInvalidationContext : NSObject {
    bool_animated;
    bool_invalidateDownloadStatus;
    bool_invalidateEverything;
    bool_invalidateLayout;
}

@property(getter=isAnimated) bool animated;
@property bool invalidateDownloadStatus;
@property bool invalidateEverything;
@property bool invalidateLayout;

- (bool)invalidateDownloadStatus;
- (bool)invalidateEverything;
- (bool)invalidateLayout;
- (bool)isAnimated;
- (void)setAnimated:(bool)arg1;
- (void)setInvalidateDownloadStatus:(bool)arg1;
- (void)setInvalidateEverything:(bool)arg1;
- (void)setInvalidateLayout:(bool)arg1;

@end