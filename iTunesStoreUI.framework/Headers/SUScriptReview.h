/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber, ISReview;

@interface SUScriptReview : SUScriptObject {
	ISReview *_review;	// 36 = 0x24
}
@property(retain) NSString *title;	// G=0x83ac1; S=0x839e1; 
@property(retain) NSNumber *rating;	// G=0x83435; S=0x8393d; 
@property(retain) id nicknameIsConfirmed;	// G=0x833c5; S=0x83899; 
@property(retain) NSString *nickname;	// G=0x83355; S=0x837b9; 
@property(retain) NSString *itemType;	// G=0x83301; S=0x83705; 
@property(retain) NSString *infoURL;	// G=0x832a1; S=0x83585; 
@property(readonly, assign) id hasSavedDraft;	// G=0x83231; 
@property(retain) NSString *body;	// G=0x831b5; S=0x834a5; 
@property(readonly, assign) NSNumber *adamID;	// G=0x83145; 
+ (void)initialize;	// 0x83c8d
+ (id)webScriptNameForSelector:(SEL)selector;	// 0x83bd5
+ (id)webScriptNameForKey:(const char *)key;	// 0x83b31
- (id)scriptAttributeKeys;	// 0x83c2d
- (id)attributeKeys;	// 0x83c1d
// declared property getter: - (id)title;	// 0x83ac1
// declared property setter: - (void)setTitle:(id)title;	// 0x839e1
// declared property setter: - (void)setRating:(id)rating;	// 0x8393d
// declared property setter: - (void)setNicknameIsConfirmed:(id)confirmed;	// 0x83899
// declared property setter: - (void)setNickname:(id)nickname;	// 0x837b9
// declared property setter: - (void)setItemType:(id)type;	// 0x83705
// declared property setter: - (void)setInfoURL:(id)url;	// 0x83585
// declared property setter: - (void)setBody:(id)body;	// 0x834a5
// declared property getter: - (id)rating;	// 0x83435
// declared property getter: - (id)nicknameIsConfirmed;	// 0x833c5
// declared property getter: - (id)nickname;	// 0x83355
// declared property getter: - (id)itemType;	// 0x83301
// declared property getter: - (id)infoURL;	// 0x832a1
// declared property getter: - (id)hasSavedDraft;	// 0x83231
- (id)_className;	// 0x83225
// declared property getter: - (id)body;	// 0x831b5
// declared property getter: - (id)adamID;	// 0x83145
- (id)saveAsDraft;	// 0x830d5
- (id)restoreFromDraft;	// 0x83065
- (id)removeDraft;	// 0x82ff5
- (id)copyReview;	// 0x82fa5
- (void)dealloc;	// 0x82f59
- (id)initWithReview:(id)review;	// 0x82ed5
- (id)init;	// 0x82ec1
@end
