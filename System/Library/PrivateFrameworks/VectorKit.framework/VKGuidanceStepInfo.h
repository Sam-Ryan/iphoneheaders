/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:03 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VKGuidanceStepInfo : NSObject {

	NSString* _roadName;
	int _routePoint;

}

@property (nonatomic,retain,readonly) NSString * roadName;              //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) int routePoint;                          //@synthesize routePoint=_routePoint - In the implementation block
-(void)dealloc;
-(NSString *)roadName;
-(id)initWithRoadName:(id)arg1 point:(int)arg2 ;
-(int)routePoint;
@end

