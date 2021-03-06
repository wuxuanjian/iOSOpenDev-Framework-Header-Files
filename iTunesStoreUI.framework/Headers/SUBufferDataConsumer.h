/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUCollectingDataConsumer.h>
#import <iTunesStoreUI/XXUnknownSuperclass.h>

@class NSMutableData, NSData;

@interface SUBufferDataConsumer : XXUnknownSuperclass <SUCollectingDataConsumer> {
	NSMutableData *_dataBuffer;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSData *consumedData;	// G=0xcb381; 
- (void)finish;	// 0xcb391
// declared property getter: - (id)consumedData;	// 0xcb381
- (int)consumeData:(id)data;	// 0xcb345
- (id)mutableConsumedData;	// 0xcb335
- (void)dealloc;	// 0xcb2e9
- (id)init;	// 0xcb285
@end
