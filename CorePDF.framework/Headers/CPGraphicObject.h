/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CorePDF/CPChunk.h>
#import <CorePDF/CorePDF-Structs.h>

@class CPTextLine, CPParagraph;
@protocol CPGraphicUser;

@interface CPGraphicObject : CPChunk {
	unsigned clipIndex;	// 52 = 0x34
	CGRect renderedBounds;	// 56 = 0x38
	int wrapType;	// 72 = 0x48
	float margin;	// 76 = 0x4c
	float baselineOffset;	// 80 = 0x50
	BOOL canContainText;	// 84 = 0x54
	BOOL isInZoneBorder;	// 85 = 0x55
	int zoneGraphicType;	// 88 = 0x58
	CPTextLine *anchoringTextLine;	// 92 = 0x5c
	CPParagraph *anchoringParagraph;	// 96 = 0x60
	CPChunk<CPGraphicUser> *user;	// 100 = 0x64
}
@property(assign, nonatomic) unsigned clipIndex;	// G=0x8349; S=0x8359; @synthesize
@property(retain, nonatomic) CPParagraph *anchoringParagraph;	// G=0x8339; S=0x83fd; @synthesize
@property(assign) int wrapType;	// G=0x8251; S=0x823d; converted property
@property(assign) float margin;	// G=0x8271; S=0x8261; converted property
@property(assign) float baselineOffset;	// G=0x8291; S=0x8281; converted property
@property(assign) BOOL canContainText;	// G=0x82a9; S=0x82b9; converted property
@property(assign) BOOL isInZoneBorder;	// G=0x82c9; S=0x82d9; converted property
@property(assign) int zoneGraphicType;	// G=0x82e9; S=0x82f9; converted property
@property(retain) CPTextLine *anchoringTextLine;	// G=0x8319; S=0x8309; converted property
@property(retain) id user;	// G=0x8329; S=0x8425; converted property
@property(readonly, assign) CGRect renderedBounds;	// G=0x8539; converted property
- (id)init;	// 0x8369
// converted property getter: - (CGRect)renderedBounds;	// 0x8539
// converted property setter: - (void)setWrapType:(int)type;	// 0x823d
- (unsigned short)unicode;	// 0x824d
// converted property getter: - (int)wrapType;	// 0x8251
// converted property setter: - (void)setMargin:(float)margin;	// 0x8261
// converted property getter: - (float)margin;	// 0x8271
// converted property setter: - (void)setBaselineOffset:(float)offset;	// 0x8281
// converted property getter: - (float)baselineOffset;	// 0x8291
- (BOOL)isNarrow;	// 0x84a5
- (BOOL)canBeContainer;	// 0x845d
- (BOOL)isVisible;	// 0x82a1
- (BOOL)isIndivisible;	// 0x82a5
// converted property getter: - (BOOL)canContainText;	// 0x82a9
// converted property setter: - (void)setCanContainText:(BOOL)text;	// 0x82b9
// converted property getter: - (BOOL)isInZoneBorder;	// 0x82c9
// converted property setter: - (void)setIsInZoneBorder:(BOOL)zoneBorder;	// 0x82d9
// converted property getter: - (int)zoneGraphicType;	// 0x82e9
// converted property setter: - (void)setZoneGraphicType:(int)type;	// 0x82f9
// converted property setter: - (void)setAnchoringTextLine:(id)line;	// 0x8309
// converted property getter: - (id)anchoringTextLine;	// 0x8319
// converted property setter: - (void)setUser:(id)user;	// 0x8425
// converted property getter: - (id)user;	// 0x8329
// declared property getter: - (id)anchoringParagraph;	// 0x8339
// declared property setter: - (void)setAnchoringParagraph:(id)paragraph;	// 0x83fd
// declared property getter: - (unsigned)clipIndex;	// 0x8349
// declared property setter: - (void)setClipIndex:(unsigned)index;	// 0x8359
@end