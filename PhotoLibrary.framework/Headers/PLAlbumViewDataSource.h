/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */




@protocol PLAlbumViewDataSource <NSObject>
- (id)albumView:(id)view textBadgeForPhotoAtIndex:(unsigned)index;
- (void)albumView:(id)view imageCount:(unsigned *)count videoCount:(unsigned *)count3 otherCount:(unsigned *)count4 pendingCount:(unsigned *)count5 importOperation:(int *)operation;
- (id)albumView:(id)view imageDataForPhotoAtIndex:(unsigned)index imageWidth:(int *)width imageHeight:(int *)height bytesPerRow:(int *)row dataWidth:(int *)width6 dataHeight:(int *)height7 imageDataOffset:(int *)offset;
- (unsigned)numberOfPhotosForAlbumView:(id)albumView;
@optional
- (void)albumViewPhotoMoveDidComplete:(id)albumViewPhotoMove;
- (void)albumView:(id)view movePhotoAtIndex:(unsigned)index toIndex:(unsigned)index3;
@end

