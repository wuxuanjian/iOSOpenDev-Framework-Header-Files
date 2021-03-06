/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <Conference/CNFRegFirstRunController.h>
#import <Conference/CNFRegRegionChooserDelegate.h>

@class NSArray, PSSpecifier, NSString;

@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate> {
@private
	NSString *_currentRegionID;	// 292 = 0x124
	NSString *_currentPhoneValue;	// 296 = 0x128
	PSSpecifier *_countryFieldSpecifier;	// 300 = 0x12c
	NSArray *_phoneNumberSpecifiers;	// 304 = 0x130
	PSSpecifier *_phoneNumberGroupSpecifier;	// 308 = 0x134
	PSSpecifier *_phoneNumberFieldSpecifier;	// 312 = 0x138
	NSArray *_regionData;	// 316 = 0x13c
	BOOL _isLoading;	// 320 = 0x140
	BOOL _isError;	// 321 = 0x141
	id _regionListChangeObserver;	// 324 = 0x144
}
@property(copy, nonatomic) NSString *currentRegionID;	// G=0x2bba5; S=0x2bc8d; @synthesize=_currentRegionID
@property(copy, nonatomic) NSString *currentPhoneValue;	// G=0x2bb95; S=0x2bcb1; @synthesize=_currentPhoneValue
@property(retain, nonatomic) NSArray *regionData;	// G=0x2bb85; S=0x2bcd5; @synthesize=_regionData
- (id)initWithRegController:(id)regController;	// 0x2da1d
- (void)dealloc;	// 0x2bbb5
- (id)bundle;	// 0x2da19
- (id)specifierList;	// 0x2d991
- (id)controllerForRowAtIndexPath:(id)indexPath;	// 0x2d889
- (id)logName;	// 0x2bb79
- (id)validationString;	// 0x2d815
- (id)countryList;	// 0x2d805
- (void)_loadRegionsIfNecessary;	// 0x2d781
- (void)_loadInitialValues;	// 0x2d611
- (void)viewWillAppear:(BOOL)view;	// 0x2d565
- (void)viewDidAppear:(BOOL)view;	// 0x2d511
- (void)viewWillDisappear:(BOOL)view;	// 0x2d4c1
- (void)viewDidDisappear:(BOOL)view;	// 0x2d46d
- (void)_startListeningForRegionListChanges;	// 0x2d36d
- (void)_stopListeningForRegionListChanges;	// 0x2d2e5
- (void)_handleRegionListLoad;	// 0x2d219
- (void)_updateUI;	// 0x2cfc9
- (void)_updateControllerState;	// 0x2cda5
- (void)_setFieldsEnabled:(BOOL)enabled animated:(BOOL)animated;	// 0x2cd4d
- (id)_currentRegion;	// 0x2ccfd
- (id)currentCountryValueForSpecifier:(id)specifier;	// 0x2cc3d
- (void)_refreshCountryFieldAnimated:(BOOL)animated;	// 0x2cc19
- (void)_showPhoneField:(BOOL)field animated:(BOOL)animated;	// 0x2cb3d
- (id)_phoneTextField;	// 0x2cae5
- (id)currentPhoneCompatibleCountryCode;	// 0x2caa5
- (id)_unformattedPhoneNumber:(id)number;	// 0x2ca81
- (id)currentPhoneNumberForSpecifier:(id)specifier;	// 0x2c9d9
- (void)setCurrentPhoneNumber:(id)number forSpecifier:(id)specifier;	// 0x2c985
- (void)_refreshPhoneFieldAnimated:(BOOL)animated;	// 0x2c92d
- (void)_failValidationWithError:(id)error;	// 0x2c801
- (void)_finishValidation;	// 0x2c779
- (void)_rightButtonTapped;	// 0x2c455
- (void)_startTimeout;	// 0x2c43d
- (void)_handleTimeout;	// 0x2c381
- (void)_showCountryPickerAnimated:(BOOL)animated;	// 0x2c071
- (void)_hideCountryPickerAnimated:(BOOL)animated;	// 0x2bff9
- (void)showCountryPicker;	// 0x2bfe5
- (void)hideCountryPicker;	// 0x2bfd1
- (void)regionChooser:(id)chooser selectedRegionID:(id)anId;	// 0x2bf91
- (void)_buildCountryFieldSpecifierCache:(id)cache;	// 0x2bf39
- (void)_buildPhoneNumberSpecifierCache:(id)cache;	// 0x2bdb9
- (void)_buildSpecifierCache:(id)cache;	// 0x2bd89
- (void)_setupEventHandlers;	// 0x2bcfd
// declared property getter: - (id)regionData;	// 0x2bb85
// declared property setter: - (void)setRegionData:(id)data;	// 0x2bcd5
// declared property getter: - (id)currentPhoneValue;	// 0x2bb95
// declared property setter: - (void)setCurrentPhoneValue:(id)value;	// 0x2bcb1
// declared property getter: - (id)currentRegionID;	// 0x2bba5
// declared property setter: - (void)setCurrentRegionID:(id)anId;	// 0x2bc8d
@end
