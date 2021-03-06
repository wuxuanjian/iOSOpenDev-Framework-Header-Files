/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>

@class NSMutableArray;
@protocol PLMoviePlayerControllerDelegate;

@interface PLMoviePlayerController : XXUnknownSuperclass {
	NSMutableArray *_delegateStack;	// 156 = 0x9c
	id<PLMoviePlayerControllerDelegate> _playerDelegate;	// 160 = 0xa0
}
@property(assign) id delegate;	// G=0xd0411; S=0xd0379; converted property
+ (void)setVideoIsRemaking:(BOOL)remaking;	// 0xd01b5
+ (BOOL)movieWillBecomeReady;	// 0xd01a5
+ (void)setMovieWillBecomeReady:(BOOL)becomeReady;	// 0xd0195
+ (id)sharedMoviePlayerController;	// 0xd0075
+ (void)reset;	// 0xd0021
- (void)setMovieWithPath:(id)path;	// 0xd0421
// converted property getter: - (id)delegate;	// 0xd0411
// converted property setter: - (void)setDelegate:(id)delegate;	// 0xd0379
- (void)_updateCurrentDelegate;	// 0xd0325
- (void)removeNextDelegate:(id)delegate;	// 0xd02e9
- (void)addNextDelegate:(id)delegate;	// 0xd0295
- (void)dealloc;	// 0xd0235
- (id)initWithPlayerSize:(CGSize)playerSize options:(unsigned)options;	// 0xd01d1
@end
