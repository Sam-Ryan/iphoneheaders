/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:11 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <gamed/GKLeaderboardScoreRequest.h>

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest {

	NSRange _range;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)serverRequestWithService:(id)arg1 ;
-(void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(/*^block*/id)arg5 ;
-(void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)resourceIdentifier;
-(void)sanitizeRange;
-(id)bagKey;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

