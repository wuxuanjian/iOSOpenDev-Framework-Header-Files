/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADShapeGeometry : XXUnknownSuperclass {
@private
	BOOL mIsEscher;	// 4 = 0x4
	NSMutableDictionary *mAdjustValues;	// 8 = 0x8
}
@property(assign) BOOL isEscher;	// G=0x14c971; S=0x7b1b5; converted property
- (id)init;	// 0x7b151
- (void)dealloc;	// 0x8cd2d
// converted property getter: - (BOOL)isEscher;	// 0x14c971
// converted property setter: - (void)setIsEscher:(BOOL)escher;	// 0x7b1b5
- (void)setAdjustValue:(long)value atIndex:(unsigned)index;	// 0xcbe51
- (long)adjustValueAtIndex:(unsigned)index;	// 0x14c6e1
- (BOOL)hasAdjustValueAtIndex:(unsigned)index;	// 0x2a618d
- (id)adjustValues;	// 0xc8a11
@end