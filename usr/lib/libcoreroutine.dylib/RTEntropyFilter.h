/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSCountedSet;

@interface RTEntropyFilter : NSObject <NSSecureCoding> {

	NSCountedSet* _appLaunchCounter;
	NSCountedSet* _appLaunchInMomentsCounter;
	double _maximumEntropy;

}

@property (nonatomic,retain) NSCountedSet * appLaunchCounter;                       //@synthesize appLaunchCounter=_appLaunchCounter - In the implementation block
@property (nonatomic,retain) NSCountedSet * appLaunchInMomentsCounter;              //@synthesize appLaunchInMomentsCounter=_appLaunchInMomentsCounter - In the implementation block
@property (assign,nonatomic) double maximumEntropy;                                 //@synthesize maximumEntropy=_maximumEntropy - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithAppLaunchCountedSet:(id)arg1 appLaunchInMomentCountedSet:(id)arg2 ;
-(void)fetchDefaultValues;
-(NSCountedSet *)appLaunchCounter;
-(NSCountedSet *)appLaunchInMomentsCounter;
-(void)setAppLaunchCounter:(NSCountedSet *)arg1 ;
-(void)setAppLaunchInMomentsCounter:(NSCountedSet *)arg1 ;
-(double)maximumEntropy;
-(id)initWithAppLaunchCountedSet:(id)arg1 appLaunchesInMoments:(id)arg2 ;
-(void)addAppLaunch:(id)arg1 ;
-(void)addAppLaunchInMoment:(id)arg1 ;
-(void)setAppLaunchCountedSet:(id)arg1 ;
-(void)setAppLaunchInMomentCountedSet:(id)arg1 ;
-(void)removeAllEvents;
-(double)relevantScoreWithBundleId:(id)arg1 ;
-(void)setMaximumEntropy:(double)arg1 ;
@end

