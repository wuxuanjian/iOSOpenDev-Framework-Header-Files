/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAlbumChangeNotification.h>
#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class PLGenericAlbum, NSDictionary;

@interface PLAlbumChangeNotification : PLContainerChangeNotification {
@private
	BOOL _titleDidChange;	// 4 = 0x4
	BOOL _keyAssetDidChange;	// 5 = 0x5
	NSDictionary *_userInfo;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL keyAssetDidChange;	// G=0x64c6d; 
@property(readonly, assign, nonatomic) BOOL titleDidChange;	// G=0x64c2d; 
@property(readonly, assign, nonatomic) PLGenericAlbum *album;	// G=0x64c1d; 
@property(readonly, retain) NSDictionary *userInfo;	// G=0x649bd; converted property
// declared property getter: - (BOOL)keyAssetDidChange;	// 0x64c6d
// declared property getter: - (BOOL)titleDidChange;	// 0x64c2d
// declared property getter: - (id)album;	// 0x64c1d
- (id)description;	// 0x64afd
// converted property getter: - (id)userInfo;	// 0x649bd
- (id)name;	// 0x649ad
- (void)dealloc;	// 0x64959
@end

@interface PLAlbumChangeNotification (Internal)
+ (id)notificationWithAlbum:(id)album snapshot:(id)snapshot changedAssets:(id)assets;	// 0x64cad
- (void)_calculateDiffs;	// 0x64da9
- (id)_contentRelationshipName;	// 0x64d9d
- (id)notificaionForDerivedAlbum:(id)derivedAlbum;	// 0x64cf5
@end