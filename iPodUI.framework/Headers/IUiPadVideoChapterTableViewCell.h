/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/iPodUI-Structs.h>
#import <iPodUI/IUiPadVideoPartTableViewCell.h>

@class MPMediaItem, IUiPadVideoMovieChapterTableViewCellContentView;

@interface IUiPadVideoChapterTableViewCell : IUiPadVideoPartTableViewCell {
	MPMediaItem *_mediaItem;	// 268 = 0x10c
	unsigned _chapterIndex;	// 272 = 0x110
}
@property(retain, nonatomic) MPMediaItem *mediaItem;	// G=0x35979; S=0x35989; @synthesize=_mediaItem
@property(readonly, assign, nonatomic) IUiPadVideoMovieChapterTableViewCellContentView *videoChapterContentView;	// @dynamic
+ (CGSize)videoImageSize;	// 0x352fd
+ (Class)contentViewClass;	// 0x352e1
// declared property setter: - (void)setMediaItem:(id)item;	// 0x35989
// declared property getter: - (id)mediaItem;	// 0x35979
- (BOOL)imageRequestIsValid:(id)valid;	// 0x35945
- (id)videoImageRequest;	// 0x357c9
- (void)updateContentView;	// 0x35561
- (void)prepareForReuse;	// 0x35521
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x354dd
- (void)layoutSubviews;	// 0x353cd
- (void)dealloc;	// 0x35389
- (void)setMediaItem:(id)item chapterIndex:(unsigned)index;	// 0x3531d
@end
