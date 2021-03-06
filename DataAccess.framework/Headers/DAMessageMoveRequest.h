/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/XXUnknownSuperclass.h>

@class NSString;

@interface DAMessageMoveRequest : XXUnknownSuperclass {
	NSString *_message;	// 4 = 0x4
	NSString *_fromFolder;	// 8 = 0x8
	NSString *_toFolder;	// 12 = 0xc
	id _context;	// 16 = 0x10
}
@property(retain) id context;	// G=0xdd65; S=0xdd79; @synthesize=_context
@property(readonly, assign) NSString *toFolder;	// G=0xdd55; @synthesize=_toFolder
@property(readonly, assign) NSString *fromFolder;	// G=0xdd45; @synthesize=_fromFolder
@property(readonly, assign) NSString *message;	// G=0xdd35; @synthesize=_message
// declared property setter: - (void)setContext:(id)context;	// 0xdd79
// declared property getter: - (id)context;	// 0xdd65
// declared property getter: - (id)toFolder;	// 0xdd55
// declared property getter: - (id)fromFolder;	// 0xdd45
// declared property getter: - (id)message;	// 0xdd35
- (void)dealloc;	// 0xdcad
- (id)description;	// 0xdc25
- (BOOL)isEqual:(id)equal;	// 0xdb0d
- (unsigned)hash;	// 0xda71
- (id)initMoveRequestWithMessage:(id)message fromFolder:(id)folder toFolder:(id)folder3;	// 0xd9e1
@end
