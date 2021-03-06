/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UILayoutItem.h>
#import <libobjc.A.dylib/NSISVariableDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIView, NSString, NSISVariable, NSArray, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension;

@interface UILayoutGuide : NSObject <_UILayoutItem, NSISVariableDelegate, NSCoding> {

	CGRect _layoutFrame;
	BOOL _isLayoutFrameValid;
	UIView* _unsafeUnretainedOwningView;
	BOOL _allowOwningViewSetting;
	BOOL _isLockedToOwningView;
	BOOL _useManualLayoutFrame;
	BOOL __shouldBeArchived;
	UIView* _owningView;
	NSString* _identifier;
	NSISVariable* _minXVariable;
	NSISVariable* _minYVariable;
	NSISVariable* _boundsWidthVariable;
	NSISVariable* _boundsHeightVariable;
	NSArray* _systemConstraints;
	NSLayoutXAxisAnchor* _leadingAnchor;
	NSLayoutXAxisAnchor* _trailingAnchor;
	NSLayoutXAxisAnchor* _leftAnchor;
	NSLayoutXAxisAnchor* _rightAnchor;
	NSLayoutYAxisAnchor* _topAnchor;
	NSLayoutYAxisAnchor* _bottomAnchor;
	NSLayoutDimension* _widthAnchor;
	NSLayoutDimension* _heightAnchor;
	NSLayoutXAxisAnchor* _centerXAnchor;
	NSLayoutYAxisAnchor* _centerYAnchor;

}

@property (nonatomic,readonly) CGRect layoutFrame; 
@property (assign,nonatomic,__weak) UIView * owningView;                                                                        //@synthesize owningView=_owningView - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSLayoutXAxisAnchor * leadingAnchor;                                                                       //@synthesize leadingAnchor=_leadingAnchor - In the implementation block
@property (readonly) NSLayoutXAxisAnchor * trailingAnchor;                                                                      //@synthesize trailingAnchor=_trailingAnchor - In the implementation block
@property (readonly) NSLayoutXAxisAnchor * leftAnchor;                                                                          //@synthesize leftAnchor=_leftAnchor - In the implementation block
@property (readonly) NSLayoutXAxisAnchor * rightAnchor;                                                                         //@synthesize rightAnchor=_rightAnchor - In the implementation block
@property (readonly) NSLayoutYAxisAnchor * topAnchor;                                                                           //@synthesize topAnchor=_topAnchor - In the implementation block
@property (readonly) NSLayoutYAxisAnchor * bottomAnchor;                                                                        //@synthesize bottomAnchor=_bottomAnchor - In the implementation block
@property (readonly) NSLayoutDimension * widthAnchor;                                                                           //@synthesize widthAnchor=_widthAnchor - In the implementation block
@property (readonly) NSLayoutDimension * heightAnchor;                                                                          //@synthesize heightAnchor=_heightAnchor - In the implementation block
@property (readonly) NSLayoutXAxisAnchor * centerXAnchor;                                                                       //@synthesize centerXAnchor=_centerXAnchor - In the implementation block
@property (readonly) NSLayoutYAxisAnchor * centerYAnchor;                                                                       //@synthesize centerYAnchor=_centerYAnchor - In the implementation block
@property (setter=_setMinXVariable:,nonatomic,retain) NSISVariable * _minXVariable;                                             //@synthesize minXVariable=_minXVariable - In the implementation block
@property (setter=_setMinYVariable:,nonatomic,retain) NSISVariable * _minYVariable;                                             //@synthesize minYVariable=_minYVariable - In the implementation block
@property (setter=_setBoundsWidthVariable:,nonatomic,retain) NSISVariable * _boundsWidthVariable;                               //@synthesize boundsWidthVariable=_boundsWidthVariable - In the implementation block
@property (setter=_setBoundsHeightVariable:,nonatomic,retain) NSISVariable * _boundsHeightVariable;                             //@synthesize boundsHeightVariable=_boundsHeightVariable - In the implementation block
@property (assign,setter=_setShouldBeArchived:,nonatomic) BOOL _shouldBeArchived;                                               //@synthesize _shouldBeArchived=__shouldBeArchived - In the implementation block
@property (assign,setter=_setLockedToOwningView:,getter=_isLockedToOwningView,nonatomic) BOOL _lockedToOwningView;              //@synthesize isLockedToOwningView=_isLockedToOwningView - In the implementation block
@property (setter=_setSystemConstraints:,nonatomic,retain) NSArray * _systemConstraints;                                        //@synthesize systemConstraints=_systemConstraints - In the implementation block
@property (assign,setter=_setAllowOwningViewSetting:,nonatomic) BOOL _allowOwningViewSetting;                                   //@synthesize allowOwningViewSetting=_allowOwningViewSetting - In the implementation block
@property (nonatomic,readonly) BOOL _useManualLayoutFrame;                                                                      //@synthesize useManualLayoutFrame=_useManualLayoutFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_defaultSpacingBetweenGuidesForResolvingSymbolicConstant;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSString *)identifier;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UIView *)owningView;
-(BOOL)_isLockedToOwningView;
-(void)_setAllowOwningViewSetting:(BOOL)arg1 ;
-(void)setOwningView:(UIView *)arg1 ;
-(BOOL)_shouldBeArchived;
-(void)_setLockedToOwningView:(BOOL)arg1 ;
-(void)_owningViewIsDeallocating;
-(NSArray *)_systemConstraints;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)_setSystemConstraints:(id)arg1 ;
-(id)nsli_minXVariable;
-(id)nsli_minYVariable;
-(id)nsli_boundsWidthVariable;
-(id)nsli_boundsHeightVariable;
-(id)nsli_contentWidthVariable;
-(id)nsli_contentHeightVariable;
-(NSISVariable *)_minXVariable;
-(NSISVariable *)_minYVariable;
-(NSISVariable *)_boundsWidthVariable;
-(NSISVariable *)_boundsHeightVariable;
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(NSLayoutXAxisAnchor *)leftAnchor;
-(NSLayoutXAxisAnchor *)rightAnchor;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutDimension *)heightAnchor;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(void)_setManualLayoutFrame:(CGRect)arg1 ;
-(id)nsli_superitem;
-(void)forwardInvocation:(id)arg1 ;
-(CGRect)layoutFrame;
-(void*)_referenceView;
-(void)nsli_addConstraint:(id)arg1 ;
-(BOOL)nsli_removeConstraint:(id)arg1 ;
-(id)nsli_installedConstraints;
-(double)nsli_marginOffsetForAttribute:(long long)arg1 ;
-(id)nsli_description;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4 ;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4 ;
-(id)nsli_layoutEngine;
-(CGSize)nsli_convertSizeToEngineSpace:(CGSize)arg1 ;
-(CGSize)nsli_convertSizeFromEngineSpace:(CGSize)arg1 ;
-(BOOL)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4 ;
-(BOOL)nsli_descriptionIncludesPointer;
-(unsigned long long)nsli_autoresizingMask;
-(BOOL)nsli_isFlipped;
-(BOOL)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1 ;
-(void)_setOwningView:(id)arg1 ;
-(void)_snipReferencingConstraints;
-(id)_createAnchorWithClass:(Class)arg1 attribute:(long long)arg2 ;
-(BOOL)_allowOwningViewSetting;
-(void)_setMinXVariable:(id)arg1 ;
-(void)_setMinYVariable:(id)arg1 ;
-(void)_setBoundsWidthVariable:(id)arg1 ;
-(void)_setBoundsHeightVariable:(id)arg1 ;
-(BOOL)_useManualLayoutFrame;
-(void)_setShouldBeArchived:(BOOL)arg1 ;
@end

