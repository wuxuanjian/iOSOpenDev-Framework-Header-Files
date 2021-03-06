/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <SportsVoices/Slot.h>

@class SlotSequence;

@interface CompoundSlot : Slot {
	SlotSequence *_slots;	// 4 = 0x4
}
@property(readonly, assign) SlotSequence *slots;	// G=0x2259; @synthesize=_slots
// declared property getter: - (id)slots;	// 0x2259
- (void)dealloc;	// 0x220d
- (id)reversed;	// 0x21f5
- (id)description;	// 0x21dd
- (BOOL)matches:(id)matches;	// 0x21c5
- (id)initWithArray:(id)array;	// 0x2155
- (id)initFromPlist:(id)plist;	// 0x20e5
@end
