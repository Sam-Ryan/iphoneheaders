/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetNode.h>

@class SCNTorus;

@interface OKWidgetTorusNode : OKWidgetNode {

	SCNTorus* _thorus;

}
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(double)settingRingRadius;
-(void)setSettingRingRadius:(double)arg1 ;
-(double)settingPipeRadius;
-(void)setSettingPipeRadius:(double)arg1 ;
-(long long)settingRingSegmentCount;
-(void)setSettingRingSegmentCount:(long long)arg1 ;
-(long long)settingPipeSegmentCount;
-(void)setSettingPipeSegmentCount:(long long)arg1 ;
@end

