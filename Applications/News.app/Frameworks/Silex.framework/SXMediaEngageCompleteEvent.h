/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString;

@interface SXMediaEngageCompleteEvent : SXAnalyticsEvent {

	unsigned long long _mediaType;
	NSString* _mediaId;
	double _mediaFrameRate;
	double _mediaDuration;
	double _mediaTimePlayed;

}

@property (assign,nonatomic) unsigned long long mediaType;              //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) NSString * mediaId;                        //@synthesize mediaId=_mediaId - In the implementation block
@property (assign,nonatomic) double mediaFrameRate;                     //@synthesize mediaFrameRate=_mediaFrameRate - In the implementation block
@property (assign,nonatomic) double mediaDuration;                      //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (assign,nonatomic) double mediaTimePlayed;                    //@synthesize mediaTimePlayed=_mediaTimePlayed - In the implementation block
-(void)setMediaId:(NSString *)arg1 ;
-(NSString *)mediaId;
-(void)setMediaTimePlayed:(double)arg1 ;
-(double)mediaTimePlayed;
-(double)mediaFrameRate;
-(void)setMediaFrameRate:(double)arg1 ;
-(double)mediaDuration;
-(void)setMediaDuration:(double)arg1 ;
-(unsigned long long)mediaType;
-(void)setMediaType:(unsigned long long)arg1 ;
@end

