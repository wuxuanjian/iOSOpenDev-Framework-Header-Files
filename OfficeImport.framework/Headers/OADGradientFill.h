/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADRelativeRect, NSMutableArray, OADShade;

__attribute__((visibility("hidden")))
@interface OADGradientFill : OADFill {
@private
	NSMutableArray *mStops;	// 12 = 0xc
	BOOL mAreStopsOverridden;	// 16 = 0x10
	OADRelativeRect *mTileRect;	// 20 = 0x14
	BOOL mIsTileRectOverridden;	// 24 = 0x18
	int mFlipMode;	// 28 = 0x1c
	BOOL mIsFlipModeOverridden;	// 32 = 0x20
	BOOL mRotateWithShape;	// 33 = 0x21
	BOOL mIsRotateWithShapeOverridden;	// 34 = 0x22
	OADShade *mShade;	// 36 = 0x24
	BOOL mIsShadeOverridden;	// 40 = 0x28
}
@property(retain) id stops;	// G=0xce5e5; S=0x1c517d; converted property
@property(retain) id tileRect;	// G=0x2a1325; S=0xccc25; converted property
@property(assign) int flipMode;	// G=0x2a1355; S=0xccc75; converted property
@property(assign) BOOL rotateWithShape;	// G=0x2a13bd; S=0xccc95; converted property
@property(retain) id shade;	// G=0xceb01; S=0xccd99; converted property
+ (id)defaultProperties;	// 0xcc8f5
- (id)copyWithZone:(NSZone *)zone;	// 0x1c4f35
- (void)dealloc;	// 0xd059d
- (id)initWithDefaults;	// 0xcc93d
- (void)setParent:(id)parent;	// 0xccde9
// converted property getter: - (id)stops;	// 0xce5e5
// converted property setter: - (void)setStops:(id)stops;	// 0x1c517d
- (BOOL)areStopsOverridden;	// 0xce615
- (void)clearStops;	// 0xcd6bd
- (unsigned)stopCount;	// 0xce5bd
- (id)stopColorAtIndex:(unsigned)index;	// 0xce64d
- (float)stopPositionAtIndex:(unsigned)index;	// 0x2a12e9
- (void)addStopColor:(id)color position:(float)position;	// 0xcca91
// converted property getter: - (id)tileRect;	// 0x2a1325
// converted property setter: - (void)setTileRect:(id)rect;	// 0xccc25
- (BOOL)isTileRectOverridden;	// 0x1fc66d
// converted property getter: - (int)flipMode;	// 0x2a1355
// converted property setter: - (void)setFlipMode:(int)mode;	// 0xccc75
- (BOOL)isFlipModeOverridden;	// 0x2a1385
// converted property getter: - (BOOL)rotateWithShape;	// 0x2a13bd
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0xccc95
- (BOOL)isRotateWithShapeOverridden;	// 0x2a13ed
// converted property getter: - (id)shade;	// 0xceb01
// converted property setter: - (void)setShade:(id)shade;	// 0xccd99
- (BOOL)isShadeOverridden;	// 0xceb31
- (void)setStyleColor:(id)color;	// 0x1c526d
- (unsigned)hash;	// 0x2a1425
- (BOOL)isEqual:(id)equal;	// 0xcdec5
@end