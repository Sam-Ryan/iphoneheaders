/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXFeatureViewDelegate <NSObject>
@optional
-(void)featureView:(id)arg1 didChangeState:(BOOL)arg2;
-(void)presentOptionsForFeatureView:(id)arg1;
-(void)featureView:(id)arg1 didChangeTimeRestrictionDuration:(long long)arg2 timeRestrictionsEnabled:(BOOL)arg3;

@required
-(id)styleProviderForFeatureView:(id)arg1;

@end

