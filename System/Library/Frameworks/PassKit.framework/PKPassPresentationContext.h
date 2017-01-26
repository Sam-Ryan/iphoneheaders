/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PKPassPresentationContext : NSObject {

	BOOL _animated;
	BOOL _wasAutomaticallySelected;
	NSArray* _additionalPassUniqueIdentifiers;
	id _userInfo;

}

@property (assign,nonatomic) BOOL animated;                                        //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) NSArray * additionalPassUniqueIdentifiers;              //@synthesize additionalPassUniqueIdentifiers=_additionalPassUniqueIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL wasAutomaticallySelected;                        //@synthesize wasAutomaticallySelected=_wasAutomaticallySelected - In the implementation block
@property (nonatomic,copy) id userInfo;                                            //@synthesize userInfo=_userInfo - In the implementation block
+(id)contextWithAnimation:(BOOL)arg1 wasAutomaticallySelected:(BOOL)arg2 additionalPassUniqueIdentifiers:(id)arg3 ;
+(id)contextWithAnimation:(BOOL)arg1 ;
+(id)contextWithAnimation:(BOOL)arg1 additionalPassUniqueIdentifiers:(id)arg2 ;
+(id)contextWithAnimation:(BOOL)arg1 wasAutomaticallySelected:(BOOL)arg2 additionalPassUniqueIdentifiers:(id)arg3 userInfo:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setAdditionalPassUniqueIdentifiers:(NSArray *)arg1 ;
-(void)setWasAutomaticallySelected:(BOOL)arg1 ;
-(NSArray *)additionalPassUniqueIdentifiers;
-(BOOL)wasAutomaticallySelected;
@end

