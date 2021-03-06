/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUSongsDataSource.h>
#import <iPodUI/iPodUI-Structs.h>


@interface IUGeniusDataSource : IUSongsDataSource {
}
@property(readonly, assign, nonatomic, getter=isDeletablePlaylist) BOOL deletablePlaylist;	// G=0x3be01; 
@property(readonly, assign, nonatomic, getter=isActivePlaylist) BOOL activePlaylist;	// G=0x3bdbd; 
- (void)_backingStoreChangedNotification:(id)notification;	// 0x3cd95
- (id)_getMoreSongsURL;	// 0x3ccc5
- (void)_getMoreSongs:(id)songs;	// 0x3cbf9
- (id)_getMoreSongsLikeThisActionRow;	// 0x3cb5d
- (id)_seedItem;	// 0x3cb15
- (void)reloadActionRows;	// 0x3c999
- (id)playlist;	// 0x3c83d
- (id)title;	// 0x3c805
- (BOOL)showShuffleButtonWhenApplicable;	// 0x3c801
- (id)cellConfigurationForIndex:(unsigned)index artworkLoadingCompletionHandler:(id)handler;	// 0x3c761
- (BOOL)moveIndex:(unsigned)index toIndex:(unsigned)index2;	// 0x3c5bd
- (BOOL)deleteIndexesInRange:(NSRange)range;	// 0x3c3a9
- (void)_mutateQueriesEntitiesAtIndex:(unsigned)index withBlock:(id)block;	// 0x3c2b1
- (id)entitiesForQuery:(id)query;	// 0x3c225
- (id)deleteConfirmationAlertViewForIndex:(unsigned)index;	// 0x3c221
- (id)deleteConfirmationSheetForIndex:(unsigned)index;	// 0x3c21d
- (BOOL)allowsRearrange;	// 0x3c1d1
- (BOOL)allowsDeletion;	// 0x3c185
- (void)savePlaylist;	// 0x3c099
- (BOOL)refreshPlaylist:(id *)playlist;	// 0x3be45
// declared property getter: - (BOOL)isDeletablePlaylist;	// 0x3be01
// declared property getter: - (BOOL)isActivePlaylist;	// 0x3bdbd
- (BOOL)deletePlaylist;	// 0x3bcd5
- (void)dealloc;	// 0x3bc65
- (id)init;	// 0x3bbe5
@end
