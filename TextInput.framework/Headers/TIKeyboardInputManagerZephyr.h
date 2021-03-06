/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TextInput-Structs.h>
#import <TextInput/XXUnknownSuperclass.h>

@class NSMutableString, TIWordTokenizer;

@interface TIKeyboardInputManagerZephyr : XXUnknownSuperclass {
	TIInputManagerZephyr *m_impl;	// 4 = 0x4
	NSMutableString *m_composedText;	// 8 = 0x8
	unsigned m_defaultCandidateIndex;	// 12 = 0xc
	TIWordTokenizer *m_wordTokenizer;	// 16 = 0x10
}
@property(assign) unsigned inputIndex;	// G=0x353fd; S=0x35431; converted property
@property(readonly, assign) unsigned defaultCandidateIndex;	// G=0x33dc9; converted property
- (id)init;	// 0x366d5
- (void)dealloc;	// 0x36645
- (BOOL)doesComposeText;	// 0x33cd1
- (id)externalStringToInternal:(id)internal;	// 0x33cd5
- (id)internalStringToExternal:(id)external;	// 0x33cd9
- (unsigned)internalIndexToExternal:(unsigned)external;	// 0x3651d
- (unsigned)externalIndexToInternal:(unsigned)internal;	// 0x36499
- (TIInputManagerZephyr *)initImplementation;	// 0x363b9
- (void)loadDictionaries;	// 0x36129
- (void)setCollatorLocale;	// 0x36119
- (void)setAutoCorrects:(BOOL)corrects;	// 0x360f1
- (void)setShallowPrediction:(BOOL)prediction;	// 0x360c9
- (void)setKeyboardEventsLagging:(BOOL)lagging;	// 0x33cdd
- (void)setInHardwareKeyboardMode:(BOOL)hardwareKeyboardMode;	// 0x33cfd
- (void)configureInputModeSpecificFeatures:(id)features withLayout:(id)layout;	// 0x33d21
- (void)setCalculatesChargedKeyProbabilities:(BOOL)probabilities;	// 0x33d25
- (void)clearDynamicDictionary;	// 0x33d29
- (id)addInput:(id)input flags:(unsigned)flags point:(CGPoint)point firstDelete:(unsigned *)aDelete fromVariantKey:(BOOL)variantKey;	// 0x35d51
- (void)setInput:(id)input;	// 0x35d3d
- (void)setInput:(id)input typedString:(id)string;	// 0x35bb1
- (id)deleteFromInput:(unsigned *)input;	// 0x3586d
- (void)clearInput;	// 0x35741
- (void)acceptInput;	// 0x35615
- (void)appendToInputContext:(id)inputContext;	// 0x35541
- (BOOL)removeSuffixOfInputContext:(id)inputContext;	// 0x35465
- (void)clearInputContext;	// 0x33d49
// converted property setter: - (void)setInputIndex:(unsigned)index;	// 0x35431
- (unsigned)wordHistoryDepth;	// 0x33d61
// converted property getter: - (unsigned)inputIndex;	// 0x353fd
- (unsigned)inputCount;	// 0x353c9
- (BOOL)inputEmpty;	// 0x353a9
- (id)inputString;	// 0x3529d
- (id)defaultCandidate;	// 0x3523d
- (void)addToTypingHistory:(id)typingHistory;	// 0x35155
- (void)textAccepted:(id)accepted;	// 0x3503d
- (void)increaseUserFrequency:(id)frequency;	// 0x34f55
- (void)decreaseUserFrequency:(id)frequency;	// 0x34e6d
- (void)inputLocationChanged;	// 0x34e51
- (id)shadowTyping;	// 0x34d61
- (void)setShift:(BOOL)shift;	// 0x33d85
- (BOOL)shouldShiftAfterChar:(unsigned short)aChar withSpaces:(int)spaces currentShift:(BOOL)shift;	// 0x33ea9
- (CFDictionaryRef)chargedKeyProbabilities;	// 0x33da9
- (void)checkAutocorrectionDictionaries;	// 0x34d31
- (id)autocorrection;	// 0x34bcd
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)terminator;	// 0x34ad5
- (BOOL)supportsShortcutConversion;	// 0x33dad
- (unsigned)maximumShortcutLengthAllowed;	// 0x34ab5
- (id)shortcutConversionForString:(id)string stringStartsInMiddleOfWord:(BOOL)word;	// 0x345f9
- (id)shortcutConversionForInput:(id)input andExistingString:(id)string existingStringStartsInMiddleOfWord:(BOOL)word;	// 0x3459d
- (BOOL)usesCandidateSelection;	// 0x33db1
- (id)candidates;	// 0x341b5
// converted property getter: - (unsigned)defaultCandidateIndex;	// 0x33dc9
- (void)registerCentroid:(CGPoint)centroid forKey:(id)key;	// 0x340f5
- (void)clearAllCentroids;	// 0x340f1
- (BOOL)canHandleKeyHitTest;	// 0x33dd9
- (void)clearKeyAreas;	// 0x33ddd
- (void)registerKeyArea:(CGPoint)area withRadii:(CGPoint)radii forKeyCode:(unsigned short)keyCode forLowerKey:(id)lowerKey forUpperKey:(id)upperKey;	// 0x33fb9
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift;	// 0x33e01
- (int)keyHitTest:(CGPoint)test touchStage:(int)stage atTime:(double)time withTouch:(id)touch forceShift:(BOOL)shift forcingKey:(int)key;	// 0x33e55
- (BOOL)keySlidIntoSwipe;	// 0x33f99
- (void)deleteFromStrokeHistory:(BOOL)strokeHistory;	// 0x33f71
- (BOOL)acceptsCharacter:(unsigned short)character;	// 0x33f25
- (void)setTypologyRecorder:(id)recorder;	// 0x33f05
@end
