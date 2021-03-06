/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/ISURLOperation.h>

@class NSNumber;
@protocol ISStoreURLOperationDelegate;

@interface ISStoreURLOperation : ISURLOperation {
	NSNumber *_authenticatedDSID;	// 100 = 0x64
	BOOL _canSendGUIDParameter;	// 104 = 0x68
	BOOL _needsAuthentication;	// 105 = 0x69
	BOOL _needsURLBag;	// 106 = 0x6a
	BOOL _urlKnownToBeTrusted;	// 107 = 0x6b
	BOOL _useUserSpecificURLBag;	// 108 = 0x6c
}
@property(retain) NSNumber *authenticatedDSID;	// G=0x122bd; S=0x122d1; @synthesize=_authenticatedDSID
@property(assign) BOOL useUserSpecificURLBag;	// G=0x12355; S=0x12365; @synthesize=_useUserSpecificURLBag
@property(assign) BOOL needsAuthentication;	// G=0x122f5; S=0x12305; @synthesize=_needsAuthentication
@property(assign) BOOL urlKnownToBeTrusted;	// G=0x12335; S=0x12345; @synthesize=_urlKnownToBeTrusted
@property(assign) BOOL needsURLBag;	// G=0x12315; S=0x12325; @synthesize=_needsURLBag
@property(assign) BOOL canSendGUIDParameter;	// G=0x10b1d; S=0x10b59; 
@property(assign) id<ISStoreURLOperationDelegate> delegate;	// @dynamic
+ (id)_restrictionsHeaderValue;	// 0x11665
+ (void)_addITunesStoreHeadersToRequest:(id)request withBagContext:(id)bagContext;	// 0x1122d
+ (id)propertyListOperationWithURLBagKey:(id)urlbagKey;	// 0x10a41
+ (id)pingOperationWithUrl:(id)url;	// 0x10991
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;	// 0x107f9
+ (void)handleITunesStoreResponseHeaders:(id)headers;	// 0x106f1
+ (void)addITunesStoreHeadersToRequest:(id)request;	// 0x106b1
// declared property setter: - (void)setUseUserSpecificURLBag:(BOOL)bag;	// 0x12365
// declared property getter: - (BOOL)useUserSpecificURLBag;	// 0x12355
// declared property setter: - (void)setUrlKnownToBeTrusted:(BOOL)beTrusted;	// 0x12345
// declared property getter: - (BOOL)urlKnownToBeTrusted;	// 0x12335
// declared property setter: - (void)setNeedsURLBag:(BOOL)bag;	// 0x12325
// declared property getter: - (BOOL)needsURLBag;	// 0x12315
// declared property setter: - (void)setNeedsAuthentication:(BOOL)authentication;	// 0x12305
// declared property getter: - (BOOL)needsAuthentication;	// 0x122f5
// declared property setter: - (void)setAuthenticatedDSID:(id)dsid;	// 0x122d1
// declared property getter: - (id)authenticatedDSID;	// 0x122bd
- (id)_urlFromURLBagForRequestProperties:(id)requestProperties inBagContext:(id)bagContext;	// 0x1225d
- (id)_storeFrontIdentifier;	// 0x121cd
- (void)_runURLOperation;	// 0x11ea5
- (id)_copyURLBagContext;	// 0x11d81
- (BOOL)_canSendTokenToURL:(id)url;	// 0x11d1d
- (BOOL)_authenticateReturningError:(id *)error;	// 0x11c45
- (void)_addStandardQueryParametersForURL:(id)url;	// 0x119ed
- (id)_account;	// 0x11985
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x1114d
- (void)run;	// 0x10ffd
- (id)newRequestWithURL:(id)url;	// 0x10e29
- (void)handleResponse:(id)response;	// 0x10db9
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider;	// 0x10d49
- (id)_copyAuthenticationContext;	// 0x10bdd
- (id)authenticatedAccountDSID;	// 0x10b99
// declared property setter: - (void)setCanSendGUIDParameter:(BOOL)parameter;	// 0x10b59
// declared property getter: - (BOOL)canSendGUIDParameter;	// 0x10b1d
- (void)dealloc;	// 0x1065d
- (id)init;	// 0x10611
@end
